/**
 * Burnout 3 - static.dat texture and material loader
 *
 * static.dat is a memory image: the retail loader reads the whole file into
 * one allocation and then walks a fixed set of header fields turning
 * self-relative offsets into pointers. sub_0019B4E0 in the XBE is that fixup
 * pass, and it is where this layout comes from (edi = image base):
 *
 *   [edi+0x08] += edi                 material array
 *   (int16)[edi+0x0C]                 material count
 *   [edi+0x10] += edi                 animated-material list
 *   (int16)[edi+0x0E]                 its length
 *   (int16)[edi+0x16]                 texture count
 *   [edi+0x18] += edi                 texture pointer array; each u32 in it
 *                                     is self-relative to the image base
 *
 * and per 0x28-byte material m:
 *
 *   [m+0x0C] += m                     its own texture pointer array
 *   (int8)[m+0x11]                    how many entries that array holds
 *   for c in 0..count: [[m+0x0C] + c*4] += m
 *
 * Each texture record holds an Xbox texture descriptor (mip count in bits
 * 16..19 at +0x0C), the classic header at +0x34 (format, width, height,
 * name-field size 0x20, LOD bias), a 32-byte name at +0x48 and the pixel
 * data (base mip followed by the chain) at +0x68.
 *
 * Only the container walk lives here; the pixels go through the shared
 * NV2A decoder (include/manx_xbox_texture.h).
 */

#include "static_textures.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "manx_xbox_texture.h"

/* static.dat stores the two halves of a 16-byte DXT5 block colour-first,
 * the opposite way round from BC3, so every block comes out transposed
 * and the surfaces using one render as multicoloured noise — most of the
 * road and building set (120 of 197 textures on US/C1_V1, 5188 of 9240
 * across all 37 shipped tracks). Verified by decoding both layouts
 * offline and scoring neighbour continuity: colour-first averages 16
 * against 48 the other way round, and the same measurement run over
 * Global.txd and Frontend.txd says the opposite (9 as-is against 45
 * swapped), so this belongs to the container, not to the title.
 * docs/xbox_textures.md has the per-file figures. */
#define STEX_DECODE_OPTIONS MANX_XBOX_TEXTURE_DXT_COLOUR_FIRST

/* Header field offsets, from the fixup pass described above. */
#define STEX_HDR_MAT_OFF   0x08
#define STEX_HDR_MAT_CNT   0x0C
#define STEX_HDR_TEX_CNT   0x16
#define STEX_HDR_TEX_OFF   0x18

/* Material record. */
#define STEX_MAT_STRIDE    0x28
#define STEX_MAT_TEXLIST   0x0C   /* self-relative offset to its texture list */
#define STEX_MAT_FRAME     0x10   /* uint8, current frame for animated sets */
#define STEX_MAT_TEXCOUNT  0x11   /* uint8 */

/* Texture record. */
#define STEX_TEX_DESC      0x0C
#define STEX_TEX_FORMAT    0x34
#define STEX_TEX_WIDTH     0x38
#define STEX_TEX_HEIGHT    0x3C
#define STEX_TEX_NAMESZ    0x40
#define STEX_TEX_NAME      0x48
#define STEX_TEX_PIXELS    0x68

static uint32_t rd_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static int32_t  rd_s32(const uint8_t *p) { int32_t  v; memcpy(&v, p, 4); return v; }
static uint16_t rd_u16(const uint8_t *p) { uint16_t v; memcpy(&v, p, 2); return v; }

static int is_valid_name_char(uint8_t c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9') || c == '_';
}

/* Build one texture slot from a record. Returns 1 if a GPU texture was made.
 * The slot is filled in either way so that slot index == file order. */
