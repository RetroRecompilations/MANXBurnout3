#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201F90
 * Original: 0x00201F90 - 0x00201FA2 (18 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201F90(void)
{

loc_00201F90:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = MEM32(eax) | 0x80;
    esp += 4; return; /* ret */

}
