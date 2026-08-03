#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024E137
 * Original: 0x0024E137 - 0x0024E13C (5 bytes, 1 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E137(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E137:
    g_seh_ebp = ebp; sub_0024E0D4(); return; /* tail jmp 0x0024E0D4 */

}
