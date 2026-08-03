/**
 * Burnout 3: Takedown - RenderWare 3D Renderer
 *
 * True 3D rendering engine using the D3D8->D3D11 compatibility layer.
 * Renders player car, traffic, road, sky, and ground in world space
 * with a chase camera behind the player car.
 *
 * Toggle with V key during gameplay. Coexists with pseudo-3D renderer.
 */

#include "rw_renderer.h"
#include "rw_math.h"
#include "bgv_loader.h"
#include "track_loader.h"
#include "static_textures.h"
#include "../d3d/d3d8_xbox.h"
#include "../kernel/xbox_memory_layout.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* ── Physics memory layout ───────────────────────────────────── */
#define PHYS_BODY       0x5FFF00
#define PHYS_ACCEL      (PHYS_BODY + 0x08)
#define PHYS_TURN       (PHYS_BODY + 0x0C)
#define PHYS_PX         (PHYS_BODY + 0x10)
#define PHYS_PY         (PHYS_BODY + 0x14)
#define PHYS_HDG        (PHYS_BODY + 0x18)
#define PHYS_SPD        (PHYS_BODY + 0x1C)

#define OBS_BASE        0x5FFE00
#define OBS_COUNT       12
#define OBS_SIZE        16
#define OBS_ADDR(i, off) (OBS_BASE + (i) * OBS_SIZE + (off))

#define ROAD_CURVE_ADDR 0x5FFD10
#define BOOST_METER     0x5FFD08
#define SCORE_ADDR      0x5FFD24
#define MULTIPLIER_ADDR 0x5FFD28
#define DIST_ADDR       0x5FFD14

/* Memory access helpers */
extern ptrdiff_t g_xbox_mem_offset;
#define RW_MEMF(a)  (*(volatile float*)((uintptr_t)(a) + g_xbox_mem_offset))
#define RW_MEM32(a) (*(volatile uint32_t*)((uintptr_t)(a) + g_xbox_mem_offset))

/* ── Time-of-day color lerp ──────────────────────────────────── */

#define LERP_COL(a, b, t) ( \
    (((DWORD)(((float)(((a)>>24)&0xFF))*(1.0f-(t)) + ((float)(((b)>>24)&0xFF))*(t))) << 24) | \
    (((DWORD)(((float)(((a)>>16)&0xFF))*(1.0f-(t)) + ((float)(((b)>>16)&0xFF))*(t))) << 16) | \
    (((DWORD)(((float)(((a)>>8)&0xFF))*(1.0f-(t)) + ((float)(((b)>>8)&0xFF))*(t))) << 8) | \
    (((DWORD)(((float)((a)&0xFF))*(1.0f-(t)) + ((float)((b)&0xFF))*(t)))) )

/* Time-of-day state (computed once per frame) */
typedef struct {
    float cycle;        /* 0-1, based on player forward distance / 3000 */
    float night;        /* 0-1, how dark is night (0 = day, 1 = full night) */
    DWORD sky_top;
    DWORD sky_bot;
    DWORD grass;
    DWORD mountain;
    DWORD road_a;
    DWORD road_b;
} TOD_State;

static TOD_State g_tod;

/* Exported spawn state for physics initialization (recomp_manual.c reads these) */
float g_track_spawn_x = 0.0f;
float g_track_spawn_y = 0.0f;
float g_track_spawn_z = 0.0f;
float g_track_spawn_hdg = 0.0f;
/* The streamed.dat's own spawn field, exposed for spawn diagnosis. */
float g_track_authored_spawn[3];

/* Triangle-filter accounting, reported once per track load. */
int   g_track_mode = 0;  /* 1 = driving on real track geometry */

static void tod_update(float py)
{
    float cycle = fmodf(py / 3000.0f, 1.0f);
    if (cycle < 0.0f) cycle += 1.0f;
    g_tod.cycle = cycle;

    DWORD sky_top, sky_bot, grass, mtn;

    if (cycle < 0.25f) {
        /* Dawn → Day */
        float t = cycle / 0.25f;
        sky_top = LERP_COL(0xFF2A1040, 0xFF1020A0, t);
        sky_bot = LERP_COL(0xFFDD6633, 0xFF6090D0, t);
        grass   = LERP_COL(0xFF1A2810, 0xFF1A3318, t);
        mtn     = LERP_COL(0xFF3A2040, 0xFF304060, t);
    } else if (cycle < 0.50f) {
        /* Day → Sunset */
        float t = (cycle - 0.25f) / 0.25f;
        sky_top = LERP_COL(0xFF1020A0, 0xFF602080, t);
        sky_bot = LERP_COL(0xFF6090D0, 0xFFFF6622, t);
        grass   = LERP_COL(0xFF1A3318, 0xFF2A2810, t);
        mtn     = LERP_COL(0xFF304060, 0xFF503040, t);
    } else if (cycle < 0.75f) {
        /* Sunset → Night */
        float t = (cycle - 0.50f) / 0.25f;
        sky_top = LERP_COL(0xFF602080, 0xFF080818, t);
        sky_bot = LERP_COL(0xFFFF6622, 0xFF101830, t);
        grass   = LERP_COL(0xFF2A2810, 0xFF0A1508, t);
        mtn     = LERP_COL(0xFF503040, 0xFF101828, t);
    } else {
        /* Night → Dawn */
        float t = (cycle - 0.75f) / 0.25f;
        sky_top = LERP_COL(0xFF080818, 0xFF2A1040, t);
        sky_bot = LERP_COL(0xFF101830, 0xFFDD6633, t);
        grass   = LERP_COL(0xFF0A1508, 0xFF1A2810, t);
        mtn     = LERP_COL(0xFF101828, 0xFF3A2040, t);
    }

    g_tod.sky_top = sky_top;
    g_tod.sky_bot = sky_bot;
    g_tod.grass = grass;
    g_tod.mountain = mtn;

    /* Night factor for road darkening */
    float night = 0.0f;
    if (cycle > 0.50f && cycle <= 0.75f)
        night = (cycle - 0.50f) / 0.25f;
    else if (cycle > 0.75f)
        night = 1.0f - (cycle - 0.75f) / 0.25f;
    g_tod.night = night;

    /* Road colors darken at night */
    g_tod.road_a = LERP_COL(0xFF383838, 0xFF111118, night);
    g_tod.road_b = LERP_COL(0xFF404040, 0xFF0A0A14, night);
}

/* ── Rain/weather state ─────────────────────────────────────── */

static float g_rain_intensity = 0.0f;
static uint32_t g_rain_seed = 12345;
static uint32_t g_twinkle_seed = 42;

/* ── Module state ────────────────────────────────────────────── */

static int g_3d_mode = 1;              /* always 3D mode */
static int g_initialized = 0;

/* Player mesh */
static RW_Mesh *g_player_mesh = NULL;

/* Traffic meshes (one per model variant) */
#define MAX_TRAFFIC_MESHES 6
static RW_Mesh *g_traffic_meshes[MAX_TRAFFIC_MESHES];
static int g_traffic_mesh_count = 0;

/* Track geometry (non-static: accessed by rw_bridge.c for PB injection).
 * One mesh per object descriptor: 1744 for US/C1_V1, 4420 for the largest
 * shipped track (AS/M1), so 2000 was not enough. */
#define MAX_TRACK_CHUNKS 8192
TrackData g_track_data;
static RW_Mesh *g_track_meshes[MAX_TRACK_CHUNKS];
static BGV_Vertex *g_track_bgv_verts[MAX_TRACK_CHUNKS];  /* CPU-side data (kept alive for mesh) */
static uint16_t *g_track_bgv_idxs[MAX_TRACK_CHUNKS];
static int g_track_mesh_count = 0;
int g_track_loaded = 0;
static int g_track_visible = 1;
static StaticTexDict g_static_textures;

/* Procedural road mesh */
#define ROAD_SEGMENTS   80
#define ROAD_WIDTH      15.0f
#define ROAD_SEG_LEN    5.0f
static RW_Mesh *g_road_mesh = NULL;

/* Procedural ground mesh */
static RW_Mesh *g_ground_mesh = NULL;

/* The scene */
static RW_Scene g_scene;

/* ── FVF and vertex types ────────────────────────────────────── */

#define FVF_3D   (D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_DIFFUSE | D3DFVF_TEX1)
#define FVF_SCREEN (D3DFVF_XYZRHW | D3DFVF_DIFFUSE)

typedef struct { float x, y, z, rhw; DWORD color; } ScreenVert;

/* ── Mesh Management ─────────────────────────────────────────── */

RW_Mesh *rw_mesh_create_from_bgv(const BGV_Model *model, IDirect3DTexture8 *texture)
{
    if (!model || !model->vertices || !model->indices ||
        model->vertex_count == 0 || model->index_count == 0)
        return NULL;

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return NULL;

    RW_Mesh *mesh = (RW_Mesh *)calloc(1, sizeof(RW_Mesh));
    if (!mesh) return NULL;

    mesh->vertices = model->vertices;
    mesh->vertex_count = model->vertex_count;
    mesh->indices = model->indices;
    mesh->index_count = model->index_count;
    mesh->texture = texture;
    mesh->bounding_radius = model->bounding_radius;

    /* Create persistent GPU vertex buffer */
    UINT vb_size = model->vertex_count * sizeof(BGV_Vertex);
    HRESULT hr = dev->lpVtbl->CreateVertexBuffer(
        dev, vb_size, 0, FVF_3D, D3DPOOL_MANAGED, &mesh->vb);
    if (FAILED(hr)) {
        fprintf(stderr, "  [RW3D] CreateVertexBuffer failed: 0x%08lX\n", hr);
        free(mesh);
        return NULL;
    }
    {
        BYTE *data = NULL;
        hr = mesh->vb->lpVtbl->Lock(mesh->vb, 0, vb_size, &data, 0);
        if (SUCCEEDED(hr)) {
            memcpy(data, model->vertices, vb_size);
            mesh->vb->lpVtbl->Unlock(mesh->vb);
        }
    }

    /* Create persistent GPU index buffer */
    UINT ib_size = model->index_count * sizeof(uint16_t);
    hr = dev->lpVtbl->CreateIndexBuffer(
        dev, ib_size, 0, D3DFMT_INDEX16, D3DPOOL_MANAGED, &mesh->ib);
    if (FAILED(hr)) {
        fprintf(stderr, "  [RW3D] CreateIndexBuffer failed: 0x%08lX\n", hr);
        mesh->vb->lpVtbl->Release(mesh->vb);
        free(mesh);
        return NULL;
    }
    {
        BYTE *data = NULL;
        hr = mesh->ib->lpVtbl->Lock(mesh->ib, 0, ib_size, &data, 0);
        if (SUCCEEDED(hr)) {
            memcpy(data, model->indices, ib_size);
            mesh->ib->lpVtbl->Unlock(mesh->ib);
        }
    }

    return mesh;
}

void rw_mesh_destroy(RW_Mesh *mesh)
{
    if (!mesh) return;
    if (mesh->ib) mesh->ib->lpVtbl->Release(mesh->ib);
    if (mesh->vb) mesh->vb->lpVtbl->Release(mesh->vb);
    /* Don't free vertices/indices — owned by BGV_Model */
    free(mesh);
}

/* Create a mesh from raw vertex/index arrays (for procedural geometry).
 *
 * `share_vb`, when non-NULL, is an existing vertex buffer holding exactly
 * these vertices; the mesh takes a reference instead of uploading its own
 * copy. Track objects need this: every object in a section indexes that
 * section's whole vertex array, so uploading per object duplicated each
 * section's vertices ~30 times. On the largest track that meant 4096
 * vertex buffers — the entire pool — and hundreds of megabytes of
 * identical data pushed to the GPU at race start. */
static RW_Mesh *rw_mesh_create_shared(BGV_Vertex *verts, uint32_t vc,
                                      uint16_t *idxs, uint32_t ic,
                                      IDirect3DVertexBuffer8 *share_vb)
{
    if (!verts || !idxs || vc == 0 || ic == 0)
        return NULL;

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return NULL;

    RW_Mesh *mesh = (RW_Mesh *)calloc(1, sizeof(RW_Mesh));
    if (!mesh) return NULL;

    mesh->vertices = verts;
    mesh->vertex_count = vc;
    mesh->indices = idxs;
    mesh->index_count = ic;
    mesh->texture = NULL;
    mesh->bounding_radius = 100.0f;

    UINT vb_size = vc * sizeof(BGV_Vertex);
    if (share_vb) {
        share_vb->lpVtbl->AddRef(share_vb);
        mesh->vb = share_vb;
    } else {
        HRESULT vhr = dev->lpVtbl->CreateVertexBuffer(
            dev, vb_size, 0, FVF_3D, D3DPOOL_MANAGED, &mesh->vb);
        if (FAILED(vhr)) { free(mesh); return NULL; }
        BYTE *vdata = NULL;
        if (SUCCEEDED(mesh->vb->lpVtbl->Lock(mesh->vb, 0, vb_size, &vdata, 0))) {
            memcpy(vdata, verts, vb_size);
            mesh->vb->lpVtbl->Unlock(mesh->vb);
        }
    }

    HRESULT hr;
    UINT ib_size = ic * sizeof(uint16_t);
    hr = dev->lpVtbl->CreateIndexBuffer(
        dev, ib_size, 0, D3DFMT_INDEX16, D3DPOOL_MANAGED, &mesh->ib);
    if (FAILED(hr)) {
        mesh->vb->lpVtbl->Release(mesh->vb);
        free(mesh);
        return NULL;
    }
    {
        BYTE *data = NULL;
        hr = mesh->ib->lpVtbl->Lock(mesh->ib, 0, ib_size, &data, 0);
        if (SUCCEEDED(hr)) {
            memcpy(data, idxs, ib_size);
            mesh->ib->lpVtbl->Unlock(mesh->ib);
        }
    }

    return mesh;
}

static RW_Mesh *rw_mesh_create_procedural(BGV_Vertex *verts, uint32_t vc,
                                          uint16_t *idxs, uint32_t ic)
{
    return rw_mesh_create_shared(verts, vc, idxs, ic, NULL);
}

/* ── Scene Management ────────────────────────────────────────── */

void rw_scene_init(RW_Scene *scene)
{
    memset(scene, 0, sizeof(RW_Scene));
    scene->camera.fov_y = 60.0f * 3.14159f / 180.0f;
    scene->camera.aspect = 640.0f / 480.0f;
    scene->camera.znear = 0.5f;
    scene->camera.zfar = 500.0f;
    scene->camera.up[1] = 1.0f;
    scene->clear_color = 0xFF102040;
    scene->sun_dir[0] = 0.3f;
    scene->sun_dir[1] = -0.8f;
    scene->sun_dir[2] = 0.5f;
    scene->ambient = 0.3f;
}

int rw_scene_add_object(RW_Scene *scene, RW_Mesh *mesh)
{
    if (scene->object_count >= RW_MAX_OBJECTS) return -1;
    int idx = scene->object_count++;
    RW_Object *obj = &scene->objects[idx];
    memset(obj, 0, sizeof(RW_Object));
    obj->mesh = mesh;
    obj->scale = 1.0f;
    obj->visible = 1;
    obj->color_tint = 0;
    mat4_identity(obj->world_matrix);
    return idx;
}

void rw_scene_clear(RW_Scene *scene)
{
    scene->object_count = 0;
}

/* ── Camera ──────────────────────────────────────────────────── */

void rw_camera_set_chase(RW_Camera *cam, const float car_pos[3],
                         float heading, float dist, float height)
{
    /* Camera behind car along heading direction */
    float dir_x = sinf(heading);
    float dir_z = cosf(heading);

    cam->position[0] = car_pos[0] - dir_x * dist;
    cam->position[1] = car_pos[1] + height;
    cam->position[2] = car_pos[2] - dir_z * dist;

    /* Look ahead of car */
    cam->target[0] = car_pos[0] + dir_x * 5.0f;
    cam->target[1] = car_pos[1] + 0.5f;
    cam->target[2] = car_pos[2] + dir_z * 5.0f;

    cam->up[0] = 0.0f;
    cam->up[1] = 1.0f;
    cam->up[2] = 0.0f;
}

