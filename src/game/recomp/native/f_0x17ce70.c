#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017CE70
 * Original: 0x0017CE70 - 0x0017D0EE (638 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0017CE70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    MEM32(eax + 0x60) = ecx;
    edx = MEM32(ecx + 0x40);
    if (TEST_NZ(edx, edx)) goto loc_0017CEA3; /* jne: not equal / not zero */

loc_0017CE83:
    xmm5.f[0] = MEMF(0x3B1768); /* movss */
    xmm0.f[0] = MEMF(0x3B1690); /* movss */
    xmm1.f[0] = MEMF(0x3B1698); /* movss */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    goto loc_0017CF2B;

loc_0017CEA3:
    if (CMP_NE(edx, 1)) goto loc_0017CEC5; /* jne: not equal / not zero */

loc_0017CEA8:
    xmm5.f[0] = MEMF(0x3B1698); /* movss */
    xmm0.f[0] = MEMF(0x3B1824); /* movss */
    xmm1.f[0] = MEMF(0x3B1690); /* movss */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    goto loc_0017CF2B;

loc_0017CEC5:
    if (CMP_NE(edx, 2)) goto loc_0017CEEC; /* jne: not equal / not zero */

loc_0017CECA:
    xmm0.f[0] = MEMF(0x3B1708); /* movss */
    xmm6.f[0] = MEMF(0x3B168C); /* movss */
    xmm5.f[0] = MEMF(0x3A3360); /* movss */
    xmm1.f[0] = MEMF(0x3A3364); /* movss */
    goto loc_0017CF2B;

loc_0017CEEC:
    if (CMP_NE(edx, 3)) goto loc_0017CF13; /* jne: not equal / not zero */

loc_0017CEF1:
    xmm0.f[0] = MEMF(0x3B1708); /* movss */
    xmm6.f[0] = MEMF(0x3A3360); /* movss */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = MEMF(0x3A3364); /* movss */
    goto loc_0017CF2B;

loc_0017CF13:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm6.f[0] = MEMF(esp + 0xC); /* movss */
    xmm5.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */

loc_0017CF2B:
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm2.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm2.b, 16); /* movaps */
    ecx = MEM32(eax + 0x60);
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    ecx = MEM32(eax + 0x60);
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm2.b, 16); /* movaps */
    ecx = MEM32(eax + 0x60);
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    edx = esp + 0xC;
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm5.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm2.b, 16); /* movaps */
    ecx = MEM32(eax + 0x60);
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x50), xmm0.b, 16); /* movaps */
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
