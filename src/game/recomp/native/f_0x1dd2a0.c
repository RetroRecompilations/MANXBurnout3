#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD2A0
 * Original: 0x001DD2A0 - 0x001DD303 (99 bytes, 26 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD2A0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x98);
    if (CMP_NE(eax, esi)) goto loc_001DD2C0; /* jne: not equal / not zero */

loc_001DD2B2:
    eax = MEM32(esi + 0x9C);
    MEM32(ecx + 0x98) = eax;
    goto loc_001DD2EA;

loc_001DD2C0:
    if (CMP_EQ(MEM32(eax + 0x9C), esi)) goto loc_001DD2DE; /* je: equal / zero */

loc_001DD2C8:
    goto loc_001DD2D0;

    /* nop */

loc_001DD2D0:
    eax = MEM32(eax + 0x9C);
    if (CMP_NE(MEM32(eax + 0x9C), esi)) goto loc_001DD2D0; /* jne: not equal / not zero */

loc_001DD2DE:
    ecx = MEM32(esi + 0x9C);
    MEM32(eax + 0x9C) = ecx;

loc_001DD2EA:
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x9C) = eax;
    PUSH32(esp, 0); sub_001DD020(); /* call 0x001DD020 */

loc_001DD2FC:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DD220(); /* call 0x001DD220 */

}
