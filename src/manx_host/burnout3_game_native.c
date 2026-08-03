// burnout3_game_native.c — Native Linux game layer for Burnout 3.
//
// Strips the Xbox dashboard boot sequence (WinMain, VEH handler, Win32
// window management) and exposes just the game loop.
//
// The bridge (burnout3_bridge.c) handles XBE loading, kernel init,
// and path translation under BURNOUT3_RECOMP_LINKED. This file provides
// the game-side init (Vulkan, textures, menu, renderer) and links to
// the real fe_menu/rw_bridge/rw_renderer implementations.

// NOTE: D3D8_USE_PORTABLE and BURNOUT3_NATIVE_LINUX are defined via
// CMake target_compile_definitions — do NOT #define them here.

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ucontext.h>

// ── D3D8 / Vulkan backend ──────────────────────────────────────
#include "d3d8_xbox.h"
#include "vulkan_d3d8.h"

// ── Asset loaders ──────────────────────────────────────────────
#include "txd_loader.h"
#include "bgv_loader.h"
#include "fe_menu.h"

// ── Game subsystems ──────────────────────────────────────────
extern void rw_state_init(void);
extern void rw_renderer_init(void);

// ── Game's own main entry point (sub_00156400, WinMain) ──────
extern void sub_00156400(void);
/* Weak fallback for link units that do not pull in the generated
 * native code (e.g. the pump-only menu test).  When the real
 * sub_00156400 is present — anything linked with burnout3_native —
 * the strong definition beats this one. */
__attribute__((weak)) void sub_00156400(void) {}

/* ── SIGSEGV handler for the game thread ───────────────────────
 * The real game code (sub_00156400) makes indirect calls through
 * function pointers that the Xbox kernel would populate at load time
 * but that are BSS (zero) here.  When the game thread dereferences
 * one, we log the fault so we can add a strong override. */
extern uint32_t g_esp;
extern uint32_t g_eax;

static int g_segv_count = 0;

static void game_segv_handler(int sig, siginfo_t *si, void *ctx) {
    if (sig != SIGSEGV) return;
    g_segv_count++;

    /* Bail out after too many faults. */
    if (g_segv_count > 500) {  /* raised: near-null recovery generates more SEGVs */
        fprintf(stderr, "  FATAL: %d SIGSEGVs — re-raising\n", g_segv_count);
        signal(SIGSEGV, SIG_DFL);
        raise(SIGSEGV);
    }

    uint32_t esp = g_esp;
    uint32_t ret = MEM32(esp);

    /* Identify the faulting Xbox VA. */
    extern ptrdiff_t g_xbox_mem_offset;
    uint32_t fault_va = (uint32_t)((uintptr_t)si->si_addr - (uintptr_t)g_xbox_mem_offset);

    if (g_segv_count == 1) {
        fprintf(stderr,
            "\n[SEGV #%d] fault=0x%016lx  va=0x%08X  g_esp=0x%08X  ret_addr=0x%08X  mem_off=0x%016zx\n",
            g_segv_count, (uintptr_t)si->si_addr, fault_va, esp, ret, (size_t)g_xbox_mem_offset);
        fprintf(stderr, "  emulated stack traceback:\n");
        for (int i = 11; i >= -3; i--) {
            uint32_t addr = esp + (uint32_t)(i * 4);
            uint32_t val = MEM32(addr);
            fprintf(stderr, "    esp%+d  [0x%08X] = 0x%08X%s\n",
                    i * 4, addr, val,
                    (i == 0) ? "  ← g_esp (return address)" :
                    (i == -1) ? "  (first arg / return value)" : "");
        }
    }

    /* Recover if the fault is in a recognised range or has a null ret,
     * OR if the faulting instruction is an indirect call (FF /2 or /4),
     * OR if the faulting Xbox VA is near-null (< 4 KB) — a struct member
     * dereference through a NULL pointer.  The render loop does this
     * constantly when RenderWare object pointers are uninitialised.
     * Returning 0 lets the game limp through to produce visible frames. */
    int is_thunk = (fault_va >= 0x003F0000u && fault_va < 0x00400000u);
    int is_null_ret = (ret == 0x00000000);
    int is_near_null = (fault_va < 0x1000u);  /* include offset 0 */

    /* Check if RIP points to an indirect call/jmp: FF /2 (call rm) or
     * FF /4 (jmp rm), possibly with a REX prefix. */
    ucontext_t *uc = (ucontext_t *)ctx;
    uint8_t *rip = (uint8_t *)uc->uc_mcontext.gregs[REG_RIP];
    int is_indirect = 0;
    int skip = 3;
    if (rip[0] == 0xFF) {
        uint8_t modrm = rip[1];
        uint8_t reg = (modrm >> 3) & 7;
        if (reg == 2 || reg == 4) { skip = 2; is_indirect = 1; }
    } else if (rip[0] == 0x41 && rip[1] == 0xFF) {
        uint8_t modrm = rip[2];
        uint8_t reg = (modrm >> 3) & 7;
        if (reg == 2 || reg == 4) { skip = 3; is_indirect = 1; }
    }

    if (!is_thunk && !is_null_ret && !is_indirect && !is_near_null) {
        fprintf(stderr, "  [SEGV] non-thunk, non-call, non-null-ret, non-near-null — re-raising\n");
        signal(SIGSEGV, SIG_DFL);
        raise(SIGSEGV);
    }

    /* Advance the native instruction pointer past the faulting
     * instruction so we don't just re-execute it. */
    uc->uc_mcontext.gregs[REG_RIP] += skip;

    /* Pop the emulated return address and return 0 to the caller.
     * For near-null data accesses, the caller may not have pushed a
     * return address — but returning 0 and advancing still gets us
     * further than crashing. */
    g_esp += 4;
    g_eax = 0;

    if (g_segv_count <= 3)
        fprintf(stderr, "  [SEGV] va=0x%08X (+%d bytes) → eax=0, esp=0x%08X\n",
                fault_va, skip, g_esp);
}

