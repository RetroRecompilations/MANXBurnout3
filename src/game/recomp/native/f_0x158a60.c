#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158A60
 * Original: 0x00158A60 - 0x00158A8E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158A60:
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    goto loc_00158A70;

    /* nop */

loc_00158A70:
    esi = MEM32(eax * 8 + 0x39FC90);
    if (CMP_NE(esi, edx)) goto loc_00158A86; /* jne: not equal / not zero */

loc_00158A7B:
    esi = MEM32(eax * 8 + 0x39FC94);
    if (CMP_EQ(esi, ecx)) { sub_00158A8F(); return; } /* je: equal / zero */

loc_00158A86:
    eax++;
    if (CMP_L(eax, 0x43)) goto loc_00158A70; /* jl: less (signed <) */

}
