/**
 * RenderWare → D3D11 Rendering Bridge
 *
 * Connects the game's original RenderWare rendering pipeline to our
 * D3D8→D3D11 compatibility layer. Intercepts at the RW display driver
 * level and routes rendering calls through our D3D8 device.
 *
 * Architecture:
 *   RW scene graph → sub_00351090 (camera render) → rw_bridge_camera_render()
 *     → reads camera state from Xbox memory
 *     → sets D3D8 transforms (view, projection)
 *     → calls rw_gameplay_render() for 3D scene
 *     → handles 2D overlays via DrawPrimitiveUP
 *
 *   RW im2d → rw_bridge_im2d_render()
 *     → pre-transformed vertices → DrawPrimitiveUP
 *     → used for menus, HUD, fonts, loading screens
 */

#include "rw_bridge.h"
#include "rw_renderer.h"
#include "rw_math.h"
#include "fe_menu.h"
#include "../d3d/d3d8_xbox.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/* ── Xbox memory access ─────────────────────────────────────── */
extern ptrdiff_t g_xbox_mem_offset;
#define BMEM32(a) (*(volatile uint32_t*)((uintptr_t)(a) + g_xbox_mem_offset))
#define BMEMF(a)  (*(volatile float*)((uintptr_t)(a) + g_xbox_mem_offset))
#define BMEM8(a)  (*(volatile uint8_t*)((uintptr_t)(a) + g_xbox_mem_offset))

/* ── Known Xbox memory addresses (from xemu analysis) ─────── */
#define RW_CAMERA_PTR       0x35FB48  /* RW current camera (device context) */
#define RW_CAM_VIEWPORT     0x4D9180  /* Camera viewport/frustum base */
#define RW_CAM_FOV          0x4D9160  /* FOV in degrees (float) */
#define RW_CAM_WORLD_X      0x4D9198  /* Camera world position X */
#define RW_CAM_WORLD_Y      0x4D919C  /* Camera world position Y */
#define RW_CAM_WORLD_Z      0x4D91A0  /* Camera world position Z */
#define RW_CAM_SCREEN_W     0x4D9200  /* Screen width (float) */
#define RW_CAM_SCREEN_H     0x4D9204  /* Screen height (float) */
#define RW_CAR_MATRIX       0x4D6850  /* Car world matrix (4x4 float) */
#define RW_GAME_STATE       0x4D53B8  /* Game state machine */
#define RW_CAM_PTR_ACTIVE   0x4D5370  /* Active camera ptr */

/* Gameplay camera indicator */
#define RW_CAM_GAMEPLAY     0x4D45D0
#define RW_CAM_MENUS        0x4D4008

/* ── Bridge state ───────────────────────────────────────────── */
static int g_bridge_rendered = 0;
static int g_bridge_in_scene = 0;
static int g_bridge_frame_count = 0;

/* Camera state extracted from Xbox memory */
static float g_cam_pos[3] = {0};
static float g_cam_fov = 60.0f;
static int g_cam_valid = 0;

/* 2D rendering queue for im2d calls */
#define IM2D_MAX_VERTS 4096
static RwIm2DVertex g_im2d_queue[IM2D_MAX_VERTS];
static int g_im2d_queue_count = 0;

/* ── Frame lifecycle ────────────────────────────────────────── */

void rw_bridge_new_frame(void)
{
    g_bridge_rendered = 0;
    g_bridge_in_scene = 0;
    g_im2d_queue_count = 0;
}

int rw_bridge_frame_rendered(void)
{
    return g_bridge_rendered;
}

/* ── Camera state readback ──────────────────────────────────── */

/**
 * Try to read the game's camera state from Xbox memory.
 * The camera viewport data at 0x4D9180 contains position, FOV, etc.
 * Returns 1 if we got valid camera data.
 */
