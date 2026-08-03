#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1610
 * Original: 0x001C1610 - 0x001C1664 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1610(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C1610:
    PUSH32(esp, esi);
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0); sub_001C1740(); /* call 0x001C1740 */

loc_001C161A:
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + -8);
    eax = esi + -8;
    ecx = ecx + 0x40;
    if (TEST_Z(edx, edx)) goto loc_001C1630; /* je: equal / zero */

loc_001C162A:
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_001C1630:
    edx = MEM32(eax + 4);
    if (TEST_Z(edx, edx)) goto loc_001C1644; /* je: equal / zero */

loc_001C1637:
    esi = MEM32(eax);
    MEM32(edx) = esi;
    MEM32(eax + 4) = 0;
    goto loc_001C1649;

loc_001C1644:
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_001C1649:
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    /* test edx, edx - flags set for next jcc */
    MEM32(eax) = edx;
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_001C165E; /* je: equal / zero */

loc_001C1655:
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

loc_001C165E:
    edx = MEM32(ecx);
    MEM32(edx + 0x10) = eax;
    esp += 4; return; /* ret */

}
