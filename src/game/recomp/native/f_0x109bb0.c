#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00109BB0
 * Original: 0x00109BB0 - 0x00109CD1 (289 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BB0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00109BB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1E0); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x1D0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1E4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x1D4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1E8); /* subss */
    xmm0.f[0] = MEMF(eax + 0x1D8); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    xmm5.f[0] = MEMF(0x3B1684); /* movss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x1F0); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 0x1F0); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x1F0); /* mulss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_00109190(); /* call 0x00109190 */

loc_00109CCD:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
