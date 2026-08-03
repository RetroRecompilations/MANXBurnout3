/**
 * Burnout 3: Takedown - Frontend Menu Renderer
 *
 * Renders a functional menu UI when the game is in frontend state.
 * Detects menu state via camera pointer (0x4D4008 = menus) and renders
 * using the D3D8→D3D11 layer with textures from Global.txd.
 *
 * Menu screens:
 *   0 = Title screen (B3Logo + "Press Start")
 *   1 = Main menu (World Tour, Single Event, Crash, Options)
 *   2 = Single Event sub-menu (Race, Road Rage, Burning Lap, track select)
 */

#include "fe_menu.h"
#include "txd_loader.h"
#include "rw_bridge.h"
#include "awd_loader.h"
#include "../d3d/d3d8_xbox.h"
#ifdef B3_HAVE_FFMPEG
#include "manx_fmv.h"
#endif

#include <windows.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* ── Xbox memory access ──────────────────────────────────────── */
extern ptrdiff_t g_xbox_mem_offset;
#define FMEM32(addr) (*(volatile uint32_t *)((uintptr_t)(addr) + g_xbox_mem_offset))
#define FMEM8(addr)  (*(volatile uint8_t  *)((uintptr_t)(addr) + g_xbox_mem_offset))

/* ── Game state addresses ────────────────────────────────────── */
#define ADDR_CAM_PTR     0x4D5370   /* Active camera pointer */
#define ADDR_GAME_STATE  0x4D53B8   /* Game state machine */
#define CAM_MENUS        0x4D4008   /* Menu camera value */
#define CAM_GAMEPLAY     0x4D45D0   /* Gameplay camera value */

/* ── External globals ────────────────────────────────────────── */
extern TXD_Dict g_global_txd;
extern int g_textures_loaded;
extern AWDFile *g_awd_fe;

/* ── D3D8 constants ──────────────────────────────────────────── */
#ifndef D3DFVF_XYZRHW
#define D3DFVF_XYZRHW  0x004
#define D3DFVF_DIFFUSE  0x040
#define D3DFVF_TEX1     0x100
#endif
#ifndef D3DPT_TRIANGLELIST
#define D3DPT_TRIANGLELIST 4
#endif
#ifndef D3DRS_ZENABLE
#define D3DRS_ZENABLE           7
#define D3DRS_LIGHTING         137
#define D3DRS_CULLMODE          22
#define D3DRS_ALPHABLENDENABLE  27
#define D3DRS_SRCBLEND          19
#define D3DRS_DESTBLEND         20
#define D3DCULL_NONE             1
#define D3DBLEND_SRCALPHA        5
#define D3DBLEND_INVSRCALPHA     6
#endif

/* ── Vertex type ─────────────────────────────────────────────── */
typedef struct {
    float x, y, z, rhw;
    DWORD color;
    float u, v;
} FEVertex;

/* ── Menu state ──────────────────────────────────────────────── */
/* Menu screens matching the captured PB states */
#define FE_SCREEN_TITLE            0
#define FE_SCREEN_MAIN             1
#define FE_SCREEN_SINGLE           2
#define FE_SCREEN_TRACK            3
#define FE_SCREEN_WORLD_TOUR       4
#define FE_SCREEN_RACE_SETUP       5
#define FE_SCREEN_TIME_ATTACK      6
#define FE_SCREEN_ROAD_RAGE        7
#define FE_SCREEN_CRASH_SELECT     8
#define FE_SCREEN_DRIVER_DETAILS   9
#define FE_SCREEN_INTRO          100   /* boot FMVs before the frontend */

/* Main menu: 5 items matching the PB capture */
#define FE_MAIN_ITEMS        5
static const char *g_main_menu_labels[FE_MAIN_ITEMS] = {
    "WORLD TOUR", "SINGLE EVENT", "MULTIPLAYER", "XBOX LIVE", "DRIVER DETAILS"
};

/* Single Event sub-menu: 4 items */
#define FE_SINGLE_ITEMS      4
static const char *g_single_menu_labels[FE_SINGLE_ITEMS] = {
    "RACE", "TIME ATTACK", "ROAD RAGE", "CRASH"
};

/* Content catalogues, owned by the port's frame pump. 36 loadable tracks
 * and 67 cars ship; without a way to choose, all but one of each was
 * unreachable. */
extern int         b3_track_count(void);
extern int         b3_car_count(void);
extern const char *b3_track_name(int i);
extern const char *b3_car_name(int i);
extern void        b3_select_track(int i);
extern void        b3_select_car(int i);
extern int         b3_selected_track(void);
extern int         b3_selected_car(void);

#define FE_SETUP_ROWS 3   /* track, car, start */
static int g_fe_setup_row = 0;

static int g_fe_screen = FE_SCREEN_MAIN;  /* Skip title, start on main menu */
int g_fe_cursor = 0;  /* exported for PB replay cursor overlay */
static int g_race_active = 0;
int g_race_init_done = 0;  /* non-static: set by sub_001AA100 when phase 9 completes */
int g_force_respawn = 0;   /* non-static: triggers physics re-init in sub_000110E0 */
static void fe_start_race(int screen);
static float g_fe_timer = 0.0f;
static float g_fe_flash = 0.0f;   /* "Press Start" blink timer */
static int g_fe_initialized = 0;
static int g_fe_rendered_once = 0;  /* set true after first successful render */
static int g_fe_prev_up = 0;      /* edge detection for key repeat */
static int g_fe_prev_down = 0;
static int g_fe_prev_enter = 0;
static int g_fe_prev_esc = 0;

/* Cached textures */
static IDirect3DTexture8 *g_tex_logo = NULL;
static IDirect3DTexture8 *g_tex_arrow = NULL;
static IDirect3DTexture8 *g_tex_bg = NULL;
static IDirect3DTexture8 *g_tex_ramp = NULL;
static IDirect3DTexture8 *g_tex_fe = NULL;

/* ── Boot intro FMVs ─────────────────────────────────────────── */
/* The retail boot flow: Criterion/RenderWare badge reel, the localized
 * EA intro, then the title attract movie. All video-only XMVs; their
 * audio lives in ovid/movie.xwb and is not wired yet. */
static char g_fe_game_dir[1024];

void fe_menu_set_game_dir(const char *dir)
{
    if (!dir) return;
    strncpy(g_fe_game_dir, dir, sizeof(g_fe_game_dir) - 1);
    g_fe_game_dir[sizeof(g_fe_game_dir) - 1] = '\0';
}

