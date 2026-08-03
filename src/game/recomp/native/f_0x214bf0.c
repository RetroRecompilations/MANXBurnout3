#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214BF0
 * Original: 0x00214BF0 - 0x00214C17 (39 bytes, 15 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214BF0(void)
{

loc_00214BF0:
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(eax));
    edx = ZX8(HI8(eax));
    eax = eax >> 0x10;
    eax = ZX8(LO8(eax));
    ecx = ecx | edx;
    edx = MEM32(esp + 4);
    ecx = ecx << 8;
    ecx = ecx | eax;
    ecx = ecx << 8;
    edx = edx >> 0x18;
    ecx = ecx | edx;
    eax = ecx;
    esp += 4; return; /* ret */

}
