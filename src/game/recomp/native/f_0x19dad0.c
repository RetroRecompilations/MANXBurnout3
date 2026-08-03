#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DAD0
 * Original: 0x0019DAD0 - 0x0019DB22 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DAD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DAD0:
    ecx = MEM32(esi + 0xE8);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0019DB21; /* jle: less or equal (signed <=) */

loc_0019DADC:
    edx = esi + 0x10;
    /* nop */

loc_0019DAE0:
    if (CMP_EQ(edi, MEM32(edx))) goto loc_0019DAED; /* je: equal / zero */

loc_0019DAE4:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_0019DAE0; /* jl: less (signed <) */

loc_0019DAEC:
    esp += 4; return; /* ret */

loc_0019DAED:
    edx = MEM32(0x3FA644);
    ecx = 2;
    /* cmp edx, ecx - flags set for next jcc */
    edx = eax;
    if (CMP_NE(edx, ecx)) goto loc_0019DB10; /* jne: not equal / not zero */

loc_0019DAFE:
    edx = edx << 4;
    MEM32(edx + 0x3FA164) = ecx;
    MEM32(esi + eax * 4 + 0x10) = 0;
    esp += 4; return; /* ret */

loc_0019DB10:
    edx = edx << 4;
    MEM32(edx + 0x3F9E44) = ecx;
    MEM32(esi + eax * 4 + 0x10) = 0;

loc_0019DB21:
    esp += 4; return; /* ret */

}