#ifdef B3_HAVE_FFMPEG
static const char *g_intro_files[] = {
    "cri_rw30.xmv",   /* Criterion + RenderWare badges */
    "englis30.xmv",   /* EA intro (English) */
    "Titles30.xmv",   /* title attract movie */
};
static const char *g_intro_portable_files[] = {
    "cri_rw30.mp4",
    "englis30.mp4",
    "Titles30.mp4",
};
#define FE_INTRO_COUNT ((int)(sizeof(g_intro_files) / sizeof(g_intro_files[0])))
static int g_intro_index = 0;
static manx_fmv *g_intro_player = NULL;
static atomic_flag g_intro_player_lock = ATOMIC_FLAG_INIT;
static IDirect3DTexture8 *g_tex_video = NULL;
static int g_intro_video_valid = 0;   /* g_tex_video holds a decoded frame */

/* Open playlist entry g_intro_index, skipping any that fail. Leaves
 * g_intro_player NULL when the playlist is exhausted. */
static int fe_file_exists(const char *path)
{
    FILE *fp = fopen(path, "rb");
    if (!fp) return 0;
    fclose(fp);
    return 1;
}

static void fe_intro_player_close(void)
{
    while (atomic_flag_test_and_set_explicit(&g_intro_player_lock,
                                              memory_order_acquire)) {}
    manx_fmv *old = g_intro_player;
    g_intro_player = NULL;
    atomic_flag_clear_explicit(&g_intro_player_lock, memory_order_release);
    if (old) manx_fmv_close(old);
}

static void fe_intro_open_current(void)
{
    while (g_intro_index < FE_INTRO_COUNT) {
        char path[1200];
        const char *portable_root = getenv("B3_PORTABLE_MEDIA");
        if (portable_root && *portable_root) {
            snprintf(path, sizeof(path), "%s/movies/%s", portable_root,
                     g_intro_portable_files[g_intro_index]);
        } else {
            snprintf(path, sizeof(path), "%s/portable/movies/%s",
                     g_fe_game_dir, g_intro_portable_files[g_intro_index]);
        }
        if (!fe_file_exists(path)) {
            snprintf(path, sizeof(path), "%s/ovid/%s",
                     g_fe_game_dir, g_intro_files[g_intro_index]);
        }
        /* BGRA to match the D3D8 A8R8G8B8 texture staging layout. */
        manx_fmv *opened = manx_fmv_open(path, 640, 480,
                                              manx_fmv_format_bgra);
        while (atomic_flag_test_and_set_explicit(&g_intro_player_lock,
                                                  memory_order_acquire)) {}
        g_intro_player = opened;
        atomic_flag_clear_explicit(&g_intro_player_lock, memory_order_release);
        if (opened) {
            fprintf(stderr, "[XMV] playing %s\n", path);
            return;
        }
        g_intro_index++;
    }
    g_intro_player = NULL;
}

static void fe_intro_finish(void)
{
    fe_intro_player_close();
    g_intro_video_valid = 0;
    g_fe_screen = FE_SCREEN_TITLE;
    g_fe_timer = 0;
    fprintf(stderr, "[FE-MENU] Intro done -> title screen\n");
}

static void fe_intro_advance(void)
{
    fe_intro_player_close();
    g_intro_video_valid = 0;
    g_intro_index++;
    fe_intro_open_current();
    if (!g_intro_player) fe_intro_finish();
}

/* Per-frame intro drive: decode paced by wall clock, upload new frames
 * into the video texture. Runs from fe_menu_update — outside the D3D
 * scene, so the texture upload never lands mid-render-pass. */
static void fe_intro_update(int skip_edge)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();

    /* The boot pump (600 frames in burnout3_init) calls this at an
     * uncontrolled cadence while Present blocks on vsync.  Opening an
     * FMV here starts its wall clock; by the time the pump finishes
     * and normal 60 Hz pumping resumes, enough real time has passed
     * that short intros (cri_rw30.xmv at ~8 s, englis30.xmv at ~4 s)
     * have already expired and are skipped.  Waiting for g_game_ready
     * — set after the pump — means the first decoded frame lands when
     * the clock is fresh and the 60 Hz cadence keeps it accurate. */
    extern int g_game_ready;
    if (!g_game_ready) return;

    if (!g_intro_player) {
        fe_intro_open_current();
        if (!g_intro_player) { fe_intro_finish(); return; }
    }

    if (skip_edge) {
        fprintf(stderr, "[FE-MENU] Intro video %d skipped\n", g_intro_index);
        fe_intro_advance();
        return;
    }

    int new_frame = 0;
    int playing = manx_fmv_update(g_intro_player, &new_frame);

    if (new_frame && dev) {
        if (!g_tex_video) {
            if (dev->lpVtbl->CreateTexture(dev, 640, 480, 1, 0,
                    D3DFMT_A8R8G8B8, 0, &g_tex_video) != S_OK)
                g_tex_video = NULL;
        }
        if (g_tex_video) {
            D3DLOCKED_RECT lr;
            if (g_tex_video->lpVtbl->LockRect(g_tex_video, 0, &lr, NULL, 0) == S_OK) {
                memcpy(lr.pBits, manx_fmv_frame(g_intro_player), (size_t)640 * 480 * 4);
                g_tex_video->lpVtbl->UnlockRect(g_tex_video, 0);
                g_intro_video_valid = 1;
            }
        }
    }

    if (!playing) fe_intro_advance();
}
#endif /* B3_HAVE_FFMPEG */

int fe_menu_audio_callback(int16_t *stereo, int max_frames)
{
    if (!stereo || max_frames <= 0) return 0;
#ifdef B3_HAVE_FFMPEG
    if (atomic_flag_test_and_set_explicit(&g_intro_player_lock,
                                          memory_order_acquire))
        return 0;
    int frames = g_intro_player
        ? manx_fmv_read_audio(g_intro_player, stereo, max_frames) : 0;
    atomic_flag_clear_explicit(&g_intro_player_lock, memory_order_release);
    return frames;
#else
    return 0;
#endif
}

/* ── Color helpers ───────────────────────────────────────────── */
static DWORD color_rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
    return ((DWORD)a << 24) | ((DWORD)r << 16) | ((DWORD)g << 8) | (DWORD)b;
}

/* ── Draw primitives ─────────────────────────────────────────── */