static int stex_build_entry(const uint8_t *data, long file_size, uint32_t rec,
                            IDirect3DDevice8 *device, StaticTexEntry *e)
{
    memset(e, 0, sizeof(*e));
    e->pixel_offset = rec;

    if ((long)rec + STEX_TEX_PIXELS > file_size) return 0;

    uint32_t fmt     = rd_u32(data + rec + STEX_TEX_FORMAT);
    uint32_t w       = rd_u32(data + rec + STEX_TEX_WIDTH);
    uint32_t h       = rd_u32(data + rec + STEX_TEX_HEIGHT);
    uint32_t name_sz = rd_u32(data + rec + STEX_TEX_NAMESZ);

    {
        const char *nm = (const char *)(data + rec + STEX_TEX_NAME);
        int nl = 0;
        while (nl < STEX_NAME_LEN - 1 && nl < 32 &&
               is_valid_name_char((uint8_t)nm[nl])) nl++;
        memcpy(e->name, nm, (size_t)nl);
    }
    e->width = w;
    e->height = h;
    e->xbox_fmt = fmt;

    if (name_sz != 0x20) return 0;
    /* Shipped tracks only ever hold DXT1 and DXT5 (9240 records over all 37
     * static.dat files, no third format), so anything else is a misread. */
    if (!manx_xbox_texture_is_block_compressed(fmt)) return 0;
    if (w < 4 || w > 2048 || h < 4 || h > 2048) return 0;
    if ((w & (w - 1)) != 0 || (h & (h - 1)) != 0) return 0;   /* power of 2 */

    uint32_t pixel_off = rec + STEX_TEX_PIXELS;
    uint32_t base_size = (uint32_t)manx_xbox_texture_source_bytes(fmt, w, h);
    if (base_size == 0) return 0;
    if (pixel_off + base_size > (uint32_t)file_size) return 0;
    e->pixel_size = base_size;

    /* Most textures ship a full mip chain right after the base level (it is
     * why a record occupies ~4/3 of its base size), and uploading only level
     * 0 left minified surfaces aliasing into multicoloured speckle. But the
     * count is NOT always the full chain — 8 of 197 on US/C1_V1 ship a single
     * level — so take it from the descriptor (bits 16..19 at +0x0C). */
    uint32_t desc = rd_u32(data + rec + STEX_TEX_DESC);
    uint32_t levels = manx_xbox_texture_descriptor_levels(desc, w, h);
    if (pixel_off + manx_xbox_texture_source_chain_bytes(fmt, w, h, levels)
            > (uint32_t)file_size)
        levels = 1;  /* base only */

    /* The D3D8 shim's D3DFORMAT values are the Xbox format codes, so a
     * block-compressed code passes straight through. */
    IDirect3DTexture8 *tex = NULL;
    HRESULT hr = device->lpVtbl->CreateTexture(
        device, w, h, levels, 0, (D3DFORMAT)fmt, 0, &tex);
    if (FAILED(hr) || !tex) return 0;

    uint32_t src = pixel_off;
    for (uint32_t l = 0; l < levels; l++) {
        manx_xbox_texture_source lvl = {0};
        lvl.format      = fmt;
        lvl.width       = manx_xbox_texture_level_dim(w, l);
        lvl.height      = manx_xbox_texture_level_dim(h, l);
        lvl.options     = STEX_DECODE_OPTIONS;
        lvl.pixels      = data + src;
        lvl.pixels_size = manx_xbox_texture_source_bytes(
            fmt, lvl.width, lvl.height);

        D3DLOCKED_RECT lr;
        if (FAILED(tex->lpVtbl->LockRect(tex, l, &lr, NULL, 0))) {
            tex->lpVtbl->Release(tex);
            return 0;
        }
        if (!manx_xbox_texture_decode(&lvl, lr.pBits,
                manx_xbox_texture_upload_bytes(fmt, lvl.width, lvl.height))) {
            tex->lpVtbl->UnlockRect(tex, l);
            tex->lpVtbl->Release(tex);
            return 0;
        }
        tex->lpVtbl->UnlockRect(tex, l);
        src += (uint32_t)lvl.pixels_size;
    }

    e->texture = tex;
    return 1;
}

