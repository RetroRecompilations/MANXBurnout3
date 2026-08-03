#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C680
 * Original: 0x0021C680 - 0x0021C6AA (42 bytes, 12 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C680(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C680:
    edx = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) goto loc_0021C6A9; /* je: equal / zero */

loc_0021C688:
    ecx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0021C6A9; /* je: equal / zero */

loc_0021C690:
    eax = MEM32(0x41CFC0);
    MEM32(eax * 8 + 0x41CE98) = edx;
    MEM32(eax * 8 + 0x41CE9C) = ecx;
    eax++;
    MEM32(0x41CFC0) = eax;

loc_0021C6A9:
    esp += 4; return; /* ret */

}