static void fe_set_2d_state(IDirect3DDevice8 *dev)
{
    dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_LIGHTING, FALSE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_CULLMODE, D3DCULL_NONE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_ALPHABLENDENABLE, TRUE);
    dev->lpVtbl->SetRenderState(dev, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
    dev->lpVtbl->SetRenderState(dev, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
}

static void fe_draw_rect(IDirect3DDevice8 *dev, float x, float y,
                          float w, float h, DWORD color)
{
    float x0 = x, y0 = y, x1 = x + w, y1 = y + h;
    FEVertex verts[6] = {
        {x0, y0, 0.5f, 1.0f, color, 0, 0},
        {x1, y0, 0.5f, 1.0f, color, 1, 0},
        {x0, y1, 0.5f, 1.0f, color, 0, 1},
        {x1, y0, 0.5f, 1.0f, color, 1, 0},
        {x1, y1, 0.5f, 1.0f, color, 1, 1},
        {x0, y1, 0.5f, 1.0f, color, 0, 1},
    };
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetVertexShader(dev, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, verts, sizeof(FEVertex));
}

static void fe_draw_textured(IDirect3DDevice8 *dev, IDirect3DTexture8 *tex,
                              float x, float y, float w, float h, DWORD color)
{
    if (!tex) return;
    float x0 = x, y0 = y, x1 = x + w, y1 = y + h;
    FEVertex verts[6] = {
        {x0, y0, 0.5f, 1.0f, color, 0, 0},
        {x1, y0, 0.5f, 1.0f, color, 1, 0},
        {x0, y1, 0.5f, 1.0f, color, 0, 1},
        {x1, y0, 0.5f, 1.0f, color, 1, 0},
        {x1, y1, 0.5f, 1.0f, color, 1, 1},
        {x0, y1, 0.5f, 1.0f, color, 0, 1},
    };
    dev->lpVtbl->SetVertexShader(dev, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
    dev->lpVtbl->SetTexture(dev, 0, (IDirect3DBaseTexture8 *)tex);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 4); /* COLOROP=MODULATE */
    dev->lpVtbl->SetTextureStageState(dev, 0, 2, 2); /* COLORARG1=TEXTURE */
    dev->lpVtbl->SetTextureStageState(dev, 0, 3, 0); /* COLORARG2=DIFFUSE */
    dev->lpVtbl->SetTextureStageState(dev, 0, 4, 4); /* ALPHAOP=MODULATE */
    dev->lpVtbl->SetTextureStageState(dev, 0, 5, 2); /* ALPHAARG1=TEXTURE */
    dev->lpVtbl->SetTextureStageState(dev, 0, 6, 0); /* ALPHAARG2=DIFFUSE */
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, verts, sizeof(FEVertex));
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetTextureStageState(dev, 0, 1, 1); /* COLOROP=DISABLE */
}

/* Simple bitmap text using colored rectangles (no font texture needed).
 * Each character is a 5x7 pixel grid scaled to given size. */
static const uint8_t g_font_5x7[128][7] = {
    /* Only define printable ASCII 32-90 */
};

/* Simplified text rendering: draw each character as a colored block.
 * For proper text we'd need the game's font texture, but colored blocks
 * work for a functional menu. */
static void fe_draw_text(IDirect3DDevice8 *dev, const char *text,
                          float x, float y, float char_w, float char_h,
                          DWORD color)
{
    float cx = x;
    for (const char *p = text; *p; p++) {
        if (*p == ' ') {
            cx += char_w * 0.6f;
            continue;
        }
        /* Draw a filled rectangle for each character with slight gaps */
        fe_draw_rect(dev, cx, y, char_w * 0.8f, char_h, color);
        cx += char_w;
    }
}

/* Better text: draw each letter as a recognizable shape using small rects.
 * This is a minimal 5-wide pixel font for A-Z, 0-9 and some symbols. */
static void fe_draw_char_bitmap(IDirect3DDevice8 *dev, char ch,
                                 float x, float y, float scale, DWORD color)
{
    /* 5x7 bitmap font definitions for A-Z, 0-9 */
    /* Each row is a 5-bit pattern: bit 4=leftmost, bit 0=rightmost */
    static const uint8_t font_az[26][7] = {
        {0x0E,0x11,0x11,0x1F,0x11,0x11,0x11}, /* A */
        {0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E}, /* B */
        {0x0E,0x11,0x10,0x10,0x10,0x11,0x0E}, /* C */
        {0x1C,0x12,0x11,0x11,0x11,0x12,0x1C}, /* D */
        {0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F}, /* E */
        {0x1F,0x10,0x10,0x1E,0x10,0x10,0x10}, /* F */
        {0x0E,0x11,0x10,0x17,0x11,0x11,0x0F}, /* G */
        {0x11,0x11,0x11,0x1F,0x11,0x11,0x11}, /* H */
        {0x0E,0x04,0x04,0x04,0x04,0x04,0x0E}, /* I */
        {0x07,0x02,0x02,0x02,0x02,0x12,0x0C}, /* J */
        {0x11,0x12,0x14,0x18,0x14,0x12,0x11}, /* K */
        {0x10,0x10,0x10,0x10,0x10,0x10,0x1F}, /* L */
        {0x11,0x1B,0x15,0x15,0x11,0x11,0x11}, /* M */
        {0x11,0x19,0x15,0x13,0x11,0x11,0x11}, /* N */
        {0x0E,0x11,0x11,0x11,0x11,0x11,0x0E}, /* O */
        {0x1E,0x11,0x11,0x1E,0x10,0x10,0x10}, /* P */
        {0x0E,0x11,0x11,0x11,0x15,0x12,0x0D}, /* Q */
        {0x1E,0x11,0x11,0x1E,0x14,0x12,0x11}, /* R */
        {0x0E,0x11,0x10,0x0E,0x01,0x11,0x0E}, /* S */
        {0x1F,0x04,0x04,0x04,0x04,0x04,0x04}, /* T */
        {0x11,0x11,0x11,0x11,0x11,0x11,0x0E}, /* U */
        {0x11,0x11,0x11,0x11,0x0A,0x0A,0x04}, /* V */
        {0x11,0x11,0x11,0x15,0x15,0x15,0x0A}, /* W */
        {0x11,0x11,0x0A,0x04,0x0A,0x11,0x11}, /* X */
        {0x11,0x11,0x0A,0x04,0x04,0x04,0x04}, /* Y */
        {0x1F,0x01,0x02,0x04,0x08,0x10,0x1F}, /* Z */
    };
    static const uint8_t font_09[10][7] = {
        {0x0E,0x11,0x13,0x15,0x19,0x11,0x0E}, /* 0 */
        {0x04,0x0C,0x04,0x04,0x04,0x04,0x0E}, /* 1 */
        {0x0E,0x11,0x01,0x06,0x08,0x10,0x1F}, /* 2 */
        {0x0E,0x11,0x01,0x06,0x01,0x11,0x0E}, /* 3 */
        {0x02,0x06,0x0A,0x12,0x1F,0x02,0x02}, /* 4 */
        {0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E}, /* 5 */
        {0x06,0x08,0x10,0x1E,0x11,0x11,0x0E}, /* 6 */
        {0x1F,0x01,0x02,0x04,0x08,0x08,0x08}, /* 7 */
        {0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E}, /* 8 */
        {0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C}, /* 9 */
    };

    const uint8_t *bmp = NULL;
    if (ch >= 'A' && ch <= 'Z') bmp = font_az[ch - 'A'];
    else if (ch >= 'a' && ch <= 'z') bmp = font_az[ch - 'a'];
    else if (ch >= '0' && ch <= '9') bmp = font_09[ch - '0'];
    else if (ch == ':') { /* colon: two dots */
        fe_draw_rect(dev, x + scale * 2, y + scale * 1, scale, scale, color);
        fe_draw_rect(dev, x + scale * 2, y + scale * 5, scale, scale, color);
        return;
    } else if (ch == '-') {
        fe_draw_rect(dev, x + scale, y + scale * 3, scale * 3, scale, color);
        return;
    } else if (ch == '.') {
        fe_draw_rect(dev, x + scale * 2, y + scale * 6, scale, scale, color);
        return;
    }
    /* The race setup screen needs these: without the chevrons nothing on
     * screen says the row responds to left/right, and "1/36" read as
     * "1 36". Underscore matters too — the track names are C1_V1. */
    static const uint8_t font_sym[4][7] = {
        {0x02,0x04,0x08,0x10,0x08,0x04,0x02},   /* < */
        {0x08,0x04,0x02,0x01,0x02,0x04,0x08},   /* > */
        {0x01,0x02,0x02,0x04,0x08,0x08,0x10},   /* / */
        {0x00,0x00,0x00,0x00,0x00,0x00,0x1F},   /* _ */
    };
    if      (ch == '<') bmp = font_sym[0];
    else if (ch == '>') bmp = font_sym[1];
    else if (ch == '/') bmp = font_sym[2];
    else if (ch == '_') bmp = font_sym[3];

    if (!bmp) return;

    for (int row = 0; row < 7; row++) {
        for (int col = 0; col < 5; col++) {
            if (bmp[row] & (0x10 >> col)) {
                fe_draw_rect(dev, x + col * scale, y + row * scale,
                             scale, scale, color);
            }
        }
    }
}

