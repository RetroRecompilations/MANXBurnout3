#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DD20
 * Original: 0x0017DD20 - 0x0017DEA3 (387 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DD20(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0017DD20:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ZX8(MEM8(eax + 0x4AF));
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0017DD4C; /* jle: less or equal (signed <=) */

loc_0017DD36:
    esi = eax + 0x18;
    /* nop */

loc_0017DD40:
    if (CMP_EQ(MEM32(esi), edi)) goto loc_0017DD4F; /* je: equal / zero */

loc_0017DD44:
    edx++;
    esi = esi + 4;
    if (CMP_L(edx, ecx)) goto loc_0017DD40; /* jl: less (signed <) */

loc_0017DD4C:
    edx = edx | 0xFFFFFFFFu;

loc_0017DD4F:
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0017DD68; /* jle: less or equal (signed <=) */

loc_0017DD55:
    edi = eax + 0x18;

loc_0017DD58:
    if (CMP_EQ(MEM32(edi), ebx)) goto loc_0017DE9C; /* je: equal / zero */

loc_0017DD60:
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, ecx)) goto loc_0017DD58; /* jl: less (signed <) */

loc_0017DD68:
    ecx = ecx | 0xFFFFFFFFu;

loc_0017DD6B:
    xmm4.f[0] = MEMF(eax + ecx * 4 + 0x330); /* movss */
    xmm3.f[0] = MEMF(eax + ecx * 4 + 0x228); /* movss */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(eax + edx * 4 + 0x330); /* movss */
    xmm1.f[0] = MEMF(eax + edx * 4 + 0x228); /* movss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    xmm6.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + edx * 4 + 0x330) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] / xmm0.f[0]; /* divss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    POP32(esp, edi);
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + edx * 4 + 0x228) = xmm7.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    POP32(esp, esi);
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + ecx * 4 + 0x330) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + ecx * 4 + 0x228) = xmm5.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + edx * 4 + 0x228); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    POP32(esp, ebx);
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DE45; /* jbe: below or equal (unsigned <=) */

loc_0017DE32:
    /* comiss xmm1.f[0], MEMF(eax + edx * 4 + 0x228) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(eax + edx * 4 + 0x228))) goto loc_0017DE45; /* jbe: below or equal (unsigned <=) */

loc_0017DE3C:
    MEMF(eax + edx * 4 + 0x228) = xmm1.f[0]; /* movss */

loc_0017DE45:
    xmm2.f[0] = MEMF(eax + edx * 4 + 0x330); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0017DE61; /* jbe: below or equal (unsigned <=) */

loc_0017DE53:
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0017DE61; /* jbe: below or equal (unsigned <=) */

loc_0017DE58:
    MEMF(eax + edx * 4 + 0x330) = xmm1.f[0]; /* movss */

loc_0017DE61:
    xmm2.f[0] = MEMF(eax + ecx * 4 + 0x228); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0017DE7D; /* jbe: below or equal (unsigned <=) */

loc_0017DE6F:
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0017DE7D; /* jbe: below or equal (unsigned <=) */

loc_0017DE74:
    MEMF(eax + ecx * 4 + 0x228) = xmm1.f[0]; /* movss */

loc_0017DE7D:
    xmm2.f[0] = MEMF(eax + ecx * 4 + 0x330); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0017DE99; /* jbe: below or equal (unsigned <=) */

loc_0017DE8B:
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0017DE99; /* jbe: below or equal (unsigned <=) */

loc_0017DE90:
    MEMF(eax + ecx * 4 + 0x330) = xmm1.f[0]; /* movss */

loc_0017DE99:
    esp += 16; return; /* ret 12 */

loc_0017DE9C:
    ecx = esi;
    goto loc_0017DD6B;

}