#include <pthread.h>

static void *game_thread_fn(void *arg) {
    (void)arg;
    struct sigaction sa = {0};
    sa.sa_sigaction = game_segv_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, NULL);

    sub_00156400();
    return NULL;
}

// ── Kernel interface ───────────────────────────────────────────
extern int  xbox_MemoryLayoutInit(const void *xbe_data, unsigned long xbe_size);
extern void xbox_MemoryLayoutShutdown(void);
extern void xbox_kernel_init(void);
extern void xbox_kernel_shutdown(void);
extern void xbox_path_init(const char *game_dir, const char *save_dir);

// ── Game globals ───────────────────────────────────────────────
extern int  g_game_ready;
extern int  g_backbuffer_width;
extern int  g_backbuffer_height;
extern uint8_t *g_host_backbuffer;
extern void *g_xbe_data;
extern unsigned long g_xbe_size;

// ── The actual game frame pump — from burnout3_game_frame_pump.c ──
extern void game_frame_pump(void);

// Loaded texture dictionaries
TXD_Dict g_global_txd;
int g_textures_loaded = 0;

// ── Native game init — post-kernel, pre-frame-pump ─────────────

/* Same as burnout3_game_native_init but skips the game-thread spawn.
 * Used by tests that drive everything through game_frame_pump() and
 * cannot risk sub_00156400 crashing (which it does, after the menu
 * is reached — an unresolved RenderWare indirect call). */
int burnout3_game_native_init_no_thread(const char *game_data_path) {
    /* The frontend owns the integrated XMV playlist.  Give it the real
     * data root before its first lazy fe_menu_init() call. */
    fe_menu_set_game_dir(game_data_path);

    // 1. Initialize Vulkan D3D8 backend
    if (!vulkan_d3d8_init(640, 480)) {
        fprintf(stderr, "game_native: Vulkan init failed — using stub rendering\n");
    }

    // 2. Load base texture dictionaries
    char path[1024];
    snprintf(path, sizeof(path), "%s/Data/Global.txd", game_data_path);
    memset(&g_global_txd, 0, sizeof(g_global_txd));
    int n = txd_load(path, vulkan_d3d8_get_device(), &g_global_txd);
    if (n >= 0) {
        fprintf(stderr, "game_native: loaded Global.txd (%d textures)\n", n);
        g_textures_loaded = (n > 0);
    }

    snprintf(path, sizeof(path), "%s/Data/Frontend.txd", game_data_path);
    TXD_Dict ft_txd;
    memset(&ft_txd, 0, sizeof(ft_txd));
    n = txd_load(path, vulkan_d3d8_get_device(), &ft_txd);
    if (n >= 0) {
        fprintf(stderr, "game_native: loaded Frontend.txd (%d textures)\n", n);
        txd_release(&ft_txd);
    }

    // 3. Init game subsystems
    rw_state_init();
    rw_renderer_init();
    fprintf(stderr, "game_native: game subsystems initialised (no game thread)\n");
    return 1;
}

