#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040310
 * Original: 0x00040310 - 0x000404F2 (482 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040310(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00040310:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    edx = MEM32(ebp + 8);
    xmm4.f[0] = MEMF(0x3B16A4); /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x9A0); /* divss */
    xmm4.f[0] = xmm4.f[0] / MEMF(edx + 0x9A4); /* divss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    esi = esp + 8;
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    esi = esp + 0xC;
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    /* shufps xmm6, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    esi = esp + 0xC;
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    edx = esp + 8;
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x20); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x24); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    /* mulps: xmm2.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0x39 */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
