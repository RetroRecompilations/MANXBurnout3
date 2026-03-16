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

/* Captured push buffer data (auto-generated from xemu) */
#include "menu_pushbuffer_data.h"

/* Push buffer command encoding */
#define PB_INC_MASK      0xE0030003
#define PB_INC_MATCH     0x00000000
#define PB_NONINC_MASK   0xE0030003
#define PB_NONINC_MATCH  0x40000000

static int g_replay_active = 0;
static uint32_t g_replay_frame = 0;

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
 * The first INLINE_ARRAY block at offset 0 has no BEGIN_END header
 * (we captured mid-stream). We skip to the first BEGIN_END at offset 0x12EC
 * to get clean command boundaries.
 */
void nv2a_pb_replay_frame(void)
{
    if (!g_replay_active) return;

    /* Skip the initial headerless INLINE_ARRAY block.
     * First clean command is at dword offset 0x12EC/4 = 1211.
     * The first block is 1210 dwords of raw vertex data with no header context,
     * so we skip it and start from the first BEGIN_END. */
    uint32_t start_dword = 0x12EC / 4;  /* = 1211 */
    uint32_t remaining = MENU_PB_DWORDS - start_dword;

    replay_pushbuffer(&menu_pushbuffer_data[start_dword], remaining);
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
        fprintf(stderr, "[PB-REPLAY] Push buffer replay ENABLED (%u dwords, starting at 0x12EC)\n",
                MENU_PB_DWORDS);
    } else {
        fprintf(stderr, "[PB-REPLAY] Push buffer replay disabled\n");
    }
}

int nv2a_pb_replay_is_active(void)
{
    return g_replay_active;
}
