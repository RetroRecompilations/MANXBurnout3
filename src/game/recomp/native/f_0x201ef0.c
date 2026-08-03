#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201EF0
 * Original: 0x00201EF0 - 0x00201EFF (15 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201EF0(void)
{

loc_00201EF0:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = MEM32(eax) | 8;
    esp += 4; return; /* ret */

}
