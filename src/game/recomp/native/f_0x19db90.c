#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DB90
 * Original: 0x0019DB90 - 0x0019DBE2 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DB90:
    ecx = MEM32(esi + 0xEC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0019DBE1; /* jle: less or equal (signed <=) */

loc_0019DB9C:
    edx = esi + 0x5C;
    /* nop */

loc_0019DBA0:
    if (CMP_EQ(edi, MEM32(edx))) goto loc_0019DBAD; /* je: equal / zero */

loc_0019DBA4:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_0019DBA0; /* jl: less (signed <) */

loc_0019DBAC:
    esp += 4; return; /* ret */

loc_0019DBAD:
    edx = MEM32(0x3FA644);
    ecx = 2;
    /* cmp edx, ecx - flags set for next jcc */
    edx = eax;
    if (CMP_NE(edx, ecx)) goto loc_0019DBD0; /* jne: not equal / not zero */

loc_0019DBBE:
    edx = edx << 4;
    MEM32(edx + 0x3FA294) = ecx;
    MEM32(esi + eax * 4 + 0x5C) = 0;
    esp += 4; return; /* ret */

loc_0019DBD0:
    edx = edx << 4;
    MEM32(edx + 0x3F9EE4) = ecx;
    MEM32(esi + eax * 4 + 0x5C) = 0;

loc_0019DBE1:
    esp += 4; return; /* ret */

}
