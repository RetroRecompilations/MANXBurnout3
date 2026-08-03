#ifndef STATIC_TEXTURES_H
#define STATIC_TEXTURES_H

#include <stdint.h>
#include "../d3d/d3d8_xbox.h"

/* The biggest shipped track (EU/P1) holds 468 textures and 463 materials. */
#define STEX_MAX_TEXTURES 512
#define STEX_MAX_MATERIALS 512
#define STEX_NAME_LEN 32

typedef struct {
    char name[STEX_NAME_LEN];
    IDirect3DTexture8 *texture;
    uint32_t width, height;
    uint32_t xbox_fmt;
    uint32_t pixel_offset;  /* offset of the texture record in static.dat */
    uint32_t pixel_size;    /* base mip pixel data size in bytes */
} StaticTexEntry;

typedef struct {
    /* One slot per texture record, in file order. Slots stay aligned with
     * the file even when a record fails to upload (texture == NULL). */
    StaticTexEntry entries[STEX_MAX_TEXTURES];
    int count;

    /* Materials are what the track geometry actually references; each one
     * names its own texture. mat_tex[m] is an index into entries[], or -1
     * for a material with no texture. */
    int16_t mat_tex[STEX_MAX_MATERIALS];
    int mat_count;
} StaticTexDict;

int static_tex_load(const char *static_dat_path, IDirect3DDevice8 *device, StaticTexDict *out);
IDirect3DTexture8 *static_tex_find(const StaticTexDict *dict, const char *name);

/* Resolve a per-object texture id from streamed.dat (a material index). */
IDirect3DTexture8 *static_tex_for_material(const StaticTexDict *dict, unsigned mat_id);

void static_tex_release(StaticTexDict *dict);

#endif
