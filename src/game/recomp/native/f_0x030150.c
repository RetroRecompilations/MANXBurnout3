#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00030150
 * Original: 0x00030150 - 0x00030291 (321 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030150(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00030150:
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = edx | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    if (CMP_NE(esi, edx)) goto loc_0003015E; /* jne: not equal / not zero */

loc_0003015C:
    MEM32(eax) = ecx;

loc_0003015E:
    if (CMP_NE(MEM32(eax + 4), edx)) goto loc_00030166; /* jne: not equal / not zero */

loc_00030163:
    MEM32(eax + 4) = ecx;

loc_00030166:
    if (CMP_NE(MEM32(eax + 8), edx)) goto loc_0003016E; /* jne: not equal / not zero */

loc_0003016B:
    MEM32(eax + 8) = ecx;

loc_0003016E:
    if (CMP_NE(MEM32(eax + 0xC), edx)) goto loc_00030176; /* jne: not equal / not zero */

loc_00030173:
    MEM32(eax + 0xC) = ecx;

loc_00030176:
    if (CMP_NE(MEM32(eax + 0x10), edx)) goto loc_0003017E; /* jne: not equal / not zero */

loc_0003017B:
    MEM32(eax + 0x10) = ecx;

loc_0003017E:
    /* cmp MEM32(eax + 0x14), edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM32(eax + 0x14), edx)) goto loc_00030187; /* jne: not equal / not zero */

loc_00030184:
    MEM32(eax + 0x14) = ecx;

loc_00030187:
    xmm1.f[0] = MEMF(0x39B2B0); /* movss */
    xmm2.f[0] = MEMF(0x3B17D8); /* movss */
    xmm0.f[0] = MEMF(0x3B17E0); /* movss */
    MEMF(0x45BB88) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17DC); /* movss */
    MEMF(0x45BB8C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEM32(0x45BB20) = ecx;
    MEM32(0x45BB24) = ecx;
    MEMF(0x45BB28) = xmm0.f[0]; /* movss */
    MEMF(0x45BB48) = xmm1.f[0]; /* movss */
    MEMF(0x45BB68) = xmm2.f[0]; /* movss */
    MEMF(0x45BB2C) = xmm0.f[0]; /* movss */
    MEMF(0x45BB4C) = xmm1.f[0]; /* movss */
    MEMF(0x45BB6C) = xmm2.f[0]; /* movss */
    MEMF(0x45BB30) = xmm0.f[0]; /* movss */
    MEMF(0x45BB50) = xmm1.f[0]; /* movss */
    MEMF(0x45BB70) = xmm2.f[0]; /* movss */
    MEMF(0x45BB34) = xmm0.f[0]; /* movss */
    MEMF(0x45BB54) = xmm1.f[0]; /* movss */
    MEMF(0x45BB74) = xmm2.f[0]; /* movss */
    MEMF(0x45BB38) = xmm0.f[0]; /* movss */
    MEMF(0x45BB58) = xmm1.f[0]; /* movss */
    MEMF(0x45BB78) = xmm2.f[0]; /* movss */
    MEMF(0x45BB3C) = xmm0.f[0]; /* movss */
    MEMF(0x45BB5C) = xmm1.f[0]; /* movss */
    MEMF(0x45BB7C) = xmm2.f[0]; /* movss */
    MEMF(0x45BB40) = xmm0.f[0]; /* movss */
    MEMF(0x45BB60) = xmm1.f[0]; /* movss */
    MEMF(0x45BB80) = xmm2.f[0]; /* movss */
    MEMF(0x45BB44) = xmm0.f[0]; /* movss */
    MEMF(0x45BB64) = xmm1.f[0]; /* movss */
    MEMF(0x45BB84) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x18) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