static int read_rw_camera_state(void)
{
    /* Check if we're in gameplay (camera ptr indicates active camera) */
    uint32_t cam_ptr = BMEM32(RW_CAM_PTR_ACTIVE);

    /* Read camera position from viewport area */
    float cx = BMEMF(RW_CAM_WORLD_X);
    float cy = BMEMF(RW_CAM_WORLD_Y);
    float cz = BMEMF(RW_CAM_WORLD_Z);
    float fov = BMEMF(RW_CAM_FOV);

    /* Validate: non-zero position indicates camera was set up */
    if (cx == 0.0f && cy == 0.0f && cz == 0.0f)
        return 0;

    /* Validate FOV range */
    if (fov < 1.0f || fov > 179.0f)
        fov = 60.0f;

    g_cam_pos[0] = cx;
    g_cam_pos[1] = cy;
    g_cam_pos[2] = cz;
    g_cam_fov = fov;
    g_cam_valid = 1;

    static int logged = 0;
    if (!logged || (g_bridge_frame_count % 500) == 0) {
        fprintf(stderr, "[RW-BRIDGE] Camera: pos=(%.1f, %.1f, %.1f) FOV=%.1f cam_ptr=0x%08X\n",
                cx, cy, cz, fov, cam_ptr);
        logged = 1;
    }

    return 1;
}

int rw_bridge_get_camera_view(float *out_matrix)
{
    if (!g_cam_valid) return 0;

    /* Build a simple look-at view matrix from camera position.
     * The car world matrix at 0x4D6850 gives us the forward direction. */
    float car_mat[16];
    for (int i = 0; i < 16; i++)
        car_mat[i] = BMEMF(RW_CAR_MATRIX + i * 4);

    /* Camera position */
    float eye[3] = { g_cam_pos[0], g_cam_pos[1], g_cam_pos[2] };

    /* Look at the car (offset from car matrix translation row) */
    float car_x = car_mat[12];
    float car_y = car_mat[13];
    float car_z = car_mat[14];

    /* If car position is valid, look at it; otherwise look forward */
    float target[3];
    if (car_x != 0.0f || car_y != 0.0f || car_z != 0.0f) {
        target[0] = car_x;
        target[1] = car_y;
        target[2] = car_z;
    } else {
        target[0] = eye[0];
        target[1] = eye[1];
        target[2] = eye[2] + 100.0f;
    }

    mat4_lookat(out_matrix,
                eye[0], eye[1], eye[2],
                target[0], target[1], target[2],
                0.0f, 1.0f, 0.0f);
    return 1;
}

int rw_bridge_get_camera_proj(float *out_matrix)
{
    if (!g_cam_valid) return 0;
    float aspect = 640.0f / 480.0f;
    float fov_rad = g_cam_fov * 3.14159265f / 180.0f;
    mat4_perspective(out_matrix, fov_rad, aspect, 0.1f, 10000.0f);
    return 1;
}

/* ── Camera begin/end ───────────────────────────────────────── */

void rw_bridge_camera_begin(uint32_t camera_va)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return;

    /* Read camera state from Xbox memory */
    read_rw_camera_state();

    /* Begin scene */
    dev->lpVtbl->BeginScene(dev);
    g_bridge_in_scene = 1;

    /* Clear */
    dev->lpVtbl->Clear(dev, 0, NULL,
        D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
        0xFF102040, /* Dark blue-grey */
        1.0f, 0);

    /* Set viewport */
    D3DVIEWPORT8 vp = { 0, 0, 640, 480, 0.0f, 1.0f };
    dev->lpVtbl->SetViewport(dev, &vp);

    /* Set up camera transforms if we have valid data */
    if (g_cam_valid) {
        float view[16], proj[16];
        if (rw_bridge_get_camera_view(view)) {
            D3DMATRIX vm;
            memcpy(&vm, view, sizeof(vm));
            dev->lpVtbl->SetTransform(dev, D3DTS_VIEW, &vm);
        }
        if (rw_bridge_get_camera_proj(proj)) {
            D3DMATRIX pm;
            memcpy(&pm, proj, sizeof(pm));
            dev->lpVtbl->SetTransform(dev, D3DTS_PROJECTION, &pm);
        }
    }

    (void)camera_va;
}

void rw_bridge_camera_end(uint32_t camera_va)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return;

    /* Flush any queued im2d draws */
    if (g_im2d_queue_count > 0) {
        /* Set up 2D rendering state */
        dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
        dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
        dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
        dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
        dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

        DWORD fvf = D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1;
        dev->lpVtbl->SetVertexShader(dev, fvf);
        dev->lpVtbl->SetTexture(dev, 0, NULL);

        /* Draw queued 2D verts as triangle list */
        if (g_im2d_queue_count >= 3) {
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST,
                g_im2d_queue_count / 3,
                g_im2d_queue, sizeof(RwIm2DVertex));
        }

        g_im2d_queue_count = 0;
    }

    if (g_bridge_in_scene) {
        dev->lpVtbl->EndScene(dev);
        g_bridge_in_scene = 0;
    }

    (void)camera_va;
}

