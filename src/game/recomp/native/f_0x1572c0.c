#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001572C0
 * Original: 0x001572C0 - 0x001572FD (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001572C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001572C0:
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_001572F5; /* jle: less or equal (signed <=) */

loc_001572CC:
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = ecx + 0x408;
    /* nop */

loc_001572E0:
    ebx = MEM32(ecx);
    if (CMP_NE(ebx, edi)) goto loc_001572ED; /* jne: not equal / not zero */

loc_001572E6:
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(ebx, esi)) goto loc_001572F7; /* je: equal / zero */

loc_001572ED:
    eax++;
    ecx = ecx + 8;
    if (CMP_L(eax, edx)) goto loc_001572E0; /* jl: less (signed <) */

loc_001572F5:
    eax = 0; /* xor self */

loc_001572F7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
