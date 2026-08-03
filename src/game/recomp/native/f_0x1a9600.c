#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A9600
 * Original: 0x001A9600 - 0x001A98BA (698 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001A9600:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    ecx = MEM32(esi + 0x114);
    eax = ZX8(MEM8(ecx + 0x49));
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3A7950); /* movss */
    eax = eax + eax * 4;
    PUSH32(esp, ebx);
    eax = eax << 4;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = eax + 0x642C10;
    /* comiss xmm2.f[0], MEMF(esi + edi * 4 + 0xF0) - sets EFLAGS */
    MEM8(esp + 0x13) = 0;
    SET_LO8(edx, 1);
    if ((xmm2.f[0] <= MEMF(esi + edi * 4 + 0xF0))) goto loc_001A9650; /* jbe: below or equal (unsigned <=) */

loc_001A963F:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_001A964E; /* jb: below (unsigned <) */

loc_001A9644:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A964E:
    SET_LO8(edx, 0); /* xor self */

loc_001A9650:
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + ebx + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edi = edi + ebx + 0x30;
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A979A; /* je: equal / zero */

loc_001A9682:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x14;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1940) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1940))) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A96A8:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A96B1:
    ebx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(esi + ebx * 4 + 0xF0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B19F4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019FFA0(); /* call 0x0019FFA0 */

loc_001A96DA:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x30;
    ecx = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001A96F7:
    /* comiss xmm0.f[0], MEMF(0x3B17D0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B17D0))) goto loc_001A970D; /* jbe: below or equal (unsigned <=) */

loc_001A9700:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001A972B; /* ja: above (unsigned >) */

loc_001A970D:
    /* comiss xmm0.f[0], MEMF(0x3B168C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B168C))) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A971A:
    xmm1.f[0] = MEMF(0x3B1824); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A972B:
    eax = MEM32(esi + 0x114);
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_001A9749; /* jbe: below or equal (unsigned <=) */

loc_001A973F:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1870); /* addss */
    goto loc_001A9751;

loc_001A9749:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1870); /* subss */

loc_001A9751:
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x173);
    xmm0.f[0] = MEMF(esi + 0x124); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax * 4 + 0x3A5EA4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    goto loc_001A9847;

loc_001A979A:
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B17D0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B17D0))) goto loc_001A97C9; /* jbe: below or equal (unsigned <=) */

loc_001A97BC:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001A97E7; /* ja: above (unsigned >) */

loc_001A97C9:
    /* comiss xmm0.f[0], MEMF(0x3B168C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B168C))) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A97D6:
    xmm1.f[0] = MEMF(0x3B1824); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A98AC; /* jbe: below or equal (unsigned <=) */

loc_001A97E7:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    xmm0.f[0] = MEMF(ecx + 0x28); /* movss */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001A97FB; /* jbe: below or equal (unsigned <=) */

loc_001A97F1:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1870); /* addss */
    goto loc_001A9803;

loc_001A97FB:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1870); /* subss */

loc_001A9803:
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x173);
    xmm0.f[0] = MEMF(esi + 0x124); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax * 4 + 0x3A5EA4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    ebx = MEM32(ebp + 0xC);

loc_001A9847:
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + ebx * 4 + 0xF0); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    SET_LO8(ecx, 1);
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001A98B0; /* jbe: below or equal (unsigned <=) */

loc_001A985F:
    SET_LO8(eax, MEM8(esi + 0x172));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A989C; /* jne: not equal / not zero */

loc_001A9869:
    SET_LO8(eax, MEM8(0x499D20));
    MEM8(esi + 0x178) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM8(esi + 0x172) = 2;
    MEMF(esi + 0x144) = xmm2.f[0]; /* movss */
    MEM8(esi + 0x179) = 0;
    MEM8(0x499D20) = LO8(edx);

loc_001A989C:
    MEM8(esi + 0x170) = LO8(ebx);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A98AC:
    SET_LO8(ecx, MEM8(esp + 0x13));

loc_001A98B0:
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
