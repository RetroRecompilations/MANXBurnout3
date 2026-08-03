// burnout3_bridge.c — C glue between MANX's C++ session and the
// recompiled Burnout 3 runtime.
//
// Links against the Burnout3Recomp static library (libburnout3_recomp.a)
// which provides the Xbox kernel replacement layer, memory layout, path
// translation, and the recompiled game code.
//
// Public ABI (called by burnout3_session.cpp):
//   burnout3_init(path)        — load XBE, init kernel, boot to menu
//   burnout3_shutdown()        — tear down kernel + memory
//   burnout3_run_frame(pixels) — pump one game frame, capture RGBA8
//   burnout3_ready()           — is the game past boot videos?
//   burnout3_inject_input(s)   — map MANX inputs into Xbox registers

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL3/SDL_scancode.h>
#include <math.h>

/* For IDirect3DDevice8, whose vtable is called in burnout3_run_frame below. */
#include "d3d8_xbox.h"

/* Xbox memory offset set by xbox_MemoryLayoutInit (kernel shim).
   MEM32/16/8 macros dereference through it; used here for stack writes. */
extern ptrdiff_t g_xbox_mem_offset;
#if !defined(_MSC_VER) && !defined(__forceinline)
#define __forceinline inline __attribute__((always_inline))
#endif
#include "recomp_types.h"

// Menu renderer — called directly to bypass main.c's rendering path
// which depends on g_d3d_device from xbox_Direct3DCreate8 (not reached during boot).
extern int fe_menu_render_frame(void);
extern int fe_menu_is_racing(void);
extern int fe_menu_audio_callback(int16_t *stereo, int max_frames);

// Burnout 3 input globals (defined in kernel shim / game_frame_pump)
extern uint16_t g_xinput_buttons;
extern int16_t  g_xinput_thumb_lx;
extern int16_t  g_xinput_thumb_ly;
extern uint8_t  g_xinput_left_trigger;
extern uint8_t  g_xinput_right_trigger;
extern uint64_t g_keyboard_state[4];

// ── Native game layer init (Vulkan + textures + menu) ─────────
extern int burnout3_game_native_init(const char *game_data_path);
extern int burnout3_game_native_init_no_thread(const char *game_data_path);
extern void burnout3_game_native_shutdown(void);

// ── Vulkan D3D8 backend readback API ─────────────────────────
// vulkan_d3d8_present() returns the rendered RGBA8 frame from the
// GPU after Present() copies the render target to host memory.
extern const uint8_t *vulkan_d3d8_present(int *out_width, int *out_height);
extern int vulkan_d3d8_game_ready(void);
extern void vulkan_d3d8_trigger_present(void);  // defined in burnout3_game_native.c
struct IDirect3DDevice8;  // opaque — defined in d3d8_xbox.h
extern struct IDirect3DDevice8 *vulkan_d3d8_get_device(void);

// ── Burnout3Recomp kernel API ─────────────────────────────────
// These are provided by the static library compiled from
// Burnout3Recomp/src/kernel/.

#ifdef __cplusplus
extern "C" {
#endif

// Xbox memory layout (xbox_memory_layout.c)
// Returns TRUE on success. Maps the 64 MB Xbox address space.
int xbox_MemoryLayoutInit(const void *xbe_data, unsigned long xbe_size);
void xbox_MemoryLayoutShutdown(void);

// Kernel replacement layer (kernel_thunks.c)
// Fills the 147-entry kernel thunk table.
void xbox_kernel_init(void);
void xbox_kernel_shutdown(void);

// Path translation (kernel_path.c)
// Maps Xbox paths (D:\, T:\, U:\) to host filesystem paths.
void xbox_path_init(const char *game_dir, const char *save_dir);

// ── Game runtime (from Burnout3Recomp/src/game/main.c) ──────
// These are thin wrappers we define here that call into the
// recompiled game engine once the kernel layer is initialised.

// Called once per frame — advances the recompiled state machine
// and the D3D8 compatibility layer.
void game_frame_pump(void);

// Whether the game has reached the menu (past boot videos/loading).
// Exposed as a global in main.c once the state machine hits state 5.
extern int g_game_ready;

// Backbuffer dimensions set by the D3D8 compat layer.
extern int g_backbuffer_width;
extern int g_backbuffer_height;

#ifdef __cplusplus
}
#endif

