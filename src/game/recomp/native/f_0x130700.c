#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00130700
 * Original: 0x00130700 - 0x001309E9 (745 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00130700:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    ecx = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B1A18); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm1.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0x39 */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    /* shufps xmm5, xmm3, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    ebx = esp + 0xC;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm3.f[0], MEMF(ebp + 0x10) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(ebp + 0x10))) goto loc_00130786; /* jbe: below or equal (unsigned <=) */

loc_0013077F:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00130786:
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm5.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0xc9 */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* shufps xmm7, xmm1, 0xc9 */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    /* shufps xmm0, xmm6, 0xd2 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0xd2 */
    /* mulps: xmm7.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    eax = esp + 0xC;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0xd2 */
    if ((xmm1.f[0] <= xmm7.f[0])) goto loc_00130870; /* jbe: below or equal (unsigned <=) */

loc_00130810:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0xc9 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0xc9 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0xC;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    /* comiss xmm7.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm7.f[0] < MEMF(esp + 0xC))) goto loc_00130866; /* jb: below (unsigned <) */

loc_0013085A:
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    goto loc_001308D2;

loc_00130866:
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    goto loc_001308D2;

loc_00130870:
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0xc9 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0xc9 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm7.f[0])) goto loc_001308CA; /* jbe: below or equal (unsigned <=) */

loc_001308BE:
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    goto loc_001308D2;

loc_001308CA:
    memcpy(xmm3.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */

loc_001308D2:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0xC;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    /* comiss xmm7.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm7.f[0] >= MEMF(esp + 0xC))) goto loc_00130944; /* jae: above or equal (unsigned >=) */

loc_0013090D:
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm5.f[0] -= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm7.f[0])) goto loc_0013094E; /* jb: below (unsigned <) */

loc_00130944:
    memcpy((void *)XBOX_PTR(edi), xmm3.b, 16); /* movaps */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013094E:
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    /* shufps xmm0, xmm6, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0013097E:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_001309E2; /* jbe: below or equal (unsigned <=) */

loc_001309B8:
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = esp + 0x30;
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, ecx);
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x24;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000BFB10(); /* call 0x000BFB10 */

loc_001309E2:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
