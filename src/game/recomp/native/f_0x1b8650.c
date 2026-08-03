#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B8650
 * Original: 0x001B8650 - 0x001B8698 (72 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8650(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B8650:
    /* cmp edi, MEM32(ecx + 0x78) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(edi, MEM32(ecx + 0x78))) goto loc_001B8674; /* jne: not equal / not zero */

loc_001B8656:
    edx = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001B866F; /* jle: less or equal (signed <=) */

loc_001B865F:
    ecx = ecx + 8;

loc_001B8662:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_001B8696; /* je: equal / zero */

loc_001B8667:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_001B8662; /* jl: less (signed <) */

loc_001B866F:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B8674:
    esi = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001B8693; /* jle: less or equal (signed <=) */

loc_001B867D:
    edx = ecx + 8;

loc_001B8680:
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_001B868B; /* je: equal / zero */

loc_001B8686:
    if (CMP_EQ(MEM32(ecx + 8), edi)) goto loc_001B8696; /* je: equal / zero */

loc_001B868B:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, esi)) goto loc_001B8680; /* jl: less (signed <) */

loc_001B8693:
    eax = eax | 0xFFFFFFFFu;

loc_001B8696:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
