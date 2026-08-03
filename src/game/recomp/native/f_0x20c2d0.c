#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020C2D0
 * Original: 0x0020C2D0 - 0x0020C2E6 (22 bytes, 5 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2D0(void)
{

loc_0020C2D0:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0x28) = MEM32(eax + 0x28) | 0x800000;
    esp += 4; return; /* ret */

}
