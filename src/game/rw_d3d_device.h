/**
 * rw_d3d_device.h — Xbox D3D8LTCG Device Context Partial Map
 *
 * The 16KB device context at Xbox VA 0x35D6A0 is NOT a standard RW struct.
 * It's the Xbox D3D8LTCG internal device state (Criterion's custom D3D layer).
 * Only offsets observed in gen code are mapped here.
 *
 * Evidence sources:
 *   - sub_0003FEE0 gen code (recomp_0000.c:82401-82715)
 *   - sub_0034F5B0, sub_003558A0, sub_0034D410 gen code
 *   - D3D device snapshot from xemu (src/nv2a/d3d_device_snapshot.h)
 *   - Live debugging sessions 31-42
 */
#pragma once

#include <stdint.h>
#include <stddef.h>
#include "rw_structs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Xbox D3D8LTCG Device Context
 *  Base address: 0x35D6A0 (static in .data section, NOT heap)
 *  Total size: ~16KB (0x4000)
 *  Pointer: MEM32(0x35FB48) = 0x35D6A0
 * ═══════════════════════════════════════════════════════════════ */

typedef struct XboxD3DDevice {
    /* ── Push buffer cursor state ── */
    uint32_t pb_put;            /* +0x000 — PB write cursor (current position) */
    uint32_t pb_limit;          /* +0x004 — PB end boundary */

    uint8_t  _pad0[0xC58];     /* +0x008..+0xC5F */

    /* ── Transform cache ──
     * sub_0003FEE0 copies game_obj+0xA10 → device+0xC60 (64 bytes)
     * Then copies game_obj+0x500 → device+0xC60 again at cleanup.
     * Also: device+0xC60 is destination for "rep movsd ecx=0x10" from
     * the game render context's projection/view matrix. */
    RwRawMatrix transform_cache; /* +0xC60 (64 bytes) */

    /* ── Render state matrix ──
     * sub_0003FEE0 copies device+0xCA0 (64 bytes) → game_obj+0x540.
     * This is the current render state/transform block that the D3D8LTCG
     * layer maintains. Game code reads this to set up render passes. */
    RwRawMatrix render_state_matrix; /* +0xCA0 (64 bytes) */

    uint8_t  _pad1[0x218];     /* +0xCE0..+0xEF7 */

    /* ── Timer accumulators ──
     * sub_0003FEE0 saves these at entry (subtracting 0x35BEE0 value),
     * sets them to 0x35BEE0, then restores at exit.
     * Used for frame timing / animation accumulation. */
    float timer_accum_0;        /* +0xEF8 */
    float timer_accum_1;        /* +0xEFC */

    uint8_t  _pad2[0xB04];     /* +0xF00..+0x1A03 */

    /* ── Render target surfaces ──
     * sub_0034CBF0 swaps these for render target changes.
     * device+0x1A04 and +0x1A08 are surface pointers. */
    uint32_t render_target_surface; /* +0x1A04 — Xbox VA → D3DSurface */
    uint32_t depth_stencil_surface; /* +0x1A08 — Xbox VA → D3DSurface */
} XboxD3DDevice;

/* Offset validation */
_Static_assert(offsetof(XboxD3DDevice, pb_put) == 0x000,
               "XboxD3DDevice::pb_put at +0x000");
_Static_assert(offsetof(XboxD3DDevice, pb_limit) == 0x004,
               "XboxD3DDevice::pb_limit at +0x004");
_Static_assert(offsetof(XboxD3DDevice, transform_cache) == 0xC60,
               "XboxD3DDevice::transform_cache at +0xC60");
_Static_assert(offsetof(XboxD3DDevice, render_state_matrix) == 0xCA0,
               "XboxD3DDevice::render_state_matrix at +0xCA0");
_Static_assert(offsetof(XboxD3DDevice, timer_accum_0) == 0xEF8,
               "XboxD3DDevice::timer_accum_0 at +0xEF8");
