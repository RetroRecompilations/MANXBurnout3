#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157720
 * Original: 0x00157720 - 0x0015774E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157720(void)
{
    int _flags = 0; /* fallback flag var */

loc_00157720:
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    goto loc_00157730;

    /* nop */

loc_00157730:
    esi = MEM32(eax * 8 + 0x39D870);
    if (CMP_NE(esi, edx)) goto loc_00157746; /* jne: not equal / not zero */

loc_0015773B:
    esi = MEM32(eax * 8 + 0x39D874);
    if (CMP_EQ(esi, ecx)) { sub_0015774F(); return; } /* je: equal / zero */

loc_00157746:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_00157730; /* jl: less (signed <) */

}
