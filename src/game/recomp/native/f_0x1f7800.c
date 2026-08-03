#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F7800
 * Original: 0x001F7800 - 0x001F780A (10 bytes, 3 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7800(void)
{

loc_001F7800:
    eax = MEM32(esp + 4);
    MEM32(0x3C1260) = eax;
    esp += 4; return; /* ret */

}
