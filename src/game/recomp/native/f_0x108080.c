#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00108080
 * Original: 0x00108080 - 0x00108231 (433 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00108080:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    edx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x50), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    edx = esp + 4;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0x39 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B16D0); /* movss */
    edx = esp + 0xC;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1A54); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00108147; /* jbe: below or equal (unsigned <=) */

loc_00108128:
    xmm0.f[0] = MEMF(ecx + 0x60); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = esp + 4;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    goto loc_00108169;

loc_00108147:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010816E; /* jbe: below or equal (unsigned <=) */

loc_0010814C:
    xmm0.f[0] = MEMF(ecx + 0x60); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = esp + 4;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */

loc_00108169:
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */

loc_0010816E:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00108198; /* jbe: below or equal (unsigned <=) */

loc_00108179:
    xmm0.f[0] = MEMF(ecx + 0x64); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm5.f[0] (packed 4xfloat) */
    goto loc_001081BA;

loc_00108198:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001081BF; /* jbe: below or equal (unsigned <=) */

loc_0010819D:
    xmm0.f[0] = MEMF(ecx + 0x64); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm5.f[0] (packed 4xfloat) */

loc_001081BA:
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */

loc_001081BF:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001081E9; /* jbe: below or equal (unsigned <=) */

loc_001081CA:
    xmm0.f[0] = MEMF(ecx + 0x68); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm6.f[0] (packed 4xfloat) */
    goto loc_0010820B;

loc_001081E9:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_00108210; /* jbe: below or equal (unsigned <=) */

loc_001081EE:
    xmm0.f[0] = MEMF(ecx + 0x68); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm6.f[0] (packed 4xfloat) */

loc_0010820B:
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */

loc_00108210:
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
