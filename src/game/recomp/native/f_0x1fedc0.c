#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FEDC0
 * Original: 0x001FEDC0 - 0x001FEDC6 (6 bytes, 1 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEDC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEDC0:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x7593D8)); return; /* indirect tail jmp */

}
