#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00164830
 * Original: 0x00164830 - 0x001648C0 (144 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164830(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00164830:
    ecx = MEM32(edx + 0x1030);
    xmm1.f[0] = MEMF(0x3A7950); /* movss */
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001648BF; /* jle: less or equal (signed <=) */

loc_00164844:
    xmm2.f[0] = MEMF(0x38994C); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B1870); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 0x320;
    edi = ecx;

loc_00164861:
    edx = MEM32(esi);
    SET_LO8(ecx, MEM8(edx + 0x215));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0016487D; /* je: equal / zero */

loc_0016486E:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0016487D; /* je: equal / zero */

loc_00164873:
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0016487D; /* je: equal / zero */

loc_00164878:
    if (CMP_NE(LO8(ecx), 4)) goto loc_001648B7; /* jne: not equal / not zero */

loc_0016487D:
    if (CMP_NE(MEM8(edx + 0x215), 4)) goto loc_00164890; /* jne: not equal / not zero */

loc_00164886:
    SET_LO8(ecx, MEM8(edx + 0x2428));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001648B7; /* jne: not equal / not zero */

loc_00164890:
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_001648B7; /* jbe: below or equal (unsigned <=) */

loc_0016489A:
    /* comiss xmm4.f[0], MEMF(esi + 0x14) - sets EFLAGS */
    if ((xmm4.f[0] <= MEMF(esi + 0x14))) goto loc_001648B7; /* jbe: below or equal (unsigned <=) */

loc_001648A0:
    xmm0.f[0] = MEMF(edx + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001648B7; /* jbe: below or equal (unsigned <=) */

loc_001648B1:
    eax = esi + -64;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */

loc_001648B7:
    esi = esi + 0x70;
    edi--;
    if ((edi != 0)) goto loc_00164861; /* jne: not equal / not zero */

loc_001648BD:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001648BF:
    esp += 4; return; /* ret */

}
