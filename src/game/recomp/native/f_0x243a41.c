#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243A41
 * Original: 0x00243A41 - 0x00243A46 (5 bytes, 1 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243A41(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243A41:
    g_seh_ebp = ebp; sub_002439E9(); return; /* tail jmp 0x002439E9 */

}