// ── MANX input state ──────────────────────────────────
// The session translates its C++ input_state into b3_pad_state — the
// bridge must NOT mirror the C++ struct layout by hand (the old copy
// here drifted out of sync and read every button at the wrong offset).
#include "burnout3_input.h"

// ── RW display driver table init ──────────────────────────────
// Populates the RenderWare function-pointer table at 0x7592E8 before
// the game thread starts, so indirect calls through [0x759338] resolve
// to the real render callback instead of zero (BSS).  Extracted from
// Burnout3Recomp's recomp_manual.c to avoid pulling in NV2A stubs.
static void rw_init_display_driver_table(void)
{
    static const struct { uint32_t id; uint32_t func; } entries[] = {
        { 0x01, 0x1DD910 }, { 0x0A, 0x1DDAE0 }, { 0x15, 0x1DE0F0 },
        { 0x14, 0x1DDAF0 }, { 0x02, 0x1E48E0 }, { 0x03, 0x1E4BE0 },
        { 0x07, 0x1E5870 }, { 0x06, 0x1E52C0 }, { 0x05, 0x1DCDC0 },
        { 0x04, 0x1DCB70 }, { 0x09, 0x1E5AE0 }, { 0x08, 0x1DCF40 },
        { 0x0F, 0x1DBDE0 }, { 0x10, 0x1DC150 }, { 0x17, 0x1DC2D0 },
        { 0x18, 0x1DC360 }, { 0x0E, 0x1E7AD0 }, { 0x0D, 0x1E7AB0 },
        { 0x11, 0x1E7730 }, { 0x12, 0x1E7770 }, { 0x13, 0x1E7750 },
        { 0x0B, 0x1E7B10 }, { 0x0C, 0x1DCF50 }, { 0x19, 0x1E6710 },
        { 0x1B, 0x1E67B0 }, { 0x1A, 0x1E6A60 }, { 0x1C, 0x1DCEB0 },
    };
    uint32_t table_base = 0x7592E8;
    for (size_t i = 0; i < 0x20; i++)
        MEM32(table_base + (uint32_t)(i * 4)) = 0x24B90;
    for (size_t i = 0; i < sizeof(entries)/sizeof(entries[0]); i++)
        MEM32(table_base + entries[i].id * 4) = entries[i].func;

    /* im2d function pointers */
    MEM32(0x7592A8) = 0x1DB620;  MEM32(0x7592AC) = 0x1DB2C0;
    MEM32(0x7592B0) = 0x1DB9D0;  MEM32(0x7592B4) = 0x1DB6D0;
    MEM32(0x41AAD4) = 1;
    MEM32(0x7592CC) = 0x1E2930;  MEM32(0x7592D0) = 0x1E2330;

    fprintf(stderr, "  [RW] Display driver table at 0x%08X: [0x759338]=0x%08X\n",
            table_base, MEM32(0x759338));
}