static void fe_draw_string(IDirect3DDevice8 *dev, const char *text,
                            float x, float y, float scale, DWORD color)
{
    float cx = x;
    for (const char *p = text; *p; p++) {
        if (*p == ' ') {
            cx += scale * 4;
            continue;
        }
        fe_draw_char_bitmap(dev, *p, cx, y, scale, color);
        cx += scale * 6;
    }
}

/* Calculate string width for centering */
static float fe_string_width(const char *text, float scale)
{
    float w = 0;
    for (const char *p = text; *p; p++) {
        w += (*p == ' ') ? scale * 4 : scale * 6;
    }
    return w;
}

static void fe_draw_string_centered(IDirect3DDevice8 *dev, const char *text,
                                     float cx, float y, float scale, DWORD color)
{
    float w = fe_string_width(text, scale);
    fe_draw_string(dev, text, cx - w * 0.5f, y, scale, color);
}

/* ── Gradient background ─────────────────────────────────────── */
static void fe_draw_gradient_bg(IDirect3DDevice8 *dev,
                                 DWORD top_color, DWORD bot_color)
{
    FEVertex verts[6] = {
        {0, 0, 0.999f, 1, top_color, 0, 0},
        {640, 0, 0.999f, 1, top_color, 1, 0},
        {0, 480, 0.999f, 1, bot_color, 0, 1},
        {640, 0, 0.999f, 1, top_color, 1, 0},
        {640, 480, 0.999f, 1, bot_color, 1, 1},
        {0, 480, 0.999f, 1, bot_color, 0, 1},
    };
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetVertexShader(dev, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
    dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 2, verts, sizeof(FEVertex));
}

/* ── Public API ──────────────────────────────────────────────── */

void fe_menu_init(void)
{
    if (!g_textures_loaded) return;

    g_tex_logo  = txd_find(&g_global_txd, "B3Logo");
    g_tex_arrow = txd_find(&g_global_txd, "Arrow");
    g_tex_bg    = txd_find(&g_global_txd, "bg");
    g_tex_ramp  = txd_find(&g_global_txd, "ramp");
    g_tex_fe    = txd_find(&g_global_txd, "FE");

    g_fe_initialized = 1;
    /* Library/test users keep the quick main-menu start unless the host
     * explicitly asks for the retail intro flow. */
    const char *intro_env = getenv("B3_INTRO");
    int play_intro = intro_env && intro_env[0] && strcmp(intro_env, "0") != 0;
    if (getenv("B3_SKIP_INTRO")) play_intro = 0;
    g_fe_screen = play_intro ? FE_SCREEN_TITLE : FE_SCREEN_MAIN;
    g_fe_cursor = 0;
    g_fe_timer = 0;

#ifdef B3_HAVE_FFMPEG
    if (g_fe_game_dir[0] && play_intro) {
        g_fe_screen = FE_SCREEN_INTRO;
        g_intro_index = 0;
    }
#endif

    fprintf(stderr, "[FE-MENU] Initialized: logo=%p arrow=%p bg=%p ramp=%p fe=%p\n",
            g_tex_logo, g_tex_arrow, g_tex_bg, g_tex_ramp, g_tex_fe);
}

int fe_menu_is_active(void)
{
    /* If we triggered a race/crash from the menu, we're NOT in menu mode
     * even if the state machine hasn't transitioned yet. */
    if (g_race_active) return 0;

    /* Game state 5 = menus/frontend (more reliable than cam_ptr which
     * gets overwritten with native/mirror addresses by gen code) */
    uint32_t game_state = FMEM32(ADDR_GAME_STATE);
    return (game_state == 5);
}