void rw_camera_update_matrices(RW_Camera *cam)
{
    mat4_lookat(cam->view_matrix,
                cam->position[0], cam->position[1], cam->position[2],
                cam->target[0], cam->target[1], cam->target[2],
                cam->up[0], cam->up[1], cam->up[2]);
    mat4_perspective(cam->proj_matrix, cam->fov_y, cam->aspect,
                     cam->znear, cam->zfar);
}

/* ── Rendering ───────────────────────────────────────────────── */

void rw_render_mesh(RW_Mesh *mesh, const float world_matrix[16])
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev || !mesh || !mesh->vb || !mesh->ib) return;

    D3DMATRIX wm;
    memcpy(&wm, world_matrix, 64);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &wm);

    /* Bind texture or use vertex-color-only mode */
    static int no_tex = -1;
    if (no_tex < 0) no_tex = getenv("B3_NO_TEX") ? 1 : 0;
    if (mesh->texture && !no_tex) {
        dev->lpVtbl->SetTexture(dev, 0, (IDirect3DBaseTexture8 *)mesh->texture);
        /* COLOROP = MODULATE: texture color * vertex color (vertex provides AO/lighting) */
        dev->lpVtbl->SetTextureStageState(dev, 0, 1 /*D3DTSS_COLOROP*/, 4 /*D3DTOP_MODULATE*/);
        dev->lpVtbl->SetTextureStageState(dev, 0, 2 /*D3DTSS_COLORARG1*/, 2 /*D3DTA_TEXTURE*/);
        dev->lpVtbl->SetTextureStageState(dev, 0, 3 /*D3DTSS_COLORARG2*/, 0 /*D3DTA_DIFFUSE*/);
    } else {
        dev->lpVtbl->SetTexture(dev, 0, NULL);
        /* COLOROP = DISABLE for vertex-color-only (avoids sampling NULL texture) */
        dev->lpVtbl->SetTextureStageState(dev, 0, 1 /*D3DTSS_COLOROP*/, 1 /*D3DTOP_DISABLE*/);
    }

    /* Bind persistent vertex/index buffers */
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, mesh->vb, sizeof(BGV_Vertex));
    dev->lpVtbl->SetIndices(dev, mesh->ib, 0);

    /* Draw */
    dev->lpVtbl->DrawIndexedPrimitive(dev, D3DPT_TRIANGLELIST,
                                       0, mesh->vertex_count,
                                       0, mesh->index_count / 3);
}

void rw_render_scene(RW_Scene *scene)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return;

    /* Set camera transforms */
    rw_camera_update_matrices(&scene->camera);

    D3DMATRIX view_mat, proj_mat;
    memcpy(&view_mat, scene->camera.view_matrix, 64);
    memcpy(&proj_mat, scene->camera.proj_matrix, 64);
    dev->lpVtbl->SetTransform(dev, D3DTS_VIEW, &view_mat);
    dev->lpVtbl->SetTransform(dev, D3DTS_PROJECTION, &proj_mat);

    /* 3D render state */
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZWRITEENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);

    /* Draw all visible objects */
    for (int i = 0; i < scene->object_count; i++) {
        RW_Object *obj = &scene->objects[i];
        if (!obj->visible || !obj->mesh) continue;
        rw_render_mesh(obj->mesh, obj->world_matrix);
    }
}

/* ── Procedural Road Geometry ────────────────────────────────── */

/*
 * Generate a road strip that extends forward from the camera.
 * Each segment is a quad (2 triangles) with lane markings.
 * Road curves are applied from the physics curve table.
 */
static void build_road_mesh_data(float player_z, float player_x,
                                  BGV_Vertex **out_verts, uint32_t *out_vc,
                                  uint16_t **out_idxs, uint32_t *out_ic)
{
    /* Each segment: 4 verts (left/right at near and far edge) = 2 tris = 6 indices
     * Also add lane marking strips on top */
    int total_segs = ROAD_SEGMENTS;
    int verts_per_seg = 4;
    int idxs_per_seg = 6;
    /* Road segments + center line segments + edge line segments */
    int road_verts = total_segs * verts_per_seg;
    int road_idxs = total_segs * idxs_per_seg;
    /* Lane markings: center dashes + edge strips (same count) */
    int mark_verts = total_segs * 4 * 3;  /* 3 line types */
    int mark_idxs = total_segs * 6 * 3;
    int total_verts = road_verts + mark_verts;
    int total_idxs = road_idxs + mark_idxs;

    BGV_Vertex *verts = (BGV_Vertex *)calloc(total_verts, sizeof(BGV_Vertex));
    uint16_t *idxs = (uint16_t *)calloc(total_idxs, sizeof(uint16_t));
    if (!verts || !idxs) {
        free(verts); free(idxs);
        *out_verts = NULL; *out_vc = 0;
        *out_idxs = NULL; *out_ic = 0;
        return;
    }

    float curve = RW_MEMF(ROAD_CURVE_ADDR);
    float cum_offset_x = 0.0f;
    float road_y = 0.0f;

    /* Road surface color: alternating grey stripes (darkens at night) */
    DWORD asphalt_dark = g_tod.road_a;
    DWORD asphalt_light = g_tod.road_b;

    int vi = 0, ii = 0;

    for (int s = 0; s < total_segs; s++) {
        float z_near = player_z + (float)s * ROAD_SEG_LEN;
        float z_far  = z_near + ROAD_SEG_LEN;

        float x_near = player_x + cum_offset_x;
        cum_offset_x += curve * ROAD_SEG_LEN * 0.02f;
        float x_far = player_x + cum_offset_x;

        DWORD rc = (s % 2 == 0) ? asphalt_dark : asphalt_light;

        /* 4 verts: near-left, near-right, far-left, far-right */
        int base = vi;
        verts[vi].x = x_near - ROAD_WIDTH; verts[vi].y = road_y; verts[vi].z = z_near;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = rc; verts[vi].u = 0; verts[vi].v = 0; vi++;

        verts[vi].x = x_near + ROAD_WIDTH; verts[vi].y = road_y; verts[vi].z = z_near;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = rc; verts[vi].u = 1; verts[vi].v = 0; vi++;

        verts[vi].x = x_far - ROAD_WIDTH; verts[vi].y = road_y; verts[vi].z = z_far;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = rc; verts[vi].u = 0; verts[vi].v = 1; vi++;

        verts[vi].x = x_far + ROAD_WIDTH; verts[vi].y = road_y; verts[vi].z = z_far;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = rc; verts[vi].u = 1; verts[vi].v = 1; vi++;

        /* 2 triangles */
        idxs[ii++] = (uint16_t)base;
        idxs[ii++] = (uint16_t)(base + 2);
        idxs[ii++] = (uint16_t)(base + 1);
        idxs[ii++] = (uint16_t)(base + 1);
        idxs[ii++] = (uint16_t)(base + 2);
        idxs[ii++] = (uint16_t)(base + 3);
    }

    /* Center line: dashed yellow */
    float cum_x2 = 0.0f;
    float line_hw = 0.15f;
    DWORD yellow = 0xFFCCCC00;
    for (int s = 0; s < total_segs; s++) {
        float z_near = player_z + (float)s * ROAD_SEG_LEN;
        float z_far = z_near + ROAD_SEG_LEN;
        float x_near = player_x + cum_x2;
        cum_x2 += curve * ROAD_SEG_LEN * 0.02f;
        float x_far = player_x + cum_x2;

        /* Only draw every other segment (dashed) */
        DWORD lc = (s % 2 == 0) ? yellow : asphalt_dark;
        float ly = road_y + 0.01f;
        int base = vi;

        verts[vi].x = x_near - line_hw; verts[vi].y = ly; verts[vi].z = z_near;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = lc; vi++;

        verts[vi].x = x_near + line_hw; verts[vi].y = ly; verts[vi].z = z_near;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = lc; vi++;

        verts[vi].x = x_far - line_hw; verts[vi].y = ly; verts[vi].z = z_far;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = lc; vi++;

        verts[vi].x = x_far + line_hw; verts[vi].y = ly; verts[vi].z = z_far;
        verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
        verts[vi].color = lc; vi++;

        idxs[ii++] = (uint16_t)base;
        idxs[ii++] = (uint16_t)(base + 2);
        idxs[ii++] = (uint16_t)(base + 1);
        idxs[ii++] = (uint16_t)(base + 1);
        idxs[ii++] = (uint16_t)(base + 2);
        idxs[ii++] = (uint16_t)(base + 3);
    }

    /* Left and right edge lines: solid white */
    DWORD white = 0xFFDDDDDD;
    for (int side = 0; side < 2; side++) {
        float edge_x = (side == 0) ? -ROAD_WIDTH + 0.5f : ROAD_WIDTH - 0.5f;
        float cum_x3 = 0.0f;
        for (int s = 0; s < total_segs; s++) {
            float z_near = player_z + (float)s * ROAD_SEG_LEN;
            float z_far = z_near + ROAD_SEG_LEN;
            float x_near = player_x + cum_x3 + edge_x;
            cum_x3 += curve * ROAD_SEG_LEN * 0.02f;
            float x_far = player_x + cum_x3 + edge_x;
            float ly = road_y + 0.01f;
            int base = vi;

            verts[vi].x = x_near - line_hw; verts[vi].y = ly; verts[vi].z = z_near;
            verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
            verts[vi].color = white; vi++;

            verts[vi].x = x_near + line_hw; verts[vi].y = ly; verts[vi].z = z_near;
            verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
            verts[vi].color = white; vi++;

            verts[vi].x = x_far - line_hw; verts[vi].y = ly; verts[vi].z = z_far;
            verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
            verts[vi].color = white; vi++;

            verts[vi].x = x_far + line_hw; verts[vi].y = ly; verts[vi].z = z_far;
            verts[vi].nx = 0; verts[vi].ny = 1; verts[vi].nz = 0;
            verts[vi].color = white; vi++;

            idxs[ii++] = (uint16_t)base;
            idxs[ii++] = (uint16_t)(base + 2);
            idxs[ii++] = (uint16_t)(base + 1);
            idxs[ii++] = (uint16_t)(base + 1);
            idxs[ii++] = (uint16_t)(base + 2);
            idxs[ii++] = (uint16_t)(base + 3);
        }
    }

    *out_verts = verts;
    *out_vc = (uint32_t)vi;
    *out_idxs = idxs;
    *out_ic = (uint32_t)ii;
}

/* ── Sky Rendering ───────────────────────────────────────────── */

static void render_sky_gradient(IDirect3DDevice8 *dev)
{
    /* Full-screen gradient quad using time-of-day colors */
    DWORD sky_top = g_tod.sky_top;
    DWORD sky_bot = g_tod.sky_bot;

    ScreenVert sky[6] = {
        {0,   0,   0.999f, 1.0f, sky_top},
        {640, 0,   0.999f, 1.0f, sky_top},
        {0,   480, 0.999f, 1.0f, sky_bot},
        {640, 0,   0.999f, 1.0f, sky_top},
        {640, 480, 0.999f, 1.0f, sky_bot},
        {0,   480, 0.999f, 1.0f, sky_bot},
    };

    dev->lpVtbl->SetVertexShader(dev, FVF_SCREEN);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZWRITEENABLE, FALSE);
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, sky, sizeof(ScreenVert));
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZWRITEENABLE, TRUE);
}

/* ── Ground Plane ────────────────────────────────────────────── */

/* Harbour water.
 *
 * The waterfront tracks are a road corridor with nothing modelled beyond
 * the quaysides — the game fills that with water, which is why static.dat
 * ships 'water'..'water10' (16x16 animation frames) that nothing was
 * drawing. Without it the harbour reads as flat sky-blue emptiness.
 * The surface height is taken from the lowest road-facing geometry in
 * the track rather than hardcoded, so it sits just under the quays. */
float g_track_water_y = 0.0f;
int   g_track_has_water = 0;

static void render_water(IDirect3DDevice8 *dev, float cam_x, float cam_z)
{
    if (!g_track_has_water) return;

    /* Flat tone rather than the 'water' art: those frames are 16x16
     * caustic/animation data, not a diffuse tile, and tiling them across
     * the harbour reads as scattered dark blobs. A still surface is the
     * honest approximation until the game's own water pass is understood
     * (B3_WATER_TEX=1 draws the art instead, for anyone revisiting it). */
    IDirect3DTexture8 *tex = getenv("B3_WATER_TEX")
        ? static_tex_find(&g_static_textures, "water") : NULL;
    const float ws = 4000.0f;              /* out to the far plane */
    const float uv = 700.0f;
    const DWORD tint = tex ? 0xFF5A7C96 : 0xFF3E5C78;
    const float wy = g_track_water_y;

    BGV_Vertex w[6] = {
        {cam_x - ws, wy, cam_z - ws, 0,1,0, tint, 0,  0},
        {cam_x + ws, wy, cam_z - ws, 0,1,0, tint, uv, 0},
        {cam_x - ws, wy, cam_z + ws, 0,1,0, tint, 0,  uv},
        {cam_x + ws, wy, cam_z - ws, 0,1,0, tint, uv, 0},
        {cam_x + ws, wy, cam_z + ws, 0,1,0, tint, uv, uv},
        {cam_x - ws, wy, cam_z + ws, 0,1,0, tint, 0,  uv},
    };

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    if (tex) {
        dev->lpVtbl->SetTexture(dev, 0, (IDirect3DBaseTexture8 *)tex);
        dev->lpVtbl->SetTextureStageState(dev, 0, 1, 4); /* MODULATE */
        dev->lpVtbl->SetTextureStageState(dev, 0, 2, 2); /* ARG1 = TEXTURE */
        dev->lpVtbl->SetTextureStageState(dev, 0, 3, 0); /* ARG2 = DIFFUSE */
    } else {
        dev->lpVtbl->SetTexture(dev, 0, NULL);
        dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1); /* DISABLE */
    }
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, w, sizeof(BGV_Vertex));
}

static void render_ground_plane(IDirect3DDevice8 *dev, float player_x, float player_z)
{
    /* Large grass-colored quad centered on player */
    float gs = 300.0f;
    float gy = -0.05f;
    DWORD grass = g_tod.grass;

    BGV_Vertex ground[6] = {
        {player_x - gs, gy, player_z - gs, 0,1,0, grass, 0,0},
        {player_x + gs, gy, player_z - gs, 0,1,0, grass, 1,0},
        {player_x - gs, gy, player_z + gs, 0,1,0, grass, 0,1},
        {player_x + gs, gy, player_z - gs, 0,1,0, grass, 1,0},
        {player_x + gs, gy, player_z + gs, 0,1,0, grass, 1,1},
        {player_x - gs, gy, player_z + gs, 0,1,0, grass, 0,1},
    };

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1); /* COLOROP = DISABLE */
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, ground, sizeof(BGV_Vertex));
}

/* ── Road Rendering (per-frame procedural) ───────────────────── */

static void render_road(IDirect3DDevice8 *dev, float player_x, float player_z)
{
    BGV_Vertex *verts = NULL;
    uint16_t *idxs = NULL;
    uint32_t vc = 0, ic = 0;

    build_road_mesh_data(player_z - ROAD_SEG_LEN * 2, player_x,
                         &verts, &vc, &idxs, &ic);
    if (!verts || !idxs) return;

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1); /* COLOROP = DISABLE */
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);

    dev->lpVtbl->DrawIndexedPrimitiveUP(dev, D3DPT_TRIANGLELIST,
                                         0, vc, ic / 3,
                                         idxs, D3DFMT_INDEX16,
                                         verts, sizeof(BGV_Vertex));

    free(verts);
    free(idxs);
}