// ── Override sub_001DE7E0: Return non-zero unconditionally ──
// The game's init loop in sub_001D9420 calls sub_001DE7E0 which reads
// MEM32(0x759338) — an uninitialised RenderWare function pointer — and
// indirect-calls through it. The pointer is BSS (zero), so the call
// always returns 0 and the init loop never exits.
//
// This strong definition overrides the weak generated one in
// burnout3_native. The caller only checks eax != 0, so any non-zero
// return unblocks the loop.
//
// Note: sub_00156400's loop checks the return of sub_00015F10, not
// sub_001D9420 directly — if the loop still doesn't exit, sub_00015F10
// also needs patching.
void sub_001DE7E0(void) {
    extern uint32_t g_esp;
    extern uint32_t g_eax;
    /* cdecl with args on emulated stack: caller (sub_001D9420) pushes
     * 3 args + dummy return, then cleans with esp += 0xC after the call.
     * Callee pops only the return address.
     *
     * The caller reads g_eax to decide whether to exit its loop, not the
     * stack slot we write to.  Both must be non-zero. */
    static int calls = 0;
    if (calls < 3)
        fprintf(stderr, "  [DE7E0] bridge override, g_esp=0x%08X\n", g_esp);
    if (calls == 3)
        fprintf(stderr, "  [DE7E0] (suppressing further logs)\n");
    calls++;
    *(volatile uint32_t *)((uintptr_t)g_esp + (uintptr_t)g_xbox_mem_offset) = 1;
    g_eax = 1;  /* the recompiled caller reads g_eax */
    g_esp += 4;   /* pop return addr (4); caller cleans 3 args */
}

// ── Internal state ───────────────────────────────────────────

static bool  s_initialised = false;
static void *s_xbe_data    = NULL;
static unsigned long s_xbe_size = 0;

// ── Boot progress ────────────────────────────────────────────
// The game state machine must advance through ~600 frames to reach the
// menu after init. Counted here so the host can show progress rather
// than leaving the screen dead for 10 seconds.
#define BOOT_FRAMES_NEEDED 600
static int s_boot_frames_remaining = BOOT_FRAMES_NEEDED;

// Forward declarations
bool burnout3_ready(void);

// ── Load XBE from disk ───────────────────────────────────────

static bool load_xbe(const char *game_dir) {
    char path[1024];
    snprintf(path, sizeof(path), "%s/default.xbe", game_dir);

    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "burnout3: cannot open %s\n", path);
        return false;
    }

    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (sz <= 0 || sz > 128 * 1024 * 1024) {
        fprintf(stderr, "burnout3: bad XBE size %ld\n", sz);
        fclose(f);
        return false;
    }

    s_xbe_data = malloc((size_t)sz);
    if (!s_xbe_data) {
        fclose(f);
        return false;
    }

    size_t n = fread(s_xbe_data, 1, (size_t)sz, f);
    fclose(f);

    if (n != (size_t)sz) {
        fprintf(stderr, "burnout3: short XBE read\n");
        free(s_xbe_data);
        s_xbe_data = NULL;
        return false;
    }

    s_xbe_size = (unsigned long)sz;
    fprintf(stderr, "burnout3: loaded default.xbe (%lu bytes)\n", s_xbe_size);
    return true;
}

// ── Public C ABI ─────────────────────────────────────────────

#ifdef BURNOUT3_RECOMP_LINKED
// Real implementations call into the Burnout3Recomp kernel library

