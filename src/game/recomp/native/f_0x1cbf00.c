#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBF00
 * Original: 0x001CBF00 - 0x001CBF2C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBF00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CBF00:
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x20) = esi;
    if (CMP_LE(edi & edi, 0)) goto loc_001CBF28; /* jle: less or equal (signed <=) */

loc_001CBF10:
    edi = MEM32(ecx + 0x24);
    MEM32(edi + eax * 8) = edx;
    edi = MEM32(ecx + 0x24);
    edx = edx + esi;
    MEM8(edi + eax * 8 + 4) = 0;
    edi = MEM32(ecx + 0x1C);
    eax++;
    if (CMP_L(eax, edi)) goto loc_001CBF10; /* jl: less (signed <) */

loc_001CBF28:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