_Static_assert(offsetof(XboxD3DDevice, timer_accum_1) == 0xEFC,
               "XboxD3DDevice::timer_accum_1 at +0xEFC");
_Static_assert(offsetof(XboxD3DDevice, render_target_surface) == 0x1A04,
               "XboxD3DDevice::render_target_surface at +0x1A04");
_Static_assert(offsetof(XboxD3DDevice, depth_stencil_surface) == 0x1A08,
               "XboxD3DDevice::depth_stencil_surface at +0x1A08");

/* ═══════════════════════════════════════════════════════════════
 *  Game Render Context at 0x4D6170
 *  Criterion-specific render context (NOT a standard RW struct).
 *  Passed as param 1 to sub_0003FEE0.
 *
 *  Offsets derived from sub_0003FEE0 gen code analysis:
 *    game_obj = ebx = MEM32(ebp+8) = 0x4D6170
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwGameRenderContext {
    uint8_t  _pad0[0x500];     /* +0x000..+0x4FF */

    /* ── Matrix slot 0 (source) ──
     * edx = ebx + 0x500 in sub_0003FE10 call (src for copy to +0x6E0).
     * This is the first 64B of the "source matrices" block. */
    RwRawMatrix src_matrix_0;    /* +0x500 (64 bytes) */

    /* ── Device state copy (from device+0xCA0) ──
     * sub_0003FEE0: "rep movsd ecx=0x10" from device+0xCA0 to game_obj+0x540.
     * Overlaps with src_matrix[1] — device copy overwrites this slot. */
    RwRawMatrix device_state;    /* +0x540 (64 bytes) */

    /* ── Work matrix 0 ──
     * eax = ebx + 0x580, stored at esp+0x34 and esp+0x3C in gen code */
    RwRawMatrix work_matrix_0;   /* +0x580 (64 bytes) */

    /* ── Work matrix 1 (transpose target) ──
     * ecx = ebx + 0x5C0, used in matrix transpose and sub_00040310 */
    RwRawMatrix work_matrix_1;   /* +0x5C0 (64 bytes) */

    uint8_t  _pad1[0x20];       /* +0x600..+0x61F */

    /* ── Work matrix 2 (projection) ──
     * edx = ebx + 0x620, passed to sub_001CF153 */
    RwRawMatrix work_matrix_2;   /* +0x620 (64 bytes) */

    /* ── Scene descriptor (16 bytes from param 2) ──
     * movaps from [scene_desc] → [game_obj+0x660]
     * +0x664 gets animation counter addition (MEMF(0x3B1684)) */
    float scene_desc[4];         /* +0x660 (16 bytes) */

    uint8_t  _pad2[0x10];       /* +0x670..+0x67F */

    /* ── Work matrix 3 ──
     * eax = ebx + 0x680, stored as esp+0x28 in gen code */
    RwRawMatrix work_matrix_3;   /* +0x680 (64 bytes) */

    uint8_t  _pad3[0x20];       /* +0x6C0..+0x6DF */

    /* ── Destination matrices (4 × 64 bytes = 256 bytes) ──
     * Copy destination of sub_0003FE10: +0x500 block → +0x6E0 */
    RwRawMatrix dst_matrices[4]; /* +0x6E0 (256 bytes, through +0x7DF) */

    uint8_t  _pad4[0x1B0];     /* +0x7E0..+0x98F */

    /* ── Render viewport / state fields ──
     * Set in sub_0003FEE0 gen code after the matrix copy block */
    uint32_t viewport_x;        /* +0x990 — set to 0 */
    uint32_t viewport_y;        /* +0x994 — set to 0 */
    uint32_t viewport_w;        /* +0x998 — set to 0x80 (128) */
    uint32_t viewport_h;        /* +0x99C — set to 0x80 (128) */
    float    scale_x;           /* +0x9A0 — set to MEMF(0x3B168C) = 1.0f */
    float    scale_y;           /* +0x9A4 — set to MEMF(0x3B168C) = 1.0f */

    uint8_t  _pad5[0x1C];      /* +0x9A8..+0x9C3 */

    /* ── Render flags ──
     * Set to 0x901 at start, 0x900 after render passes complete */
    uint32_t render_flags;      /* +0x9C4 */

    uint8_t  _pad6[0x08];      /* +0x9C8..+0x9CF */

    /* ── Render state block ──
     * eax = ebx + 0x9D0, passed to sub_0034D410 */
    uint8_t  render_state_block[0x40]; /* +0x9D0 (64 bytes, size estimated) */

    uint8_t  _pad7[0x00 + 1]; /* +0xA10 area — see notes below */
    /* Additional matrix blocks accessed via direct VA offset:
     * At +0xA10: edx = ebx + 0xA10, stored at esp+0x24, copied to device+0xC60
     * At +0xA50: esi = MEM32(esp+0x2C) = ebx + 0xA50, passed to sub_001AF280
     * These are beyond the validated struct boundary — access via raw MEM32. */
} RwGameRenderContext;

