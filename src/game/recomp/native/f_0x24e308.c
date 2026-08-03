#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024E308
 * Original: 0x0024E308 - 0x0024E30D (5 bytes, 1 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E308(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E308:
    g_seh_ebp = ebp; sub_0024E2D5(); return; /* tail jmp 0x0024E2D5 */

}
