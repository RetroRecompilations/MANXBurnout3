/**
 * Burnout 3 - static.dat texture loader
 *
 * Extracts DXT1/DXT5 textures embedded in track static.dat files.
 * Format: each texture has a 24-byte header + 32-byte name + pixel data (DXT + mipmaps).
 * Header layout (relative to name offset):
 *   name - 20: uint32 xbox_format (0x0C=DXT1, 0x0F=DXT5)
 *   name - 16: uint32 width
 *   name - 12: uint32 height
 *   name -  8: uint32 name_field_size (always 0x20)
 *   name -  4: float  lod_bias
 *   name +  0: char[32] null-terminated name
 *   name + 32: pixel data (base mip + mipmaps)
 */

#include "static_textures.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_valid_name_char(uint8_t c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9') || c == '_';
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

    uint8_t *data = (uint8_t *)malloc((size_t)file_size);
    if (!data) { fclose(f); return -1; }
    fread(data, 1, (size_t)file_size, f);
    fclose(f);

    /* Scan for texture entries by looking for valid name strings preceded
     * by a valid header (format code + dimensions). */
    int count = 0;
    for (long off = 0x100; off < file_size - 56 && count < STEX_MAX_TEXTURES; off++) {
        /* Check for a null-terminated name of 4+ printable chars */
        if (!is_valid_name_char(data[off])) continue;

        int name_len = 0;
        while (off + name_len < file_size && is_valid_name_char(data[off + name_len]))
            name_len++;
        if (name_len < 4 || name_len > 30) continue;
        if (off + name_len >= file_size || data[off + name_len] != 0) continue;

        /* Must have underscore (texture naming convention) or known prefix */
        int has_underscore = 0;
        for (int i = 0; i < name_len; i++)
            if (data[off + i] == '_') { has_underscore = 1; break; }
        if (!has_underscore) continue;

        /* Check header before name */
        if (off < 24) continue;
        uint32_t fmt, w, h, name_sz;
        memcpy(&fmt,     data + off - 20, 4);
        memcpy(&w,       data + off - 16, 4);
        memcpy(&h,       data + off - 12, 4);
        memcpy(&name_sz, data + off - 8,  4);

        if (name_sz != 0x20) continue;
        if (fmt != 0x0C && fmt != 0x0E && fmt != 0x0F) continue;
        if (w < 8 || w > 2048 || h < 8 || h > 2048) continue;
        if ((w & (w - 1)) != 0 || (h & (h - 1)) != 0) continue; /* power of 2 */

        /* Valid texture entry */
        uint32_t pixel_off = (uint32_t)(off + 32);
        uint32_t base_size;
        D3DFORMAT d3d_fmt;

        if (fmt == 0x0C) { /* DXT1 */
            base_size = (w / 4) * (h / 4) * 8;
            d3d_fmt = D3DFMT_DXT1;
        } else { /* DXT3/DXT5 */
            base_size = (w / 4) * (h / 4) * 16;
            d3d_fmt = (fmt == 0x0E) ? D3DFMT_DXT3 : D3DFMT_DXT5;
        }

        if (pixel_off + base_size > (uint32_t)file_size) continue;

        /* Create D3D texture */
        IDirect3DTexture8 *tex = NULL;
        HRESULT hr = device->lpVtbl->CreateTexture(
            device, w, h, 1, 0, d3d_fmt, 0, &tex);
        if (FAILED(hr) || !tex) continue;

        D3DLOCKED_RECT lr;
        hr = tex->lpVtbl->LockRect(tex, 0, &lr, NULL, 0);
        if (SUCCEEDED(hr)) {
            memcpy(lr.pBits, data + pixel_off, base_size);
            tex->lpVtbl->UnlockRect(tex, 0);
        } else {
            tex->lpVtbl->Release(tex);
            continue;
        }

        StaticTexEntry *e = &out->entries[count];
        memset(e->name, 0, STEX_NAME_LEN);
        memcpy(e->name, data + off, name_len < STEX_NAME_LEN ? name_len : STEX_NAME_LEN - 1);
        e->texture = tex;
        e->width = w;
        e->height = h;
        e->xbox_fmt = fmt;
        e->pixel_offset = pixel_off;
        e->pixel_size = base_size;
        count++;

        /* Skip past this entry */
        off += 32 + base_size - 1; /* -1 because loop increments */
    }

    out->count = count;
    free(data);

    fprintf(stderr, "[STEX] Loaded %d textures from %s\n", count, path);
    for (int i = 0; i < count && i < 10; i++) {
        fprintf(stderr, "[STEX]   [%d] %s (%dx%d fmt=0x%X)\n",
                i, out->entries[i].name, out->entries[i].width, out->entries[i].height,
                out->entries[i].xbox_fmt);
    }

    return count;
}

IDirect3DTexture8 *static_tex_find(const StaticTexDict *dict, const char *name)
{
    for (int i = 0; i < dict->count; i++) {
        if (_stricmp(dict->entries[i].name, name) == 0)
            return dict->entries[i].texture;
    }
    return NULL;
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
}
