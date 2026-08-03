#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF410
 * Original: 0x001BF410 - 0x001BF58A (378 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_001BF410:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(edi + 0x28);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x28;
    ecx = eax;
    /* cmp ecx, esi - flags set for next jcc */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    if (CMP_EQ(ecx, esi)) goto loc_001BF44E; /* je: equal / zero */

loc_001BF441:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -20), 16); /* movaps */
    ecx = MEM32(ecx);
    /* cmp ecx, esi - flags set for next jcc */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    if (CMP_NE(ecx, esi)) goto loc_001BF441; /* jne: not equal / not zero */

loc_001BF44E:
    /* cmp eax, esi - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x24); /* cvtsi2ss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    if (CMP_EQ(eax, esi)) goto loc_001BF4EA; /* je: equal / zero */

loc_001BF47D:
    /* nop */

loc_001BF480:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + -20), 16); /* movaps */
    ecx = MEM32(ebp + 8);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + -8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x20); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_001BF4E4; /* jbe: below or equal (unsigned <=) */

loc_001BF4D7:
    /* comiss xmm0.f[0], MEMF(edi + 0xC) - sets EFLAGS */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    if ((xmm0.f[0] > MEMF(edi + 0xC))) goto loc_001BF582; /* ja: above (unsigned >) */

loc_001BF4E4:
    eax = MEM32(eax);
    if (CMP_NE(eax, esi)) goto loc_001BF480; /* jne: not equal / not zero */

loc_001BF4EA:
    ebx = MEM32(edi + 0x10);
    /* test ebx, ebx - flags set for next jcc */
    xmm4.f[0] = MEMF(esp + 0x18); /* movss */
    xmm5.f[0] = MEMF(esp + 0x14); /* movss */
    xmm6.f[0] = MEMF(esp + 0x10); /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_001BF54A; /* je: equal / zero */

loc_001BF503:
    eax = ebx;
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B0650(); /* call 0x001B0650 */

loc_001BF526:
    if (CMP_NE(eax, 2)) goto loc_001BF582; /* jne: not equal / not zero */

loc_001BF52B:
    eax = MEM32(ebx + 0x1C);
    /* test eax, eax - flags set for next jcc */
    ecx = ebx + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_001BF54A; /* jne: not equal / not zero */

loc_001BF535:
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    MEM32(ecx) = edx;
    MEM32(ebx + 0x20) = eax;
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;

loc_001BF54A:
    eax = MEM32(esi);
    /* cmp eax, esi - flags set for next jcc */
    MEMF(edi) = xmm6.f[0]; /* movss */
    MEMF(edi + 4) = xmm5.f[0]; /* movss */
    MEMF(edi + 8) = xmm4.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm3.f[0]; /* movss */
    if (CMP_EQ(eax, esi)) goto loc_001BF582; /* je: equal / zero */

loc_001BF563:
    ecx = MEM32(eax + -4);
    xmm0.f[0] = MEMF(ecx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + -8); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(eax);
    if (CMP_NE(eax, esi)) goto loc_001BF563; /* jne: not equal / not zero */

loc_001BF582:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
