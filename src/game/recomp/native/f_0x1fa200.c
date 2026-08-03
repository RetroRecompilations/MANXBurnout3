#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FA200
 * Original: 0x001FA200 - 0x001FA20C (12 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA200(void)
{

loc_001FA200:
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x3C1584);
    esp += 4; return; /* ret */

}
