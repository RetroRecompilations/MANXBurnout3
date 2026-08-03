#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210CB0
 * Original: 0x00210CB0 - 0x00210CBB (11 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210CB0(void)
{

loc_00210CB0:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x17A8);
    esp += 4; return; /* ret */

}