bool burnout3_init(const char *game_data_path) {
    if (s_initialised) return true;

    if (!load_xbe(game_data_path)) {
        fprintf(stderr, "burnout3: failed to load XBE\n");
        return false;
    }

    if (!xbox_MemoryLayoutInit(s_xbe_data, s_xbe_size)) {
        fprintf(stderr, "burnout3: xbox_MemoryLayoutInit failed\n");
        return false;
    }
    fprintf(stderr, "burnout3: memory layout initialised\n");

    xbox_kernel_init();
    fprintf(stderr, "burnout3: kernel thunks installed\n");

    /* Populate the RenderWare display driver table so the game's render
     * loop can resolve RW function pointers at runtime.  The table lives
     * at 0x7592E8 (7.35 MB) — inside the 64 MB mapping. */
    rw_init_display_driver_table();

    xbox_path_init(game_data_path, game_data_path);
    fprintf(stderr, "burnout3: path translation initialised\n");

    /* Say exactly which files this run will use, resolved to an absolute
     * path. Two separate sessions have now been spent on "it looks wrong
     * on my machine" where the host harness rendered a correct, fully
     * textured world — once because a stale binary from another build
     * directory was on screen, once unresolved. The run itself should
     * answer "which binary, which data" without anyone fetching a log. */
    {
        char abs[4096];
        if (!realpath(game_data_path, abs))
            snprintf(abs, sizeof abs, "%s (unresolved)", game_data_path);
        fprintf(stderr, "burnout3: game data = %s\n", abs);
        static const char *needed[] = {
            "default.xbe", "Data/Global.txd", "Data/Frontend.txd",
            "Tracks/US/C1_V1/streamed.dat", "Tracks/US/C1_V1/static.dat",
        };
        int missing = 0;
        for (unsigned i = 0; i < sizeof(needed) / sizeof(*needed); i++) {
            char p[4608];
            snprintf(p, sizeof p, "%s/%s", game_data_path, needed[i]);
            FILE *t = fopen(p, "rb");
            long sz = 0;
            if (t) { fseek(t, 0, SEEK_END); sz = ftell(t); fclose(t); }
            if (!t || sz == 0) {
                fprintf(stderr, "burnout3:   MISSING %s\n", needed[i]);
                missing++;
            }
        }
        if (missing)
            fprintf(stderr, "burnout3: %d required asset(s) missing — the "
                            "track cannot load and the renderer will fall "
                            "back to procedural scenery (a few white boxes "
                            "on an empty plane)\n", missing);
    }

    // Init the stable pump-owned path (Vulkan, textures, menu, renderer).
    // The generated sub_00156400 thread still reaches unresolved
    // RenderWare data accesses and can terminate the whole standalone
    // before the frontend appears.  It is not part of this milestone:
    // game_frame_pump owns intro/menu update and rendering directly.
    if (!burnout3_game_native_init_no_thread(game_data_path)) {
        fprintf(stderr, "burnout3: game_native_init failed\n");
        return false;
    }
    fprintf(stderr, "burnout3: native game layer initialised\n");

    s_initialised = true;
    /* Nothing in the pump-owned frontend needs the old synthetic 600-frame
     * state-machine delay.  Mark it ready now so fe_intro_update starts its
     * wall clock on the first host-paced frame. */
    s_boot_frames_remaining = 0;
    g_game_ready = 1;
    fprintf(stderr, "burnout3: ready — pump-owned intro/frontend active\n");
    return true;
}

void burnout3_shutdown(void) {
    if (!s_initialised) return;
    burnout3_game_native_shutdown();
    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(s_xbe_data);
    s_xbe_data = NULL;
    s_xbe_size = 0;
    s_initialised = false;
}

#else /* !BURNOUT3_RECOMP_LINKED — stub implementations */

bool burnout3_init(const char *game_data_path) {
    (void)game_data_path;
    fprintf(stderr, "burnout3 stub: init called (link Burnout3Recomp with -DBURNOUT3_RECOMP_LINKED)\n");
    s_initialised = true;
    s_boot_frames_remaining = BOOT_FRAMES_NEEDED;
    return true;
}

void burnout3_shutdown(void) {
    s_initialised = false;
}

bool burnout3_run_frame(uint8_t *out_pixels, int *out_width, int *out_height) {
    if (out_width)  *out_width  = 640;
    if (out_height) *out_height = 480;
    if (out_pixels)  memset(out_pixels, 0x22, 640 * 480 * 4);
    return true;
}

bool burnout3_ready(void) { return false; }

void burnout3_boot_progress(int *out_current, int *out_total) {
    if (out_current) *out_current = 0;
    if (out_total)   *out_total   = 0;
}

const char *burnout3_status_phase(void) { return "Stub"; }

void burnout3_inject_input(const b3_pad_state *pad) { (void)pad; }

int burnout3_audio_callback(int16_t *buffer, int max_frames) {
    if (!buffer || max_frames <= 0) return 0;
    memset(buffer, 0, (size_t)max_frames * 2 * sizeof(*buffer));
    return 0;
}

