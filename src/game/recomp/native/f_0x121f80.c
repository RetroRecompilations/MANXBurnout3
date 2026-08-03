#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00121F80
 * Original: 0x00121F80 - 0x0012208E (270 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121F80(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00121F80:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x18); /* subss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
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
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xB4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 0xB4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xB4); /* mulss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_00121EB0(); /* call 0x00121EB0 */

loc_0012208A:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