int static_tex_load(const char *path, IDirect3DDevice8 *device, StaticTexDict *out)
{
    memset(out, 0, sizeof(*out));

    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "[STEX] Cannot open: %s\n", path);
        return -1;
    }
    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (file_size < 0x60) { fclose(f); return -1; }

    uint8_t *data = (uint8_t *)malloc((size_t)file_size);
    if (!data) { fclose(f); return -1; }
    if (fread(data, 1, (size_t)file_size, f) != (size_t)file_size) {
        free(data); fclose(f); return -1;
    }
    fclose(f);

    /* --- textures ------------------------------------------------------ */
    uint32_t tex_off = rd_u32(data + STEX_HDR_TEX_OFF);
    int tex_count    = (int)rd_u16(data + STEX_HDR_TEX_CNT);
    if (tex_count > STEX_MAX_TEXTURES) tex_count = STEX_MAX_TEXTURES;
    if (tex_off == 0 || (long)tex_off + (long)tex_count * 4 > file_size)
        tex_count = 0;

    int built = 0;
    for (int i = 0; i < tex_count; i++) {
        /* Each slot is self-relative to the image base, which is 0 on disk. */
        int32_t rel = rd_s32(data + tex_off + (uint32_t)i * 4);
        StaticTexEntry *e = &out->entries[i];
        if (rel <= 0 || (long)rel >= file_size) { memset(e, 0, sizeof(*e)); continue; }
        built += stex_build_entry(data, file_size, (uint32_t)rel, device, e);
    }
    out->count = tex_count;

    /* --- materials ----------------------------------------------------- */
    /* The per-object ids in streamed.dat index this array, not the texture
     * array. The two only line up for the first few entries: as soon as one
     * material owns an animated set (Chgo_Flag has 10 frames on US/C1_V1,
     * water has 17) the numbering diverges, which is why the flag frames
     * used to end up stretched over the road and the building faces. */
    uint32_t mat_off = rd_u32(data + STEX_HDR_MAT_OFF);
    int mat_count    = (int)rd_u16(data + STEX_HDR_MAT_CNT);
    if (mat_count > STEX_MAX_MATERIALS) mat_count = STEX_MAX_MATERIALS;
    if (mat_off == 0 ||
        (long)mat_off + (long)mat_count * STEX_MAT_STRIDE > file_size)
        mat_count = 0;

    int resolved = 0, untextured = 0;
    for (int m = 0; m < mat_count; m++) {
        out->mat_tex[m] = -1;

        uint32_t rec = mat_off + (uint32_t)m * STEX_MAT_STRIDE;
        int32_t list_rel = rd_s32(data + rec + STEX_MAT_TEXLIST);
        uint32_t n       = data[rec + STEX_MAT_TEXCOUNT];
        if (list_rel == 0 || n == 0) { untextured++; continue; }

        long list = (long)rec + list_rel;
        if (list < 0 || list + 4 > file_size) continue;

        /* Frame 0 of the set. The retail renderer binds
         * material->textures[material->frame] (0x000399FF..0x00039A0F, which
         * writes the stage-0 texture); frame is 0 for everything except the
         * few animated materials the loader resets at load time. */
        uint32_t frame = data[rec + STEX_MAT_FRAME];
        if (frame >= n) frame = 0;
        if (list + (long)frame * 4 + 4 > file_size) frame = 0;

        long slot = (long)rec + rd_s32(data + list + (long)frame * 4);
        if (slot < 0 || slot >= file_size) continue;

        for (int i = 0; i < tex_count; i++) {
            if (out->entries[i].pixel_offset == (uint32_t)slot) {
                out->mat_tex[m] = (int16_t)i;
                resolved++;
                break;
            }
        }
    }
    out->mat_count = mat_count;

    free(data);

    fprintf(stderr,
            "[STEX] %s: %d textures (%d uploaded), %d materials "
            "(%d resolved, %d untextured)\n",
            path, tex_count, built, mat_count, resolved, untextured);
    for (int m = 0; m < mat_count && m < 8; m++) {
        int t = out->mat_tex[m];
        fprintf(stderr, "[STEX]   mat[%d] -> tex[%d] %s\n", m, t,
                (t >= 0) ? out->entries[t].name : "(none)");
    }

    return tex_count;
}

IDirect3DTexture8 *static_tex_find(const StaticTexDict *dict, const char *name)
{
    for (int i = 0; i < dict->count; i++) {
        if (_stricmp(dict->entries[i].name, name) == 0)
            return dict->entries[i].texture;
    }
    return NULL;
}

IDirect3DTexture8 *static_tex_for_material(const StaticTexDict *dict, unsigned mat_id)
{
    if ((int)mat_id >= dict->mat_count) return NULL;
    int t = dict->mat_tex[mat_id];
    if (t < 0 || t >= dict->count) return NULL;
    return dict->entries[t].texture;
}

void static_tex_release(StaticTexDict *dict)
{
    for (int i = 0; i < dict->count; i++) {
        if (dict->entries[i].texture) {
            dict->entries[i].texture->lpVtbl->Release(dict->entries[i].texture);
            dict->entries[i].texture = NULL;
        }
    }
    dict->count = 0;
    dict->mat_count = 0;
}