/* ── Main camera render ─────────────────────────────────────── */

int rw_bridge_camera_render(uint32_t camera_va)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return 0;

    g_bridge_frame_count++;

    /* Check if we're in menu state — route to frontend menu renderer.
     * Skip menu rendering if a race is active (gameplay mode). */
    extern int fe_menu_is_racing(void);
    if (fe_menu_is_active() && !fe_menu_is_racing()) {
        /* Frontend menu: push buffer replay replaces the placeholder.
         * Clear to dark blue so we can see the NV2A translated geometry. */
        extern int nv2a_pb_replay_is_active(void);
        extern void nv2a_pb_replay_frame(void);
        {
            dev->lpVtbl->Clear(dev, 0, NULL,
                               D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
                               0xFF000000, 1.0f, 0);
            dev->lpVtbl->BeginScene(dev);

            /* Layer 1: Background video (Titles30.mp4 — looping gameplay footage) */
            {
                extern int video_open(const char *path);
                extern int video_update(float dt);
                extern void video_render(void);
                extern int video_is_finished(void);

                static int bg_video_started = 0;
                if (!bg_video_started) {
                    if (video_open("Burnout 3 Takedown\\ovid\\mp4\\Titles30.mp4") == 0) {
                        fprintf(stderr, "[RW-BRIDGE] Menu background video opened\n");
                    }
                    bg_video_started = 1;
                }

                int vr = video_update(1.0f / 60.0f);
                if (vr == -1) {
                    /* Video finished — loop it */
                    video_open("Burnout 3 Takedown\\ovid\\mp4\\Titles30.mp4");
                }
                video_render();  /* Renders fullscreen quad with video frame */
            }

            /* Layer 2: Parse any live push buffer commands */
            {
                extern void parse_live_pushbuffer(void);
                parse_live_pushbuffer();
            }

            /* Layer 3: NV2A menu overlay (static capture from xemu) */
            if (nv2a_pb_replay_is_active()) {
                nv2a_pb_replay_frame();
            }

            dev->lpVtbl->EndScene(dev);
            dev->lpVtbl->Present(dev, NULL, NULL, NULL, NULL);
            {
                extern volatile uint32_t g_present_count;
                g_present_count++;
            }
            g_bridge_rendered = 1;
            return 1;
        }

        /* Fallback: old placeholder menu */
        fe_menu_render_frame();
        g_bridge_rendered = 1;

        static int menu_logged = 0;
        if (!menu_logged) {
            fprintf(stderr, "[RW-BRIDGE] Menu mode active — rendering frontend menu\n");
            menu_logged = 1;
        }
        return 1;
    }

    /* Read camera state */
    read_rw_camera_state();

    /* If the RW pipeline is calling us but BeginScene wasn't called
     * via camera_begin, we need to set up the frame ourselves. */
    if (!g_bridge_in_scene) {
        rw_bridge_camera_begin(camera_va);
    }

    /* Render the 3D scene through our existing renderer.
     * rw_gameplay_render() handles track geometry, vehicles, sky, etc. */
    rw_gameplay_render();

    /* End the scene — bridge owns the full BeginScene/EndScene lifecycle */
    rw_bridge_camera_end(camera_va);

    g_bridge_rendered = 1;

    static int logged = 0;
    if (!logged) {
        fprintf(stderr, "[RW-BRIDGE] First frame rendered through bridge! camera_va=0x%08X\n",
                camera_va);
        logged = 1;
    }

    return 1;
}

/* ── 2D immediate mode rendering ────────────────────────────── */

