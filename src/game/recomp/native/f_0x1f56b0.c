#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F56B0
 * Original: 0x001F56B0 - 0x001F56BA (10 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F56B0(void)
{

loc_001F56B0:
    eax = MEM32(esp + 4);
    MEM32(0x41B408) = eax;
    esp += 4; return; /* ret */

}