/* ── Mountain Backdrop ───────────────────────────────────────── */

static void render_mountains(IDirect3DDevice8 *dev, float player_x, float player_z)
{
    /* Ring of mountain silhouettes around the player, far away */
    float dist = 250.0f;
    float base_y = -5.0f;
    int num_peaks = 24;
    DWORD mtn_color = g_tod.mountain;
    /* Peak tops slightly lighter */
    DWORD mtn_top = LERP_COL(mtn_color, 0xFFFFFFFF, 0.15f);

    BGV_Vertex tri[3];
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);

    for (int i = 0; i < num_peaks; i++) {
        float angle = (float)i / (float)num_peaks * 6.28318f;
        float angle2 = (float)(i + 1) / (float)num_peaks * 6.28318f;
        float mid_angle = (angle + angle2) * 0.5f;

        float peak_h = 20.0f + 15.0f * sinf(angle * 3.7f + 1.3f);

        float x0 = player_x + cosf(angle) * dist;
        float z0 = player_z + sinf(angle) * dist;
        float x1 = player_x + cosf(angle2) * dist;
        float z1 = player_z + sinf(angle2) * dist;
        float xm = player_x + cosf(mid_angle) * (dist - 10.0f);
        float zm = player_z + sinf(mid_angle) * (dist - 10.0f);

        tri[0].x = x0; tri[0].y = base_y; tri[0].z = z0;
        tri[0].nx = 0; tri[0].ny = 0; tri[0].nz = 1;
        tri[0].color = mtn_color; tri[0].u = 0; tri[0].v = 1;

        tri[1].x = xm; tri[1].y = peak_h; tri[1].z = zm;
        tri[1].nx = 0; tri[1].ny = 0; tri[1].nz = 1;
        tri[1].color = mtn_top; tri[1].u = 0.5f; tri[1].v = 0;

        tri[2].x = x1; tri[2].y = base_y; tri[2].z = z1;
        tri[2].nx = 0; tri[2].ny = 0; tri[2].nz = 1;
        tri[2].color = mtn_color; tri[2].u = 1; tri[2].v = 1;

        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 1,
                                      tri, sizeof(BGV_Vertex));
    }
}

/* ── Roadside Objects (3D) ───────────────────────────────────── */

/*
 * Render scenery objects (trees, buildings, guard posts, signs, billboards)
 * along both sides of the procedural road, in 3D world space.
 * Uses deterministic hashing for object type/color variation.
 */
static void render_roadside_objects(IDirect3DDevice8 *dev,
                                     float player_x, float player_z,
                                     float road_curve)
{
    float obj_spacing = 18.0f;
    float view_dist = 200.0f;
    float road_hw = ROAD_WIDTH;
    float side_offset = road_hw + 3.0f;

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1); /* COLOROP = DISABLE */
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);

    /* Start placement slightly behind player */
    float first_z = floorf(player_z / obj_spacing) * obj_spacing - obj_spacing;
    int road_y = 0;

    /* Accumulated curve offset for X displacement */
    for (float z = first_z; z < player_z + view_dist; z += obj_spacing) {
        /* Distance ahead of player */
        float dz = z - player_z;
        if (dz < -obj_spacing) continue;

        /* Deterministic object type from world position */
        int world_idx = (int)(z / obj_spacing);
        if (world_idx < 0) world_idx = -world_idx;
        uint32_t h = (uint32_t)(world_idx) * 2654435761u;
        int obj_type = (int)((h >> 16) % 6);

        /* Road curve displaces X position */
        float curve_x = road_curve * dz * 0.02f;
        float center_x = player_x + curve_x;

        /* Render on both sides of the road */
        for (int side = 0; side < 2; side++) {
            float sx = center_x + ((side == 0) ? -side_offset : side_offset);
            float sz = z;
            float sy = (float)road_y;
            BGV_Vertex v[12]; /* enough for any object type */

            switch (obj_type) {
            case 0: { /* Guard post */
                float pw = 0.3f, ph = 2.5f;
                DWORD gc = 0xFFAAAAAA;
                v[0] = (BGV_Vertex){sx - pw, sy,      sz, 0,0,1, gc, 0,0};
                v[1] = (BGV_Vertex){sx + pw, sy,      sz, 0,0,1, gc, 1,0};
                v[2] = (BGV_Vertex){sx - pw, sy + ph,  sz, 0,0,1, gc, 0,1};
                v[3] = (BGV_Vertex){sx + pw, sy,      sz, 0,0,1, gc, 1,0};
                v[4] = (BGV_Vertex){sx + pw, sy + ph,  sz, 0,0,1, gc, 1,1};
                v[5] = (BGV_Vertex){sx - pw, sy + ph,  sz, 0,0,1, gc, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                break;
            }
            case 1:   /* Tree (regular) */
            case 2: { /* Tree (tall) */
                float trunk_w = 0.3f;
                float trunk_h = (obj_type == 1) ? 4.0f : 6.0f;
                float canopy_w = (obj_type == 1) ? 2.0f : 3.0f;
                float canopy_h = (obj_type == 1) ? 3.0f : 4.5f;
                DWORD trunk_c = 0xFF443322;
                DWORD leaf_c = (world_idx & 1) ? 0xFF227733 : 0xFF2D8844;
                /* Darken at night */
                if (g_tod.night > 0.0f) {
                    leaf_c = LERP_COL(leaf_c, 0xFF0A1508, g_tod.night);
                    trunk_c = LERP_COL(trunk_c, 0xFF111108, g_tod.night);
                }
                /* Trunk: 2 tris */
                v[0] = (BGV_Vertex){sx - trunk_w, sy,           sz, 0,0,1, trunk_c, 0,0};
                v[1] = (BGV_Vertex){sx + trunk_w, sy,           sz, 0,0,1, trunk_c, 1,0};
                v[2] = (BGV_Vertex){sx - trunk_w, sy + trunk_h, sz, 0,0,1, trunk_c, 0,1};
                v[3] = (BGV_Vertex){sx + trunk_w, sy,           sz, 0,0,1, trunk_c, 1,0};
                v[4] = (BGV_Vertex){sx + trunk_w, sy + trunk_h, sz, 0,0,1, trunk_c, 1,1};
                v[5] = (BGV_Vertex){sx - trunk_w, sy + trunk_h, sz, 0,0,1, trunk_c, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* Canopy: triangle */
                v[0] = (BGV_Vertex){sx - canopy_w, sy + trunk_h,            sz, 0,0,1, leaf_c, 0,1};
                v[1] = (BGV_Vertex){sx,            sy + trunk_h + canopy_h, sz, 0,0,1, leaf_c, 0.5f,0};
                v[2] = (BGV_Vertex){sx + canopy_w, sy + trunk_h,            sz, 0,0,1, leaf_c, 1,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 1, v, sizeof(BGV_Vertex));
                break;
            }
            case 3: { /* Building (front face + side wall + roof) */
                float bw = 2.5f, bh = 6.0f;
                DWORD base_colors[4] = {0xFF556677, 0xFF665544, 0xFF554466, 0xFF446655};
                DWORD bc = base_colors[world_idx & 3];
                if (g_tod.night > 0.0f)
                    bc = LERP_COL(bc, 0xFF111118, g_tod.night * 0.6f);
                /* Side color: darker */
                DWORD sc = ((bc >> 1) & 0x7F7F7F7F) | 0xFF000000;
                /* Front face: 2 tris */
                v[0] = (BGV_Vertex){sx - bw, sy,      sz, 0,0,1, bc, 0,0};
                v[1] = (BGV_Vertex){sx + bw, sy,      sz, 0,0,1, bc, 1,0};
                v[2] = (BGV_Vertex){sx - bw, sy + bh, sz, 0,0,1, bc, 0,1};
                v[3] = (BGV_Vertex){sx + bw, sy,      sz, 0,0,1, bc, 1,0};
                v[4] = (BGV_Vertex){sx + bw, sy + bh, sz, 0,0,1, bc, 1,1};
                v[5] = (BGV_Vertex){sx - bw, sy + bh, sz, 0,0,1, bc, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* Side wall: 2 tris (depth toward road exterior) */
                float depth = (side == 0) ? -1.5f : 1.5f;
                v[0] = (BGV_Vertex){sx + bw, sy,      sz,         0,0,1, sc, 0,0};
                v[1] = (BGV_Vertex){sx + bw, sy,      sz + depth, 0,0,1, sc, 1,0};
                v[2] = (BGV_Vertex){sx + bw, sy + bh, sz,         0,0,1, sc, 0,1};
                v[3] = (BGV_Vertex){sx + bw, sy,      sz + depth, 0,0,1, sc, 1,0};
                v[4] = (BGV_Vertex){sx + bw, sy + bh, sz + depth, 0,0,1, sc, 1,1};
                v[5] = (BGV_Vertex){sx + bw, sy + bh, sz,         0,0,1, sc, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* Windows (lit at night) */
                if (g_tod.night > 0.3f) {
                    DWORD wc = 0xFFAABBDD;
                    float wy1 = sy + bh * 0.35f, wy2 = sy + bh * 0.65f;
                    float wwh = bh * 0.08f;
                    float wwx = bw * 0.6f;
                    for (int row = 0; row < 2; row++) {
                        float wy = (row == 0) ? wy1 : wy2;
                        v[0] = (BGV_Vertex){sx - wwx, wy,       sz + 0.01f, 0,0,1, wc, 0,0};
                        v[1] = (BGV_Vertex){sx + wwx, wy,       sz + 0.01f, 0,0,1, wc, 1,0};
                        v[2] = (BGV_Vertex){sx - wwx, wy + wwh, sz + 0.01f, 0,0,1, wc, 0,1};
                        v[3] = (BGV_Vertex){sx + wwx, wy,       sz + 0.01f, 0,0,1, wc, 1,0};
                        v[4] = (BGV_Vertex){sx + wwx, wy + wwh, sz + 0.01f, 0,0,1, wc, 1,1};
                        v[5] = (BGV_Vertex){sx - wwx, wy + wwh, sz + 0.01f, 0,0,1, wc, 0,1};
                        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                    }
                }
                break;
            }
            case 4: { /* Road sign */
                float pw = 0.15f, post_h = 4.0f;
                float sign_w = 1.5f, sign_h = 1.2f;
                DWORD post_c = 0xFF888888;
                DWORD sign_c = 0xFF2244AA;
                /* Post: 2 tris */
                v[0] = (BGV_Vertex){sx - pw, sy,           sz, 0,0,1, post_c, 0,0};
                v[1] = (BGV_Vertex){sx + pw, sy,           sz, 0,0,1, post_c, 1,0};
                v[2] = (BGV_Vertex){sx - pw, sy + post_h,  sz, 0,0,1, post_c, 0,1};
                v[3] = (BGV_Vertex){sx + pw, sy,           sz, 0,0,1, post_c, 1,0};
                v[4] = (BGV_Vertex){sx + pw, sy + post_h,  sz, 0,0,1, post_c, 1,1};
                v[5] = (BGV_Vertex){sx - pw, sy + post_h,  sz, 0,0,1, post_c, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* Sign face: 2 tris */
                float sy2 = sy + post_h;
                v[0] = (BGV_Vertex){sx - sign_w, sy2,           sz, 0,0,1, sign_c, 0,0};
                v[1] = (BGV_Vertex){sx + sign_w, sy2,           sz, 0,0,1, sign_c, 1,0};
                v[2] = (BGV_Vertex){sx - sign_w, sy2 + sign_h,  sz, 0,0,1, sign_c, 0,1};
                v[3] = (BGV_Vertex){sx + sign_w, sy2,           sz, 0,0,1, sign_c, 1,0};
                v[4] = (BGV_Vertex){sx + sign_w, sy2 + sign_h,  sz, 0,0,1, sign_c, 1,1};
                v[5] = (BGV_Vertex){sx - sign_w, sy2 + sign_h,  sz, 0,0,1, sign_c, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                break;
            }
            case 5: { /* Billboard */
                float pw = 0.2f, post_h = 3.5f;
                float panel_w = 3.0f, panel_h = 2.2f;
                DWORD post_c = 0xFF666666;
                DWORD panel_colors[4] = {0xFF884422, 0xFF226644, 0xFF443388, 0xFF886622};
                DWORD pc = panel_colors[world_idx & 3];
                /* Post: 2 tris */
                v[0] = (BGV_Vertex){sx - pw, sy,           sz, 0,0,1, post_c, 0,0};
                v[1] = (BGV_Vertex){sx + pw, sy,           sz, 0,0,1, post_c, 1,0};
                v[2] = (BGV_Vertex){sx - pw, sy + post_h,  sz, 0,0,1, post_c, 0,1};
                v[3] = (BGV_Vertex){sx + pw, sy,           sz, 0,0,1, post_c, 1,0};
                v[4] = (BGV_Vertex){sx + pw, sy + post_h,  sz, 0,0,1, post_c, 1,1};
                v[5] = (BGV_Vertex){sx - pw, sy + post_h,  sz, 0,0,1, post_c, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* Panel face: 2 tris */
                float py2 = sy + post_h;
                v[0] = (BGV_Vertex){sx - panel_w, py2,            sz, 0,0,1, pc, 0,0};
                v[1] = (BGV_Vertex){sx + panel_w, py2,            sz, 0,0,1, pc, 1,0};
                v[2] = (BGV_Vertex){sx - panel_w, py2 + panel_h,  sz, 0,0,1, pc, 0,1};
                v[3] = (BGV_Vertex){sx + panel_w, py2,            sz, 0,0,1, pc, 1,0};
                v[4] = (BGV_Vertex){sx + panel_w, py2 + panel_h,  sz, 0,0,1, pc, 1,1};
                v[5] = (BGV_Vertex){sx - panel_w, py2 + panel_h,  sz, 0,0,1, pc, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                /* White text stripe */
                DWORD wt = 0xFFDDDDDD;
                float stripe_y = py2 + panel_h * 0.4f;
                float stripe_h = panel_h * 0.2f;
                v[0] = (BGV_Vertex){sx - panel_w * 0.8f, stripe_y,            sz + 0.01f, 0,0,1, wt, 0,0};
                v[1] = (BGV_Vertex){sx + panel_w * 0.8f, stripe_y,            sz + 0.01f, 0,0,1, wt, 1,0};
                v[2] = (BGV_Vertex){sx - panel_w * 0.8f, stripe_y + stripe_h, sz + 0.01f, 0,0,1, wt, 0,1};
                v[3] = (BGV_Vertex){sx + panel_w * 0.8f, stripe_y,            sz + 0.01f, 0,0,1, wt, 1,0};
                v[4] = (BGV_Vertex){sx + panel_w * 0.8f, stripe_y + stripe_h, sz + 0.01f, 0,0,1, wt, 1,1};
                v[5] = (BGV_Vertex){sx - panel_w * 0.8f, stripe_y + stripe_h, sz + 0.01f, 0,0,1, wt, 0,1};
                dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
                break;
            }
            }
        }
    }
}

/* ── Tunnel Rendering (3D) ──────────────────────────────────── */

static void render_tunnel(IDirect3DDevice8 *dev,
                           float player_x, float player_z,
                           float road_curve)
{
    float tunnel_period = 2000.0f;
    float tunnel_len = 200.0f;

    /* Check if player is in a tunnel zone */
    float tunnel_phase = fmodf(player_z, tunnel_period);
    if (tunnel_phase < 0.0f) tunnel_phase += tunnel_period;
    int in_tunnel = (tunnel_phase > tunnel_period - tunnel_len);
    if (!in_tunnel) return;

    float road_hw = ROAD_WIDTH + 2.0f;
    float ceil_h = 8.0f;
    DWORD ceil_c = 0xFF181822;
    DWORD wall_c = 0xFF252535;

    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1);
    dev->lpVtbl->SetVertexShader(dev, FVF_3D);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);

    /* Find tunnel start Z */
    float tunnel_start = floorf(player_z / tunnel_period) * tunnel_period +
                          (tunnel_period - tunnel_len);

    float seg_len = 5.0f;
    int num_segs = (int)(tunnel_len / seg_len);
    float cum_curve = 0.0f;

    for (int s = 0; s < num_segs; s++) {
        float z0 = tunnel_start + (float)s * seg_len;
        float z1 = z0 + seg_len;
        float dz0 = z0 - player_z;
        float dz1 = z1 - player_z;

        /* Skip segments too far behind or ahead */
        if (dz1 < -20.0f || dz0 > 200.0f) {
            cum_curve += road_curve * seg_len * 0.02f;
            continue;
        }

        float x0 = player_x + cum_curve;
        cum_curve += road_curve * seg_len * 0.02f;
        float x1 = player_x + cum_curve;

        BGV_Vertex v[6];

        /* Ceiling: quad spanning road width */
        v[0] = (BGV_Vertex){x0 - road_hw, ceil_h, z0, 0,-1,0, ceil_c, 0,0};
        v[1] = (BGV_Vertex){x0 + road_hw, ceil_h, z0, 0,-1,0, ceil_c, 1,0};
        v[2] = (BGV_Vertex){x1 - road_hw, ceil_h, z1, 0,-1,0, ceil_c, 0,1};
        v[3] = (BGV_Vertex){x0 + road_hw, ceil_h, z0, 0,-1,0, ceil_c, 1,0};
        v[4] = (BGV_Vertex){x1 + road_hw, ceil_h, z1, 0,-1,0, ceil_c, 1,1};
        v[5] = (BGV_Vertex){x1 - road_hw, ceil_h, z1, 0,-1,0, ceil_c, 0,1};
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));

        /* Left wall */
        v[0] = (BGV_Vertex){x0 - road_hw, 0,      z0, 1,0,0, wall_c, 0,0};
        v[1] = (BGV_Vertex){x1 - road_hw, 0,      z1, 1,0,0, wall_c, 1,0};
        v[2] = (BGV_Vertex){x0 - road_hw, ceil_h, z0, 1,0,0, wall_c, 0,1};
        v[3] = (BGV_Vertex){x1 - road_hw, 0,      z1, 1,0,0, wall_c, 1,0};
        v[4] = (BGV_Vertex){x1 - road_hw, ceil_h, z1, 1,0,0, wall_c, 1,1};
        v[5] = (BGV_Vertex){x0 - road_hw, ceil_h, z0, 1,0,0, wall_c, 0,1};
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));

        /* Right wall */
        v[0] = (BGV_Vertex){x0 + road_hw, 0,      z0, -1,0,0, wall_c, 0,0};
        v[1] = (BGV_Vertex){x1 + road_hw, 0,      z1, -1,0,0, wall_c, 1,0};
        v[2] = (BGV_Vertex){x0 + road_hw, ceil_h, z0, -1,0,0, wall_c, 0,1};
        v[3] = (BGV_Vertex){x1 + road_hw, 0,      z1, -1,0,0, wall_c, 1,0};
        v[4] = (BGV_Vertex){x1 + road_hw, ceil_h, z1, -1,0,0, wall_c, 1,1};
        v[5] = (BGV_Vertex){x0 + road_hw, ceil_h, z0, -1,0,0, wall_c, 0,1};
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));

        /* Orange strip lights on ceiling (every other segment) */
        if (s % 3 == 0) {
            DWORD light_c = 0xFFFF8833;
            float lw = 0.3f, lh = 0.05f;
            float lz = (z0 + z1) * 0.5f;
            float lx = (x0 + x1) * 0.5f;
            v[0] = (BGV_Vertex){lx - lw, ceil_h - lh, lz, 0,-1,0, light_c, 0,0};
            v[1] = (BGV_Vertex){lx + lw, ceil_h - lh, lz, 0,-1,0, light_c, 1,0};
            v[2] = (BGV_Vertex){lx - lw, ceil_h,      lz, 0,-1,0, light_c, 0,1};
            v[3] = (BGV_Vertex){lx + lw, ceil_h - lh, lz, 0,-1,0, light_c, 1,0};
            v[4] = (BGV_Vertex){lx + lw, ceil_h,      lz, 0,-1,0, light_c, 1,1};
            v[5] = (BGV_Vertex){lx - lw, ceil_h,      lz, 0,-1,0, light_c, 0,1};
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, v, sizeof(BGV_Vertex));
        }
    }
}

