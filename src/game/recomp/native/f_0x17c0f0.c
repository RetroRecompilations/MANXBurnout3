#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017C0F0
 * Original: 0x0017C0F0 - 0x0017C123 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017C0F0:
    eax = MEM32(esi + 0x28);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0017C122; /* jle: less or equal (signed <=) */

loc_0017C0F9:
    ecx = esi + 8;
    /* nop */

loc_0017C100:
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0017C117; /* je: equal / zero */

loc_0017C106:
    MEM32(eax + 0x4DA0) = 5;
    MEM8(eax + 0x4D9A) = 1;

loc_0017C117:
    eax = MEM32(esi + 0x28);
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, eax)) goto loc_0017C100; /* jl: less (signed <) */

loc_0017C122:
    esp += 4; return; /* ret */

}
