#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6350
 * Original: 0x001F6350 - 0x001F6370 (32 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6350(void)
{

loc_001F6350:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    ecx = eax + 0x14;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}
