/**
 * Burnout 3: Takedown - Criterion TXD Texture Loader
 *
 * Parses Criterion's custom TXD format and creates D3D8 textures.
 * See docs/asset-formats.md for full format specification.
 */

#include "txd_loader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ── TXD file format constants ──────────────────────────────── */

#define TXD_MAGIC           0x543C0000
#define TXD_HEADER_SIZE     16
#define TXD_TOC_ENTRY_SIZE  16
#define TXD_TEX_HEADER_SIZE 128  /* 0x80 */

/* Xbox NV2A D3DFORMAT codes used in TXD files */
#define XBOX_FMT_L8         0x00
#define XBOX_FMT_A1R5G5B5   0x02
#define XBOX_FMT_A4R4G4B4   0x04
#define XBOX_FMT_R5G6B5     0x05
#define XBOX_FMT_A8R8G8B8   0x06
#define XBOX_FMT_X8R8G8B8   0x07
#define XBOX_FMT_P8         0x0B
#define XBOX_FMT_DXT1       0x0C
#define XBOX_FMT_DXT3       0x0E
#define XBOX_FMT_DXT5       0x0F
#define XBOX_FMT_LIN_A8R8G8B8 0x12
#define XBOX_FMT_LIN_X8R8G8B8 0x1E

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

/** Map Xbox NV2A format code to D3D8 D3DFORMAT enum. */
static D3DFORMAT xbox_fmt_to_d3d(uint32_t xbox_fmt)
{
    switch (xbox_fmt) {
    case XBOX_FMT_DXT1:       return D3DFMT_DXT1;
    case XBOX_FMT_DXT3:       return D3DFMT_DXT3;
    case XBOX_FMT_DXT5:       return D3DFMT_DXT5;
    case XBOX_FMT_A8R8G8B8:   return D3DFMT_A8R8G8B8;
    case XBOX_FMT_X8R8G8B8:   return D3DFMT_X8R8G8B8;
    case XBOX_FMT_R5G6B5:     return D3DFMT_R5G6B5;
    case XBOX_FMT_A1R5G5B5:   return D3DFMT_A1R5G5B5;
    case XBOX_FMT_A4R4G4B4:   return D3DFMT_A4R4G4B4;
    case XBOX_FMT_L8:         return D3DFMT_L8;
    case XBOX_FMT_P8:         return D3DFMT_P8;
    case XBOX_FMT_LIN_A8R8G8B8: return D3DFMT_LIN_A8R8G8B8;
    case XBOX_FMT_LIN_X8R8G8B8: return D3DFMT_LIN_X8R8G8B8;
    default:                   return D3DFMT_UNKNOWN;
    }
}

/** Calculate texture data size in bytes for a single mip level. */
static uint32_t calc_texture_size(uint32_t width, uint32_t height, uint32_t xbox_fmt)
{
    switch (xbox_fmt) {
    case XBOX_FMT_DXT1: {
        uint32_t bw = (width + 3) / 4;
        uint32_t bh = (height + 3) / 4;
        return bw * bh * 8;
    }
    case XBOX_FMT_DXT3:
    case XBOX_FMT_DXT5: {
        uint32_t bw = (width + 3) / 4;
        uint32_t bh = (height + 3) / 4;
        return bw * bh * 16;
    }
    case XBOX_FMT_A8R8G8B8:
    case XBOX_FMT_X8R8G8B8:
    case XBOX_FMT_LIN_A8R8G8B8:
    case XBOX_FMT_LIN_X8R8G8B8:
        return width * height * 4;
    case XBOX_FMT_R5G6B5:
    case XBOX_FMT_A1R5G5B5:
    case XBOX_FMT_A4R4G4B4:
        return width * height * 2;
    case XBOX_FMT_L8:
    case XBOX_FMT_P8:
        return width * height;
    default:
        return 0;
    }
}

/** Xbox NV2A texture unswizzle.
 *  For square textures, this is pure Morton (Z-order) decoding.
 *  For non-square textures (e.g. 256x64), the NV2A interleaves bits
 *  up to the smaller dimension, then appends the remaining bits of
 *  the larger dimension sequentially. */
static void nv2a_unswizzle_coords(uint32_t index, uint32_t width, uint32_t height,
                                   uint32_t *out_x, uint32_t *out_y)
{
    /* Count bits needed for each dimension */
    uint32_t xbits = 0, ybits = 0;
    { uint32_t w = width;  while (w > 1) { xbits++; w >>= 1; } }
    { uint32_t h = height; while (h > 1) { ybits++; h >>= 1; } }

    uint32_t xi = 0, yi = 0;
    uint32_t min_bits = xbits < ybits ? xbits : ybits;
    uint32_t bit = 0, src_bit = 0;

    /* Interleaved region: alternate x,y bits up to the smaller dimension */
    for (bit = 0; bit < min_bits; bit++) {
        xi |= ((index >> src_bit) & 1) << bit; src_bit++;
        yi |= ((index >> src_bit) & 1) << bit; src_bit++;
    }

    /* Remaining bits go to the larger dimension */
    if (xbits > ybits) {
        for (; bit < xbits; bit++) {
            xi |= ((index >> src_bit) & 1) << bit; src_bit++;
        }
    } else if (ybits > xbits) {
        for (; bit < ybits; bit++) {
            yi |= ((index >> src_bit) & 1) << bit; src_bit++;
        }
    }

    *out_x = xi;
    *out_y = yi;
}

/** Generic unswizzle for any bytes-per-pixel.
 *  Works for 8-bit, 16-bit, and 32-bit textures. */
