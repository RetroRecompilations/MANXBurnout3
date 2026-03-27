/**
 * Burnout 3: Takedown - RenderWare 3D Renderer
 *
 * Replaces the pseudo-3D OutRun-style renderer with actual 3D rendering
 * using the existing D3D8->D3D11 compatibility layer. Renders game assets
 * (vehicles, road) through proper camera/transform/draw call pipeline.
 *
 * Toggle with V key during gameplay. Coexists with pseudo-3D renderer.
 */

#ifndef RW_RENDERER_H
#define RW_RENDERER_H

#include <stdint.h>
#include "../d3d/d3d8_xbox.h"
#include "bgv_loader.h"

/* ── Data Structures ─────────────────────────────────────────── */

typedef struct {
    float position[3];
    float target[3];
    float up[3];
    float fov_y;        /* field of view in radians */
    float aspect;
    float znear, zfar;
    float view_matrix[16];
    float proj_matrix[16];
} RW_Camera;

typedef struct {
    BGV_Vertex *vertices;
    uint32_t vertex_count;
    uint16_t *indices;
    uint32_t index_count;
    IDirect3DVertexBuffer8 *vb;     /* persistent GPU vertex buffer */
    IDirect3DIndexBuffer8 *ib;      /* persistent GPU index buffer */
    IDirect3DTexture8 *texture;     /* optional texture (NULL = vertex color only) */
    float bounding_radius;
} RW_Mesh;

#define RW_MAX_OBJECTS 64

typedef struct {
    RW_Mesh *mesh;
    float world_matrix[16];
    float position[3];
    float rotation_y;       /* heading in radians */
    float scale;
    int visible;
    DWORD color_tint;       /* 0xAARRGGBB modulation, 0 = no tint */
} RW_Object;

typedef struct {
    RW_Camera camera;
    RW_Object objects[RW_MAX_OBJECTS];
    int object_count;
    DWORD clear_color;
    float sun_dir[3];       /* directional light direction */
    float ambient;          /* ambient light intensity 0-1 */
} RW_Scene;

/* ── Initialization / Shutdown ───────────────────────────────── */

/** Initialize the 3D renderer. Call after D3D device is created. */
int rw_renderer_init(void);

/** Shut down and release all GPU resources. */
void rw_renderer_shutdown(void);

/* ── Mesh Management ─────────────────────────────────────────── */

/**
 * Create a persistent GPU mesh from a loaded BGV model.
 * Uploads vertices and indices to GPU buffers (no per-frame upload needed).
 * Returns NULL on failure.
 */
RW_Mesh *rw_mesh_create_from_bgv(const BGV_Model *model, IDirect3DTexture8 *texture);

/** Release a mesh and its GPU resources. */
void rw_mesh_destroy(RW_Mesh *mesh);

/* ── Scene Management ────────────────────────────────────────── */

/** Initialize a scene with defaults. */
void rw_scene_init(RW_Scene *scene);

/**
 * Add an object to the scene. Returns object index, or -1 if full.
 * The mesh pointer is borrowed (not owned by the scene).
 */
int rw_scene_add_object(RW_Scene *scene, RW_Mesh *mesh);

/** Remove all objects from the scene (does not destroy meshes). */
void rw_scene_clear(RW_Scene *scene);

/* ── Camera ──────────────────────────────────────────────────── */

/**
 * Position camera in chase mode behind a car.
 * @param heading   Car heading in radians (0=north/+Z, CW positive)
 * @param dist      Chase distance behind car
 * @param height    Camera height above car
 */
void rw_camera_set_chase(RW_Camera *cam, const float car_pos[3],
                         float heading, float dist, float height);

/** Recompute view and projection matrices from camera parameters. */
void rw_camera_update_matrices(RW_Camera *cam);

/* ── Rendering ───────────────────────────────────────────────── */

/** Render the full scene (clear, set camera, draw all objects). */
void rw_render_scene(RW_Scene *scene);

/** Render a single mesh with the given world matrix. */
void rw_render_mesh(RW_Mesh *mesh, const float world_matrix[16]);

/* ── Gameplay Integration ────────────────────────────────────── */

/**
 * High-level gameplay render function.
 * Reads physics body (0x5FFF00), obstacle array (0x5FFE00),
 * positions camera and objects, renders the 3D scene.
 * Called from sub_0003D9E0 when 3D mode is active.
 */
void rw_gameplay_render(void);

/**
 * Register BGV meshes for use by the gameplay renderer.
 * @param player_model  Player car BGV model
 * @param traffic_models  Array of traffic BGV models
 * @param traffic_count   Number of traffic models
 */
void rw_gameplay_register_models(const BGV_Model *player_model,
                                 const BGV_Model *traffic_models,
                                 int traffic_count);

/** Returns 1 if 3D renderer is active, 0 if pseudo-3D. */
int rw_is_3d_mode(void);

/** Toggle between 3D and pseudo-3D rendering modes. */
void rw_toggle_3d_mode(void);

/* ── Track Geometry ─────────────────────────────────────────── */

/**
 * Load track geometry from a streamed.dat file.
 * Converts vertex clusters to GPU meshes for rendering.
 * Returns 0 on success, -1 on error.
 */
int rw_load_track(const char *streamed_dat_path);

/** Unload track geometry and free GPU resources. */
void rw_unload_track(void);

/** Returns 1 if track geometry is loaded. */
int rw_has_track(void);

/** Toggle track geometry visibility in 3D mode. */
void rw_toggle_track(void);

/** Get the static texture dictionary for the current track.
 *  Returns NULL if no track is loaded. */
#include "static_textures.h"
StaticTexDict *rw_get_static_textures(void);

#endif /* RW_RENDERER_H */
