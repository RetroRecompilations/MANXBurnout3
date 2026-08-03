#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201F80
 * Original: 0x00201F80 - 0x00201F8F (15 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201F80(void)
{

loc_00201F80:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = MEM32(eax) | 0x40;
    esp += 4; return; /* ret */

}
