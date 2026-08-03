#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157190
 * Original: 0x00157190 - 0x001571BA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157190(void)
{

loc_00157190:
    ecx = eax + 0xA0;
    MEM32(eax + 4) = ecx;
    edx = eax + 0x1C;
    ecx = eax + 0x320;
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    edx = eax + 0x480;
    ecx = eax + 0x4F8;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}
