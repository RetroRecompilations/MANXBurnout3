#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00020930
 * Original: 0x00020930 - 0x00020961 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020930:
    MEM32(ecx) = eax;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edx = edx + eax;
    MEM32(eax + 0xC) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0002095E; /* jle: less or equal (signed <=) */

loc_00020943:
    PUSH32(esp, esi);

loc_00020944:
    ecx = MEM32(eax + 0xC);
    esi = MEM32(ecx + edx * 4);
    /* test esi, esi - flags set for next jcc */
    ecx = ecx + edx * 4;
    if (TEST_Z(esi, esi)) goto loc_00020955; /* je: equal / zero */

loc_00020951:
    esi = esi + eax;
    MEM32(ecx) = esi;

loc_00020955:
    ecx = MEM32(eax + 8);
    edx++;
    if (CMP_L(edx, ecx)) goto loc_00020944; /* jl: less (signed <) */

loc_0002095D:
    POP32(esp, esi);

loc_0002095E:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
