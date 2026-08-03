#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7E40
 * Original: 0x001B7E40 - 0x001B7E61 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B7E40:
    edx = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001B7E5D; /* jle: less or equal (signed <=) */

loc_001B7E49:
    ecx = ecx + 8;
    /* nop */

loc_001B7E50:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_001B7E60; /* je: equal / zero */

loc_001B7E55:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_001B7E50; /* jl: less (signed <) */

loc_001B7E5D:
    eax = eax | 0xFFFFFFFFu;

loc_001B7E60:
    esp += 4; return; /* ret */

}
