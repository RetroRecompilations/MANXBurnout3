#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00197720
 * Original: 0x00197720 - 0x00197746 (38 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197720(void)
{

loc_00197720:
    ecx = MEM32(ecx + 0xC8);
    MEM8(ecx + 0x16B4) = 1;
    MEM32(ecx + 0x16B0) = eax;
    edx = MEM32(eax + 0x10DC);
    MEM32(eax + 0x16BC) = ecx;
    MEM32(eax + 0x16C0) = edx;
    esp += 4; return; /* ret */

}
