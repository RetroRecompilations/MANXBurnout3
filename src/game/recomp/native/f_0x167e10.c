#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167E10
 * Original: 0x00167E10 - 0x00167EBA (170 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167E10(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00167E10:
    eax = MEM32(eax + 0xC34);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    edx = MEM32(ecx + 0x64B38C);
    eax = MEM32(edx + 0x13F4);
    PUSH32(esp, esi);
    esi = MEM32(0x73A188);
    eax = eax + 0x10D0;
    if (TEST_NZ(esi, esi)) goto loc_00167E45; /* jne: not equal / not zero */

loc_00167E38:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00167E45:
    ecx = MEM32(eax + 0x34C);
    /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(0x73A184);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    if (TEST_Z(ecx, ecx)) goto loc_00167E5E; /* je: equal / zero */

loc_00167E58:
    xmm2.f[0] = MEMF(edx + ecx * 8 + -8); /* movss */

loc_00167E5E:
    xmm1.f[0] = MEMF(edx + ecx * 8); /* movss */
    SET_LO8(ecx, MEM8(0x73A198));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00167E8B; /* je: equal / zero */

loc_00167E71:
    xmm0.f[0] = MEMF(eax + 0x348); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00167E8B:
    ecx = MEM32(eax + 0x350);
    xmm3.f[0] = MEMF(eax + 0x348); /* movss */
    ecx++;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + esi * 8 + -8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
