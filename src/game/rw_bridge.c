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
#include "rw_structs.h"
#include "rw_d3d_device.h"
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

/* ═══════════════════════════════════════════════════════════════
 *  RW state initialization
 *  Populates RW camera, device context, and game render context
 *  with valid defaults so gen code won't crash on uninitialized
 *  pointer chains when sub_0003FEE0 operations are re-enabled.
 * ═══════════════════════════════════════════════════════════════ */

static void write_identity_matrix(uint32_t xbox_va)
{
    static const float identity[16] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f
    };
    memcpy((void*)((uintptr_t)xbox_va + g_xbox_mem_offset), identity, 64);
}

void rw_state_init(void)
{
    fprintf(stderr, "\n=== RW State Init (typed structs) ===\n");

    /* ── 1. Menu camera at 0x4D4008 ──
     * Set viewWindow, clip planes, projection type, identity matrices.
     * The base RwCamera struct is 0x218 bytes; plugin data follows. */
    {
        uint32_t cam_va = XBOX_MENU_CAMERA_VA;
        uintptr_t cam = (uintptr_t)cam_va + g_xbox_mem_offset;
        RwCamera *c = (RwCamera *)cam;

        /* Object header: type = rwCAMERA */
        c->objwf.object.type = rwCAMERA;
        c->objwf.object.subType = 0;
        c->objwf.object.flags = 0;
        c->objwf.object.privateFlags = 0;

        /* View parameters for 640×480 (4:3 aspect) */
        c->viewWindow.x = 1.0f;
        c->viewWindow.y = 0.75f;  /* 480/640 */
        c->recipViewWindow.x = 1.0f;
        c->recipViewWindow.y = 1.0f / 0.75f;
        c->viewOffset.x = 0.0f;
        c->viewOffset.y = 0.0f;

        /* Clip planes */
        c->nearPlane = 1.0f;
        c->farPlane = 1000.0f;
        c->fogPlane = 1000.0f;

        /* Perspective projection */
        c->projectionType = 1;  /* rwPERSPECTIVE */

        /* Identity view matrix */
        write_identity_matrix(cam_va + offsetof(RwCamera, viewMatrix));

        /* Z-buffer transform */
        c->zScale = 1.0f;
        c->zShift = 0.0f;

        /* Identity device view/projection matrices */
        write_identity_matrix(cam_va + offsetof(RwCamera, devView));
        write_identity_matrix(cam_va + offsetof(RwCamera, devProj));

        /* Raster pointers: leave as 0 (NULL) for now — our D3D8 layer
         * handles render targets directly */
        c->frameBuffer = 0;
        c->zBuffer = 0;

        fprintf(stderr, "  Camera 0x%X: viewWindow=(%.2f,%.2f) near=%.1f far=%.1f proj=%d\n",
                cam_va, c->viewWindow.x, c->viewWindow.y,
                c->nearPlane, c->farPlane, c->projectionType);
    }

    /* ── 2. D3D device context at 0x35D6A0 ──
     * Set render_state_matrix to identity, zero timer accumulators,
     * set transform_cache to identity. */
    {
        uint32_t dev_va = XBOX_D3D_DEVICE_VA;
        uintptr_t dev = (uintptr_t)dev_va + g_xbox_mem_offset;
        XboxD3DDevice *d = (XboxD3DDevice *)dev;

        /* Identity matrices in transform cache and render state */
        write_identity_matrix(dev_va + offsetof(XboxD3DDevice, transform_cache));
        write_identity_matrix(dev_va + offsetof(XboxD3DDevice, render_state_matrix));

        /* Zero timer accumulators (prevents garbage delta at first frame) */
        d->timer_accum_0 = 0.0f;
        d->timer_accum_1 = 0.0f;

        /* Double-buffered render targets: must be non-NULL or sub_00351090
         * gen code skips the scene render entirely.
         * Values from xemu snapshot during menu rendering. */
        d->rt_surface_0 = 0x3A1F;  /* fake non-NULL surface (from xemu) */
        d->rt_surface_1 = 0x3A25;  /* fake non-NULL surface (from xemu) */

        /* NOTE: Camera active flag (device+8 bit 14) is set per-frame in
         * sub_00351090 because the xemu device snapshot overwrites device+8
         * after this init runs. */

        /* NOTE: PB ring fixups (device+0x30, +0x24, +0x48, etc.) are done in
         * main.c AFTER the xemu device snapshot loads — see "PB ring management
         * fixups (post-snapshot)" section. Doing it here would be overwritten. */

        /* Ensure device pointer is set */
        BMEM32(XBOX_D3D_DEVICE_PTR_VA) = dev_va;

        fprintf(stderr, "  Device 0x%X: identity matrices at +0xC60/+0xCA0, "
                "timers zeroed, RT surfaces=0x%X/0x%X\n",
                dev_va, d->rt_surface_0, d->rt_surface_1);
    }

    /* ── 3. Game render context at 0x4D6170 ──
     * Initialize all matrix slots to identity, set viewport/scale defaults. */
    {
        uint32_t ctx_va = XBOX_GAME_RENDER_CTX_VA;
        uintptr_t ctx = (uintptr_t)ctx_va + g_xbox_mem_offset;
        RwGameRenderContext *r = (RwGameRenderContext *)ctx;

        /* Identity for matrix slots at +0x500 and +0x540 */
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, src_matrix_0));
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, device_state));

        /* Identity for work matrices */
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, work_matrix_0));
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, work_matrix_1));
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, work_matrix_2));
        write_identity_matrix(ctx_va + offsetof(RwGameRenderContext, work_matrix_3));

        /* Identity for all 4 destination matrices (+0x6E0..+0x7DF) */
        for (int i = 0; i < 4; i++)
            write_identity_matrix(ctx_va + 0x6E0 + i * 64);

        /* Scene descriptor zeroed */
        memset(r->scene_desc, 0, sizeof(r->scene_desc));

        /* Viewport / render state defaults (from sub_0003FEE0 gen code) */
        r->viewport_x = 0;
        r->viewport_y = 0;
        r->viewport_w = 0x80;     /* 128 */
        r->viewport_h = 0x80;     /* 128 */
        r->scale_x = 1.0f;
        r->scale_y = 1.0f;
        r->render_flags = 0x901;

        /* Identity for extended matrix blocks at +0xA10 and +0xA50 */
        write_identity_matrix(ctx_va + 0xA10);
        write_identity_matrix(ctx_va + 0xA50);

        fprintf(stderr, "  RenderCtx 0x%X: identity matrices, viewport=%dx%d, flags=0x%X\n",
                ctx_va, r->viewport_w, r->viewport_h, r->render_flags);
    }

    fprintf(stderr, "=== RW State Init complete ===\n\n");
}

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

    /* If RW camera has no position but we're in gameplay mode,
     * derive camera from the physics body position.
     * Physics body at 0x5FFF00: +0x10=pos_x, +0x14=pos_y, +0x18=heading */
    if (cx == 0.0f && cy == 0.0f && cz == 0.0f) {
        uint32_t game_st = BMEM32(0x4D53B8);
        extern int fe_menu_is_racing(void);
        if (cam_ptr == 0x4D45D0 || game_st == 4 || fe_menu_is_racing()) {
            /* Read physics body via same path as TICK log */
            uint32_t vel_ptr = BMEM32(0x557880 + 0x1B4);
            float phys_x = 0, phys_y = 0;
            if (vel_ptr > 0x100 && vel_ptr < 0x3FFFFFF) {
                phys_x = BMEMF(vel_ptr + 0x10);
                phys_y = BMEMF(vel_ptr + 0x14);
            } else {
                /* Fallback: direct address */
                phys_x = BMEMF(0x5FFF10);
                phys_y = BMEMF(0x5FFF14);
            }
            float hdg = (vel_ptr > 0x100 && vel_ptr < 0x3FFFFFF)
                        ? BMEMF(vel_ptr + 0x18) : BMEMF(0x5FFF18);
            float spd = (vel_ptr > 0x100 && vel_ptr < 0x3FFFFFF)
                        ? BMEMF(vel_ptr + 0x1C) : BMEMF(0x5FFF1C);

            /* Place camera behind car based on heading.
             * Physics uses XZ plane (phys_x=X, phys_y=Z in world).
             * Camera Y is elevated above the car position. */
            float cam_dist = 15.0f + fabsf(spd) * 0.2f;
            cx = phys_x - sinf(hdg) * cam_dist;
            cy = 5.0f;   /* height above car (relative, not world) */
            cz = phys_y - cosf(hdg) * cam_dist;
            fov = 75.0f;  /* wider FOV for racing */

            if (cx != 0.0f || cz != 0.0f) {
                g_cam_pos[0] = cx;
                g_cam_pos[1] = cy;
                g_cam_pos[2] = cz;
                g_cam_fov = fov;
                g_cam_valid = 1;

                static int logged_phy = 0;
                if (!logged_phy || (g_bridge_frame_count % 500) == 0) {
                    fprintf(stderr, "[RW-BRIDGE] Camera (physics): pos=(%.1f, %.1f, %.1f) "
                            "car=(%.1f,%.1f) hdg=%.1f° spd=%.1f\n",
                            cx, cy, cz, phys_x, phys_y, hdg * 57.2958f, spd);
                    logged_phy = 1;
                }
                return 1;
            }
        }
        return 0;
    }

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

    /* Build a simple look-at view matrix from camera position. */
    float eye[3] = { g_cam_pos[0], g_cam_pos[1], g_cam_pos[2] };

    /* Try car world matrix at 0x4D6850 first */
    float car_x = BMEMF(RW_CAR_MATRIX + 12 * 4);
    float car_y = BMEMF(RW_CAR_MATRIX + 13 * 4);
    float car_z = BMEMF(RW_CAR_MATRIX + 14 * 4);

    float target[3];
    if (car_x != 0.0f || car_y != 0.0f || car_z != 0.0f) {
        target[0] = car_x;
        target[1] = car_y;
        target[2] = car_z;
    } else {
        /* Fallback: use physics body position as look-at target.
         * Physics: +0x10=X, +0x14=Z (world XZ plane). Y=0 (ground). */
        float phys_x = BMEMF(0x5FFF10);
        float phys_z = BMEMF(0x5FFF14);
        if (phys_x != 0.0f || phys_z != 0.0f) {
            target[0] = phys_x;
            target[1] = 0.0f;   /* ground level */
            target[2] = phys_z;
        } else {
            target[0] = eye[0];
            target[1] = eye[1];
            target[2] = eye[2] + 100.0f;
        }
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

    /* Render track geometry via direct D3D8 DrawPrimitiveUP.
     * Pre-transforms track verts to screen space and draws in batches. */
    {
        extern int g_gen_render_chain_enabled;
        if (g_gen_render_chain_enabled) {
            rw_bridge_inject_track_to_pb();
        }
    }

    /* Render the 3D scene through our existing renderer.
     * rw_gameplay_render() handles track geometry, vehicles, sky, etc. */
    rw_gameplay_render();

    /* End the scene — bridge owns the full BeginScene/EndScene lifecycle */
    rw_bridge_camera_end(camera_va);

    /* Present the frame — gameplay path must Present (menu path does its own) */
    dev->lpVtbl->Present(dev, NULL, NULL, NULL, NULL);
    {
        extern volatile uint32_t g_present_count;
        g_present_count++;
    }

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

/* ═══════════════════════════════════════════════════════════════
 * Track Geometry → NV2A Push Buffer Injection
 *
 * Writes track vertex data as NV2A INLINE_ARRAY commands directly
 * into the D3D8LTCG push buffer. The existing parse_live_pushbuffer()
 * picks these up and routes through pgraph_d3d11 → D3D11.
 *
 * Vertex format: 5 dwords per vertex (X_screen, Y_screen, U, V, Color)
 * matching the NV2A translator's expected INLINE_ARRAY format.
 * ═══════════════════════════════════════════════════════════════ */

#include "track_loader.h"

/* NV2A PB command helpers */
#define NV2A_METHOD_INC(count, method, subchan) \
    (((count) << 18) | ((method) & 0x1FFC) | ((subchan) << 13))
#define NV2A_METHOD_NI(count, method, subchan) \
    (0x40000000 | ((count) << 18) | ((method) & 0x1FFC) | ((subchan) << 13))
#define NV2A_BEGIN_END   0x17FC
#define NV2A_INLINE_ARRAY 0x1818
#define NV2A_DRAW_MODE_TRILIST 5

/* Float-to-uint32 bit cast */
static inline uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

/* Simple 4x4 matrix × vec4 (column-major, matching mat4_multiply) */
static void bridge_transform_point(const float *m, float x, float y, float z,
                                    float *ox, float *oy, float *oz, float *ow)
{
    *ox = m[0]*x + m[4]*y + m[8]*z  + m[12];
    *oy = m[1]*x + m[5]*y + m[9]*z  + m[13];
    *oz = m[2]*x + m[6]*y + m[10]*z + m[14];
    *ow = m[3]*x + m[7]*y + m[11]*z + m[15];
}

int rw_bridge_inject_track_to_pb(void)
{
    /* Access the track data loaded by rw_renderer */
    extern int g_track_loaded;
    extern TrackData g_track_data;
    if (!g_track_loaded || g_track_data.chunk_count == 0)
        return 0;

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return 0;

    /* Build camera view-projection matrix */
    float view[16], proj[16], vp[16];
    if (!rw_bridge_get_camera_view(view) || !rw_bridge_get_camera_proj(proj))
        return 0;
    mat4_multiply(vp, proj, view);

    int total_verts_written = 0;
    int total_draws = 0;
    const int MAX_VERTS_PER_FRAME = 6000;

    /* Batch buffer: collect pre-transformed verts, flush via DrawPrimitiveUP.
     * Format: RwIm2DVertex (28 bytes: XYZRHW + Diffuse + TEX1). */
    #define BATCH_MAX_VERTS 900
    RwIm2DVertex batch[BATCH_MAX_VERTS];
    int batch_count = 0;

    /* Player position for distance culling */
    float player_x = BMEMF(0x5FFF10);
    float player_z = BMEMF(0x5FFF14);
    float cull_dist_sq = 500.0f * 500.0f;

    /* Set up 2D rendering state for pre-transformed vertices */
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZWRITEENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, FALSE);
    dev->lpVtbl->SetVertexShader(dev, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
    dev->lpVtbl->SetTexture(dev, 0, NULL);

    /* Flush batch via DrawPrimitiveUP */
    #define FLUSH_BATCH() do { \
        if (batch_count >= 3) { \
            dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, \
                batch_count / 3, batch, sizeof(RwIm2DVertex)); \
            total_draws++; \
        } \
        batch_count = 0; \
    } while(0)

    for (int ci = 0; ci < g_track_data.chunk_count && total_verts_written < MAX_VERTS_PER_FRAME; ci++) {
        TrackChunk *chunk = &g_track_data.chunks[ci];
        if (!chunk->vertices || chunk->vertex_count < 3 || !chunk->indices)
            continue;

        /* Distance cull */
        float dx = chunk->center[0] - player_x;
        float dz = chunk->center[2] - player_z;
        if (dx*dx + dz*dz > cull_dist_sq)
            continue;

        /* Process triangle strip → triangle list */
        for (uint32_t i = 0; i + 2 < chunk->index_count && total_verts_written < MAX_VERTS_PER_FRAME; i++) {
            uint16_t i0 = chunk->indices[i];
            uint16_t i1 = chunk->indices[i + 1];
            uint16_t i2 = chunk->indices[i + 2];

            if (i0 == i1 || i1 == i2 || i0 == i2) continue;
            if (i0 >= chunk->vertex_count || i1 >= chunk->vertex_count || i2 >= chunk->vertex_count) continue;
            if (i & 1) { uint16_t t = i1; i1 = i2; i2 = t; }

            uint16_t idx[3] = { i0, i1, i2 };
            int visible = 1;
            RwIm2DVertex tri[3];

            for (int v = 0; v < 3; v++) {
                TrackVertex *tv = &chunk->vertices[idx[v]];
                float cx, cy, cz, cw;
                bridge_transform_point(vp, tv->x, tv->y, tv->z, &cx, &cy, &cz, &cw);
                if (cw < 0.1f) { visible = 0; break; }
                float inv_w = 1.0f / cw;
                float ndcz = cz * inv_w;
                tri[v].x   = (cx * inv_w * 0.5f + 0.5f) * 640.0f;
                tri[v].y   = (1.0f - (cy * inv_w * 0.5f + 0.5f)) * 480.0f;
                tri[v].z   = ndcz * 0.5f + 0.5f;  /* depth [0,1] */
                tri[v].rhw = inv_w;
                tri[v].color = tv->color ? tv->color : 0xFF808080;
                tri[v].u   = tv->u;
                tri[v].v   = tv->v;
            }
            if (!visible) continue;

            /* Add to batch */
            batch[batch_count++] = tri[0];
            batch[batch_count++] = tri[1];
            batch[batch_count++] = tri[2];
            total_verts_written += 3;

            if (batch_count >= BATCH_MAX_VERTS - 3) {
                FLUSH_BATCH();
            }
        }

        FLUSH_BATCH();
    }

    FLUSH_BATCH();
    #undef FLUSH_BATCH
    #undef BATCH_MAX_VERTS

    static uint32_t inject_count = 0;
    inject_count++;
    if (inject_count <= 3 || (inject_count % 300) == 0)
        fprintf(stderr, "  [TRACK-DRAW] #%u: %d verts, %d draws, %d chunks\n",
                inject_count, total_verts_written, total_draws,
                g_track_data.chunk_count);

    return total_verts_written;
}
