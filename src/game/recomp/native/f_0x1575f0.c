#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001575F0
 * Original: 0x001575F0 - 0x0015762E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001575F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001575F0:
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_00157625; /* jle: less or equal (signed <=) */

loc_001575FC:
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = ecx + 0x408;
    /* nop */

loc_00157610:
    ebx = MEM32(ecx);
    if (CMP_NE(ebx, edi)) goto loc_0015761D; /* jne: not equal / not zero */

loc_00157616:
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(ebx, esi)) goto loc_00157628; /* je: equal / zero */

loc_0015761D:
    eax++;
    ecx = ecx + 8;
    if (CMP_L(eax, edx)) goto loc_00157610; /* jl: less (signed <) */

loc_00157625:
    eax = eax | 0xFFFFFFFFu;

loc_00157628:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
