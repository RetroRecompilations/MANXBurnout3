#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00125490
 * Original: 0x00125490 - 0x00125777 (743 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00125490:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    edx = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A8C0), 16); /* movaps */
    edx = MEM32(ebp + 8);
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0xd2 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(ecx + 4); /* movss */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xc9 */
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    /* shufps xmm7, xmm3, 0xc9 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    /* shufps xmm6, xmm4, 0xd2 */
    /* mulps: xmm7.f[0] *= xmm6.f[0] (packed 4xfloat) */
    xmm6.f[0] = MEMF(0x3B1A20); /* movss */
    /* subps: xmm3.f[0] -= xmm7.f[0] (packed 4xfloat) */
    edx = esp + 0x10;
    xmm5.f[0] = MEMF(edx); /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm3.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    xmm4.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    edx = esp + 0x10;
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* subps: xmm4.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm4.b, 16); /* movaps */
    xmm4.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    edx = esp + 0x14;
    xmm5.f[0] = MEMF(edx); /* movss */
    /* shufps xmm5, xmm5, 0 */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* mulps: xmm7.f[0] *= xmm4.f[0] (packed 4xfloat) */
    edx = esp + 0x18;
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm4.b, 16); /* movaps */
    edx = esp + 0x1C;
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm5.f[0] *= MEMF(esp + 0x20) (packed 4xfloat) */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* subps: xmm4.f[0] -= xmm5.f[0] (packed 4xfloat) */
    xmm5.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm5.f[0] = MEMF(edx); /* movss */
    /* addps: xmm4.f[0] += xmm7.f[0] (packed 4xfloat) */
    /* shufps xmm5, xmm5, 0 */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm5.f[0] (packed 4xfloat) */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* addps: xmm5.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm7.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm6.f[0] = MEMF(edx); /* movss */
    edx = esp + 0x18;
    xmm7.f[0] = MEMF(edx); /* movss */
    /* shufps xmm6, xmm6, 0 */
    /* shufps xmm7, xmm7, 0 */
    /* mulps: xmm1.f[0] *= xmm7.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    edx = esp + 0x10;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm7.f[0] *= MEMF(esp + 0x20) (packed 4xfloat) */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm7.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm6.f[0] (packed 4xfloat) */
    xmm6.f[0] = MEMF(ecx); /* movss */
    memcpy((void *)XBOX_PTR(eax + 0x11D0), xmm3.b, 16); /* movaps */
    ecx = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm6, xmm6, 0 */
    /* mulps: xmm0.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x11E0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x11F0), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1210), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1220), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1230), xmm5.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1250), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1260), xmm5.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1270), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x1290), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x12A0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x12B0), xmm2.b, 16); /* movaps */
    ecx = eax + 0x1200;
    edx = 4;
    goto loc_001256E0;

    /* nop */
    goto loc_001256E0;

    /* nop */

loc_001256E0:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x11E0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + -48), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -16), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    esi = 0x3832AC;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    ecx = ecx + 0x40;
    edx--;
    if ((edx != 0)) goto loc_001256E0; /* jne: not equal / not zero */

}