/* ── Night Stars (screen-space) ─────────────────────────────── */

static void render_3d_stars(IDirect3DDevice8 *dev)
{
    float cycle = g_tod.cycle;
    if (cycle < 0.55f || cycle > 0.95f) return;

    float alpha_f;
    if (cycle < 0.65f)       alpha_f = (cycle - 0.55f) / 0.1f;
    else if (cycle > 0.85f)  alpha_f = 1.0f - (cycle - 0.85f) / 0.1f;
    else                     alpha_f = 1.0f;

    dev->lpVtbl->SetVertexShader(dev, FVF_SCREEN);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

    int num_stars = 40;
    for (int i = 0; i < num_stars; i++) {
        uint32_t h = (uint32_t)i * 2654435761u;
        float sx = (float)((h >> 8) % 620) + 10.0f;
        float sy = (float)((h >> 16) % 200) + 5.0f;  /* top portion of screen */
        float size = 0.8f + ((h >> 4) & 3) * 0.3f;

        /* Twinkle */
        float twinkle = 0.6f + 0.4f * sinf((float)i * 3.7f +
                        (float)(g_twinkle_seed & 0xFF) * 0.025f);
        int alpha = (int)(alpha_f * twinkle * 255.0f);
        if (alpha < 0) alpha = 0;
        if (alpha > 255) alpha = 255;

        DWORD star_rgb;
        switch (h & 3) {
        case 0:  star_rgb = 0x00AACCFF; break;
        case 1:  star_rgb = 0x00FFFFCC; break;
        default: star_rgb = 0x00FFFFFF; break;
        }
        DWORD sc = ((DWORD)alpha << 24) | star_rgb;

        ScreenVert sv[6] = {
            {sx - size, sy - size, 0.97f, 1.0f, sc},
            {sx + size, sy - size, 0.97f, 1.0f, sc},
            {sx - size, sy + size, 0.97f, 1.0f, sc},
            {sx + size, sy - size, 0.97f, 1.0f, sc},
            {sx + size, sy + size, 0.97f, 1.0f, sc},
            {sx - size, sy + size, 0.97f, 1.0f, sc},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, sv, sizeof(ScreenVert));
    }

    g_twinkle_seed = g_twinkle_seed * 1103515245 + 12345;

    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
}

/* ── Rain Weather (screen-space) ────────────────────────────── */

static void render_3d_rain(IDirect3DDevice8 *dev)
{
    if (g_rain_intensity < 0.01f) return;

    dev->lpVtbl->SetVertexShader(dev, FVF_SCREEN);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

    /* Rain drops */
    int drop_count = (int)(g_rain_intensity * 30.0f);
    int alpha = (int)(g_rain_intensity * 120.0f);
    if (alpha > 255) alpha = 255;
    DWORD drop_c = ((DWORD)alpha << 24) | 0x00AABBDD;
    DWORD drop_end = ((DWORD)(alpha / 3) << 24) | 0x00AABBDD;

    for (int i = 0; i < drop_count; i++) {
        g_rain_seed = g_rain_seed * 1103515245 + 12345;
        float dx = (float)((g_rain_seed >> 16) & 0x3FF) - 40.0f;
        g_rain_seed = g_rain_seed * 1103515245 + 12345;
        float dy = (float)((g_rain_seed >> 16) & 0x1FF) - 20.0f;
        float streak = 12.0f + (float)((g_rain_seed >> 8) & 0xF);

        /* Diagonal streak: top-left to bottom-right */
        ScreenVert sv[6] = {
            {dx,       dy,              0.02f, 1.0f, drop_c},
            {dx + 2,   dy,              0.02f, 1.0f, drop_c},
            {dx + 4,   dy + streak,     0.02f, 1.0f, drop_end},
            {dx + 2,   dy,              0.02f, 1.0f, drop_c},
            {dx + 6,   dy + streak,     0.02f, 1.0f, drop_end},
            {dx + 4,   dy + streak,     0.02f, 1.0f, drop_end},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, sv, sizeof(ScreenVert));
    }

    /* Fog overlay */
    int fog_alpha = (int)(g_rain_intensity * 40.0f);
    if (fog_alpha > 255) fog_alpha = 255;
    DWORD fog_c = ((DWORD)fog_alpha << 24) | 0x00667788;
    ScreenVert fog[6] = {
        {0,   0,   0.025f, 1.0f, fog_c},
        {640, 0,   0.025f, 1.0f, fog_c},
        {0,   480, 0.025f, 1.0f, fog_c},
        {640, 0,   0.025f, 1.0f, fog_c},
        {640, 480, 0.025f, 1.0f, fog_c},
        {0,   480, 0.025f, 1.0f, fog_c},
    };
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, fog, sizeof(ScreenVert));

    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
}

/* ── HUD (reuses pseudo-3D HUD style) ───────────────────────── */

static void render_3d_hud(IDirect3DDevice8 *dev)
{
    /* Reset transforms to identity for screen-space HUD */
    D3DMATRIX ident;
    mat4_identity((float *)&ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_VIEW, &ident);
    dev->lpVtbl->SetTransform(dev, D3DTS_PROJECTION, &ident);

    dev->lpVtbl->SetVertexShader(dev, FVF_SCREEN);
    dev->lpVtbl->SetStreamSource(dev, 0, NULL, 0);
    dev->lpVtbl->SetIndices(dev, NULL, 0);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

    float speed = RW_MEMF(PHYS_SPD);
    float boost = RW_MEMF(BOOST_METER);
    uint32_t score = RW_MEM32(SCORE_ADDR);
    float mult = RW_MEMF(MULTIPLIER_ADDR);

    /* Speed bar (bottom-left) */
    {
        float bar_max = 140.0f;
        float bar_w = (speed / 75.0f) * bar_max;
        if (bar_w > bar_max) bar_w = bar_max;
        DWORD sc = (speed > 50.0f) ? 0xFFFF4400 : 0xFF00CC44;

        ScreenVert bg[6] = {
            {10, 450, 0, 1, 0x80000000}, {152, 450, 0, 1, 0x80000000},
            {10, 462, 0, 1, 0x80000000}, {152, 450, 0, 1, 0x80000000},
            {152, 462, 0, 1, 0x80000000}, {10, 462, 0, 1, 0x80000000},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, bg, sizeof(ScreenVert));

        if (bar_w > 0) {
            ScreenVert bar[6] = {
                {11, 451, 0, 1, sc}, {11+bar_w, 451, 0, 1, sc},
                {11, 461, 0, 1, sc}, {11+bar_w, 451, 0, 1, sc},
                {11+bar_w, 461, 0, 1, sc}, {11, 461, 0, 1, sc},
            };
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, bar, sizeof(ScreenVert));
        }
    }

    /* Boost bar (below speed) */
    {
        float bar_max = 140.0f;
        float bar_w = (boost / 100.0f) * bar_max;
        if (bar_w > bar_max) bar_w = bar_max;
        DWORD bc = 0xFF0088FF;

        ScreenVert bg[6] = {
            {10, 464, 0, 1, 0x80000000}, {152, 464, 0, 1, 0x80000000},
            {10, 472, 0, 1, 0x80000000}, {152, 464, 0, 1, 0x80000000},
            {152, 472, 0, 1, 0x80000000}, {10, 472, 0, 1, 0x80000000},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, bg, sizeof(ScreenVert));

        if (bar_w > 0) {
            ScreenVert bar[6] = {
                {11, 465, 0, 1, bc}, {11+bar_w, 465, 0, 1, bc},
                {11, 471, 0, 1, bc}, {11+bar_w, 465, 0, 1, bc},
                {11+bar_w, 471, 0, 1, bc}, {11, 471, 0, 1, bc},
            };
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, bar, sizeof(ScreenVert));
        }
    }

    /* Score/multiplier (top-right) */
    {
        /* Score background */
        ScreenVert sbg[6] = {
            {490, 8, 0, 1, 0x80000000}, {630, 8, 0, 1, 0x80000000},
            {490, 22, 0, 1, 0x80000000}, {630, 8, 0, 1, 0x80000000},
            {630, 22, 0, 1, 0x80000000}, {490, 22, 0, 1, 0x80000000},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, sbg, sizeof(ScreenVert));

        /* Multiplier bar */
        float mw = (mult / 8.0f) * 138.0f;
        if (mw > 138.0f) mw = 138.0f;
        DWORD mc = 0xFFFF8800;
        if (mw > 0) {
            ScreenVert mb[6] = {
                {491, 9, 0, 1, mc}, {491+mw, 9, 0, 1, mc},
                {491, 21, 0, 1, mc}, {491+mw, 9, 0, 1, mc},
                {491+mw, 21, 0, 1, mc}, {491, 21, 0, 1, mc},
            };
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, mb, sizeof(ScreenVert));
        }
    }

    /* "3D MODE" indicator (top-left) */
    {
        DWORD ic_col = 0xCC00FF88;
        ScreenVert ind[6] = {
            {10, 8, 0, 1, ic_col}, {70, 8, 0, 1, ic_col},
            {10, 20, 0, 1, ic_col}, {70, 8, 0, 1, ic_col},
            {70, 20, 0, 1, ic_col}, {10, 20, 0, 1, ic_col},
        };
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, ind, sizeof(ScreenVert));
    }

    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);

    (void)score; /* used in future text rendering */
}

/* ── Track Geometry ──────────────────────────────────────────── */

/* Color-code vertices by height relative to ground level, modulated by AO */
static DWORD track_height_color(float y, float ground_y, uint32_t ao_color)
{
    /* Bright height-based coloring */
    float rel = y - ground_y;
    uint8_t base_r, base_g, base_b;
    if (rel < -2.0f)       { base_r = 130; base_g = 145; base_b = 110; }  /* below grade: earth */
    else if (rel <  1.0f)  { base_r = 170; base_g = 170; base_b = 180; }  /* road surface: asphalt */
    else if (rel <  3.0f)  { base_r = 230; base_g = 225; base_b = 215; }  /* curbs: concrete */
    else if (rel <  8.0f)  { base_r = 200; base_g = 210; base_b = 205; }  /* barriers: metal */
    else if (rel < 20.0f)  { base_r = 240; base_g = 220; base_b = 190; }  /* walls: sandstone */
    else if (rel < 50.0f)  { base_r = 245; base_g = 235; base_b = 215; }  /* buildings: pale */
    else                    { base_r = 210; base_g = 225; base_b = 240; }  /* tall: blue-grey */

    /* Use vertex color directly as tint (full brightness, no AO darkening) */
    (void)ao_color;
    uint8_t r = base_r;
    uint8_t g = base_g;
    uint8_t b = base_b;
    return 0xFF000000 | ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
}

/* Track directory (e.g., "Burnout 3 Takedown/Tracks/EU/C1_V1") for file loading */
static char g_track_dir[512] = {0};

const char *rw_get_track_dir(void) { return g_track_dir; }

