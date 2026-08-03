#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E210
 * Original: 0x0019E210 - 0x0019E299 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E210(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0019E210:
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    if (CMP_G(eax, ecx)) eax = ecx; /* cmovg */
    edx = eax + -1;
    if (TEST_S(edx, edx)) goto loc_0019E233; /* jl: less (signed <) */

loc_0019E22C:
    xmm0.f[0] = MEMF(esi + edx * 8); /* movss */
    goto loc_0019E236;

loc_0019E233:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019E236:
    if (CMP_GE(eax, ecx)) goto loc_0019E256; /* jge: greater or equal (signed >=) */

loc_0019E23A:
    xmm3.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019E256:
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    if (CMP_G(eax, ecx)) eax = ecx; /* cmovg */
    edx = eax + -1;
    if (TEST_S(edx, edx)) goto loc_0019E271; /* jl: less (signed <) */

loc_0019E26C:
    xmm1.f[0] = MEMF(esi + edx * 8); /* movss */

loc_0019E271:
    if (CMP_GE(eax, ecx)) goto loc_0019E291; /* jge: greater or equal (signed >=) */

loc_0019E275:
    xmm3.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019E291:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