/* Offset validation for known fields */
_Static_assert(offsetof(RwGameRenderContext, src_matrix_0) == 0x500,
               "RwGameRenderContext::src_matrix_0 at +0x500");
_Static_assert(offsetof(RwGameRenderContext, device_state) == 0x540,
               "RwGameRenderContext::device_state at +0x540");
_Static_assert(offsetof(RwGameRenderContext, work_matrix_0) == 0x580,
               "RwGameRenderContext::work_matrix_0 at +0x580");
_Static_assert(offsetof(RwGameRenderContext, work_matrix_1) == 0x5C0,
               "RwGameRenderContext::work_matrix_1 at +0x5C0");
_Static_assert(offsetof(RwGameRenderContext, work_matrix_2) == 0x620,
               "RwGameRenderContext::work_matrix_2 at +0x620");
_Static_assert(offsetof(RwGameRenderContext, scene_desc) == 0x660,
               "RwGameRenderContext::scene_desc at +0x660");
_Static_assert(offsetof(RwGameRenderContext, work_matrix_3) == 0x680,
               "RwGameRenderContext::work_matrix_3 at +0x680");
_Static_assert(offsetof(RwGameRenderContext, dst_matrices) == 0x6E0,
               "RwGameRenderContext::dst_matrices at +0x6E0");
_Static_assert(offsetof(RwGameRenderContext, viewport_x) == 0x990,
               "RwGameRenderContext::viewport_x at +0x990");
_Static_assert(offsetof(RwGameRenderContext, viewport_w) == 0x998,
               "RwGameRenderContext::viewport_w at +0x998");
_Static_assert(offsetof(RwGameRenderContext, scale_x) == 0x9A0,
               "RwGameRenderContext::scale_x at +0x9A0");
_Static_assert(offsetof(RwGameRenderContext, render_flags) == 0x9C4,
               "RwGameRenderContext::render_flags at +0x9C4");

/* ═══════════════════════════════════════════════════════════════
 *  Known Xbox memory addresses
 * ═══════════════════════════════════════════════════════════════ */

#define XBOX_D3D_DEVICE_VA      0x35D6A0  /* D3D8LTCG device context (static) */
#define XBOX_D3D_DEVICE_PTR_VA  0x35FB48  /* Pointer to device (= 0x35D6A0) */
#define XBOX_D3D_DIRTY_FLAGS_VA 0x35FB50  /* Dirty flag word (OR'd with 0xFF0200) */
#define XBOX_GAME_RENDER_CTX_VA 0x4D6170  /* Game render context */
#define XBOX_MENU_CAMERA_VA     0x4D4008  /* Menu camera */
#define XBOX_GAMEPLAY_CAMERA_VA 0x4D45D0  /* Gameplay camera */
#define XBOX_TIMER_BASE_VA      0x35BEE0  /* Timer base value (float) */
#define XBOX_ANIM_STEP_VA       0x3B1684  /* Animation step constant */
#define XBOX_SCALE_CONST_VA     0x3B168C  /* Scale constant (1.0f) */

#ifdef __cplusplus
}
#endif
