#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242750
 * Original: 0x00242750 - 0x00242760 (16 bytes, 4 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242750(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242750:
    ecx = MEM32(esp + 4);
    ecx = ecx + 4;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00242C70(); return; /* tail jmp 0x00242C70 */

}
