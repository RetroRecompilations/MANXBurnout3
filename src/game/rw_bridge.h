/**
 * RenderWare → D3D11 Rendering Bridge
 *
 * Connects the game's original RenderWare rendering pipeline to our
 * D3D8→D3D11 compatibility layer. Instead of going through Xbox D3D8LTCG
 * → NV2A push buffers, we intercept at the RW display driver level and
 * route rendering calls through our D3D8 device.
 *
 * Key hookup points:
 *   sub_00351090 (RwCameraShowRaster) → rw_bridge_camera_render()
 *   CameraBeginUpdate (0x01)          → rw_bridge_camera_begin()
 *   CameraEndUpdate   (0x0B)          → rw_bridge_camera_end()
 *   RasterClear        (0x0F)          → rw_bridge_raster_clear()
 *   im2d render primitives             → rw_bridge_im2d_render_*()
 */
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ── RW state initialization ──────────────────────────────── */

/** Initialize RW camera, device context, and game render context
 *  with valid default state so gen code doesn't crash on
 *  uninitialized pointer chains. Call after xbox_MemoryLayoutInit(). */
void rw_state_init(void);

/* ── Frame lifecycle ───────────────────────────────────────── */

/** Called from sub_00351090: render the 3D scene through our D3D8 device.
 *  Reads RW camera state from Xbox memory and renders track/vehicles.
 *  Returns 1 if rendering was performed. */
int rw_bridge_camera_render(uint32_t camera_va);

/** Called at start of RW CameraBeginUpdate: BeginScene + Clear + viewport. */
void rw_bridge_camera_begin(uint32_t camera_va);

/** Called at end of RW CameraEndUpdate: EndScene. */
void rw_bridge_camera_end(uint32_t camera_va);

/** Reset per-frame state. Called once per game loop iteration. */
void rw_bridge_new_frame(void);

/** Returns 1 if the bridge rendered this frame (used by game_frame_pump
 *  to avoid double-rendering). */
int rw_bridge_frame_rendered(void);

/* ── 2D rendering (im2d) ──────────────────────────────────── */

/** RW im2d pre-transformed vertex (D3DFVF_XYZRHW|DIFFUSE|TEX1). */
typedef struct RwIm2DVertex {
    float x, y, z, rhw;
    uint32_t color;      /* D3DCOLOR (ARGB) */
    float u, v;
} RwIm2DVertex;

/** Render pre-transformed 2D triangles (menus, HUD, fonts).
 *  prim_type: D3D primitive type (4=trilist, 5=tristrip, 6=trifan).
 *  Returns 1 on success. */
int rw_bridge_im2d_render(int prim_type, const RwIm2DVertex *verts,
                          int vert_count);

/** Render pre-transformed 2D indexed primitives. */
int rw_bridge_im2d_render_indexed(int prim_type, const RwIm2DVertex *verts,
                                  int vert_count, const uint16_t *indices,
                                  int index_count);

/* ── 3D immediate mode (im3d) ─────────────────────────────── */

/** RW im3d vertex (world-space, needs transform). */
typedef struct RwIm3DVertex {
    float x, y, z;
    float nx, ny, nz;
    uint32_t color;
    float u, v;
} RwIm3DVertex;

/** Render world-space 3D primitives (debug lines, particles, etc.). */
int rw_bridge_im3d_render(int prim_type, const RwIm3DVertex *verts,
                          int vert_count);

/* ── RW camera state readback ─────────────────────────────── */

/** Read the RW camera's view matrix from Xbox memory.
 *  out_matrix must point to 16 floats. Returns 1 if valid. */
int rw_bridge_get_camera_view(float *out_matrix);

/** Read the RW camera's projection matrix from Xbox memory.
 *  out_matrix must point to 16 floats. Returns 1 if valid. */
int rw_bridge_get_camera_proj(float *out_matrix);

/** Inject track geometry into NV2A push buffer as INLINE_ARRAY commands.
 *  Returns number of vertices written (0 if no track loaded). */
int rw_bridge_inject_track_to_pb(void);

#ifdef __cplusplus
}
#endif