#endif /* BURNOUT3_RECOMP_LINKED */

#ifdef BURNOUT3_RECOMP_LINKED
bool burnout3_run_frame(uint8_t *out_pixels, int *out_width,
                        int *out_height) {
    if (!s_initialised) {
        if (out_width)  *out_width  = 0;
        if (out_height) *out_height = 0;
        return false;
    }

    // Advance one frame of recompiled game code.
    //
    // game_frame_pump() internally calls fe_menu_render_frame() when the
    // menu is active (and skips it during gameplay, when the RenderWare
    // bridge produces its own frames). We must NOT call fe_menu_render_frame()
    // here — doing so would render twice per frame, doubling pending-buffer
    // allocations in vulkan_d3d8.c and exhausting VK_MAX_PENDING_BUFS (256)
    // within ~128 frames. The present below then fails silently and frames
    // never reach the host readback buffer.
    game_frame_pump();

    // Trigger D3D8 Present() to flush the GPU render target to the
    // host-visible readback buffer. Uses a C wrapper (defined in
    // burnout3_game_native.c) to avoid needing the D3D8 struct definition.
    extern void vulkan_d3d8_trigger_present(void);
    vulkan_d3d8_trigger_present();

    // Advance the boot-phase frame counter.  The recompiled game code does
    // not set g_game_ready itself (it is a MANX bridge variable),
    // so we count frames here.  Once the 600-frame boot pump finishes the
    // menu is on screen and gameplay can begin.
    if (!g_game_ready && s_boot_frames_remaining > 0) {
        s_boot_frames_remaining--;
        if (s_boot_frames_remaining == 0) {
            g_game_ready = 1;
            fprintf(stderr, "burnout3: ready — %d frames pumped, menu reached\n",
                    BOOT_FRAMES_NEEDED);
        }
    }

    if (out_width)  *out_width  = g_backbuffer_width  > 0 ? g_backbuffer_width  : 640;
    if (out_height) *out_height = g_backbuffer_height > 0 ? g_backbuffer_height : 480;

    if (out_pixels) {
        int w = out_width  ? *out_width  : 640;
        int h = out_height ? *out_height : 480;

        // Read the real rendered frame from the Vulkan D3D8 backend.
        int pw = 0, ph = 0;
        const uint8_t *frame = vulkan_d3d8_present(&pw, &ph);
        if (frame && pw > 0 && ph > 0) {
            size_t bytes = (size_t)(pw < w ? pw : w) *
                           (size_t)(ph < h ? ph : h) * 4;
            memcpy(out_pixels, frame, bytes);
            static int got_frame = 0;
            if (!got_frame++) fprintf(stderr, "burnout3: got first rendered frame %dx%d\n", pw, ph);
        } else {
            // No real frame yet — fill dark amber background
            for (int y = 0; y < h; y++) {
                uint8_t *row = out_pixels + (size_t)y * w * 4;
                for (int x = 0; x < w; x++) {
                    row[x*4+0] = 20;   // B
                    row[x*4+1] = 10;   // G
                    row[x*4+2] = 30;   // R (dark amber)
                    row[x*4+3] = 255;  // A
                }
            }
        }

        // ── Boot countdown overlay (drawn on every frame during boot) ──
        if (!g_game_ready && s_boot_frames_remaining > 0) {
            int remaining = s_boot_frames_remaining;
            // Simple 5×7 digit glyphs at (x,y) — each glyph is 6×8 pixels.
            // Bits: 0=bg 1=fg, rows top→bottom, bits LSB→leftmost.
            static const uint8_t digit_bits[10][7] = {
                {0x1F,0x11,0x11,0x11,0x11,0x11,0x1F}, // 0
                {0x04,0x06,0x04,0x04,0x04,0x04,0x0E}, // 1
                {0x1F,0x01,0x01,0x1F,0x10,0x10,0x1F}, // 2
                {0x1F,0x01,0x01,0x0F,0x01,0x01,0x1F}, // 3
                {0x11,0x11,0x11,0x1F,0x01,0x01,0x01}, // 4
                {0x1F,0x10,0x10,0x1F,0x01,0x01,0x1F}, // 5
                {0x1F,0x10,0x10,0x1F,0x11,0x11,0x1F}, // 6
                {0x1F,0x01,0x01,0x01,0x01,0x01,0x01}, // 7
                {0x1F,0x11,0x11,0x1F,0x11,0x11,0x1F}, // 8
                {0x1F,0x11,0x11,0x1F,0x01,0x01,0x1F}, // 9
            };
            #define GLYPH_W 6
            #define GLYPH_H 8
            // Position: bottom centre, above a thin progress bar
            int ox = w/2 - 50, oy = h - 50;  // anchor for countdown
            // Draw progress bar
            int bar_y = oy + 16, bar_h = 4;
            int bar_w = (int)((float)(BOOT_FRAMES_NEEDED - remaining) / BOOT_FRAMES_NEEDED * 120);
            for (int y = bar_y; y < bar_y + bar_h; y++) {
                uint8_t *row = out_pixels + (size_t)y * w * 4;
                for (int x = ox; x < ox + 120; x++) {
                    row[x*4+0] = 30; row[x*4+1] = 30; row[x*4+2] = 30; row[x*4+3]=255;
                }
                for (int x = ox; x < ox + bar_w; x++) {
                    row[x*4+0] = 0; row[x*4+1] = 180; row[x*4+2] = 255; row[x*4+3]=255;
                }
            }
            // Draw countdown number
            char buf[8];
            snprintf(buf, sizeof buf, "%d", remaining);
            int cx = ox + 60 - (int)(strlen(buf) * (GLYPH_W + 1)) / 2;
            for (const char *c = buf; *c; c++, cx += GLYPH_W + 1) {
                if (*c < '0' || *c > '9') continue;
                const uint8_t *glyph = digit_bits[*c - '0'];
                for (int gy = 0; gy < 7; gy++) {
                    uint8_t bits = glyph[gy];
                    for (int gx = 0; gx < 5; gx++, bits >>= 1) {
                        if (!(bits & 1)) continue;
                        int px = cx + gx, py = oy + gy;
                        if (px < 0 || px >= w || py < 0 || py >= h) continue;
                        uint8_t *p = out_pixels + (size_t)py * w * 4 + (size_t)px * 4;
                        p[0] = 0;    // B
                        p[1] = 200;  // G
                        p[2] = 255;  // R (bright amber)
                        p[3] = 255;  // A
                    }
                }
            }
            #undef GLYPH_W
            #undef GLYPH_H
        }
    }

    return true;
}

