/**
 * Burnout 3: Takedown - Criterion TXD Texture Loader
 *
 * Parses Criterion's custom TXD format and creates D3D8 textures.
 * See docs/asset-formats.md for full format specification.
 *
 * Only the container walk lives here; the pixels go through the shared
 * NV2A decoder (include/manx_xbox_texture.h). Global.txd and
 * Frontend.txd between them use three format codes — P8 (0x0B, Morton
 * swizzled), DXT1 (0x0C) and DXT5 (0x0F) — and unlike a track's
 * static.dat their DXT5 blocks are in the ordinary alpha-first BC3
 * order, so no colour-first option is passed here.
 */

#include "txd_loader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "manx_xbox_texture.h"

/* ── TXD file format constants ──────────────────────────────── */

#define TXD_MAGIC           0x543C0000
#define TXD_HEADER_SIZE     16
#define TXD_TOC_ENTRY_SIZE  16
#define TXD_TEX_HEADER_SIZE 128  /* 0x80 */

/* Padding between a paletted texture's index plane and its palette. */
#define TXD_PALETTE_PAD     64

/* ── Helpers ────────────────────────────────────────────────── */

/** Case-insensitive string compare (portable). */
static int str_icmp(const char *a, const char *b)
{
    while (*a && *b) {
        char ca = *a, cb = *b;
        if (ca >= 'A' && ca <= 'Z') ca += 32;
        if (cb >= 'A' && cb <= 'Z') cb += 32;
        if (ca != cb) return (int)ca - (int)cb;
        a++; b++;
    }
    return (int)(unsigned char)*a - (int)(unsigned char)*b;
}

