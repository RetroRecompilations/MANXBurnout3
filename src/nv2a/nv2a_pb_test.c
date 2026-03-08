/*
 * NV2A Push Buffer Test
 *
 * Generates minimal NV2A GPU commands directly into the push buffer
 * to validate the push buffer → PFIFO → method dispatch pipeline.
 *
 * This runs once per frame and generates a simple clear + triangle
 * draw sequence, bypassing the 62K RW render pipeline.
 */

#include "nv2a_state.h"
#include <stdio.h>

/* Xbox memory access (from recomp_types.h) */
extern ptrdiff_t g_xbox_mem_offset;
#define NV2A_TEST_PTR(addr) ((uintptr_t)(uint32_t)(addr) + g_xbox_mem_offset)
#define NV2A_TEST_MEM32(addr) (*(volatile uint32_t *)NV2A_TEST_PTR(addr))

/* Push buffer pointers (set up by main.c) */
#define PB_BASE_ADDR  0x35D69C
#define PB_WRITE_ADDR 0x35D6A0
#define PB_END_ADDR   0x35D6A4

/* NV2A method addresses (from nv2a_regs.h) */
/* NV097 = Kelvin 3D class methods */
#define NV097_SET_OBJECT            0x0000
#define NV097_NO_OPERATION          0x0100
#define NV097_SET_SURFACE_FORMAT    0x0208
#define NV097_SET_SURFACE_PITCH     0x020C
#define NV097_SET_SURFACE_COLOR_OFFSET 0x0210
#define NV097_CLEAR_SURFACE         0x01D0
#define NV097_SET_BEGIN_END         0x17FC
#define NV097_SET_TRANSFORM_EXECUTION_MODE 0x0D60

/* Push buffer command encoding */
#define PB_METHOD_INC(subchannel, method, count) \
    (((count) << 18) | ((subchannel) << 13) | (method))
#define PB_METHOD_NON_INC(subchannel, method, count) \
    (0x40000000 | ((count) << 18) | ((subchannel) << 13) | (method))

static int g_pb_test_frame = 0;
static int g_pb_test_active = 0;

/*
 * Write a sequence of NV2A commands into the push buffer.
 * Returns number of dwords written.
 */
static uint32_t nv2a_generate_test_commands(uint32_t *buf)
{
    uint32_t *p = buf;

    /* NV097_NO_OPERATION - simple NOP to test command parsing */
    *p++ = PB_METHOD_INC(0, NV097_NO_OPERATION, 1);
    *p++ = 0; /* NOP parameter */

    /* NV097_SET_SURFACE_FORMAT - configure framebuffer */
    *p++ = PB_METHOD_INC(0, NV097_SET_SURFACE_FORMAT, 1);
    *p++ = 0x00000121; /* X8R8G8B8, Z24S8, linear */

    /* NV097_SET_SURFACE_PITCH */
    *p++ = PB_METHOD_INC(0, NV097_SET_SURFACE_PITCH, 1);
    *p++ = (640 * 4) | ((640 * 4) << 16); /* color pitch | zeta pitch */

    /* NV097_SET_SURFACE_COLOR_OFFSET */
    *p++ = PB_METHOD_INC(0, NV097_SET_SURFACE_COLOR_OFFSET, 1);
    *p++ = 0; /* offset 0 in VRAM */

    /* NV097_CLEAR_SURFACE - clear the framebuffer */
    *p++ = PB_METHOD_INC(0, NV097_CLEAR_SURFACE, 1);
    *p++ = 0x000000F0; /* clear color + zeta */

    return (uint32_t)(p - buf);
}

/*
 * Called once per frame to inject test commands into the push buffer.
 * This validates the infrastructure works end-to-end.
 */
void nv2a_pb_test_frame(void)
{
    if (!g_pb_test_active) return;

    g_pb_test_frame++;

    uint32_t base = NV2A_TEST_MEM32(PB_BASE_ADDR);
    uint32_t write_ptr = NV2A_TEST_MEM32(PB_WRITE_ADDR);
    uint32_t end_ptr = NV2A_TEST_MEM32(PB_END_ADDR);

    if (base == 0 || end_ptr == 0) return;
    if (write_ptr + 256 >= end_ptr) {
        /* Reset write pointer if near end */
        NV2A_TEST_MEM32(PB_WRITE_ADDR) = base;
        write_ptr = base;
    }

    /* Write test commands into push buffer */
    uint32_t *buf = (uint32_t *)NV2A_TEST_PTR(write_ptr);
    uint32_t dwords = nv2a_generate_test_commands(buf);

    /* Advance write pointer */
    uint32_t new_write = write_ptr + dwords * 4;
    NV2A_TEST_MEM32(PB_WRITE_ADDR) = new_write;

    /* Log first few frames */
    if (g_pb_test_frame <= 3 || (g_pb_test_frame % 300) == 0) {
        fprintf(stderr, "[PB-TEST] Frame %d: wrote %u dwords at 0x%08X (write_ptr now 0x%08X)\n",
                g_pb_test_frame, dwords, write_ptr, new_write);
        fflush(stderr);
    }

    /* Now parse the commands we just wrote (validates parsing logic) */
    {
        uint32_t pos = write_ptr;
        while (pos < new_write) {
            uint32_t word = NV2A_TEST_MEM32(pos);
            pos += 4;

            if ((word & 0xe0030003) == 0) {
                /* increasing methods */
                uint32_t count = (word >> 18) & 0x7ff;
                uint32_t method = word & 0x1ffc;
                uint32_t subchan = (word >> 13) & 7;

                if (g_pb_test_frame <= 3) {
                    fprintf(stderr, "  [PB-CMD] INC sub=%u method=0x%04X count=%u\n",
                            subchan, method, count);
                }

                /* Feed to PFIFO/PGRAPH via NV2A state machine */
                NV2AState *nv2a = nv2a_get_state();
                if (nv2a) {
                    for (uint32_t i = 0; i < count && pos < new_write; i++) {
                        uint32_t param = NV2A_TEST_MEM32(pos);
                        pos += 4;

                        if (g_pb_test_frame <= 3) {
                            fprintf(stderr, "    [PB-DATA] method 0x%04X = 0x%08X\n",
                                    method + i * 4, param);
                        }

                        /* Dispatch to PGRAPH method handler */
                        pgraph_method(nv2a, subchan, method + i * 4, param);
                    }
                }
            } else if ((word & 0xe0030003) == 0x40000000) {
                uint32_t count = (word >> 18) & 0x7ff;
                pos += count * 4;
            } else {
                break;
            }
        }
    }
}

/*
 * Enable/disable the push buffer test.
 */
void nv2a_pb_test_set_active(int active)
{
    g_pb_test_active = active;
    fprintf(stderr, "[PB-TEST] Push buffer test %s\n", active ? "ENABLED" : "disabled");
}

int nv2a_pb_test_is_active(void)
{
    return g_pb_test_active;
}
