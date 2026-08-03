#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE3D0
 * Original: 0x001FE3D0 - 0x001FE3DF (15 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE3D0(void)
{

loc_001FE3D0:
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}
