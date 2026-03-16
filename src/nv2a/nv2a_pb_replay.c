/*
 * NV2A Push Buffer Replay
 *
 * Replays captured push buffer data through the PGRAPH→D3D11 translator.
 * Used to validate the translation pipeline with known-good data from xemu.
 *
 * The captured data contains a full menu frame's rendering commands.
 * When replayed, it should produce the Burnout 3 menu UI on screen.
 */

#include "nv2a_pgraph_d3d11.h"
#include "nv2a_state.h"
#include <stdio.h>
#include <string.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/* Captured push buffer data (auto-generated from xemu) */
#include "menu_pushbuffer_data.h"

/* Push buffer command encoding */
#define PB_INC_MASK      0xE0030003
#define PB_INC_MATCH     0x00000000
#define PB_NONINC_MASK   0xE0030003
#define PB_NONINC_MATCH  0x40000000

static int g_replay_active = 0;
static uint32_t g_replay_frame = 0;
static LARGE_INTEGER g_replay_start_time;
static LARGE_INTEGER g_replay_freq;

/*
 * Parse and dispatch push buffer commands through the D3D11 translator.
 * This is the same algorithm as nv2a_pb_test.c but reads from the
 * captured data array instead of Xbox memory.
 */
static void replay_pushbuffer(const uint32_t *data, uint32_t num_dwords)
{
    uint32_t pos = 0;
    uint32_t method_count = 0;
    uint32_t draw_count = 0;

    while (pos < num_dwords) {
        uint32_t header = data[pos];

        /* Skip zero padding */
        if (header == 0) {
            pos++;
            continue;
        }

        /* Increasing method */
        if ((header & PB_INC_MASK) == PB_INC_MATCH) {
            uint32_t count = (header >> 18) & 0x7FF;
            uint32_t method = header & 0x1FFC;
            uint32_t subchannel = (header >> 13) & 7;

            if (count == 0 || pos + 1 + count > num_dwords) {
                /* Invalid or truncated — skip */
                pos++;
                continue;
            }

            for (uint32_t i = 0; i < count; i++) {
                uint32_t param = data[pos + 1 + i];
                pgraph_d3d11_method(subchannel, method + i * 4, param);
                method_count++;
            }
            pos += 1 + count;

            /* Track BEGIN_END for logging */
            if (method == 0x17FC) {
                uint32_t mode = data[pos - count];  /* First param */
                if (mode != 0) draw_count++;
            }
        }
        /* Non-increasing method */
        else if ((header & PB_NONINC_MASK) == PB_NONINC_MATCH) {
            uint32_t count = (header >> 18) & 0x7FF;
            uint32_t method = header & 0x1FFC;
            uint32_t subchannel = (header >> 13) & 7;

            if (count == 0 || pos + 1 + count > num_dwords) {
                pos++;
                continue;
            }

            for (uint32_t i = 0; i < count; i++) {
                uint32_t param = data[pos + 1 + i];
                pgraph_d3d11_method(subchannel, method, param);
                method_count++;
            }
            pos += 1 + count;
        }
        /* Unknown header type */
        else {
            pos++;
        }
    }

    g_replay_frame++;
    if (g_replay_frame <= 5 || (g_replay_frame % 300) == 0) {
        PgraphD3D11Stats stats;
        pgraph_d3d11_get_stats(&stats);
        fprintf(stderr, "[PB-REPLAY] Frame %u: %u methods, %u draws dispatched, "
                "translator draws=%u verts=%u clears=%u\n",
                g_replay_frame, method_count, draw_count,
                stats.draw_calls, stats.vertices_submitted, stats.clears);
    }

    /* Flush any pending draw */
    pgraph_d3d11_flush();
}

/*
 * Called once per frame when replay is active.
 * Feeds the captured push buffer through the translator.
 *
 * The capture starts mid-stream: Draws 1-5 have no SET_TEXTURE_OFFSET
 * because they inherited the font atlas (0x021C4100) from before our
 * capture window. We inject that binding before replay to fix them.
 */
/* Draw 5 (chyron text) location in push buffer.
 * BEGIN_END(6) at dword 6175, INLINE_ARRAY at dword 6177 (1275 dwords),
 * END at dword 7454. Vertex data starts at dword 6178 (header at 6177). */
