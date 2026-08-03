#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A9360
 * Original: 0x001A9360 - 0x001A95F7 (663 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001A9360:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(ecx + 0x114);
    eax = ZX8(MEM8(eax + 0x49));
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = eax + eax * 4;
    esi = esi + edx;
    SET_LO8(edx, MEM8(esi + 0x69));
    eax = eax << 4;
    eax = eax + 0x642C10;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A949C; /* je: equal / zero */

loc_001A939D:
    xmm1.f[0] = MEMF(0x3B1884); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A95ED; /* jbe: below or equal (unsigned <=) */

loc_001A93AE:
    xmm1.f[0] = MEMF(ecx + ebx * 4 + 0xF0); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_001A93CC; /* jbe: below or equal (unsigned <=) */

loc_001A93BF:
    /* comiss xmm0.f[0], MEMF(0x3A795C) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(0x3A795C))) goto loc_001A95ED; /* jae: above or equal (unsigned >=) */

loc_001A93CC:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B1920) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1920))) goto loc_001A95ED; /* jbe: below or equal (unsigned <=) */

loc_001A9411:
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001A95ED; /* jbe: below or equal (unsigned <=) */

loc_001A9422:
    xmm0.f[0] = MEMF(ecx + 0x124); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(ecx + 0x124) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x114);
    xmm0.f[0] = MEMF(ecx + 0x28); /* movss */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_001A9485; /* jbe: below or equal (unsigned <=) */

loc_001A946E:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1870); /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001A9485:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1870); /* subss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001A949C:
    xmm1.f[0] = MEMF(0x3A795C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    xmm4.f[0] = MEMF(0x3A7F34); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A94C7; /* jbe: below or equal (unsigned <=) */

loc_001A94B4:
    /* comiss xmm3.f[0], MEMF(ecx + ebx * 4 + 0xF0) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(ecx + ebx * 4 + 0xF0))) goto loc_001A94C7; /* jbe: below or equal (unsigned <=) */

loc_001A94BE:
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] >= xmm4.f[0])) goto loc_001A95ED; /* jae: above or equal (unsigned >=) */

loc_001A94C7:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B17D0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B17D0))) goto loc_001A951D; /* jbe: below or equal (unsigned <=) */

loc_001A9510:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_001A9537; /* ja: above (unsigned >) */

loc_001A951D:
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_001A95ED; /* jbe: below or equal (unsigned <=) */

loc_001A9526:
    xmm0.f[0] = MEMF(0x3B1824); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001A95ED; /* jbe: below or equal (unsigned <=) */

loc_001A9537:
    xmm0.f[0] = MEMF(ecx + 0x124); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    eax = MEM32(ecx + 0x114);
    MEMF(ecx + 0x124) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_001A9589; /* jbe: below or equal (unsigned <=) */

loc_001A9583:
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_001A958D;

loc_001A9589:
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_001A958D:
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + ebx * 4 + 0xF0); /* movss */
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm4.f[0])) goto loc_001A95E3; /* jbe: below or equal (unsigned <=) */

loc_001A95A0:
    SET_LO8(eax, MEM8(ecx + 0x172));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A95DD; /* jne: not equal / not zero */

loc_001A95AA:
    SET_LO8(eax, MEM8(0x499D20));
    MEM8(ecx + 0x178) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM8(ecx + 0x172) = 2;
    MEMF(ecx + 0x144) = xmm3.f[0]; /* movss */
    MEM8(ecx + 0x179) = 0;
    MEM8(0x499D20) = LO8(edx);

loc_001A95DD:
    MEM8(ecx + 0x170) = LO8(ebx);

loc_001A95E3:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001A95ED:
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
