#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7E70
 * Original: 0x001B7E70 - 0x001B7EA2 (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B7E70:
    if (CMP_NE(ebx, MEM32(edi + 0x78))) goto loc_001B7E78; /* jne: not equal / not zero */

loc_001B7E75:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B7E78:
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x28);
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001B7E98; /* jle: less or equal (signed <=) */

loc_001B7E82:
    edx = edi + 8;

loc_001B7E85:
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_001B7E90; /* je: equal / zero */

loc_001B7E8B:
    if (CMP_EQ(MEM32(eax + 8), ebx)) goto loc_001B7E9C; /* je: equal / zero */

loc_001B7E90:
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, esi)) goto loc_001B7E85; /* jl: less (signed <) */

loc_001B7E98:
    POP32(esp, esi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B7E9C:
    eax = MEM32(edi + ecx * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
