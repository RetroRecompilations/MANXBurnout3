#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B73F0
 * Original: 0x001B73F0 - 0x001B741D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B73F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B73F0:
    ecx = MEM32(esi + 0x4AC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001B741A; /* jle: less or equal (signed <=) */

loc_001B73FC:
    edx = esi + 0x2C;
    /* nop */

loc_001B7400:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_001B740F; /* je: equal / zero */

loc_001B7404:
    eax++;
    edx = edx + 0x18;
    if (CMP_L(eax, ecx)) goto loc_001B7400; /* jl: less (signed <) */

loc_001B740C:
    esp += 8; return; /* ret 4 */

loc_001B740F:
    ecx = MEM32(esp + 4);
    eax = eax + eax * 2 + 6;
    MEM32(esi + eax * 8) = ecx;

loc_001B741A:
    esp += 8; return; /* ret 4 */

}
