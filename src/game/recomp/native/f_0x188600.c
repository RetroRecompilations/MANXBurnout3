#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188600
 * Original: 0x00188600 - 0x00188712 (274 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00188600:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edi);
    edi = esp + 4;
    MEMF(edi) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edi = esp + 8;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(esi + 0x6457C); /* movss */
    if ((xmm2.f[0] < xmm0.f[0])) goto loc_001886B3; /* jb: below (unsigned <) */

loc_001886AE:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_001886E8;

loc_001886B3:
    /* comiss xmm0.f[0], MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(eax + 4))) goto loc_001886C0; /* jb: below (unsigned <) */

loc_001886B9:
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    goto loc_001886E4;

loc_001886C0:
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(eax + 0xC); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */

loc_001886E4:
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_001886E8:
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x14); /* mulss */
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x18));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x40A8C0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00182920(); /* call 0x00182920 */

loc_0018870B:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
