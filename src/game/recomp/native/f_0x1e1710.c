#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1710
 * Original: 0x001E1710 - 0x001E1763 (83 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1710(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1710:
    ecx = MEM32(0x41AC64);
    eax = MEM32(ecx + 0x7592A0);
    if (TEST_NZ(eax, eax)) goto loc_001E175E; /* jne: not equal / not zero */

loc_001E1720:
    eax = MEM32(ecx + 0x7592A4);
    edx = 0x80000000u;
    /* cmp eax, edx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(eax, edx)) goto loc_001E1762; /* jne: not equal / not zero */

loc_001E1733:
    if (TEST_Z(MEM32(eax + 4), edx)) goto loc_001E174C; /* je: equal / zero */

loc_001E1738:
    MEM32(ecx + 0x7592A0) = 0;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x7592A4) = edx;
    esp += 4; return; /* ret */

loc_001E174C:
    edx = MEM32(eax);
    MEM32(ecx + 0x7592A0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x7592A4) = edx;
    esp += 4; return; /* ret */

loc_001E175E:
    eax = MEM32(esp + 4);

loc_001E1762:
    esp += 4; return; /* ret */

}