/* ---------------------------------------------------------------------------
 * Per-object material assignment.
 *
 * A streamed.dat section does NOT carry one material id per object. It carries
 * a fixed 83-slot material table and, per slot, the head of a linked list of
 * the objects that use it; the descriptor's +0x8C byte is the link and -1 ends
 * the run. That is exactly how the retail draw loop walks it (sub_001AD5E0):
 *
 *   S    = section image                       ; [obj+0x1C4]
 *   id   = (int16)[S + 0x84 + slot*2]          ; 0x001AD651
 *   mat  = static_dat[+0x08] + id*0x28         ; 0x001AD65F..0x001AD665
 *   o    = (int8)[S + 0x180 + row*0xA9 + slot] ; 0x001AD5FC
 *   while o >= 0: draw desc[o]; o = (int8)[desc[o] + 0x8C]   ; 0x001AD691
 *
 * The 0xA9-byte records start at S+0x12A (sub_0019D100 walks 17 of them for
 * section visibility) and hold, after three bytes of header, two 83-entry head
 * arrays: the full one at +0x03 and a reduced one at +0x56 that the LOD pass
 * uses. Record 0 is the section itself — its first byte is the neighbour delta
 * and reads 0.
 *
 * Reading S+0x84 with the OBJECT index instead of the slot index is what put
 * the flag frames on the road: for object 0..11 the two happen to coincide,
 * and after that the ids are simply the wrong entries of the table.
 *
 * Verified over all 37 shipped tracks: the head arrays at +0x03 of record 0
 * partition every accepted section's objects exactly once (58,000 objects, no
 * repeats, no gaps, no out-of-range material id).
 *
 * This runs here rather than in the loader because the mapping needs the
 * section image, and it rewrites the array the loader already sized per
 * object. Sections are matched to chunks by walking both in file order and
 * checking centre and object count; a single mismatch abandons the remap and
 * leaves the loader's array alone.
 * ------------------------------------------------------------------------ */
#define SECMAT_TABLE      0x84    /* uint16[83] material ids */
#define SECMAT_SLOTS      83
#define SECMAT_RECORDS    0x12A   /* 0xA9-byte visibility records */
#define SECMAT_REC_STRIDE 0xA9
#define SECMAT_HEADS      0x03    /* uint8[83] chain heads, within a record */
#define SECMAT_DESC_NEXT  0x8C

static int track_remap_materials(const char *path)
{
    FILE *f = fopen(path, "rb");
    if (!f) return -1;
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *data = (size > 0x100) ? (uint8_t *)malloc((size_t)size) : NULL;
    if (!data || fread(data, 1, (size_t)size, f) != (size_t)size) {
        free(data); fclose(f); return -1;
    }
    fclose(f);

    /* Collect the assignments first; only commit once every chunk matched. */
    uint16_t **out = (uint16_t **)calloc((size_t)g_track_data.chunk_count,
                                         sizeof(uint16_t *));
    if (!out) { free(data); return -1; }

    int ci = 0, failed = 0;
    for (uint32_t off = 0; off + 0x100 <= (uint32_t)size && ci < g_track_data.chunk_count; ) {
        const uint8_t *sec = data + off;
        uint32_t version, sec_size;
        memcpy(&version,  sec + 0x00, 4);
        memcpy(&sec_size, sec + 0x08, 4);
        if (version != 1 || sec_size < 0x100 ||
            (long)off + (long)sec_size > size) break;

        TrackChunk *c = &g_track_data.chunks[ci];
        uint16_t obj_count = 0;
        memcpy(&obj_count, sec + 0x60, 2);
        float centre[3];
        memcpy(centre, sec + 0x10, 12);

        if ((int)obj_count == c->tex_index_count && c->tex_indices &&
            centre[0] == c->center[0] && centre[1] == c->center[1] &&
            centre[2] == c->center[2] &&
            (long)off + 0x0C90 + (long)obj_count * 0x90 <= size) {
            uint16_t *ids = (uint16_t *)malloc((size_t)obj_count * sizeof(uint16_t));
            if (!ids) { failed = 1; break; }
            for (uint32_t i = 0; i < obj_count; i++) ids[i] = 0xFFFF;

            const uint8_t *heads = sec + SECMAT_RECORDS + SECMAT_HEADS;
            const uint8_t *desc  = sec + 0x0C90;
            int assigned = 0;
            for (int slot = 0; slot < SECMAT_SLOTS && !failed; slot++) {
                uint16_t id;
                memcpy(&id, sec + SECMAT_TABLE + slot * 2, 2);
                int o = (int8_t)heads[slot];
                for (int guard = 0; o >= 0 && guard <= (int)obj_count; guard++) {
                    if (o >= (int)obj_count || ids[o] != 0xFFFF) { failed = 1; break; }
                    ids[o] = id;
                    assigned++;
                    o = (int8_t)desc[(uint32_t)o * 0x90 + SECMAT_DESC_NEXT];
                }
            }
            if (failed || assigned != (int)obj_count) { free(ids); failed = 1; break; }
            out[ci] = ids;
            ci++;
        }

        off += sec_size;
    }

    if (failed || ci != g_track_data.chunk_count) {
        fprintf(stderr, "[TRACK] material remap abandoned (%d of %d sections "
                        "matched) — per-object textures left as loaded\n",
                ci, g_track_data.chunk_count);
        for (int i = 0; i < g_track_data.chunk_count; i++) free(out[i]);
        free(out);
        free(data);
        return -1;
    }

    for (int i = 0; i < g_track_data.chunk_count; i++) {
        memcpy(g_track_data.chunks[i].tex_indices, out[i],
               (size_t)g_track_data.chunks[i].tex_index_count * sizeof(uint16_t));
        free(out[i]);
    }
    free(out);
    free(data);
    return 0;
}