bool burnout3_ready(void) {
    return s_initialised && g_game_ready;
}

void burnout3_boot_progress(int *out_current, int *out_total) {
    if (out_current) *out_current = BOOT_FRAMES_NEEDED - s_boot_frames_remaining;
    if (out_total)   *out_total   = BOOT_FRAMES_NEEDED;
}

const char *burnout3_status_phase(void) {
    return g_game_ready ? "Recomp running" : "Loading intro";
}

void burnout3_inject_input(const b3_pad_state *pad) {
    if (!s_initialised || !pad) return;

    uint16_t buttons = 0;
    if (pad->up)      buttons |= 0x0001;  // XINPUT_GAMEPAD_DPAD_UP
    if (pad->down)    buttons |= 0x0002;  // DPAD_DOWN
    if (pad->left)    buttons |= 0x0004;  // DPAD_LEFT
    if (pad->right)   buttons |= 0x0008;  // DPAD_RIGHT
    if (pad->start)   buttons |= 0x0010;  // START
    if (pad->confirm) buttons |= 0x1000;  // A (confirm / boost)
    if (pad->back)    buttons |= 0x2000;  // B (back / leave race)
    g_xinput_buttons = buttons;

    g_xinput_thumb_lx      = pad->steer;
    g_xinput_right_trigger = pad->gas;
    g_xinput_left_trigger  = pad->brake;
}