void fe_menu_update(float dt)
{
    g_fe_timer += dt;
    g_fe_flash += dt;

    /* If racing, force state machine values every frame.
     * The gen code in sub_000165F0 checks MEM8(0x4D53BC) (mode flag) and
     * MEM8(0x4A4B90) (loaded flag) before allowing state transitions.
     * Something in the state-5 gen code path clears these, so we must
     * re-assert them every frame until the transition to state 4 takes. */
    if (g_race_active) {
        uint32_t cur_state = FMEM32(ADDR_GAME_STATE);

        /* Simple state forcing: write state=4 ONCE per frame until the gen
         * code's sub_001AA100 completes (sets g_race_init_done=1 via phase 9
         * timeout). After that, just keep camera in gameplay mode. */
        if (!g_race_init_done) {
            /* Force state=4 to trigger case 3 → sub_001AA100 */
            FMEM8(0x4D53BC) = 1;             /* mode flag: racing */
            FMEM8(0x4A4B90) = 1;             /* loaded flag */
            FMEM32(0x4D53B4) = 4;            /* pending state */
            FMEM32(0x4D53B8) = 4;            /* current state (force) */
            FMEM32(0x4D5370) = 0x4D45D0;     /* camera → gameplay */
        }

        /* After init complete, maintain gameplay state and force race start.
         * The game runs a pre-race cinematic (flyover camera), then a countdown.
         * We skip the cinematic and force the race into "racing" state. */
        if (g_race_init_done) {
            static int race_frames = 0;
            race_frames++;

            FMEM32(0x4D5370) = 0x4D45D0;     /* camera → gameplay */

            /* After 60 frames (~1 sec), force race to active/driving state.
             * Skip the cinematic intro and countdown sequence.
             * Race control block at 0x411B00 (0x100 bytes):
             *   0x411B20 = active flag
             *   0x411BDC = current lap
             *   0x411BE0 = race type
             *   0x411BE8 = total laps
             *   0x411BF8 = countdown timer (0 = GO) */
            if (race_frames == 60) {
                FMEM32(0x411B20) = 1;          /* race active */
                FMEM32(0x411BDC) = 1;          /* lap 1 */
                FMEM32(0x411BE8) = 3;          /* 3 laps total */
                *(volatile float*)((uintptr_t)0x411BF8 + g_xbox_mem_offset) = 0.0f;  /* countdown = 0 (GO!) */
                /* Force camera to chase cam (gameplay camera, not cinematic) */
                FMEM32(0x4D5370) = 0x4D45D0;
                fprintf(stderr, "  [FE-RACE] Forced race start! Skipped cinematic.\n");
            }
        }

        /* ESC (or pad B) returns to menus */
        static int esc_prev_race = 0;
        XINPUT_STATE race_xi;
        int esc_now_race = (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
            || ((XInputGetState(0, &race_xi) == 0) &&
                (race_xi.wButtons & XINPUT_GAMEPAD_B));
        if (esc_now_race && !esc_prev_race) {
            fe_menu_stop_race();
        }
        esc_prev_race = esc_now_race;
        return;
    }

    /* Edge-detected input — arrow keys + WASD + Enter/Esc, merged with
     * gamepad d-pad/stick + A/B/START (from the session's pad injection). */
    XINPUT_STATE fe_xi;
    int fe_pad = (XInputGetState(0, &fe_xi) == 0);
    int up_now    = (GetAsyncKeyState(VK_UP)     & 0x8000) || (GetAsyncKeyState('W') & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & XINPUT_GAMEPAD_DPAD_UP));
    int down_now  = (GetAsyncKeyState(VK_DOWN)   & 0x8000) || (GetAsyncKeyState('S') & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & XINPUT_GAMEPAD_DPAD_DOWN));
    int enter_now = (GetAsyncKeyState(VK_RETURN) & 0x8000) || (GetAsyncKeyState(VK_SPACE) & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & (XINPUT_GAMEPAD_A | XINPUT_GAMEPAD_START)));
    int esc_now   = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) || (GetAsyncKeyState(VK_BACK) & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & XINPUT_GAMEPAD_B));
    int left_now  = (GetAsyncKeyState(VK_LEFT)   & 0x8000) || (GetAsyncKeyState('A') & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & XINPUT_GAMEPAD_DPAD_LEFT));
    int right_now = (GetAsyncKeyState(VK_RIGHT)  & 0x8000) || (GetAsyncKeyState('D') & 0x8000)
                 || (fe_pad && (fe_xi.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT));

    static int g_fe_prev_left = 0, g_fe_prev_right = 0;

    int up_edge    = up_now && !g_fe_prev_up;
    int down_edge  = down_now && !g_fe_prev_down;
    int enter_edge = enter_now && !g_fe_prev_enter;
    int esc_edge   = esc_now && !g_fe_prev_esc;
    int left_edge  = left_now && !g_fe_prev_left;
    int right_edge = right_now && !g_fe_prev_right;

    g_fe_prev_up    = up_now;
    g_fe_prev_down  = down_now;
    g_fe_prev_enter = enter_now;
    g_fe_prev_esc   = esc_now;
    g_fe_prev_left  = left_now;
    g_fe_prev_right = right_now;

    switch (g_fe_screen) {
#ifdef B3_HAVE_FFMPEG
    case FE_SCREEN_INTRO: {
        /* Pad START/A also skips the current video. */
        XINPUT_STATE xi;
        int pad_now = (XInputGetState(0, &xi) == 0) &&
            (xi.wButtons & (XINPUT_GAMEPAD_START | XINPUT_GAMEPAD_A));
        static int pad_prev = 0;
        int pad_edge = pad_now && !pad_prev;
        pad_prev = pad_now;

        fe_intro_update(enter_edge || esc_edge || pad_edge);
        break;
    }
#endif

    case FE_SCREEN_TITLE:
        if (enter_edge) {
            g_fe_screen = FE_SCREEN_MAIN;
            g_fe_cursor = 0;
        }
        break;

    case FE_SCREEN_MAIN:
        if (up_edge)   g_fe_cursor = (g_fe_cursor + FE_MAIN_ITEMS - 1) % FE_MAIN_ITEMS;
        if (down_edge) g_fe_cursor = (g_fe_cursor + 1) % FE_MAIN_ITEMS;
        if (enter_edge) {
            int prev_cursor = g_fe_cursor;
            switch (g_fe_cursor) {
            case 0:
                /* Straight into the race — the old confirmation screen
                 * rendered nothing and read as a frozen menu. */
                fprintf(stderr, "[FE-MENU] Main -> WORLD TOUR (launch)\n");
                fe_start_race(FE_SCREEN_WORLD_TOUR);
                return;
            case 1: g_fe_screen = FE_SCREEN_SINGLE;       g_fe_cursor = 0; break;
            case 2: /* MULTIPLAYER — no PB capture, stay */ break;
            case 3: /* XBOX LIVE — no PB capture, stay */   break;
            case 4: g_fe_screen = FE_SCREEN_DRIVER_DETAILS; g_fe_cursor = 0; break;
            }
            if (g_fe_screen != FE_SCREEN_MAIN)
                fprintf(stderr, "[FE-MENU] Main -> %s\n", g_main_menu_labels[prev_cursor]);
        }
        if (esc_edge) {
            g_fe_screen = FE_SCREEN_TITLE;
        }
        break;

    case FE_SCREEN_SINGLE:
        if (up_edge)   g_fe_cursor = (g_fe_cursor + FE_SINGLE_ITEMS - 1) % FE_SINGLE_ITEMS;
        if (down_edge) g_fe_cursor = (g_fe_cursor + 1) % FE_SINGLE_ITEMS;
        if (enter_edge) {
            /* RACE goes through the setup screen so the track and car are
             * chooseable; the other three launch straight into a session. */
            if (g_fe_cursor == 0) {
                g_fe_screen = FE_SCREEN_TRACK;
                g_fe_setup_row = 0;
                break;
            }
            static const int single_screens[FE_SINGLE_ITEMS] = {
                FE_SCREEN_RACE_SETUP, FE_SCREEN_TIME_ATTACK,
                FE_SCREEN_ROAD_RAGE, FE_SCREEN_CRASH_SELECT,
            };
            fprintf(stderr, "[FE-MENU] Single Event -> %s (launch)\n",
                    g_single_menu_labels[g_fe_cursor]);
            fe_start_race(single_screens[g_fe_cursor]);
            return;
        }
        if (esc_edge) {
            g_fe_screen = FE_SCREEN_MAIN;
            g_fe_cursor = 1; /* Return to SINGLE EVENT highlighted */
        }
        break;

    case FE_SCREEN_TRACK: {
        int tracks = b3_track_count(), cars = b3_car_count();
        if (up_edge)   g_fe_setup_row = (g_fe_setup_row + FE_SETUP_ROWS - 1) % FE_SETUP_ROWS;
        if (down_edge) g_fe_setup_row = (g_fe_setup_row + 1) % FE_SETUP_ROWS;
        int step = (right_edge ? 1 : 0) - (left_edge ? 1 : 0);
        if (step && g_fe_setup_row == 0 && tracks > 0)
            b3_select_track((b3_selected_track() + step + tracks) % tracks);
        if (step && g_fe_setup_row == 1 && cars > 0)
            b3_select_car((b3_selected_car() + step + cars) % cars);
        if (enter_edge) {
            fprintf(stderr, "[FE-MENU] Race setup -> track %s, car %s\n",
                    b3_track_name(b3_selected_track()),
                    b3_car_name(b3_selected_car()));
            fe_start_race(FE_SCREEN_RACE_SETUP);
            return;
        }
        if (esc_edge) {
            g_fe_screen = FE_SCREEN_SINGLE;
            g_fe_cursor = 0;
        }
        break;
    }

    case FE_SCREEN_CRASH_SELECT:
        /* Crash select: Enter launches crash mode */
        if (enter_edge) {
            fprintf(stderr, "[FE-MENU] Launching Crash Mode!\n");
            fe_start_race(FE_SCREEN_CRASH_SELECT);
        }
        if (esc_edge) {
            g_fe_screen = FE_SCREEN_SINGLE;
            g_fe_cursor = 3;
            fprintf(stderr, "[FE-MENU] Back -> screen %d\n", g_fe_screen);
        }
        break;

    case FE_SCREEN_WORLD_TOUR:
    case FE_SCREEN_RACE_SETUP:
    case FE_SCREEN_TIME_ATTACK:
    case FE_SCREEN_ROAD_RAGE:
        /* Race mode sub-screens: Enter launches race, ESC goes back */
        if (enter_edge) {
            fprintf(stderr, "[FE-MENU] Launching race from screen %d!\n", g_fe_screen);
            fe_start_race(g_fe_screen);
        }
        if (esc_edge) {
            if (g_fe_screen == FE_SCREEN_WORLD_TOUR) {
                g_fe_screen = FE_SCREEN_MAIN;
                g_fe_cursor = 0;
            } else {
                int back_cursor = 0;
                if (g_fe_screen == FE_SCREEN_TIME_ATTACK)  back_cursor = 1;
                if (g_fe_screen == FE_SCREEN_ROAD_RAGE)    back_cursor = 2;
                g_fe_screen = FE_SCREEN_SINGLE;
                g_fe_cursor = back_cursor;
            }
            fprintf(stderr, "[FE-MENU] Back -> screen %d\n", g_fe_screen);
        }
        break;

    case FE_SCREEN_DRIVER_DETAILS:
        /* Non-race sub-screen: ESC goes back to main */
        if (esc_edge) {
            g_fe_screen = FE_SCREEN_MAIN;
            g_fe_cursor = 4;
            fprintf(stderr, "[FE-MENU] Back -> screen %d\n", g_fe_screen);
        }
        break;
    }
}

