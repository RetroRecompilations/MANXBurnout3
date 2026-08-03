#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242740
 * Original: 0x00242740 - 0x00242748 (8 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242740(void)
{

loc_00242740:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x60);
    esp += 4; return; /* ret */

}
