#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158640
 * Original: 0x00158640 - 0x0015866E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158640:
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    goto loc_00158650;

    /* nop */

loc_00158650:
    esi = MEM32(eax * 8 + 0x39EBC0);
    if (CMP_NE(esi, edx)) goto loc_00158666; /* jne: not equal / not zero */

loc_0015865B:
    esi = MEM32(eax * 8 + 0x39EBC4);
    if (CMP_EQ(esi, ecx)) { sub_0015866F(); return; } /* je: equal / zero */

loc_00158666:
    eax++;
    if (CMP_L(eax, 0x24)) goto loc_00158650; /* jl: less (signed <) */

}