int fe_menu_render_frame(void)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return 0;

    if (!g_fe_initialized)
        fe_menu_init();

    /* Begin scene */
    dev->lpVtbl->BeginScene(dev);
    fe_set_2d_state(dev);

#ifdef B3_HAVE_FFMPEG
    if (g_fe_screen == FE_SCREEN_INTRO) {
        /* Black backdrop; the decoded FMV frame fills the screen once the
         * first frame has been uploaded. */
        fe_draw_rect(dev, 0, 0, 640, 480, color_rgba(0, 0, 0, 255));
        if (g_intro_video_valid && g_tex_video)
            fe_draw_textured(dev, g_tex_video, 0, 0, 640, 480,
                             color_rgba(255, 255, 255, 255));
        dev->lpVtbl->EndScene(dev);
        g_fe_rendered_once = 1;
        return 1;
    }
#endif

    /* Burnout 3 brand colors */
    DWORD col_bg_top  = color_rgba(10, 10, 30, 255);     /* Dark navy */
    DWORD col_bg_bot  = color_rgba(5, 5, 15, 255);       /* Near black */
    DWORD col_orange  = color_rgba(255, 140, 0, 255);    /* B3 orange */
    DWORD col_silver  = color_rgba(200, 200, 210, 255);  /* Menu text */
    DWORD col_white   = color_rgba(255, 255, 255, 255);
    DWORD col_dim     = color_rgba(120, 120, 140, 200);  /* Dim text */
    (void)0; /* col_accent removed — was unused */

    /* Draw gradient background */
    fe_draw_gradient_bg(dev, col_bg_top, col_bg_bot);

    /* Horizontal accent bars */
    fe_draw_rect(dev, 0, 60, 640, 2, color_rgba(255, 140, 0, 100));
    fe_draw_rect(dev, 0, 420, 640, 2, color_rgba(255, 140, 0, 100));

    /* Draw B3Logo centered at top.
     * B3Logo is 256x64 texture. Scale 2x and center horizontally. */
    if (g_tex_logo) {
        float logo_w = 512, logo_h = 128;
        float logo_x = (640 - logo_w) * 0.5f;
        float logo_y = 50;
        fe_draw_textured(dev, g_tex_logo, logo_x, logo_y, logo_w, logo_h, col_white);
    } else {
        /* Fallback: text title */
        fe_draw_string_centered(dev, "BURNOUT 3", 320, 80, 5.0f, col_orange);
        fe_draw_string_centered(dev, "TAKEDOWN", 320, 125, 3.5f, col_silver);
    }

    switch (g_fe_screen) {
    case FE_SCREEN_TITLE: {
        /* "PRESS START" blinking */
        float blink = sinf(g_fe_flash * 3.0f) * 0.5f + 0.5f;
        uint8_t alpha = (uint8_t)(100 + blink * 155);
        DWORD blink_col = color_rgba(255, 200, 100, alpha);
        fe_draw_string_centered(dev, "PRESS START", 320, 280, 3.0f, blink_col);

        /* Version info */
        fe_draw_string_centered(dev, "STATIC RECOMPILATION", 320, 430, 1.5f, col_dim);
        fe_draw_string_centered(dev, "SESSION 39", 320, 450, 1.5f, col_dim);
        break;
    }

    case FE_SCREEN_MAIN: {
        float menu_y = 210;
        float spacing = 40;
        for (int i = 0; i < FE_MAIN_ITEMS; i++) {
            float y = menu_y + i * spacing;
            int selected = (i == g_fe_cursor);

            if (selected) {
                /* Highlight bar */
                float pulse = sinf(g_fe_timer * 4.0f) * 0.15f + 0.85f;
                uint8_t bar_alpha = (uint8_t)(pulse * 80);
                fe_draw_rect(dev, 140, y - 4, 360, 32, color_rgba(255, 140, 0, bar_alpha));

                /* Arrow indicator */
                if (g_tex_arrow) {
                    fe_draw_textured(dev, g_tex_arrow, 150, y, 24, 16, col_orange);
                } else {
                    fe_draw_rect(dev, 155, y + 4, 16, 16, col_orange);
                }
            }

            DWORD text_col = selected ? col_white : col_dim;
            float text_scale = selected ? 2.8f : 2.4f;
            fe_draw_string_centered(dev, g_main_menu_labels[i], 320, y, text_scale, text_col);
        }

        /* Footer hint */
        fe_draw_string_centered(dev, "UP DOWN TO SELECT  ENTER TO CONFIRM  ESC TO BACK",
                                320, 440, 1.2f, col_dim);
        break;
    }

    case FE_SCREEN_SINGLE: {
        /* Sub-header */
        fe_draw_string_centered(dev, "SINGLE EVENT", 320, 190, 2.0f, col_orange);

        float menu_y = 240;
        float spacing = 40;
        for (int i = 0; i < FE_SINGLE_ITEMS; i++) {
            float y = menu_y + i * spacing;
            int selected = (i == g_fe_cursor);

            if (selected) {
                float pulse = sinf(g_fe_timer * 4.0f) * 0.15f + 0.85f;
                uint8_t bar_alpha = (uint8_t)(pulse * 80);
                fe_draw_rect(dev, 160, y - 4, 320, 32, color_rgba(255, 140, 0, bar_alpha));
            }

            DWORD text_col = selected ? col_white : col_dim;
            float text_scale = selected ? 2.8f : 2.4f;
            fe_draw_string_centered(dev, g_single_menu_labels[i], 320, y, text_scale, text_col);
        }

        fe_draw_string_centered(dev, "UP DOWN TO SELECT  ENTER TO CONFIRM  ESC TO BACK",
                                320, 440, 1.2f, col_dim);
        break;
    }

    case FE_SCREEN_TRACK: {
        fe_draw_string_centered(dev, "RACE SETUP", 320, 170, 2.0f, col_orange);

        int tracks = b3_track_count(), cars = b3_car_count();
        char line[96];
        for (int row = 0; row < FE_SETUP_ROWS; row++) {
            float y = 240 + row * 50;
            int selected = (row == g_fe_setup_row);
            if (selected) {
                float pulse = sinf(g_fe_timer * 4.0f) * 0.15f + 0.85f;
                fe_draw_rect(dev, 100, y - 6, 440, 36,
                             color_rgba(255, 140, 0, (uint8_t)(pulse * 80)));
            }
            DWORD col = selected ? col_white : col_dim;
            switch (row) {
            case 0:
                snprintf(line, sizeof line, "< TRACK  %s  %d/%d >",
                         tracks ? b3_track_name(b3_selected_track()) : "NONE",
                         tracks ? b3_selected_track() + 1 : 0, tracks);
                break;
            case 1:
                snprintf(line, sizeof line, "< CAR  %s  %d/%d >",
                         cars ? b3_car_name(b3_selected_car()) : "NONE",
                         cars ? b3_selected_car() + 1 : 0, cars);
                break;
            default:
                snprintf(line, sizeof line, "START RACE");
                break;
            }
            fe_draw_string_centered(dev, line, 320, y, selected ? 2.2f : 1.9f, col);
        }

        fe_draw_string_centered(dev, "UP DOWN TO MOVE  LEFT RIGHT TO CHANGE  ENTER TO RACE",
                                320, 440, 1.2f, col_dim);
        break;
    }

    case FE_SCREEN_WORLD_TOUR:
    case FE_SCREEN_RACE_SETUP:
    case FE_SCREEN_TIME_ATTACK:
    case FE_SCREEN_ROAD_RAGE:
    case FE_SCREEN_CRASH_SELECT:
        /* Selection now launches directly, but if one of these screens is
         * ever shown, say what it wants instead of rendering nothing —
         * the blank version read as a frozen menu. */
        fe_draw_string_centered(dev, "PRESS ENTER TO START", 320, 260, 3.0f, col_orange);
        fe_draw_string_centered(dev, "ESC TO GO BACK", 320, 310, 1.8f, col_dim);
        break;

    case FE_SCREEN_DRIVER_DETAILS:
        fe_draw_string_centered(dev, "DRIVER DETAILS", 320, 220, 2.5f, col_orange);
        fe_draw_string_centered(dev, "NOTHING HERE YET  ESC TO GO BACK", 320, 280, 1.5f, col_dim);
        break;
    }

    /* Debug: game state overlay */
    {
        uint32_t state = FMEM32(ADDR_GAME_STATE);
        char buf[64];
        sprintf(buf, "STATE:%d", state);
        fe_draw_string(dev, buf, 4, 4, 1.0f, color_rgba(80, 80, 100, 180));
    }

    dev->lpVtbl->EndScene(dev);

    g_fe_rendered_once = 1;
    return 1;
}

