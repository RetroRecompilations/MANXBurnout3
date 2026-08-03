#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002423E0
 * Original: 0x002423E0 - 0x002423FE (30 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002423E0(void)
{

loc_002423E0:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(0x41D298) = eax;
    MEM32(0x41D28C) = ecx;
    MEM32(0x41D290) = edx;
    esp += 4; return; /* ret */

}
