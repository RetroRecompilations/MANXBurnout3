#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020A1F0
 * Original: 0x0020A1F0 - 0x0020A1FC (12 bytes, 4 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1F0(void)
{

loc_0020A1F0:
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

}