int rw_load_track(const char *path)
{
    /* Store track directory for file loading (strip filename from path) */
    strncpy(g_track_dir, path, sizeof(g_track_dir) - 1);
    g_track_dir[sizeof(g_track_dir) - 1] = '\0';
    char *last_sep = strrchr(g_track_dir, '\\');
    if (!last_sep) last_sep = strrchr(g_track_dir, '/');
    if (last_sep) *last_sep = '\0';

    /* Unload any existing track first */
    rw_unload_track();

    if (track_load(path, &g_track_data) != 0)
        return -1;
    if (!getenv("B3_NO_MATCHAIN"))
        track_remap_materials(path);
    g_track_authored_spawn[0] = g_track_data.spawn[0];
    g_track_authored_spawn[1] = g_track_data.spawn[1];
    g_track_authored_spawn[2] = g_track_data.spawn[2];

    /* Load textures from static.dat in the same directory */
    {
        char static_path[512];
        strncpy(static_path, path, sizeof(static_path) - 1);
        static_path[sizeof(static_path) - 1] = 0;
        /* Replace "streamed.dat" with "static.dat" */
        char *fname = strrchr(static_path, '\\');
        if (!fname) fname = strrchr(static_path, '/');
        if (fname) {
            strcpy(fname + 1, "static.dat");
        } else {
            strcpy(static_path, "static.dat");
        }
        IDirect3DDevice8 *dev = xbox_GetD3DDevice();
        if (dev) {
            static_tex_load(static_path, dev, &g_static_textures);
        }
    }

    float ground_y = g_track_data.center[1];
    (void)ground_y;

    int created = 0;
    for (int i = 0; i < g_track_data.chunk_count; i++) {
        TrackChunk *chunk = &g_track_data.chunks[i];
        uint32_t vc = chunk->vertex_count;
        if (vc < 3 || !chunk->indices || chunk->index_count < 3) continue;

        /* Convert TrackVertex -> BGV_Vertex for this chunk (shared by all objects) */
        BGV_Vertex *bgv = (BGV_Vertex *)calloc(vc, sizeof(BGV_Vertex));
        if (!bgv) continue;

        for (uint32_t j = 0; j < vc; j++) {
            TrackVertex *tv = &chunk->vertices[j];
            bgv[j].x = tv->x;
            bgv[j].y = tv->y;
            bgv[j].z = tv->z;
            {
                int raw_x = (int)(tv->packed_normal & 0x7FF);
                int raw_y = (int)((tv->packed_normal >> 11) & 0x7FF);
                int raw_z = (int)((tv->packed_normal >> 22) & 0x3FF);
                if (raw_x & 0x400) raw_x -= 0x800;
                if (raw_y & 0x400) raw_y -= 0x800;
                if (raw_z & 0x200) raw_z -= 0x400;
                bgv[j].nx = raw_x / 1023.0f;
                bgv[j].ny = raw_y / 1023.0f;
                bgv[j].nz = raw_z / 511.0f;
            }
            /* Vertex color = baked AO/shadow modulated by directional light.
             * When textured, this provides shadow/lighting; texture provides color. */
            {
                /* Baked vertex shade. The track ships these around 0x40,
                 * not 0x80 — treating 128 as neutral multiplied the whole
                 * world down to ~40% and made every surface read as murky
                 * grey. 0x40 is the neutral value here. */
                uint8_t ao_val = (uint8_t)((tv->color >> 16) & 0xFF);
                float ao = ao_val / 64.0f;
                if (ao > 1.0f) ao = 1.0f;
                float sun_dot = bgv[j].nx * 0.3f + bgv[j].ny * 0.8f + bgv[j].nz * 0.2f;
                if (sun_dot < 0.0f) sun_dot = 0.0f;
                float light = 0.55f + 0.45f * sun_dot;
                float brightness = ao * light;
                if (brightness > 1.0f) brightness = 1.0f;
                uint8_t bv = (uint8_t)(brightness * 255.0f);
                bgv[j].color = 0xFF000000 | (bv << 16) | (bv << 8) | bv;
            }
            bgv[j].u = tv->u;
            bgv[j].v = tv->v;
        }

        /* Create one mesh per object (each has its own strip range and texture) */
        IDirect3DVertexBuffer8 *chunk_vb = NULL;   /* shared by this section */
        int num_objects = chunk->strip_break_count;
        if (num_objects <= 0) num_objects = 1;

        for (int si = 0; si < num_objects && created < MAX_TRACK_CHUNKS; si++) {
            uint32_t strip_start, strip_end;
            if (chunk->strip_breaks && chunk->strip_lens &&
                chunk->strip_break_count > 0) {
                /* Exact run from the object descriptor. The runs are not
                 * contiguous, so the end must come from the length, not from
                 * the next run's start. */
                strip_start = chunk->strip_breaks[si];
                strip_end = strip_start + chunk->strip_lens[si];
            } else {
                strip_start = 0;
                strip_end = chunk->index_count;
            }
            if (strip_end > chunk->index_count) strip_end = chunk->index_count;
            if (strip_start >= strip_end || strip_end - strip_start < 3) continue;

            /* Only triangle strips are geometry. The handful of line-list
             * objects (28 of 3076 in US/C1_V1) would come out as garbage
             * triangles if fed through the strip walker. */
            if (chunk->strip_prims && chunk->strip_prims[si] != 6) continue;

            /* Convert triangle strip to triangle list */
            uint32_t max_tris = (strip_end - strip_start) * 3;
            uint16_t *idxs = (uint16_t *)malloc(max_tris * sizeof(uint16_t));
            if (!idxs) continue;
            uint32_t idx_count = 0;

            static int tri_list = -1;
            if (tri_list < 0) tri_list = getenv("B3_TRILIST") ? 1 : 0;

            uint32_t winding = 0;
            uint32_t step = tri_list ? 3u : 1u;
            for (uint32_t t = strip_start; t + 2 < strip_end; t += step) {
                uint16_t i0 = chunk->indices[t];
                uint16_t i1 = chunk->indices[t + 1];
                uint16_t i2 = chunk->indices[t + 2];

                /* Index 0 is a real vertex reference, not a separator.
                 * Across US/C1_V1 it occurs 169 times and every one of them
                 * is inside object 0, which is simply the object that owns
                 * vertex 0; no other object ever references it. It looked
                 * like a separator only because the old strip starts were
                 * wrong, so strips ran into each other and produced huge
                 * triangles at the joins.
                 *
                 * Each object is now exactly one strip, so the only thing
                 * to drop is genuine degenerates — and those are load
                 * bearing: 51% of the triangles are degenerate, which is
                 * the signature of individual quads welded into one strip
                 * (4 vertices + 2 degenerate joins per quad). */
                if (i0 == i1 || i0 == i2 || i1 == i2) { winding++; continue; }
                if (i0 >= vc || i1 >= vc || i2 >= vc) { winding++; continue; }

                /* No shape or size filtering. The sliver/oversize filters
                 * that used to live here existed only to hide triangles
                 * that bridged between mis-cut strips; with the real per
                 * object runs there is nothing to bridge, and every filter
                 * cost real geometry (large ground, water and plaza polys
                 * are single huge triangles). B3_SLIVER_K is gone with
                 * them. */

                if (winding & 1) {
                    idxs[idx_count++] = i0;
                    idxs[idx_count++] = i2;
                    idxs[idx_count++] = i1;
                } else {
                    idxs[idx_count++] = i0;
                    idxs[idx_count++] = i1;
                    idxs[idx_count++] = i2;
                }
                winding++;
            }

            if (idx_count < 3) { free(idxs); continue; }

            /* Look up the texture for this object.
             *
             * The per-object id is a MATERIAL index, not a texture index —
             * the retail draw loop (sub_001AD050 at 0x001AD0B0) reads it as
             * static_dat[+0x08] + id*0x28 and the bind reads that material's
             * own texture list. Using the id as a direct index into the
             * texture array put the Chgo_Flag animation frames on the road
             * and the building faces, because material 21 owns 10 of them
             * and every id past it was off by nine. */
            IDirect3DTexture8 *tex = NULL;
            if (chunk->tex_indices && si < chunk->tex_index_count) {
                tex = static_tex_for_material(&g_static_textures,
                                              chunk->tex_indices[si]);
            }

            /* One vertex buffer per section, one index buffer per object.
             * The first object uploads the section's vertices; the rest
             * reference that upload. */
            RW_Mesh *mesh = rw_mesh_create_shared(bgv, vc, idxs, idx_count,
                                                  chunk_vb);
            if (mesh) {
                if (!chunk_vb) chunk_vb = mesh->vb;
                mesh->texture = tex;
                g_track_meshes[created] = mesh;
                g_track_bgv_verts[created] = bgv;
                g_track_bgv_idxs[created] = idxs;
                created++;
            } else {
                free(idxs);
            }
        }

        /* If no objects were created from this chunk, free the bgv */
        if (created == 0 || g_track_bgv_verts[created - 1] != bgv) {
            free(bgv);
        }
    }

    g_track_mesh_count = created;
    g_track_loaded = (created > 0) ? 1 : 0;

    /* Say plainly whether the track got its textures. Untextured meshes
     * fall back to the 1x1 white default, so "white buildings, white car"
     * is this number being zero — a texture *assignment* failure, which
     * looks identical on screen to a rendering failure and is not. */
    {
        int textured = 0;
        for (int m = 0; m < created; m++)
            if (g_track_meshes[m] && g_track_meshes[m]->texture) textured++;
        fprintf(stderr, "[TRACK] %d of %d meshes textured (%d static.dat "
                        "textures, %d materials)\n",
                textured, created, g_static_textures.count,
                g_static_textures.mat_count);
    }

    /* B3_ROADTEX=1 names the textures actually bound to the biggest
     * drivable surfaces. "The road has the wrong texture" is otherwise
     * only diagnosable by eye, and the material indirection means the id
     * in the geometry is not the texture number. */
    if (getenv("B3_ROADTEX")) {
        typedef struct { double area; int mat; int chunk, obj; } Cand;
        Cand top[12];
        int ntop = 0;
        for (int i = 0; i < g_track_data.chunk_count; i++) {
            TrackChunk *c = &g_track_data.chunks[i];
            if (!c->strip_breaks || !c->tex_indices) continue;
            for (int o = 0; o < c->strip_break_count; o++) {
                if (c->strip_prims && c->strip_prims[o] != 6) continue;
                const uint32_t s = c->strip_breaks[o], n = c->strip_lens[o];
                if (s + n > c->index_count || n < 3) continue;
                double area = 0.0; int up = 0, tris = 0;
                for (uint32_t t = 0; t + 2 < n; t++) {
                    uint16_t a = c->indices[s+t], b = c->indices[s+t+1], d2 = c->indices[s+t+2];
                    if (a == b || b == d2 || a == d2) continue;
                    if (a >= c->vertex_count || b >= c->vertex_count ||
                        d2 >= c->vertex_count) continue;
                    const TrackVertex *va = &c->vertices[a], *vb = &c->vertices[b],
                                      *vc = &c->vertices[d2];
                    const float e0x = vb->x-va->x, e0y = vb->y-va->y, e0z = vb->z-va->z;
                    const float e1x = vc->x-va->x, e1y = vc->y-va->y, e1z = vc->z-va->z;
                    const float nx = e0y*e1z - e0z*e1y;
                    const float ny = e0z*e1x - e0x*e1z;
                    const float nz = e0x*e1y - e0y*e1x;
                    const double m = sqrt((double)nx*nx + (double)ny*ny + (double)nz*nz);
                    if (m < 1e-9) continue;
                    area += m * 0.5;
                    if (fabs(ny) / m > 0.85) up++;
                    tris++;
                }
                if (!tris || up * 2 < tris) continue;   /* not a floor */
                Cand cd = { area, c->tex_indices[o], i, o };
                int at = ntop;
                while (at > 0 && top[at-1].area < cd.area) { if (at < 12) top[at] = top[at-1]; at--; }
                if (at < 12) { top[at] = cd; if (ntop < 12) ntop++; }
            }
        }
        fprintf(stderr, "[ROADTEX] biggest drivable surfaces and their textures:\n");
        for (int k = 0; k < ntop; k++) {
            const int mat = top[k].mat;
            const int ti = (mat >= 0 && mat < g_static_textures.mat_count)
                         ? g_static_textures.mat_tex[mat] : -1;
            if (ti >= 0 && ti < g_static_textures.count) {
                const StaticTexEntry *e = &g_static_textures.entries[ti];
                fprintf(stderr, "  area %10.0f  material %3d -> tex %3d \"%s\" "
                                "%ux%u fmt 0x%02X %s\n",
                        top[k].area, mat, ti, e->name, e->width, e->height,
                        e->xbox_fmt, e->texture ? "" : "<-- UPLOAD FAILED");
            } else {
                fprintf(stderr, "  area %10.0f  material %3d -> (no texture)\n",
                        top[k].area, mat);
            }
        }
    }

    /* B3_TEXWHERE=<texture name> reports every surface that texture is
     * bound to: where it is, how big, and how horizontal. A wall texture
     * on a large flat floor is a material-mapping error; the same texture
     * on small steep surfaces is just an awning doing its job. */
    /* B3_TEXAT="x,z" names the textures on whatever covers that spot —
     * the inverse query, for "what is that surface I am looking at". */
    if (getenv("B3_TEXAT")) {
        float qx = 0, qz = 0;
        sscanf(getenv("B3_TEXAT"), "%f,%f", &qx, &qz);
        fprintf(stderr, "[TEXAT] surfaces covering (%.0f, %.0f):\n", qx, qz);
        for (int i = 0; i < g_track_data.chunk_count; i++) {
            TrackChunk *c = &g_track_data.chunks[i];
            if (!c->strip_breaks || !c->tex_indices) continue;
            for (int o = 0; o < c->strip_break_count; o++) {
                const uint32_t st = c->strip_breaks[o], n = c->strip_lens[o];
                if (st + n > c->index_count || n < 3) continue;
                float lo[3] = {1e30f,1e30f,1e30f}, hi[3] = {-1e30f,-1e30f,-1e30f};
                for (uint32_t t = 0; t < n; t++) {
                    uint16_t vi = c->indices[st+t];
                    if (vi >= c->vertex_count) continue;
                    const TrackVertex *v = &c->vertices[vi];
                    const float pp[3] = {v->x, v->y, v->z};
                    for (int ax = 0; ax < 3; ax++) {
                        if (pp[ax] < lo[ax]) lo[ax] = pp[ax];
                        if (pp[ax] > hi[ax]) hi[ax] = pp[ax];
                    }
                }
                if (qx < lo[0] || qx > hi[0] || qz < lo[2] || qz > hi[2]) continue;
                const int mat = c->tex_indices[o];
                const int ti = (mat >= 0 && mat < g_static_textures.mat_count)
                             ? g_static_textures.mat_tex[mat] : -1;
                fprintf(stderr, "  y %6.1f..%-6.1f  mat %3d -> \"%s\"\n",
                        lo[1], hi[1], mat,
                        (ti >= 0 && ti < g_static_textures.count)
                            ? g_static_textures.entries[ti].name : "(none)");
            }
        }
    }

    if (getenv("B3_TEXWHERE")) {
        const char *want = getenv("B3_TEXWHERE");
        fprintf(stderr, "[TEXWHERE] surfaces using \"%s\":\n", want);
        int shown = 0;
        for (int i = 0; i < g_track_data.chunk_count && shown < 20; i++) {
            TrackChunk *c = &g_track_data.chunks[i];
            if (!c->strip_breaks || !c->tex_indices) continue;
            for (int o = 0; o < c->strip_break_count && shown < 20; o++) {
                const int mat = c->tex_indices[o];
                const int ti = (mat >= 0 && mat < g_static_textures.mat_count)
                             ? g_static_textures.mat_tex[mat] : -1;
                if (ti < 0 || ti >= g_static_textures.count) continue;
                if (strcmp(g_static_textures.entries[ti].name, want) != 0) continue;
                const uint32_t s = c->strip_breaks[o], n = c->strip_lens[o];
                if (s + n > c->index_count || n < 3) continue;
                double area = 0.0, upness = 0.0;
                float lo[3] = {1e30f,1e30f,1e30f}, hi[3] = {-1e30f,-1e30f,-1e30f};
                int tris = 0;
                for (uint32_t t = 0; t + 2 < n; t++) {
                    uint16_t a = c->indices[s+t], b = c->indices[s+t+1], e = c->indices[s+t+2];
                    if (a == b || b == e || a == e) continue;
                    if (a >= c->vertex_count || b >= c->vertex_count || e >= c->vertex_count) continue;
                    const TrackVertex *va=&c->vertices[a], *vb=&c->vertices[b], *vc=&c->vertices[e];
                    const float e0x=vb->x-va->x, e0y=vb->y-va->y, e0z=vb->z-va->z;
                    const float e1x=vc->x-va->x, e1y=vc->y-va->y, e1z=vc->z-va->z;
                    const float nx=e0y*e1z-e0z*e1y, ny=e0z*e1x-e0x*e1z, nz=e0x*e1y-e0y*e1x;
                    const double m = sqrt((double)nx*nx+(double)ny*ny+(double)nz*nz);
                    if (m < 1e-9) continue;
                    area += m*0.5; upness += fabs(ny)/m; tris++;
                    const TrackVertex *vv[3] = {va, vb, vc};
                    for (int q = 0; q < 3; q++) {
                        const float pp[3] = {vv[q]->x, vv[q]->y, vv[q]->z};
                        for (int ax = 0; ax < 3; ax++) {
                            if (pp[ax] < lo[ax]) lo[ax] = pp[ax];
                            if (pp[ax] > hi[ax]) hi[ax] = pp[ax];
                        }
                    }
                }
                if (!tris) continue;
                fprintf(stderr, "  area %8.0f  |ny| %.2f  centre (%.0f,%.0f,%.0f) "
                                "y span %.1f  %s\n",
                        area, upness/tris,
                        (lo[0]+hi[0])*0.5f, (lo[1]+hi[1])*0.5f, (lo[2]+hi[2])*0.5f,
                        hi[1]-lo[1],
                        (upness/tris > 0.85 && area > 2000.0) ? "<-- large FLAT surface" : "");
                shown++;
            }
        }
        if (!shown) fprintf(stderr, "  (no surface uses it)\n");
    }

    if (getenv("B3_TEXIDX_SCAN")) {
        /* Do the per-object ids stay inside the material array, and what do
         * they name? */
        int lo = 1 << 30, hi = -1, n = 0, over = 0, unres = 0;
        for (int i = 0; i < g_track_data.chunk_count; i++) {
            TrackChunk *c = &g_track_data.chunks[i];
            for (int t = 0; t < c->tex_index_count; t++) {
                int v = c->tex_indices[t];
                if (v < lo) lo = v;
                if (v > hi) hi = v;
                if (v >= g_static_textures.mat_count) over++;
                else if (g_static_textures.mat_tex[v] < 0) unres++;
                n++;
            }
        }
        fprintf(stderr, "[TEXIDX] %d ids, range %d..%d, %d >= matcount %d, "
                        "%d untextured\n",
                n, lo, hi, over, g_static_textures.mat_count, unres);
        for (int i = 0; i < 3 && i < g_track_data.chunk_count; i++) {
            TrackChunk *c = &g_track_data.chunks[i];
            fprintf(stderr, "[TEXIDX] chunk %d objs=%d:", i, c->tex_index_count);
            for (int t = 0; t < c->tex_index_count && t < 12; t++) {
                int v = c->tex_indices[t];
                int x = (v < g_static_textures.mat_count)
                      ? g_static_textures.mat_tex[v] : -1;
                fprintf(stderr, " %u=%s", (unsigned)v,
                        (x >= 0) ? g_static_textures.entries[x].name : "-");
            }
            fprintf(stderr, "\n");
        }
    }

    if (g_track_loaded) {
        fprintf(stderr, "[TRACK] Created %d GPU meshes for track\n", created);

        /* Water sits just below the lowest road surface in the track. Use
         * the 2nd-percentile road height rather than the outright minimum,
         * so one stray vertex under the map cannot sink the whole harbour. */
        {
            float lows[64];
            int nl = 0;
            for (int i = 0; i < g_track_data.chunk_count; i++) {
                TrackChunk *c = &g_track_data.chunks[i];
                float lo = 1e30f;
                for (uint32_t v = 0; v < c->vertex_count; v += 8) {
                    int rn = (int)((c->vertices[v].packed_normal >> 11) & 0x7FF);
                    if (rn & 0x400) rn -= 0x800;
                    if (rn < 512) continue;              /* road-facing only */
                    if (c->vertices[v].y < lo) lo = c->vertices[v].y;
                }
                if (lo < 1e29f && nl < 64) lows[nl++] = lo;
            }
            if (nl > 0) {
                for (int a = 1; a < nl; a++) {           /* insertion sort */
                    float k = lows[a];
                    int b = a - 1;
                    while (b >= 0 && lows[b] > k) { lows[b + 1] = lows[b]; b--; }
                    lows[b + 1] = k;
                }
                g_track_water_y = lows[nl / 50] - 3.0f;
                g_track_has_water = 1;
                fprintf(stderr, "[TRACK] Water surface at Y=%.1f\n", g_track_water_y);
            }
        }
        {   /* Do vertices stay near their own chunk? A decode error in the
             * vertex block shows up as a small fraction landing far away,
             * which is what stretches triangles into spikes. */
            long far_v = 0, tot_v = 0;
            double worst = 0.0;
            for (int i = 0; i < g_track_data.chunk_count; i++) {
                TrackChunk *c = &g_track_data.chunks[i];
                for (uint32_t v = 0; v < c->vertex_count; v++) {
                    float dx = c->vertices[v].x - c->center[0];
                    float dy = c->vertices[v].y - c->center[1];
                    float dz = c->vertices[v].z - c->center[2];
                    double d = sqrt((double)(dx*dx + dy*dy + dz*dz));
                    tot_v++;
                    if (d > 500.0) far_v++;
                    if (d > worst) worst = d;
                }
            }
            fprintf(stderr, "[VERTSPREAD] %ld/%ld verts >500u from chunk centre "
                    "(%.2f%%), worst %.0fu\n",
                    far_v, tot_v, tot_v ? 100.0 * far_v / tot_v : 0.0, worst);
        }
        /* Increase far plane for large track geometry */
        g_scene.camera.zfar = 5000.0f;
        g_scene.camera.znear = 1.0f;

        /* Pick the spawn by measuring actual road density around each
         * candidate. Spine waypoints can land in empty space (US C1_V1's
         * 20% waypoint had 67 vertices within 150 units — the authored
         * spawn had 5671), so trust geometry, not any single source. */
        {
            float cx[6], cz[6], chdg[6];
            int ncand = 0;
            cx[ncand] = g_track_data.spawn[0];
            cz[ncand] = g_track_data.spawn[2];
            chdg[ncand] = 0.0f;  /* refined from nearest spine below */
            ncand++;
            const int fractions[] = { 5, 5*2, 5*3, 5*4 };  /* 20..80% */
            for (unsigned f = 0; f < 4 && g_track_data.spine_count > 5; f++) {
                int sp = (int)((long)g_track_data.spine_count * (f + 1) / 5);
                if (sp >= g_track_data.spine_count) sp = g_track_data.spine_count - 1;
                cx[ncand] = g_track_data.spine[sp].x;
                cz[ncand] = g_track_data.spine[sp].z;
                chdg[ncand] = atan2f(g_track_data.spine[sp].dx,
                                     g_track_data.spine[sp].dz);
                ncand++;
            }
            (void)fractions;

            /* Score = road underfoot MINUS clutter overhead.
             *
             * Ranking purely by road-vertex density picked the busiest
             * geometry on the map — junctions under stacked overpasses —
             * so the race opened inside a dark enclosed canyon even though
             * the same track looks fine a few seconds down the road.
             * Subtracting geometry above the spawn favours open street. */
            int best = 0;
            float best_score = -1e30f;
            for (int ci = 0; ci < ncand; ci++) {
                int road = 0, overhead = 0;
                float ground = 1e30f;
                for (int i = 0; i < g_track_data.chunk_count; i++) {
                    TrackChunk *chunk = &g_track_data.chunks[i];
                    float ccx = chunk->center[0] - cx[ci];
                    float ccz = chunk->center[2] - cz[ci];
                    if (ccx*ccx + ccz*ccz > 500.0f*500.0f) continue;
                    for (uint32_t v = 0; v < chunk->vertex_count; v += 4) {
                        float dx = chunk->vertices[v].x - cx[ci];
                        float dz = chunk->vertices[v].z - cz[ci];
                        if (dx*dx + dz*dz > 150.0f*150.0f) continue;
                        int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
                        if (raw_ny & 0x400) raw_ny -= 0x800;
                        if (raw_ny / 1023.0f >= 0.5f) {
                            road++;
                            if (chunk->vertices[v].y < ground)
                                ground = chunk->vertices[v].y;
                        }
                    }
                }
                /* Second pass: anything sitting well above the road here. */
                if (ground < 1e29f) {
                    for (int i = 0; i < g_track_data.chunk_count; i++) {
                        TrackChunk *chunk = &g_track_data.chunks[i];
                        float ccx = chunk->center[0] - cx[ci];
                        float ccz = chunk->center[2] - cz[ci];
                        if (ccx*ccx + ccz*ccz > 500.0f*500.0f) continue;
                        for (uint32_t v = 0; v < chunk->vertex_count; v += 4) {
                            float dx = chunk->vertices[v].x - cx[ci];
                            float dz = chunk->vertices[v].z - cz[ci];
                            if (dx*dx + dz*dz > 60.0f*60.0f) continue;
                            if (chunk->vertices[v].y > ground + 12.0f) overhead++;
                        }
                    }
                }
                float score = (float)road - 2.0f * (float)overhead;
                fprintf(stderr, "  [TRACK] spawn cand %d (%.0f,%.0f): road=%d "
                        "overhead=%d score=%.0f\n",
                        ci, cx[ci], cz[ci], road, overhead, score);
                if (score > best_score) { best_score = score; best = ci; }
            }
            int best_n = (int)best_score;

            g_track_spawn_x = cx[best];
            g_track_spawn_z = cz[best];
            g_track_spawn_hdg = chdg[best];

            /* Authored spawn has no direction — face the nearest spine
             * waypoint's direction so the car starts along the road. */
            if (best == 0 && g_track_data.spine_count > 0) {
                float nd2 = 1e30f; int ni = 0;
                for (int i = 0; i < g_track_data.spine_count; i++) {
                    float dx = g_track_data.spine[i].x - g_track_spawn_x;
                    float dz = g_track_data.spine[i].z - g_track_spawn_z;
                    if (dx*dx + dz*dz < nd2) { nd2 = dx*dx + dz*dz; ni = i; }
                }
                g_track_spawn_hdg = atan2f(g_track_data.spine[ni].dx,
                                           g_track_data.spine[ni].dz);
            }
            fprintf(stderr, "  [TRACK] Spawn: candidate %d pos=(%.1f, %.1f) "
                    "hdg=%.1f° (%d road verts nearby)\n",
                    best, g_track_spawn_x, g_track_spawn_z,
                    g_track_spawn_hdg * 57.2958f, best_n);
        }
        g_track_mode = 1;

        /* Find actual road surface Y at spawn XZ by scanning upward-facing
         * vertices. Scan at the CHOSEN spawn (usually a spine waypoint) —
         * scanning g_track_data.spawn here paired a Y from one part of the
         * track with an X/Z from another, dropping the car underground. */
        {
            float sx = g_track_spawn_x;
            float sz = g_track_spawn_z;
            float road_y = g_track_data.spawn[1]; /* fallback */
            float best_d2 = 1e30f;
            for (int i = 0; i < g_track_data.chunk_count; i++) {
                TrackChunk *chunk = &g_track_data.chunks[i];
                float cdx = chunk->center[0] - sx;
                float cdz = chunk->center[2] - sz;
                if (cdx*cdx + cdz*cdz > 500.0f*500.0f) continue;
                for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
                    /* Check if vertex normal points up (road surface) */
                    int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
                    if (raw_ny & 0x400) raw_ny -= 0x800;
                    float ny = raw_ny / 1023.0f;
                    if (ny < 0.5f) continue; /* skip walls/ceilings */
                    float vdx = chunk->vertices[v].x - sx;
                    float vdz = chunk->vertices[v].z - sz;
                    float d2 = vdx*vdx + vdz*vdz;
                    if (d2 < best_d2) {
                        best_d2 = d2;
                        road_y = chunk->vertices[v].y;
                    }
                }
            }
            g_track_spawn_y = road_y;
            fprintf(stderr, "[TRACK] Road surface Y at spawn: %.1f (section center Y was %.1f)\n",
                    road_y, g_track_data.spawn[1]);
        }

        if (g_track_data.spine && g_track_data.spine_count >= 2) {
            g_track_spawn_hdg = atan2f(g_track_data.spine[0].dx, g_track_data.spine[0].dz);
        } else {
            g_track_spawn_hdg = 0.0f;
        }
        fprintf(stderr, "[TRACK] Spawn: X=%.1f Y=%.1f Z=%.1f hdg=%.1f°\n",
                g_track_spawn_x, g_track_spawn_y, g_track_spawn_z,
                g_track_spawn_hdg * 57.2958f);
    }

    return g_track_loaded ? 0 : -1;
}

