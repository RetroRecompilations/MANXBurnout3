#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D7F0
 * Original: 0x0019D7F0 - 0x0019D86D (125 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0019D7F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    xmm0.f[0] = MEMF(ecx); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = esp + 8;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* addps: xmm3.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x10))) goto loc_0019D867; /* ja: above (unsigned >) */

loc_0019D84C:
    /* comiss xmm0.f[0], MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x14))) goto loc_0019D867; /* ja: above (unsigned >) */

loc_0019D853:
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x18))) goto loc_0019D867; /* ja: above (unsigned >) */

loc_0019D85A:
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x1C))) goto loc_0019D867; /* ja: above (unsigned >) */

loc_0019D861:
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019D867:
    SET_LO8(eax, 0); /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
