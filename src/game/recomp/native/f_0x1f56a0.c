#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F56A0
 * Original: 0x001F56A0 - 0x001F56AA (10 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F56A0(void)
{

loc_001F56A0:
    eax = MEM32(esp + 4);
    MEM32(0x41B404) = eax;
    esp += 4; return; /* ret */

}