void rw_unload_track(void)
{
    fprintf(stderr, "[TRACK] Unloading %d meshes...\n", g_track_mesh_count);

    /* Collect unique bgv pointers to free (avoid double-free of shared arrays) */
    void **unique_bgv = NULL;
    int unique_count = 0;
    if (g_track_mesh_count > 0) {
        unique_bgv = (void **)calloc(g_track_mesh_count, sizeof(void *));
        for (int i = 0; i < g_track_mesh_count; i++) {
            void *p = g_track_bgv_verts[i];
            if (!p) continue;
            int found = 0;
            for (int j = 0; j < unique_count; j++) {
                if (unique_bgv[j] == p) { found = 1; break; }
            }
            if (!found) unique_bgv[unique_count++] = p;
        }
    }

    for (int i = 0; i < g_track_mesh_count; i++) {
        if (g_track_meshes[i]) g_track_meshes[i]->texture = NULL;
        rw_mesh_destroy(g_track_meshes[i]);
        g_track_meshes[i] = NULL;
        g_track_bgv_verts[i] = NULL;
        free(g_track_bgv_idxs[i]);
        g_track_bgv_idxs[i] = NULL;
    }

    /* Free unique bgv arrays */
    for (int i = 0; i < unique_count; i++) {
        free(unique_bgv[i]);
    }
    free(unique_bgv);

    g_track_mesh_count = 0;
    g_track_loaded = 0;
    track_free(&g_track_data);
    static_tex_release(&g_static_textures);
    fprintf(stderr, "[TRACK] Unload complete\n");
}

int rw_has_track(void)
{
    return g_track_loaded;
}

StaticTexDict *rw_get_static_textures(void)
{
    return g_track_loaded ? &g_static_textures : NULL;
}

void rw_toggle_track(void)
{
    g_track_visible = !g_track_visible;
    fprintf(stderr, "  [RW3D] Track geometry %s\n",
            g_track_visible ? "VISIBLE" : "HIDDEN");
}

/* ── Gameplay Integration ────────────────────────────────────── */

int rw_renderer_init(void)
{
    if (g_initialized) return 0;
    rw_scene_init(&g_scene);
    g_initialized = 1;
    fprintf(stderr, "  [RW3D] 3D renderer initialized\n");
    return 0;
}

void rw_renderer_shutdown(void)
{
    if (!g_initialized) return;

    /* Release track geometry */
    rw_unload_track();

    /* Release traffic meshes */
    for (int i = 0; i < g_traffic_mesh_count; i++) {
        rw_mesh_destroy(g_traffic_meshes[i]);
        g_traffic_meshes[i] = NULL;
    }
    g_traffic_mesh_count = 0;

    /* Release player mesh */
    rw_mesh_destroy(g_player_mesh);
    g_player_mesh = NULL;

    /* Release procedural meshes */
    rw_mesh_destroy(g_road_mesh);
    g_road_mesh = NULL;
    rw_mesh_destroy(g_ground_mesh);
    g_ground_mesh = NULL;

    g_initialized = 0;
    fprintf(stderr, "  [RW3D] 3D renderer shutdown\n");
}

void rw_gameplay_register_models(const BGV_Model *player_model,
                                 const BGV_Model *traffic_models,
                                 int traffic_count)
{
    /* Create player mesh */
    if (player_model && player_model->vertices) {
        g_player_mesh = rw_mesh_create_from_bgv(player_model, NULL);
        if (g_player_mesh)
            fprintf(stderr, "  [RW3D] Player mesh: %u verts, %u tris\n",
                    g_player_mesh->vertex_count, g_player_mesh->index_count / 3);
    }

    /* Create traffic meshes */
    g_traffic_mesh_count = 0;
    for (int i = 0; i < traffic_count && i < MAX_TRAFFIC_MESHES; i++) {
        if (traffic_models[i].vertices) {
            g_traffic_meshes[i] = rw_mesh_create_from_bgv(&traffic_models[i], NULL);
            if (g_traffic_meshes[i])
                g_traffic_mesh_count++;
        }
    }
    fprintf(stderr, "  [RW3D] Registered %d traffic meshes\n", g_traffic_mesh_count);
}

/* ── Traffic ─────────────────────────────────────────────────────
 * Simple ambient traffic for drive mode: cars placed on the road near
 * the player, greedily steering to stay over road-surface vertices
 * (there is no usable path network — the "spine" is not world-space).
 * Same-direction and oncoming cars; respawn when lost or left behind. */

#define RW_TRAFFIC_N 5

typedef struct {
    float x, z, y;
    float hdg, spd;
    int   mesh;       /* index into g_traffic_meshes */
    int   alive;
} RWTraffic;

static RWTraffic g_traffic[RW_TRAFFIC_N];

/* Ground height near a point: Y of the nearest upward-facing vertex
 * within range, or `fallback` when nothing is close enough. */
static float rw_ground_y_at(float x, float z, float fallback)
{
    float best_d2 = 1e30f, y = fallback;
    for (int i = 0; i < g_track_data.chunk_count; i++) {
        TrackChunk *chunk = &g_track_data.chunks[i];
        float cdx = chunk->center[0] - x;
        float cdz = chunk->center[2] - z;
        if (cdx*cdx + cdz*cdz > 400.0f*400.0f) continue;
        for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
            int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
            if (raw_ny & 0x400) raw_ny -= 0x800;
            if (raw_ny < 512) continue;
            float dx = chunk->vertices[v].x - x;
            float dz = chunk->vertices[v].z - z;
            float d2 = dx*dx + dz*dz;
            if (d2 < best_d2) { best_d2 = d2; y = chunk->vertices[v].y; }
        }
    }
    return best_d2 < 60.0f * 60.0f ? y : fallback;
}

/* Squared XZ distance to the nearest road-surface vertex. */
static float rw_road_dist2(float x, float z)
{
    float best = 1e30f;
    for (int i = 0; i < g_track_data.chunk_count && best > 4.0f; i++) {
        TrackChunk *chunk = &g_track_data.chunks[i];
        float cdx = chunk->center[0] - x;
        float cdz = chunk->center[2] - z;
        if (cdx*cdx + cdz*cdz > 400.0f*400.0f) continue;
        for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
            int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
            if (raw_ny & 0x400) raw_ny -= 0x800;
            if (raw_ny < 512) continue;
            float dx = chunk->vertices[v].x - x;
            float dz = chunk->vertices[v].z - z;
            float d2 = dx*dx + dz*dz;
            if (d2 < best) best = d2;
            if (best <= 4.0f) break;
        }
    }
    return best;
}

static void rw_traffic_spawn(RWTraffic *t, const float car[3],
                             float player_hdg, int idx)
{
    int oncoming = (idx >= 3);
    float dist = 70.0f + (float)idx * 45.0f;
    float side = (idx & 1) ? 4.5f : -4.5f;
    float fx = sinf(player_hdg), fz = cosf(player_hdg);

    t->x = car[0] + fx * dist + fz * side;
    t->z = car[2] + fz * dist - fx * side;
    t->y = car[1];
    t->hdg = oncoming ? player_hdg + 3.14159265f : player_hdg;
    t->spd = oncoming ? 13.0f + (float)idx * 2.0f
                      : 16.0f + (float)idx * 3.0f;
    t->mesh = g_traffic_mesh_count > 0 ? idx % g_traffic_mesh_count : 0;
    /* Only come alive on actual road; otherwise retry next respawn check */
    t->alive = rw_road_dist2(t->x, t->z) < 45.0f * 45.0f;
}

static void rw_traffic_update_draw(const float car[3], float player_hdg,
                                   float dt)
{
    if (g_traffic_mesh_count == 0 || !g_track_loaded) return;

    static int frames = 0;
    if (++frames == 300) {
        int alive = 0;
        for (int i = 0; i < RW_TRAFFIC_N; i++) alive += g_traffic[i].alive;
        fprintf(stderr, "[TRAFFIC] %d/%d alive; car0 rel=(%.0f,%.0f)\n",
                alive, RW_TRAFFIC_N,
                g_traffic[0].x - car[0], g_traffic[0].z - car[2]);
    }

    for (int i = 0; i < RW_TRAFFIC_N; i++) {
        RWTraffic *t = &g_traffic[i];

        float pdx = t->x - car[0], pdz = t->z - car[2];
        if (!t->alive || pdx*pdx + pdz*pdz > 350.0f * 350.0f) {
            rw_traffic_spawn(t, car, player_hdg, i);
            if (!t->alive) continue;
        }

        /* Greedy road-following: probe ahead at three headings and take
         * the one that stays closest to road geometry. */
        float best_h = t->hdg, best_d2 = 1e30f;
        for (int c = -1; c <= 1; c++) {
            float h = t->hdg + (float)c * 0.28f;
            float lookahead = t->spd * 0.8f + 6.0f;
            float d2 = rw_road_dist2(t->x + sinf(h) * lookahead,
                                     t->z + cosf(h) * lookahead);
            if (d2 < best_d2) { best_d2 = d2; best_h = h; }
        }
        if (best_d2 > 45.0f * 45.0f) {   /* road ends every way — reset */
            t->alive = 0;
            continue;
        }
        t->hdg = best_h;
        t->x += sinf(t->hdg) * t->spd * dt;
        t->z += cosf(t->hdg) * t->spd * dt;
        t->y += (car[1] - t->y) * 0.05f;   /* soft level-follow */

        float rot_m[16], trans_m[16], world_m[16];
        mat4_rotation_y(rot_m, t->hdg);
        mat4_translation(trans_m, t->x, t->y - 1.0f, t->z);
        mat4_multiply(world_m, rot_m, trans_m);   /* v * R * T: local rotate, then place */
        rw_render_mesh(g_traffic_meshes[t->mesh], world_m);
    }
}

/* Debug: report geometry distribution near a point (spawn diagnosis). */
int rw_debug_scan_spawn(float x, float z, float radius)
{
    int total = 0, road = 0;
    float ymin = 1e30f, ymax = -1e30f, road_ymin = 1e30f, road_ymax = -1e30f;
    for (int i = 0; i < g_track_data.chunk_count; i++) {
        TrackChunk *chunk = &g_track_data.chunks[i];
        for (uint32_t v = 0; v < chunk->vertex_count; v++) {
            float dx = chunk->vertices[v].x - x;
            float dz = chunk->vertices[v].z - z;
            if (dx*dx + dz*dz > radius*radius) continue;
            float y = chunk->vertices[v].y;
            total++;
            if (y < ymin) ymin = y;
            if (y > ymax) ymax = y;
            int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
            if (raw_ny & 0x400) raw_ny -= 0x800;
            if (raw_ny / 1023.0f >= 0.5f) {
                road++;
                if (y < road_ymin) road_ymin = y;
                if (y > road_ymax) road_ymax = y;
            }
        }
    }
    fprintf(stderr, "[SCAN] r=%.0f around (%.0f,%.0f): %d verts y=[%.1f..%.1f], "
            "%d road-facing y=[%.1f..%.1f]\n",
            radius, x, z, total, ymin, ymax, road, road_ymin, road_ymax);
    return total;
}

int rw_is_3d_mode(void)
{
    return g_3d_mode;
}

void rw_toggle_3d_mode(void)
{
    g_3d_mode = !g_3d_mode;
    fprintf(stderr, "  [RW3D] 3D rendering mode %s\n", g_3d_mode ? "ON" : "OFF");
}