void burnout3_inject_keyboard(const bool *sdl_key_state, int num_keys) {
    // Map SDL scancodes → virtual key codes in g_keyboard_state bitmask.
    // SDL3's SDL_GetKeyboardState returns const bool* (not Uint8*).
    // The game_frame_pump's GetAsyncKeyState reads from this bitmask.
    // Clear previous frame's state
    memset(g_keyboard_state, 0, sizeof(g_keyboard_state));

    // Helper to set a VK bit if the SDL scancode is pressed
    #define SET_VK(vk, sdl_sc) do { \
        if ((sdl_sc) < num_keys && sdl_key_state[(sdl_sc)]) { \
            int w = (vk) / 64; \
            int b = (vk) % 64; \
            g_keyboard_state[w] |= (1ULL << b); \
        } \
    } while(0)

    // SDL_SCANCODE → VK mappings used by fe_menu and game_frame_pump
    SET_VK(0x0D, SDL_SCANCODE_RETURN);    // VK_RETURN
    SET_VK(0x1B, SDL_SCANCODE_ESCAPE);    // VK_ESCAPE
    SET_VK(0x20, SDL_SCANCODE_SPACE);     // VK_SPACE
    SET_VK(0x08, SDL_SCANCODE_BACKSPACE); // VK_BACK
    SET_VK(0x26, SDL_SCANCODE_UP);        // VK_UP
    SET_VK(0x28, SDL_SCANCODE_DOWN);      // VK_DOWN
    SET_VK(0x25, SDL_SCANCODE_LEFT);      // VK_LEFT
    SET_VK(0x27, SDL_SCANCODE_RIGHT);     // VK_RIGHT
    SET_VK(0x10, SDL_SCANCODE_LSHIFT);    // VK_SHIFT
    SET_VK(0x10, SDL_SCANCODE_RSHIFT);    // VK_SHIFT (right)
    SET_VK(0x57, SDL_SCANCODE_W);         // VK_W
    SET_VK(0x41, SDL_SCANCODE_A);         // VK_A
    SET_VK(0x53, SDL_SCANCODE_S);         // VK_S
    SET_VK(0x44, SDL_SCANCODE_D);         // VK_D
    SET_VK(0x52, SDL_SCANCODE_R);         // VK_R
    SET_VK(0x47, SDL_SCANCODE_G);         // VK_G
    SET_VK(0x4D, SDL_SCANCODE_M);         // VK_M
    SET_VK(0x4E, SDL_SCANCODE_N);         // VK_N
    SET_VK(0x50, SDL_SCANCODE_P);         // VK_P
    SET_VK(0x54, SDL_SCANCODE_T);         // VK_T
    #undef SET_VK
}

int burnout3_audio_callback(int16_t *buffer, int max_frames) {
    if (!buffer || max_frames <= 0) return 0;
    int frames = fe_menu_audio_callback(buffer, max_frames);
    if (frames < 0) frames = 0;
    if (frames > max_frames) frames = max_frames;
    if (frames < max_frames) {
        memset(buffer + frames * 2, 0,
               (size_t)(max_frames - frames) * 2 * sizeof(*buffer));
    }
    return frames;
}
#endif /* BURNOUT3_RECOMP_LINKED */

// ── Link-time defaults for globals not yet wired ─────────────
// These are weak symbols — the static library overrides them when
// linked. They exist so the bridge compiles and links even when
// the full Burnout3Recomp library isn't available yet.

#ifndef BURNOUT3_RECOMP_LINKED

int g_game_ready = 0;
int g_backbuffer_width  = 640;
int g_backbuffer_height = 480;
uint8_t *g_host_backbuffer = NULL;

// Stub for game_frame_pump when real library isn't linked
void game_frame_pump(void) {
    // No-op: game code not linked
}

#endif /* !BURNOUT3_RECOMP_LINKED */