/** Read a little-endian uint32 from a buffer. */
static uint32_t read_u32(const uint8_t *p)
{
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

/** Read a little-endian uint16 from a buffer. */
static uint16_t read_u16(const uint8_t *p)
{
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

/** Locate a paletted texture's palette within its entry.
 *
 *  A TXD entry holds w*h index bytes, then normally 64 bytes of padding,
 *  then BGRA palette entries. Some entries omit the padding and carry a
 *  compact 16-entry (64-byte) palette instead of a full 256-entry one,
 *  so try the padded offset first and fall back. Whatever is short the
 *  decoder leaves transparent black.
 *
 *  Returns 0 when there is no palette to be had. */
static int txd_find_palette(const uint8_t *entry_data, uint32_t data_avail,
                            uint32_t index_bytes,
                            const uint8_t **out_palette, size_t *out_size)
{
    uint32_t offset = index_bytes + TXD_PALETTE_PAD;
    uint32_t avail  = (data_avail > offset) ? data_avail - offset : 0;

    if (avail < 4) {
        offset = index_bytes;
        avail  = (data_avail > offset) ? data_avail - offset : 0;
        if (avail < 4) return 0;
    }

    *out_palette = entry_data + offset;
    *out_size    = avail > 1024 ? 1024 : avail;
    return 1;
}

/* ── Main loader ────────────────────────────────────────────── */

int txd_load(const char *path, IDirect3DDevice8 *device, TXD_Dict *out_dict)
{
    HANDLE hFile;
    DWORD file_size, bytes_read;
    uint8_t *data = NULL;
    int loaded = 0;

    memset(out_dict, 0, sizeof(*out_dict));

    /* Open file */
    hFile = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ,
                        NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "TXD: Cannot open '%s' (error %lu)\n", path, GetLastError());
        return -1;
    }

    file_size = GetFileSize(hFile, NULL);
    if (file_size == INVALID_FILE_SIZE || file_size < TXD_HEADER_SIZE + TXD_TOC_ENTRY_SIZE) {
        fprintf(stderr, "TXD: File too small: %lu bytes\n", file_size);
        CloseHandle(hFile);
        return -1;
    }

    /* Read entire file into memory */
    data = (uint8_t *)malloc(file_size);
    if (!data) {
        fprintf(stderr, "TXD: malloc(%lu) failed\n", file_size);
        CloseHandle(hFile);
        return -1;
    }

    if (!ReadFile(hFile, data, file_size, &bytes_read, NULL) || bytes_read != file_size) {
        fprintf(stderr, "TXD: ReadFile failed\n");
        free(data);
        CloseHandle(hFile);
        return -1;
    }
    CloseHandle(hFile);

    /* Validate header */
    uint32_t magic = read_u32(data + 0x00);
    if (magic != TXD_MAGIC) {
        fprintf(stderr, "TXD: Bad magic 0x%08X (expected 0x%08X)\n", magic, TXD_MAGIC);
        free(data);
        return -1;
    }

    fprintf(stderr, "TXD: Loading '%s' (%lu bytes)\n", path, file_size);

    /* Collect TOC entries (offsets to texture headers) */
    uint32_t toc_offsets[TXD_MAX_TEXTURES];
    int toc_count = 0;
    uint32_t toc_pos = TXD_HEADER_SIZE;

    while (toc_pos + TXD_TOC_ENTRY_SIZE <= file_size && toc_count < TXD_MAX_TEXTURES) {
        uint32_t idx = read_u32(data + toc_pos + 0x00);
        uint32_t offset = read_u32(data + toc_pos + 0x08);

        /* TOC terminator: index 0 or invalid */
        if (idx == 0 || idx > 10000) break;
        if (offset == 0 || offset >= file_size) break;

        toc_offsets[toc_count++] = offset;
        toc_pos += TXD_TOC_ENTRY_SIZE;
    }

    fprintf(stderr, "TXD: Found %d TOC entries\n", toc_count);

    /* Process each texture entry */
    int ti;
    for (ti = 0; ti < toc_count && loaded < TXD_MAX_TEXTURES; ti++) {
        uint32_t off = toc_offsets[ti];
        if (off + TXD_TEX_HEADER_SIZE > file_size) {
            fprintf(stderr, "  TXD: Entry %d offset 0x%X past EOF\n", ti, off);
            continue;
        }

        /* Parse texture header */
        uint32_t gpu_desc = read_u32(data + off + 0x0C);
        uint32_t fmt_explicit = read_u32(data + off + 0x34);
        uint32_t width = read_u32(data + off + 0x38);
        uint32_t height = read_u32(data + off + 0x3C);

        /* Extract name (24 bytes at +0x48) */
        char name[TXD_NAME_LEN];
        memset(name, 0, sizeof(name));
        memcpy(name, data + off + 0x48, TXD_NAME_LEN);
        name[TXD_NAME_LEN - 1] = '\0';
        /* Ensure null-terminated */
        {
            int ni;
            for (ni = 0; ni < TXD_NAME_LEN; ni++) {
                if (name[ni] == '\0') break;
            }
        }

        /* Determine format: prefer explicit field, fall back to gpu_desc byte 1 */
        uint32_t fmt_code = fmt_explicit;
        if (fmt_code == 0) {
            fmt_code = (gpu_desc >> 8) & 0xFF;
        }

        /* Skip zero-dimension textures */
        if (width == 0 || height == 0) {
            fprintf(stderr, "  TXD: [%d] '%s' - zero dimensions, skipping\n", ti, name);
            continue;
        }

        manx_xbox_texture_info info;
        if (!manx_xbox_texture_describe(fmt_code, &info)) {
            fprintf(stderr, "  TXD: [%d] '%s' %ux%u fmt=0x%02X - unsupported format\n",
                    ti, name, width, height, fmt_code);
            continue;
        }

        /* Calculate pixel data size */
        uint32_t data_size =
            (uint32_t)manx_xbox_texture_source_bytes(fmt_code, width, height);

        /* Determine how much data is available after the header */
        uint32_t data_offset = off + TXD_TEX_HEADER_SIZE;
        uint32_t data_avail;
        if (ti + 1 < toc_count) {
            data_avail = toc_offsets[ti + 1] - data_offset;
        } else {
            data_avail = file_size - data_offset;
        }

        if (data_avail < data_size) {
            fprintf(stderr, "  TXD: [%d] '%s' data truncated (need %u, have %u)\n",
                    ti, name, data_size, data_avail);
            continue;
        }

        /* A paletted entry carries its palette after the index plane. */
        const uint8_t *palette = NULL;
        size_t palette_size = 0;
        if (info.paletted &&
            !txd_find_palette(data + data_offset, data_avail, data_size,
                              &palette, &palette_size)) {
            fprintf(stderr, "  TXD: [%d] '%s' P8 entry has no palette\n", ti, name);
            continue;
        }

        manx_xbox_texture_source level = {0};
        level.format       = fmt_code;
        level.width        = width;
        level.height       = height;
        level.pixels       = data + data_offset;
        level.pixels_size  = data_size;
        level.palette      = palette;
        level.palette_size = palette_size;

        /* The D3D8 shim's D3DFORMAT values are the Xbox format codes, so
         * a block-compressed code passes straight through. Everything
         * else — P8 included — the decoder expands to BGRA, which the
         * shim calls A8R8G8B8. */
        D3DFORMAT d3d_fmt = info.block_compressed ? (D3DFORMAT)fmt_code
                                                  : D3DFMT_A8R8G8B8;
        uint32_t upload_size =
            (uint32_t)manx_xbox_texture_upload_bytes(fmt_code, width, height);

        /* Create D3D8 texture. Menu art is drawn at its authored size, so
         * only level 0 is uploaded even where the entry ships a chain. */
        IDirect3DTexture8 *tex = NULL;
        HRESULT hr = device->lpVtbl->CreateTexture(
            device, width, height, 1, 0, d3d_fmt, 0 /* D3DPOOL_DEFAULT */, &tex);

        if (FAILED(hr) || !tex) {
            fprintf(stderr, "  TXD: [%d] '%s' CreateTexture failed (hr=0x%08lX)\n",
                    ti, name, hr);
            continue;
        }

        /* Decode straight into the staging buffer */
        D3DLOCKED_RECT lr;
        hr = tex->lpVtbl->LockRect(tex, 0, &lr, NULL, 0);
        if (FAILED(hr)) {
            fprintf(stderr, "  TXD: [%d] '%s' LockRect failed\n", ti, name);
            tex->lpVtbl->Release(tex);
            continue;
        }
        if (!manx_xbox_texture_decode(&level, lr.pBits, upload_size)) {
            fprintf(stderr, "  TXD: [%d] '%s' %ux%u %s decode failed\n",
                    ti, name, width, height, info.name);
            tex->lpVtbl->UnlockRect(tex, 0);
            tex->lpVtbl->Release(tex);
            continue;
        }
        tex->lpVtbl->UnlockRect(tex, 0);

        /* Store in dictionary */
        TXD_Entry *entry = &out_dict->entries[loaded];
        strncpy(entry->name, name, TXD_NAME_LEN - 1);
        entry->name[TXD_NAME_LEN - 1] = '\0';
        entry->texture = tex;
        entry->width = width;
        entry->height = height;
        entry->format = fmt_code;
        loaded++;
    }

    free(data);
    out_dict->count = loaded;
    fprintf(stderr, "TXD: Loaded %d/%d textures from '%s'\n", loaded, toc_count, path);
    return loaded;
}

IDirect3DTexture8 *txd_find(const TXD_Dict *dict, const char *name)
{
    int i;
    for (i = 0; i < dict->count; i++) {
        if (str_icmp(dict->entries[i].name, name) == 0) {
            return dict->entries[i].texture;
        }
    }
    return NULL;
}

void txd_release(TXD_Dict *dict)
{
    int i;
    for (i = 0; i < dict->count; i++) {
        if (dict->entries[i].texture) {
            dict->entries[i].texture->lpVtbl->Release(dict->entries[i].texture);
            dict->entries[i].texture = NULL;
        }
    }
    dict->count = 0;
}