/** Returns 1 once fe_menu_render_frame has produced a frame at least once. */
int fe_menu_rendered_once(void) { return g_fe_rendered_once; }

/*
 * Start a race — disable PB replay, load track, switch to gameplay rendering.
 */
/* Bumped by every race launch. The frame pump polls the racing flag once a
 * frame, so a stop followed by a start between two frames is invisible to it
 * and the new race would keep the old race's track and car. */
static unsigned g_fe_race_generation = 0;
unsigned fe_race_generation(void) { return g_fe_race_generation; }

static void fe_start_race(int screen)
{
    g_fe_race_generation++;
    /* Disable PB replay — this lets the bridge render gameplay instead */
    extern void nv2a_pb_replay_set_active(int active);
    nv2a_pb_replay_set_active(0);

    /* Load a track for gameplay rendering */
    extern int rw_load_track(const char *path);
    extern int rw_has_track(void);

    if (!rw_has_track()) {
        /* For crash mode, load from a crash junction track directory.
         * For race modes, load from regular track directories. */
        const char *tracks[] = {
            "Burnout 3 Takedown\\Tracks\\AS\\C1_V1\\streamed.dat",
            "Burnout 3 Takedown\\Tracks\\EU\\C1_V1\\streamed.dat",
            "Burnout 3 Takedown\\Tracks\\US\\C1_V1\\streamed.dat",
            NULL
        };
        for (int i = 0; tracks[i]; i++) {
            FILE *f = fopen(tracks[i], "rb");
            if (f) {
                fclose(f);
                fprintf(stderr, "[FE-MENU] Loading track: %s\n", tracks[i]);
                rw_load_track(tracks[i]);
                break;
            }
        }
    }

    g_race_active = 1;
    g_race_init_done = 0;  /* Reset so state forcing begins fresh */
    g_force_respawn = 1;   /* Force physics position re-init */
    g_fe_screen = FE_SCREEN_MAIN;  /* Reset menu state for when we return */

    /* ── Trigger gameplay state machine transition ──
     *
     * State machine flow (sub_000165F0):
     *   current state 5 → detect pending != current → set current = 4
     *   → case 3 (state-1=3) → calls sub_001AA100 (phase state machine)
     *   → phases 1-9 → returns 1 → transitions to state 5 (gameplay)
     *
     * Key addresses:
     *   0x4D53B4 = pending state (ebp + 0x2E214)
     *   0x4D53B8 = current state (ebp + 0x2E218)
     *   0x4D53BC = mode flag (1=racing, checked by sub_00016EF0)
     *   0x4D5370 = camera ptr (0x4D45D0 = gameplay)
     *   0x411B20 = race active flag
     *   0x411BE0 = race type (0=race, 1=time attack, 2=road rage, 3=crash)
     */
    FMEM32(0x4D53B4) = 4;         /* pending state → race/crash init */
    FMEM32(0x4A4B90) = 1;         /* "loaded" flag (enables state transitions) */
    FMEM32(0x4D53BC) = 1;         /* mode flag: racing active */
    FMEM32(0x4D5370) = 0x4D45D0;  /* camera → gameplay */
    FMEM32(0x411B20) = 1;         /* race active */
    FMEM32(0x5FFF1C) = 0;         /* speed = 0 (start from rest) */

    /* Reset sub_001AA100 phase state machine to phase 1.
     * After boot, the phase is at 0x13 (19, complete). Without resetting,
     * case 3 calls 1AA100 which returns 1 immediately → state bounces
     * back to 5 before any initialization can happen.
     * Phase address = game_base (0x60EA00) + 0x144384 = 0x752D84 */
    FMEM32(0x752D84) = 1;         /* reset 1AA100 phase → 1 (scene init) */
    /* Also reset the render list state that phase 9 populates */
    FMEM32(0x60EA00 + 0x12ADB0 + 0x08) = 0;  /* render list state → 0 */

    /* Set race type based on menu selection */
    switch (screen) {
    case FE_SCREEN_CRASH_SELECT:
        FMEM32(0x411BE0) = 3;     /* crash junction */
        fprintf(stderr, "[FE-MENU] CRASH MODE! Drive into traffic.\n");
        break;
    case FE_SCREEN_RACE_SETUP:
        FMEM32(0x411BE0) = 0;     /* standard race */
        fprintf(stderr, "[FE-MENU] RACE MODE! 3 laps.\n");
        break;
    case FE_SCREEN_TIME_ATTACK:
        FMEM32(0x411BE0) = 1;     /* time attack / burning lap */
        fprintf(stderr, "[FE-MENU] TIME ATTACK!\n");
        break;
    case FE_SCREEN_ROAD_RAGE:
        FMEM32(0x411BE0) = 2;     /* road rage */
        fprintf(stderr, "[FE-MENU] ROAD RAGE! Take down opponents.\n");
        break;
    case FE_SCREEN_WORLD_TOUR:
        FMEM32(0x411BE0) = 0;     /* world tour = standard race sequence */
        fprintf(stderr, "[FE-MENU] WORLD TOUR!\n");
        break;
    default:
        FMEM32(0x411BE0) = 0;
        break;
    }

    fprintf(stderr, "[FE-MENU] State: pending=4, cam=gameplay, race_type=%d\n",
            (int)FMEM32(0x411BE0));
    fprintf(stderr, "[FE-MENU] Controls: WASD=drive, Shift=boost, ESC=return to menu\n");

    /* Update window title */
    HWND hwnd = FindWindowA(NULL, "Burnout 3: Takedown - Static Recompilation");
    if (!hwnd) hwnd = GetActiveWindow();
    if (hwnd) SetWindowTextA(hwnd,
        screen == FE_SCREEN_CRASH_SELECT
            ? "Burnout 3 — CRASH MODE"
            : "Burnout 3 — RACING");
}

