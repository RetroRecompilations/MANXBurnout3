#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225AB0
 * Original: 0x00225AB0 - 0x00225AB5 (5 bytes, 1 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225AB0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225AB0:
    g_seh_ebp = ebp; sub_002259F0(); return; /* tail jmp 0x002259F0 */

}
