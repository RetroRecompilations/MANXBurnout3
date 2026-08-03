#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00109040
 * Original: 0x00109040 - 0x0010918A (330 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109040(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00109040:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    PUSH32(esp, esi);
    esi = esp + 8;
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    esi = esp + 8;
    xmm2.f[0] = MEMF(esi); /* movss */
    /* shufps xmm2, xmm2, 0 */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = esp + 8;
    xmm6.f[0] = MEMF(edx); /* movss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm6, xmm6, 0 */
    /* mulps: xmm3.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(ecx + 0x18); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = esp + 8;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(ecx + 0x14); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = esp + 8;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(ecx + 0x10); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = esp + 8;
    xmm6.f[0] = MEMF(edx); /* movss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm6, xmm6, 0 */
    /* mulps: xmm3.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(ecx + 0x28); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = esp + 8;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(ecx + 0x24); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = esp + 8;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(ecx + 0x20); /* movss */
    ecx = esp + 8;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ecx); /* movss */
    PUSH32(esp, edi);
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    ecx = 0xC;
    esi = esp + 0x10;
    edi = eax;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