#define CHYRON_INLINE_HEADER  6177   /* NONINC INLINE_ARRAY header dword */
#define CHYRON_INLINE_DATA    6178   /* First data dword */
#define CHYRON_INLINE_COUNT   1275   /* Number of INLINE_ARRAY data dwords */

void nv2a_pb_replay_frame(void)
{
    if (!g_replay_active) return;

    /* Inject inherited texture state: font atlas was active before capture.
     * Draws 1-5 (menu text + chyron) rely on this being set. */
    pgraph_d3d11_method(0, 0x1B00, 0x021C4100);  /* SET_TEXTURE_OFFSET[0] = font atlas */
    pgraph_d3d11_method(0, 0x1B08, 0x40010303);   /* SET_TEXTURE_CONTROL0[0] = enabled */

    /* Replay push buffer in 3 segments, skipping Draw 5 (chyron) which
     * we re-draw later with scroll animation applied.
     * Segment 1: dwords 0 to 6174 (before Draw 5's BEGIN_END)
     * Skip:      dwords 6175 to 7454 (Draw 5: BEGIN, INLINE_ARRAY, END)
     * Segment 2: dwords 7455 to end (Draw 6 onwards) */
    #define CHYRON_BEGIN_DWORD  6175
    #define CHYRON_END_DWORD    7455  /* first dword after Draw 5's END */

    replay_pushbuffer(menu_pushbuffer_data, CHYRON_BEGIN_DWORD);
    replay_pushbuffer(&menu_pushbuffer_data[CHYRON_END_DWORD],
                      MENU_PB_DWORDS - CHYRON_END_DWORD);

    /* Re-draw the chyron text (Draw 5) ON TOP of the bottom panel.
     * In the original push buffer, Draw 5 renders BEFORE the dark panel
     * overlays (Draws 16-20). Without full NV2A combiner emulation,
     * those overlays cover the chyron. Re-drawing it last fixes this. */
    pgraph_d3d11_method(0, 0x1B00, 0x021C4100);  /* Font atlas texture */
    pgraph_d3d11_method(0, 0x1B08, 0x40010303);   /* Texture enabled */

    /* Apply time-based chyron scroll (smooth, independent of frame rate) */
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    double elapsed = (double)(now.QuadPart - g_replay_start_time.QuadPart)
                   / (double)g_replay_freq.QuadPart;
    /* ~50 pixels/sec scroll speed (matching original Burnout 3 chyron) */
    uint32_t scroll_pixels = (uint32_t)(elapsed * 50.0);
    pgraph_d3d11_set_chyron_scroll(scroll_pixels);

    /* Emit BEGIN_END(6) = TRIANGLE_STRIP */
    pgraph_d3d11_method(0, 0x17FC, 6);

    /* Feed the chyron vertex data */
    for (uint32_t i = 0; i < CHYRON_INLINE_COUNT; i++) {
        pgraph_d3d11_method(0, 0x1818, menu_pushbuffer_data[CHYRON_INLINE_DATA + i]);
    }

    /* End draw */
    pgraph_d3d11_method(0, 0x17FC, 0);

    /* Clear chyron scroll */
    pgraph_d3d11_set_chyron_scroll(0);
}

void nv2a_pb_replay_set_active(int active)
{
    g_replay_active = active;
    g_replay_frame = 0;

    /* Suppress extra presents from recompiled code to prevent flashing */
    extern volatile int g_suppress_present;
    g_suppress_present = active ? 1 : 0;

    if (active) {
        pgraph_d3d11_init();
        QueryPerformanceFrequency(&g_replay_freq);
        QueryPerformanceCounter(&g_replay_start_time);
        fprintf(stderr, "[PB-REPLAY] Push buffer replay ENABLED (%u dwords, font atlas pre-bound, chyron scroll active)\n",
                MENU_PB_DWORDS);
    } else {
        fprintf(stderr, "[PB-REPLAY] Push buffer replay disabled\n");
    }
}

int nv2a_pb_replay_is_active(void)
{
    return g_replay_active;
}
