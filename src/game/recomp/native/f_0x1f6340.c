#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6340
 * Original: 0x001F6340 - 0x001F634F (15 bytes, 4 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6340(void)
{

loc_001F6340:
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax * 4 + 0x14;
    esp += 4; return; /* ret */

}
