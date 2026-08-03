#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C5B0
 * Original: 0x0010C5B0 - 0x0010C5E3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010C5B0:
    eax = MEM32(edi + 0x28);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0010C5E2; /* jle: less or equal (signed <=) */

loc_0010C5B9:
    PUSH32(esp, esi);
    esi = edi + 8;
    /* nop */

loc_0010C5C0:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0010C5D6; /* je: equal / zero */

loc_0010C5C6:
    MEM32(eax + 0x4DA0) = 5;
    MEM8(eax + 0x4D9C) = LO8(edx);

loc_0010C5D6:
    eax = MEM32(edi + 0x28);
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, eax)) goto loc_0010C5C0; /* jl: less (signed <) */

loc_0010C5E1:
    POP32(esp, esi);

loc_0010C5E2:
    esp += 4; return; /* ret */

}
