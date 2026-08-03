#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201EC0
 * Original: 0x00201EC0 - 0x00201EEC (44 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201EC0(void)
{

loc_00201EC0:
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    edx = edx & 0xFFFFFFF7u;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    edx = edx | 4;
    MEM32(eax) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x3F800000;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}