int rw_bridge_im2d_render(int prim_type, const RwIm2DVertex *verts,
                          int vert_count)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev || !verts || vert_count <= 0) return 0;

    /* If not in a scene, start one for this im2d batch.
     * Im2d calls often happen AFTER the 3D scene ends (camera_end)
     * but before present (show_raster). We need our own scene bracket. */
    int started_scene = 0;
    if (!g_bridge_in_scene) {
        dev->lpVtbl->BeginScene(dev);
        g_bridge_in_scene = 1;
        started_scene = 1;
    }

    /* Set up 2D rendering state */
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

    DWORD fvf = D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1;
    dev->lpVtbl->SetVertexShader(dev, fvf);
    dev->lpVtbl->SetTexture(dev, 0, NULL);

    UINT prim_count = 0;
    switch (prim_type) {
        case D3DPT_TRIANGLELIST:  prim_count = vert_count / 3; break;
        case D3DPT_TRIANGLESTRIP: prim_count = vert_count - 2; break;
        case D3DPT_TRIANGLEFAN:   prim_count = vert_count - 2; break;
        case D3DPT_LINELIST:      prim_count = vert_count / 2; break;
        case D3DPT_LINESTRIP:     prim_count = vert_count - 1; break;
        default:                  prim_count = vert_count; break;
    }

    if (prim_count > 0) {
        dev->lpVtbl->DrawPrimitiveUP(dev, (D3DPRIMITIVETYPE)prim_type,
            prim_count, verts, sizeof(RwIm2DVertex));
    }

    static uint32_t im2d_count = 0;
    im2d_count++;
    if (im2d_count <= 5 || (im2d_count % 1000) == 0) {
        fprintf(stderr, "[RW-BRIDGE] im2d render #%u: type=%d verts=%d prims=%u scene=%s\n",
                im2d_count, prim_type, vert_count, prim_count,
                started_scene ? "auto" : "existing");
    }

    /* If we started the scene ourselves, end it now */
    if (started_scene) {
        dev->lpVtbl->EndScene(dev);
        g_bridge_in_scene = 0;
    }

    return 1;
}

int rw_bridge_im2d_render_indexed(int prim_type, const RwIm2DVertex *verts,
                                  int vert_count, const uint16_t *indices,
                                  int index_count)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev || !verts || !indices || index_count <= 0) return 0;

    int started_scene = 0;
    if (!g_bridge_in_scene) {
        dev->lpVtbl->BeginScene(dev);
        g_bridge_in_scene = 1;
        started_scene = 1;
    }

    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

    DWORD fvf = D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1;
    dev->lpVtbl->SetVertexShader(dev, fvf);
    dev->lpVtbl->SetTexture(dev, 0, NULL);

    UINT prim_count = 0;
    switch (prim_type) {
        case D3DPT_TRIANGLELIST:  prim_count = index_count / 3; break;
        case D3DPT_TRIANGLESTRIP: prim_count = index_count - 2; break;
        default:                  prim_count = index_count / 3; break;
    }

    if (prim_count > 0) {
        dev->lpVtbl->DrawIndexedPrimitiveUP(dev,
            (D3DPRIMITIVETYPE)prim_type,
            0, vert_count, prim_count,
            indices, D3DFMT_INDEX16,
            verts, sizeof(RwIm2DVertex));
    }

    if (started_scene) {
        dev->lpVtbl->EndScene(dev);
        g_bridge_in_scene = 0;
    }

    return 1;
}

/* ── 3D immediate mode rendering ────────────────────────────── */

int rw_bridge_im3d_render(int prim_type, const RwIm3DVertex *verts,
                          int vert_count)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev || !verts || vert_count <= 0) return 0;

    if (!g_bridge_in_scene) return 0;

    /* im3d vertices need world transform */
    DWORD fvf = D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_DIFFUSE | D3DFVF_TEX1;
    dev->lpVtbl->SetVertexShader(dev, fvf);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);

    /* Set identity world transform */
    D3DMATRIX identity;
    float id[16];
    mat4_identity(id);
    memcpy(&identity, id, sizeof(identity));
    dev->lpVtbl->SetTransform(dev, D3DTS_WORLD, &identity);

    UINT prim_count = 0;
    switch (prim_type) {
        case D3DPT_TRIANGLELIST:  prim_count = vert_count / 3; break;
        case D3DPT_TRIANGLESTRIP: prim_count = vert_count - 2; break;
        case D3DPT_LINELIST:      prim_count = vert_count / 2; break;
        case D3DPT_LINESTRIP:     prim_count = vert_count - 1; break;
        default:                  prim_count = vert_count; break;
    }

    if (prim_count > 0) {
        dev->lpVtbl->DrawPrimitiveUP(dev, (D3DPRIMITIVETYPE)prim_type,
            prim_count, verts, sizeof(RwIm3DVertex));
    }

    return 1;
}