void rw_gameplay_render(void)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev || !g_initialized) return;

    /* ── Dual mode: fly camera (explore) + drive mode (car on track) ── */
    static float fly_x = 0, fly_y = 50, fly_z = 0;
    static float fly_yaw = 0, fly_pitch = -0.3f;
    static int fly_inited = 0;
    static int drive_mode = 0;  /* 0 = fly, 1 = driving */

    if (!fly_inited && g_track_loaded) {
        fly_x = g_track_data.center[0];
        fly_y = g_track_data.center[1] + 200.0f;
        fly_z = g_track_data.center[2];
        fly_pitch = -0.5f;
        fly_yaw = g_track_spawn_hdg;
        fly_inited = 1;
        fprintf(stderr, "[FLY] Init at center=(%.0f, %.0f, %.0f)\n", fly_x, fly_y, fly_z);
    }

    /* When a race/crash mode is active from the menu, force drive mode */
    {
        extern int fe_menu_is_racing(void);
        if (fe_menu_is_racing() && !drive_mode) {
            drive_mode = 1;
            fprintf(stderr, "[FLY] Forced drive mode (race active)\n");
        }
    }

    /* F key: toggle between fly and drive mode.
     * In fly mode, F drops the car at current position.
     * In drive mode, F returns to fly mode. */
    {
        static int f_prev = 0;
        int f_now = (GetAsyncKeyState('F') & 0x8000) ? 1 : 0;
        if (f_now && !f_prev) {
            if (!drive_mode) {
                /* Drop car at current fly position */
                drive_mode = 1;
                g_track_spawn_x = fly_x;
                g_track_spawn_y = fly_y;
                g_track_spawn_z = fly_z;
                g_track_spawn_hdg = fly_yaw;
                /* Write spawn to physics */
                RW_MEMF(PHYS_PX) = fly_x;
                RW_MEMF(PHYS_PY) = fly_z;
                RW_MEMF(PHYS_HDG) = fly_yaw;
                RW_MEMF(PHYS_SPD) = 0.0f;
                fprintf(stderr, "[FLY] Dropped car at (%.0f, %.0f, %.0f) hdg=%.0f°\n",
                        fly_x, fly_y, fly_z, fly_yaw * 57.2958f);
            } else {
                /* Return to fly mode at current car position */
                drive_mode = 0;
                fly_x = RW_MEMF(PHYS_PX);
                fly_y = g_track_spawn_y + 20.0f;
                fly_z = RW_MEMF(PHYS_PY);
                fly_yaw = RW_MEMF(PHYS_HDG);
                fly_pitch = -0.3f;
                fprintf(stderr, "[FLY] Returned to fly mode\n");
            }
        }
        f_prev = f_now;
    }

    /* T key: cycle tracks (reset to fly mode) */
    /* (handled in main.c, but reset fly_inited when track changes) */
    {
        static float last_cx = 0, last_cz = 0;
        if (g_track_loaded && (g_track_data.center[0] != last_cx || g_track_data.center[2] != last_cz)) {
            last_cx = g_track_data.center[0];
            last_cz = g_track_data.center[2];
            fly_x = g_track_data.center[0];
            fly_y = g_track_data.center[1] + 200.0f;
            fly_z = g_track_data.center[2];
            fly_pitch = -0.5f;
            /* Never kick an active race back to fly mode: this fires on the
             * first frame after a race's track load, and the fly frame that
             * follows overwrites the physics body with the fly-camera
             * position — teleporting the car from the start line to a
             * hover over the track center. */
            {
                extern int fe_menu_is_racing(void);
                if (!fe_menu_is_racing()) drive_mode = 0;
            }
        }
    }

    float car_pos[3], cam_hdg, spd;

    if (drive_mode) {
        /* ── DRIVE MODE: physics-controlled car ── */
        float px = RW_MEMF(PHYS_PX);
        float py = RW_MEMF(PHYS_PY);
        float hdg = RW_MEMF(PHYS_HDG);
        spd = RW_MEMF(PHYS_SPD);

        /* Ground-follow with level continuity: prefer road vertices near
         * the car's CURRENT height. Snapping to the plain XZ-nearest
         * vertex teleports the camera to the street below whenever the
         * car crosses an elevated section (stacked roads are everywhere
         * on the waterfront track). */
        static float drive_y = 0.0f;
        static int drive_y_init = 0;
        if (!drive_y_init) { drive_y = g_track_spawn_y; drive_y_init = 1; }

        car_pos[0] = px;
        car_pos[2] = py;

        if (g_track_loaded) {
            float best_d2 = 1e30f, best_y = drive_y;
            float best_any_d2 = 1e30f, best_any_y = drive_y;
            for (int i = 0; i < g_track_data.chunk_count; i++) {
                float cdx = g_track_data.chunks[i].center[0] - px;
                float cdz = g_track_data.chunks[i].center[2] - py;
                if (cdx*cdx + cdz*cdz > 300.0f*300.0f) continue;
                TrackChunk *chunk = &g_track_data.chunks[i];
                for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
                    int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
                    if (raw_ny & 0x400) raw_ny -= 0x800;
                    if (raw_ny < 512) continue; /* ny < 0.5 = not road */
                    float vdx = chunk->vertices[v].x - px;
                    float vdz = chunk->vertices[v].z - py;
                    float d2 = vdx*vdx + vdz*vdz;
                    float vy = chunk->vertices[v].y;
                    if (d2 < best_any_d2) { best_any_d2 = d2; best_any_y = vy; }
                    if (vy > drive_y - 8.0f && vy < drive_y + 8.0f && d2 < best_d2) {
                        best_d2 = d2; best_y = vy;
                    }
                }
            }
            /* Same-level surface wins; fall back to any surface only when
             * the current level has nothing within grazing distance. */
            float target_y = (best_d2 < 60.0f * 60.0f) ? best_y : best_any_y;
            drive_y += (target_y - drive_y) * 0.2f;   /* smooth ramps */
        }
        car_pos[1] = drive_y + 1.0f;

        cam_hdg = hdg;

    } else {
        /* ── FLY MODE: free camera ── */
        float fly_speed = 5.0f;
        if (GetAsyncKeyState(VK_TAB) & 0x8000) fly_speed = 50.0f;

        float dx_fwd = sinf(fly_yaw) * fly_speed;
        float dz_fwd = cosf(fly_yaw) * fly_speed;
        float dx_right = cosf(fly_yaw) * fly_speed;
        float dz_right = -sinf(fly_yaw) * fly_speed;

        if (GetAsyncKeyState('W') & 0x8000) { fly_x += dx_fwd; fly_z += dz_fwd; }
        if (GetAsyncKeyState('S') & 0x8000) { fly_x -= dx_fwd; fly_z -= dz_fwd; }
        if (GetAsyncKeyState('A') & 0x8000) { fly_x += dx_right; fly_z += dz_right; }
        if (GetAsyncKeyState('D') & 0x8000) { fly_x -= dx_right; fly_z -= dz_right; }
        if (GetAsyncKeyState(VK_SPACE) & 0x8000) fly_y += fly_speed;
        if (GetAsyncKeyState(VK_CONTROL) & 0x8000) fly_y -= fly_speed;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) fly_yaw -= 0.03f;
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) fly_yaw += 0.03f;
        if (GetAsyncKeyState(VK_UP) & 0x8000) fly_pitch += 0.02f;
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) fly_pitch -= 0.02f;
        if (fly_pitch > 1.5f) fly_pitch = 1.5f;
        if (fly_pitch < -1.5f) fly_pitch = -1.5f;

        RW_MEMF(PHYS_PX) = fly_x;
        RW_MEMF(PHYS_PY) = fly_z;

        car_pos[0] = fly_x; car_pos[1] = fly_y; car_pos[2] = fly_z;
        cam_hdg = fly_yaw;
        spd = fly_speed;
    }

    /* Sky.
     *
     * The time-of-day cycle is keyed to world Z over a 3000-unit period,
     * which made sense when the world was an endless procedural road and
     * distance was the only clock. On a real track it means driving north
     * turns it to night and driving back turns it to day — US/C1_V1 spans
     * z 318..2157, so a single lap crosses more than half the cycle. The
     * city's lighting is baked into its vertex colours in daylight, so the
     * result is a daylit city under a midnight sky, which reads as the
     * graphics having failed rather than as dusk.
     *
     * Real tracks therefore get a fixed daylight sky. B3_TOD=<0..1> pins
     * any phase for a look, and the cycle still runs for the procedural
     * bring-up world where it belongs. Per-track skies belong in
     * enviro.dat (184 KB per track, still undecoded). */
    if (g_track_loaded) {
        const char *tod = getenv("B3_TOD");
        tod_update(tod ? (float)atof(tod) * 3000.0f : 0.375f * 3000.0f);
    } else {
        tod_update(car_pos[2]);
    }
    render_sky_gradient(dev);

    /* Camera setup */
    if (drive_mode) {
        /* Chase camera behind car — a bit higher than the original
         * bring-up values so grazing angles stop smearing the road. */
        float chase_dist = 13.0f + spd * 0.04f;
        float chase_height = 6.5f + spd * 0.02f;
        /* Diagnostic overrides: pull the camera back/up to inspect the
         * world from a vantage that cannot be inside anything. */
        { const char *cd = getenv("B3_CAM_DIST"), *ch = getenv("B3_CAM_HEIGHT");
          if (cd) chase_dist = (float)atof(cd);
          if (ch) chase_height = (float)atof(ch); }
        if (getenv("B3_CAM_BIRD")) {
            /* Map view straight down. up must not be parallel to the view
             * direction or the basis degenerates, so use +Z as up here. */
            float alt = (float)atof(getenv("B3_CAM_BIRD"));
            if (alt < 10.0f) alt = 300.0f;
            g_scene.camera.position[0] = car_pos[0];
            g_scene.camera.position[1] = car_pos[1] + alt;
            g_scene.camera.position[2] = car_pos[2];
            g_scene.camera.target[0] = car_pos[0];
            g_scene.camera.target[1] = car_pos[1];
            g_scene.camera.target[2] = car_pos[2];
            g_scene.camera.up[0] = 0.0f;
            g_scene.camera.up[1] = 0.0f;
            g_scene.camera.up[2] = 1.0f;
        } else if (getenv("B3_CAM_FIXED")) {
            /* Fully controlled camera in world axes — isolates the view
             * matrix from the chase logic. */
            g_scene.camera.position[0] = car_pos[0];
            g_scene.camera.position[1] = car_pos[1] + 25.0f;
            g_scene.camera.position[2] = car_pos[2] - 50.0f;
            g_scene.camera.target[0] = car_pos[0];
            g_scene.camera.target[1] = car_pos[1];
            g_scene.camera.target[2] = car_pos[2];
            g_scene.camera.up[0] = 0.0f;
            g_scene.camera.up[1] = 1.0f;
            g_scene.camera.up[2] = 0.0f;
        } else
        rw_camera_set_chase(&g_scene.camera, car_pos, cam_hdg, chase_dist, chase_height);
        /* Terrain rising behind the car (spawn embankments, ramps) puts
         * the chase position underground — clamp to ground clearance. */
        if (g_track_loaded) {
            float gy = rw_ground_y_at(g_scene.camera.position[0],
                                      g_scene.camera.position[2],
                                      g_scene.camera.position[1]);
            if (g_scene.camera.position[1] < gy + 2.0f)
                g_scene.camera.position[1] = gy + 2.0f;
        }
        if (getenv("B3_CAM_SCAN")) {
            static int cf = 0;
            if (cf++ % 120 == 0) {
                float camx = g_scene.camera.position[0];
                float camy = g_scene.camera.position[1];
                float camz = g_scene.camera.position[2];
                int near5 = 0, road5 = 0;
                for (int i = 0; i < g_track_data.chunk_count; i++) {
                    TrackChunk *ch = &g_track_data.chunks[i];
                    float ccx = ch->center[0] - camx, ccz = ch->center[2] - camz;
                    if (ccx*ccx + ccz*ccz > 400.0f*400.0f) continue;
                    for (uint32_t v = 0; v < ch->vertex_count; v++) {
                        float dx = ch->vertices[v].x - camx;
                        float dy = ch->vertices[v].y - camy;
                        float dz = ch->vertices[v].z - camz;
                        if (dx*dx + dy*dy + dz*dz > 25.0f) continue;
                        near5++;
                        int rn = (int)((ch->vertices[v].packed_normal >> 11) & 0x7FF);
                        if (rn & 0x400) rn -= 0x800;
                        if (rn >= 512) road5++;
                    }
                }
                fprintf(stderr, "[CAM] car=(%.0f,%.0f,%.0f) cam=(%.0f,%.0f,%.0f) "
                        "groundY=%.1f verts<5u=%d (road %d)\n",
                        car_pos[0], car_pos[1], car_pos[2], camx, camy, camz,
                        rw_ground_y_at(camx, camz, -999.0f), near5, road5);
            }
        }
        rw_camera_update_matrices(&g_scene.camera);
    } else {
        /* Free-fly camera with pitch */
        float look_x = fly_x + sinf(fly_yaw) * cosf(fly_pitch) * 10.0f;
        float look_y = fly_y + sinf(fly_pitch) * 10.0f;
        float look_z = fly_z + cosf(fly_yaw) * cosf(fly_pitch) * 10.0f;
        g_scene.camera.position[0] = fly_x;
        g_scene.camera.position[1] = fly_y;
        g_scene.camera.position[2] = fly_z;
        mat4_lookat(g_scene.camera.view_matrix,
                    fly_x, fly_y, fly_z,
                    look_x, look_y, look_z,
                    0, 1, 0);
        mat4_perspective(g_scene.camera.proj_matrix,
                         g_scene.camera.fov_y, g_scene.camera.aspect,
                         g_scene.camera.znear, g_scene.camera.zfar);
    }

    D3DMATRIX view_mat, proj_mat;
    memcpy(&view_mat, g_scene.camera.view_matrix, 64);
    memcpy(&proj_mat, g_scene.camera.proj_matrix, 64);
    dev->lpVtbl->SetTransform(dev, D3DTS_VIEW, &view_mat);
    dev->lpVtbl->SetTransform(dev, D3DTS_PROJECTION, &proj_mat);

    /* 3D render state */
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZWRITEENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);

    /* ── Track geometry (replaces procedural road when loaded) ── */
    /* Water first: it is the backdrop the quaysides sit in. */
    if (g_track_loaded)
        render_water(dev, g_scene.camera.position[0], g_scene.camera.position[2]);

    if (g_track_loaded && g_track_visible) {
        /* Render all track chunks with identity world matrix
         * (track vertices are already in world space) */
        float ident[16];
        mat4_identity(ident);

        for (int i = 0; i < g_track_mesh_count; i++) {
            RW_Mesh *tm = g_track_meshes[i];
            if (!tm) continue;

            /* Distance culling: skip chunks too far from camera */
            TrackChunk *chunk = &g_track_data.chunks[i];
            float dx = chunk->center[0] - g_scene.camera.position[0];
            float dz = chunk->center[2] - g_scene.camera.position[2];
            float dist2 = dx * dx + dz * dz;
            float cull_dist = g_scene.camera.zfar * 0.8f;
            if (dist2 > cull_dist * cull_dist) continue;

            rw_render_mesh(tm, ident);
        }

        /* No ground plane on real tracks — track geometry IS the ground */
    } else if (getenv("B3_PROCEDURAL")) {
        /* Procedural road + ground + mountains — the pre-track-loader
         * bring-up world. Off by default: drawing it when the real track
         * failed to load disguises a load failure as a rendering
         * regression. It looks like an older build of the port, which is
         * exactly how it gets reported, and it sent this session chasing
         * texture bugs that were not there. A track that does not load
         * should look broken, not old. */
        float rc = RW_MEMF(ROAD_CURVE_ADDR);
        render_ground_plane(dev, fly_x, fly_z);
        render_road(dev, fly_x, fly_z);
        render_mountains(dev, fly_x, fly_z);
        render_roadside_objects(dev, fly_x, fly_z, rc);
        render_tunnel(dev, fly_x, fly_z, rc);
    } else {
        static int said = 0;
        if (!said++)
            fprintf(stderr, "[TRACK] No track resident — drawing nothing. "
                            "Set B3_PROCEDURAL=1 for the old bring-up "
                            "scenery.\n");
    }

    /* ── Player car (only in drive mode) ── */
    if (drive_mode && g_player_mesh) {
        float rot_m[16], trans_m[16], world_m[16];
        mat4_rotation_y(rot_m, cam_hdg);
        mat4_translation(trans_m, car_pos[0], car_pos[1], car_pos[2]);
        /* Row-vector convention: v * R * T — rotate the model locally,
         * THEN place it. T*R rotated the placed position around the world
         * origin, which flung the car offscreen as the heading changed. */
        mat4_multiply(world_m, rot_m, trans_m);
        rw_render_mesh(g_player_mesh, world_m);
    }

    /* ── Ambient traffic ── */
    if (drive_mode)
        rw_traffic_update_draw(car_pos, cam_hdg, 1.0f / 60.0f);

    /* ── HUD overlay ── */
    render_3d_hud(dev);

    /* ── Rain weather (screen-space, drawn last) ── */
    render_3d_rain(dev);
}
