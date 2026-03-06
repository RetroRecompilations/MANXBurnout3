#ifndef STATIC_TEXTURES_H
#define STATIC_TEXTURES_H

#include <stdint.h>
#include "../d3d/d3d8_xbox.h"

#define STEX_MAX_TEXTURES 256
#define STEX_NAME_LEN 32

typedef struct {
    char name[STEX_NAME_LEN];
    IDirect3DTexture8 *texture;
    uint32_t width, height;
    uint32_t xbox_fmt;
    uint32_t pixel_offset;  /* offset of pixel data in static.dat */
    uint32_t pixel_size;    /* base mip pixel data size in bytes */
} StaticTexEntry;

typedef struct {
    StaticTexEntry entries[STEX_MAX_TEXTURES];
    int count;
} StaticTexDict;

int static_tex_load(const char *static_dat_path, IDirect3DDevice8 *device, StaticTexDict *out);
IDirect3DTexture8 *static_tex_find(const StaticTexDict *dict, const char *name);
void static_tex_release(StaticTexDict *dict);

#endif