int fe_menu_is_racing(void)
{
    return g_race_active;
}

/* Jump straight to the race setup screen (test hook — reaching it normally
 * takes a menu walk, and a screen that renders nothing looks identical to a
 * frozen frontend). */
void fe_menu_show_setup(int row)
{
    g_fe_screen = FE_SCREEN_TRACK;
    g_fe_setup_row = row;
}

void fe_menu_force_race(void)
{
    fprintf(stderr, "[FE-MENU] Force race launch (R key)!\n");
    fe_start_race(FE_SCREEN_RACE_SETUP);
}

void fe_menu_stop_race(void)
{
    if (!g_race_active) return;
    g_race_active = 0;
    g_race_init_done = 0;

    /* Re-enable PB replay */
    extern void nv2a_pb_replay_set_active(int active);
    nv2a_pb_replay_set_active(1);

    /* Restore menu state in Xbox memory */
    FMEM32(0x4D53B4) = 5;         /* pending state → menus */
    FMEM32(0x4D53B8) = 5;         /* current state → menus */
    FMEM32(0x4D53BC) = 0;         /* mode flag: menus */
    FMEM32(0x4D5370) = 0x4D4008;  /* camera → menus */
    FMEM32(0x411B20) = 0;         /* race inactive */

    g_fe_screen = FE_SCREEN_MAIN;
    g_fe_cursor = 0;
    fprintf(stderr, "[FE-MENU] Returned to menus\n");

    /* Update window title */
    HWND hwnd = FindWindowA(NULL, "Burnout 3 — CRASH MODE");
    if (!hwnd) hwnd = FindWindowA(NULL, "Burnout 3 — RACING");
    if (!hwnd) hwnd = GetActiveWindow();
    if (hwnd) SetWindowTextA(hwnd, "Burnout 3: Takedown - Static Recompilation");
}

/*
 * Map fe_menu screen state to PB replay index.
 * Must match MENU_xxx enum in nv2a_pb_replay.c:
 *   0=MAIN, 1=WORLD_TOUR, 2=SINGLE_EVENT, 3=RACE_SETUP,
 *   4=TIME_ATTACK, 5=ROAD_RAGE, 6=CRASH_SELECT, 7=DRIVER_DETAILS
 */
int fe_menu_get_pb_state(void)
{
    switch (g_fe_screen) {
    case FE_SCREEN_MAIN:           return 0;
    case FE_SCREEN_WORLD_TOUR:     return 1;
    case FE_SCREEN_SINGLE:         return 2;
    case FE_SCREEN_RACE_SETUP:     return 3;
    case FE_SCREEN_TIME_ATTACK:    return 4;
    case FE_SCREEN_ROAD_RAGE:      return 5;
    case FE_SCREEN_CRASH_SELECT:   return 6;
    case FE_SCREEN_DRIVER_DETAILS: return 7;
    default:                       return 0; /* title → show main menu */
    }
}
