#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2230
 * Original: 0x001B2230 - 0x001B23E6 (438 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001B2230:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    memcpy(xmm7.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    ecx = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy(xmm4.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    /* subps: xmm2.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0xc9 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    /* shufps xmm6, xmm0, 0xc9 */
    /* mulps: xmm6.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm6.f[0] (packed 4xfloat) */
    /* subps: xmm4.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    /* shufps xmm6, xmm3, 0x39 */
    xmm3.f[0] = MEMF(0x3A6860); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    edx = esp + 0x10;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] >= xmm1.f[0])) goto loc_001B23E0; /* jae: above or equal (unsigned >=) */

loc_001B22BA:
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1918); /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x3B16A0); /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    /* subps: xmm5.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* shufps xmm0, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x14;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm6.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    if ((xmm6.f[0] >= xmm3.f[0])) goto loc_001B23E0; /* jae: above or equal (unsigned >=) */

loc_001B230F:
    xmm7.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm3.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm3.f[0] > xmm7.f[0])) goto loc_001B23E0; /* ja: above (unsigned >) */

loc_001B231E:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    /* shufps xmm0, xmm5, 0xc9 */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    /* shufps xmm1, xmm4, 0xd2 */
    /* shufps xmm5, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0xd2 */
    /* mulps: xmm5.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm5.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0x39 */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    ecx = esp + 0x18;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm6.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm6.f[0] >= xmm0.f[0])) goto loc_001B23E0; /* jae: above or equal (unsigned >=) */

loc_001B2374:
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    /* comiss xmm0.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm7.f[0])) goto loc_001B23E0; /* ja: above (unsigned >) */

loc_001B237D:
    eax = esp + 0x20;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001B238A:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001B23E0; /* jae: above or equal (unsigned >=) */

loc_001B2395:
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0xC))) goto loc_001B23E0; /* ja: above (unsigned >) */

loc_001B239C:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x10); /* divss */
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B23E0:
    SET_LO8(eax, 0); /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