int burnout3_game_native_init(const char *game_data_path) {
    // The bridge's burnout3_init() already handles:
    //   - XBE loading (fopen/fread)
    //   - xbox_MemoryLayoutInit (64 MB mmap)
    //   - xbox_kernel_init (thunk table)
    //   - xbox_path_init (game/save dirs)
    //
    // This function handles the game-side init: Vulkan, textures.

    /* Set this before any boot frame can initialise the frontend. */
    fe_menu_set_game_dir(game_data_path);

    // 1. Initialize Vulkan D3D8 backend
    IDirect3DDevice8 *dev = vulkan_d3d8_get_device();
    if (!vulkan_d3d8_init(640, 480)) {
        fprintf(stderr, "game_native: Vulkan init failed — using stub rendering\n");
    }

    // 2. Load base texture dictionaries
    char path[1024];
    snprintf(path, sizeof(path), "%s/Data/Global.txd", game_data_path);
    memset(&g_global_txd, 0, sizeof(g_global_txd));
    int n = txd_load(path, dev, &g_global_txd);
    if (n >= 0) {
        fprintf(stderr, "game_native: loaded Global.txd (%d textures)\n", n);
        // fe_menu_init() refuses to run until this is set; leaving it 0
        // silently reduced the frontend to its no-texture fallback path
        // (and would skip the boot intro entirely).
        g_textures_loaded = (n > 0);
    }

    snprintf(path, sizeof(path), "%s/Data/Frontend.txd", game_data_path);
    TXD_Dict ft_txd;
    memset(&ft_txd, 0, sizeof(ft_txd));
    n = txd_load(path, dev, &ft_txd);
    if (n >= 0) {
        fprintf(stderr, "game_native: loaded Frontend.txd (%d textures)\n", n);
        txd_release(&ft_txd);
    }

    // 3. Init game subsystems
    rw_state_init();
    rw_renderer_init();
    fprintf(stderr, "game_native: game subsystems initialised\n");

    // 4. Start the game's own main thread (sub_00156400 = WinMain).
    // It initialises the game's own subsystems, enters its message
    // pump, and renders the REAL frontend through D3D8 → our bindings
    // → Vulkan.  The bridge's boot pump flushes frames while this
    // thread reaches the menu.
    extern uint32_t g_esp;
    #define STACK_VA 0x005F0000u
    g_esp = STACK_VA;
    /* Push main(0, 0, 0) — the CRT startup convention. */
    g_esp -= 4; MEM32(g_esp) = 0;           /* unused envp */
    g_esp -= 4; MEM32(g_esp) = 0;           /* argv */
    g_esp -= 4; MEM32(g_esp) = 0;           /* argc */
    g_esp -= 4; MEM32(g_esp) = 0xDEADBEEF;  /* return-address slot */
    #undef STACK_VA

    pthread_t game_thread;
    pthread_create(&game_thread, NULL, game_thread_fn, NULL);
    fprintf(stderr, "game_native: game thread started (sub_00156400)\n");

    // NOTE: g_game_ready is NOT set here.  The bridge's burnout3_init()
    // pumps enough frames to reach the menu, then sets g_game_ready = 1.
    // This ensures the recompiled game code actually runs (BeginScene →
    // draw → EndScene) before we consider the game "ready".
    fprintf(stderr, "game_native: init complete — waiting for menu pump\n");
    return 1;
}

void burnout3_game_native_shutdown(void) {
    txd_release(&g_global_txd);
    vulkan_d3d8_shutdown();
    g_game_ready = 0;
}

// ── D3D device getter (used by fe_menu.c, rw_bridge.c) ────────
// Returns the Vulkan-backed IDirect3DDevice8 created by vulkan_d3d8_init.
IDirect3DDevice8 *xbox_GetD3DDevice(void) {
    return vulkan_d3d8_get_device();
}

// ── D3D Present trigger (used by bridge) ─────────────────────
// The bridge calls this to flush the GPU render target to the
// host-visible readback buffer. Without it, vulkan_d3d8_present()
// returns NULL because dev_Present() was never called.
void vulkan_d3d8_trigger_present(void) {
    IDirect3DDevice8 *dev = vulkan_d3d8_get_device();
    if (dev) dev->lpVtbl->Present(dev, NULL, NULL, NULL, NULL);
}
