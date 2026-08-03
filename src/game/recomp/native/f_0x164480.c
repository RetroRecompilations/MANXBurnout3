#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00164480
 * Original: 0x00164480 - 0x0016459C (284 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00164480:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x30;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 8) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    if ((xmm0.f[0] <= MEMF(esp + 8))) goto loc_0016451B; /* jbe: below or equal (unsigned <=) */

loc_001644DB:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0016451B:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_00164524:
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 8;
    MEMF(eax) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    xmm3.f[0] = MEMF(esp + 0xC); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
