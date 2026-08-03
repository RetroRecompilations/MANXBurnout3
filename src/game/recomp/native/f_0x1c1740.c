#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1740
 * Original: 0x001C1740 - 0x001C1796 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1740(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C1740:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x44);
    if (TEST_Z(esi, esi)) goto loc_001C175E; /* je: equal / zero */

loc_001C174B:
    goto loc_001C1750;

    /* nop */

loc_001C1750:
    ecx = esi + 8;
    PUSH32(esp, 0); sub_001C1740(); /* call 0x001C1740 */

loc_001C1758:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001C1750; /* jne: not equal / not zero */

loc_001C175E:
    edx = MEM32(edi + 0x44);
    if (TEST_Z(edx, edx)) goto loc_001C1793; /* je: equal / zero */

loc_001C1765:
    /* cmp MEM32(edx), 0 - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(MEM32(edx), 0)) goto loc_001C1777; /* je: equal / zero */

loc_001C176C:
    /* nop */

loc_001C1770:
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_001C1770; /* jne: not equal / not zero */

loc_001C1777:
    ecx = MEM32(edi + 0x40);
    ecx = MEM32(ecx + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001C1786; /* je: equal / zero */

loc_001C1783:
    MEM32(ecx + 4) = eax;

loc_001C1786:
    eax = MEM32(edi + 0x40);
    MEM32(eax + 0x10) = edx;
    MEM32(edi + 0x44) = 0;

loc_001C1793:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