static void unswizzle_generic(const uint8_t *src, uint8_t *dst,
                               uint32_t width, uint32_t height, uint32_t bpp)
{
    uint32_t total = width * height;
    uint32_t i;
    for (i = 0; i < total; i++) {
        uint32_t x, y;
        nv2a_unswizzle_coords(i, width, height, &x, &y);
        if (x < width && y < height) {
            memcpy(dst + (y * width + x) * bpp, src + i * bpp, bpp);
        }
    }
}

/** Convert P8 (palettized) texture to A8R8G8B8.
 *  P8 layout: w*h index bytes, 64 bytes padding, 1024 bytes BGRA palette. */
static uint8_t *convert_p8_to_argb(const uint8_t *tex_data, uint32_t data_avail,
                                    uint32_t width, uint32_t height)
{
    uint32_t idx_size = width * height;
    uint32_t palette_offset = idx_size + 64;
    uint32_t needed = palette_offset + 1024;

    if (data_avail < needed) {
        fprintf(stderr, "  TXD: P8 data too small (need %u, have %u)\n", needed, data_avail);
        return NULL;
    }

    /* Unswizzle index data */
    uint8_t *unswizzled = (uint8_t *)malloc(idx_size);
    if (!unswizzled) return NULL;
    unswizzle_generic(tex_data, unswizzled, width, height, 1);

    /* Palette is 256 BGRA entries */
    const uint8_t *palette = tex_data + palette_offset;

    /* Convert to A8R8G8B8 */
    uint8_t *argb = (uint8_t *)malloc(width * height * 4);
    if (!argb) { free(unswizzled); return NULL; }

    uint32_t i;
    for (i = 0; i < idx_size; i++) {
        uint8_t idx = unswizzled[i];
        const uint8_t *pe = palette + idx * 4;
        /* Palette is BGRA, D3D8 A8R8G8B8 is also BGRA in memory */
        argb[i * 4 + 0] = pe[0]; /* B */
        argb[i * 4 + 1] = pe[1]; /* G */
        argb[i * 4 + 2] = pe[2]; /* R */
        argb[i * 4 + 3] = pe[3]; /* A */
    }

    free(unswizzled);
    return argb;
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

        /* Calculate pixel data size */
        uint32_t data_size = calc_texture_size(width, height, fmt_code);
        if (data_size == 0) {
            fprintf(stderr, "  TXD: [%d] '%s' %ux%u fmt=0x%02X - unsupported format\n",
                    ti, name, width, height, fmt_code);
            continue;
        }

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

        /* Map to D3D8 format */
        D3DFORMAT d3d_fmt = xbox_fmt_to_d3d(fmt_code);
        const uint8_t *pixel_data = data + data_offset;
        uint8_t *converted = NULL;  /* for P8 conversion */
        uint32_t upload_size = data_size;

        /* Handle P8: convert to A8R8G8B8 since D3D11 doesn't support palettized */
        if (fmt_code == XBOX_FMT_P8) {
            converted = convert_p8_to_argb(pixel_data, data_avail, width, height);
            if (!converted) {
                fprintf(stderr, "  TXD: [%d] '%s' P8 conversion failed\n", ti, name);
                continue;
            }
            pixel_data = converted;
            d3d_fmt = D3DFMT_A8R8G8B8;
            upload_size = width * height * 4;
        }

        /* Unswizzle non-DXT, non-linear, non-P8 textures (Morton/Z-order → linear) */
        if (!converted && fmt_code != XBOX_FMT_DXT1 && fmt_code != XBOX_FMT_DXT3 &&
            fmt_code != XBOX_FMT_DXT5 && fmt_code != XBOX_FMT_LIN_A8R8G8B8 &&
            fmt_code != XBOX_FMT_LIN_X8R8G8B8 && fmt_code != XBOX_FMT_P8) {
            uint32_t bpp = 0;
            if (fmt_code == XBOX_FMT_A1R5G5B5 || fmt_code == XBOX_FMT_R5G6B5 ||
                fmt_code == XBOX_FMT_A4R4G4B4)
                bpp = 2;
            else if (fmt_code == XBOX_FMT_A8R8G8B8 || fmt_code == XBOX_FMT_X8R8G8B8)
                bpp = 4;
            else if (fmt_code == XBOX_FMT_L8)
                bpp = 1;

            if (bpp > 0) {
                converted = (uint8_t *)malloc(upload_size);
                if (converted) {
                    unswizzle_generic(pixel_data, converted, width, height, bpp);
                    pixel_data = converted;
                }
            }
        }

        if (d3d_fmt == D3DFMT_UNKNOWN) {
            fprintf(stderr, "  TXD: [%d] '%s' %ux%u fmt=0x%02X - no D3D mapping\n",
                    ti, name, width, height, fmt_code);
            if (converted) free(converted);
            continue;
        }

        /* Create D3D8 texture */
        IDirect3DTexture8 *tex = NULL;
        HRESULT hr = device->lpVtbl->CreateTexture(
            device, width, height, 1, 0, d3d_fmt, 0 /* D3DPOOL_DEFAULT */, &tex);

        if (FAILED(hr) || !tex) {
            fprintf(stderr, "  TXD: [%d] '%s' CreateTexture failed (hr=0x%08lX)\n",
                    ti, name, hr);
            if (converted) free(converted);
            continue;
        }

        /* Upload pixel data */
        D3DLOCKED_RECT lr;
        hr = tex->lpVtbl->LockRect(tex, 0, &lr, NULL, 0);
        if (SUCCEEDED(hr)) {
            memcpy(lr.pBits, pixel_data, upload_size);
            tex->lpVtbl->UnlockRect(tex, 0);
        } else {
            fprintf(stderr, "  TXD: [%d] '%s' LockRect failed\n", ti, name);
            tex->lpVtbl->Release(tex);
            if (converted) free(converted);
            continue;
        }

        if (converted) free(converted);

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
