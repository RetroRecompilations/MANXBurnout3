#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00013D10
 * Original: 0x00013D10 - 0x00013E46 (310 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D10(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00013D10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0.f[0] = MEMF(0x3A34B8); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    xmm6.f[0] = MEMF(esp + 0x28); /* movss */
    xmm5.f[0] = MEMF(esp + 0x24); /* movss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    memcpy(xmm3.b, xmm6.b, 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm4.b, xmm5.b, 16); /* movaps */
    memcpy(xmm5.b, xmm6.b, 16); /* movaps */
    xmm6.f[0] = MEMF(esp + 0x2C); /* movss */
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm6.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B168C); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm6.b, xmm7.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x18); /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(esp + 0x14); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm5.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    ecx = 0x10;
    esi = esp + 0x30;
    edi = eax;
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
