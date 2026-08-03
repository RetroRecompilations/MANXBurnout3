#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012E4D0
 * Original: 0x0012E4D0 - 0x0012EB95 (1733 bytes, 403 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0012E4D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    xmm0.f[0] = MEMF(0x3B1D08); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    /* comiss xmm0.f[0], MEMF(edi + 0x17C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(edi + 0x17C))) goto loc_0012EB8E; /* ja: above (unsigned >) */

loc_0012E4F6:
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 0xAC0);
    if (TEST_NZ(ecx, ecx)) goto loc_0012E518; /* jne: not equal / not zero */

loc_0012E503:
    ecx = MEM32(edi + 0x17C);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0012C530(); /* call 0x0012C530 */

loc_0012E511:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012E518:
    xmm0.f[0] = MEMF(edi + 0x17C); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm4.f[0])) goto loc_0012EB7A; /* jbe: below or equal (unsigned <=) */

loc_0012E52C:
    esi = edi;
    PUSH32(esp, 0); sub_0012E450(); /* call 0x0012E450 */

loc_0012E533:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012E55F; /* je: equal / zero */

loc_0012E537:
    xmm0.f[0] = MEMF(edi + 0x154); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x17C); /* mulss */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    PUSH32(esp, edi);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, 0); sub_001298B0(); /* call 0x001298B0 */

loc_0012E554:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0012B390(); /* call 0x0012B390 */

loc_0012E55A:
    goto loc_0012EB09;

loc_0012E55F:
    edx = MEM32(edi + 0x14);
    eax = edi + 0x178;
    PUSH32(esp, eax);
    ebx = edi + 0x185;
    PUSH32(esp, ebx);
    esi = edi + 0x184;
    PUSH32(esp, esi);
    ecx = edi + 0x140;
    PUSH32(esp, ecx);
    MEM8(edx + 0x101B) = 1;
    PUSH32(esp, 0); sub_00128A20(); /* call 0x00128A20 */

loc_0012E58A:
    edx = (uint32_t)(int32_t)SMEM8(esi);
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    esi = MEM32(edx * 4 + 0x3EBFAC);
    /* cmp esi, 4 - flags set for next jcc */
    ecx = MEM32(eax * 4 + 0x3EBFAC);
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x7C) = ecx;
    if (CMP_EQ(esi, 4)) goto loc_0012E5EF; /* je: equal / zero */

loc_0012E5AB:
    if (CMP_EQ(esi, 5)) goto loc_0012E5EF; /* je: equal / zero */

loc_0012E5B0:
    if (CMP_EQ(esi, 1)) goto loc_0012E5D0; /* je: equal / zero */

loc_0012E5B5:
    if (CMP_EQ(esi, 2)) goto loc_0012E5D0; /* je: equal / zero */

loc_0012E5BA:
    eax = 8;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    goto loc_0012E6C9;

loc_0012E5D0:
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x30) = 6;
    MEM32(esp + 0x34) = 7;
    MEM8(esp + 0x38) = 0;
    goto loc_0012E60C;

loc_0012E5EF:
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x30) = 7;
    MEM32(esp + 0x34) = 6;
    MEM8(esp + 0x38) = 1;

loc_0012E60C:
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    edx = edi;
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012E622:
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x84;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012E633:
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(edi + 0x18);
    ecx = ecx << 6;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = ecx + ebx + 0xA0;
    ecx = esp + 0x40;
    eax = esi;
    eax = eax << 6;
    PUSH32(esp, ecx);
    eax = eax + ebx + 0xA0;
    ecx = esp + 0x88;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_0012D280(); /* call 0x0012D280 */

loc_0012E66A:
    eax = MEM32(esi * 4 + 0x3EBF8C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    eax = eax << 6;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    eax = eax + ebx + 0xA0;
    ecx = esp + 0x88;
    PUSH32(esp, 0); sub_0012D280(); /* call 0x0012D280 */

loc_0012E695:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0012E6C9:
    ebx = edi;
    PUSH32(esp, 0); sub_0012D640(); /* call 0x0012D640 */

loc_0012E6D0:
    SET_LO8(eax, MEM8(edi + 0x46));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012EA5A; /* je: equal / zero */

loc_0012E6DB:
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(ebx, 8)) goto loc_0012EA80; /* je: equal / zero */

loc_0012E6E8:
    eax = MEM32(edi + 0x14);
    edx = MEM32(esi * 4 + 0x3EBF8C);
    ecx = esi;
    ecx = ecx << 6;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax + 0x730), 16); /* movaps */
    edx = edx << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + eax + 0x730), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x20;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    ebx = ebx << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + eax + 0x730), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    eax = esp + 0x40;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_0012E753:
    eax = MEM32(esp + 0x18);
    /* test eax, eax - flags set for next jcc */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0012E7A3; /* jne: not equal / not zero */

loc_0012E77E:
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_0012E78F:
    PUSH32(esp, eax);
    eax = esp + 0x84;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012E7A0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_0012E7A3:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    ecx = esp + 0x50;
    eax = esp + 0x40;
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_0012E7D3:
    eax = MEM32(esp + 0x18);
    /* test eax, eax - flags set for next jcc */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0012E7F1; /* jne: not equal / not zero */

loc_0012E7E4:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */

loc_0012E7F1:
    xmm3.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] >= xmm3.f[0])) goto loc_0012EA5A; /* jae: above or equal (unsigned >=) */

loc_0012E800:
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm0.f[0])) goto loc_0012EA5A; /* ja: above (unsigned >) */

loc_0012E846:
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x20)); /* sqrtss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esi * 4 + 0x3EBF8C);
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + eax + 0x730), 16); /* movaps */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    ecx = ecx << 6;
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + eax + 0x730), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm1.f[0] = MEMF(edx); /* movss */
    eax = esp + 0x50;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, eax);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0xA4;
    ecx = esp + 0x94;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_0012E911:
    eax = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + eax + 0x730), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    ecx = esp + 0xF0;
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x84;
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012E946:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    eax = esp + 0xAC;
    memcpy((void *)XBOX_PTR(esp + 0xEC), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012E98E:
    esp = esp + 0xC;
    PUSH32(esp, eax);
    eax = esp + 0x94;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012E9A2:
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012E9AB:
    edx = MEM32(edi + 0x14);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = ebx + edx + 0x720;
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012E9C6:
    if (CMP_NE(MEM32(esp + 0x18), 3)) goto loc_0012EA5A; /* jne: not equal / not zero */

loc_0012E9D1:
    esi = MEM32(esp + 0x30);
    ecx = MEM32(edi + 0x14);
    eax = esp + 0x60;
    esi = esi << 6;
    PUSH32(esp, eax);
    ecx = esi + ecx + 0x720;
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012E9F3:
    eax = MEM32(edi + 0x14);
    xmm0.f[0] = MEMF(esi + eax + 0x738); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x7F8); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012EA61; /* jbe: below or equal (unsigned <=) */

loc_0012EA10:
    edx = MEM32(edi + 0x18);
    xmm1.f[0] = MEMF(esp + 0x64); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + edx + 0xA4); /* addss */
    MEMF(esi + eax + 0x734) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(edi + 0x18);
    xmm1.f[0] = MEMF(esp + 0x64); /* movss */
    edx = MEM32(edi + 0x14);
    eax = eax << 6;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + ecx + 0xA4); /* addss */
    MEMF(eax + edx + 0x734) = xmm1.f[0]; /* movss */
    goto loc_0012EA61;

loc_0012EA5A:
    if (CMP_EQ(MEM32(esp + 0x18), 8)) goto loc_0012EA80; /* je: equal / zero */

loc_0012EA61:
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EA6A:
    esi = MEM32(esp + 0x30);
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EA73:
    esi = MEM32(esp + 0x34);
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EA7C:
    esi = MEM32(esp + 0x2C);

loc_0012EA80:
    if (CMP_EQ(esi, 4)) goto loc_0012EA94; /* je: equal / zero */

loc_0012EA85:
    if (CMP_EQ(esi, 5)) goto loc_0012EA94; /* je: equal / zero */

loc_0012EA8A:
    if (CMP_EQ(esi, 1)) goto loc_0012EA94; /* je: equal / zero */

loc_0012EA8F:
    if (CMP_NE(esi, 2)) goto loc_0012EAAF; /* jne: not equal / not zero */

loc_0012EA94:
    ebx = edi;
    PUSH32(esp, 0); sub_0012E3A0(); /* call 0x0012E3A0 */

loc_0012EA9B:
    eax = MEM32(esp + 0x2C);
    esi = MEM32(eax * 4 + 0x3EBF8C);
    PUSH32(esp, 0); sub_0012E3A0(); /* call 0x0012E3A0 */

loc_0012EAAB:
    esi = MEM32(esp + 0x2C);

loc_0012EAAF:
    if (CMP_EQ(MEM32(esp + 0x18), 8)) goto loc_0012EAC2; /* je: equal / zero */

loc_0012EAB6:
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0012CEF0(); /* call 0x0012CEF0 */

loc_0012EAC2:
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EAC7:
    ebx = MEM32(esp + 0x7C);
    esi = ebx;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EAD2:
    edx = MEM32(esp + 0x2C);
    esi = MEM32(edx * 4 + 0x3EBF8C);
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EAE2:
    esi = MEM32(ebx * 4 + 0x3EBF8C);
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012EAEE:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0012B390(); /* call 0x0012B390 */

loc_0012EAF4:
    eax = MEM32(edi + 0x180);
    ecx = MEM32(edi + 0x17C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0012BEB0(); /* call 0x0012BEB0 */

loc_0012EB09:
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + 0x40);
    ecx = MEM32(edx + 0x1074);
    ecx = ecx >> 1;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0012EB7A; /* je: equal / zero */

loc_0012EB1C:
    edx = MEM32(edi + 0x14);
    edx = edx + 0x500;
    MEM8(edi + 0x45) = 1;
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A8120);
    ebx = ebx + 0x1060;
    PUSH32(esp, 0); sub_00156AB0(); /* call 0x00156AB0 */

loc_0012EB3D:
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(edi + 0x1C);
    ecx = ecx + 0x1060;
    PUSH32(esp, ecx);
    edx = edx + 0x220;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00122C20(); /* call 0x00122C20 */

loc_0012EB59:
    eax = MEM32(edi + 0x1C);
    eax = eax + 0x220;
    PUSH32(esp, 0); sub_00157190(); /* call 0x00157190 */

loc_0012EB66:
    esi = MEM32(edi + 0x1C);
    PUSH32(esp, 0x5A8120);
    esi = esi + 0x220;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001314D0(); /* call 0x001314D0 */

loc_0012EB7A:
    esi = edi;
    PUSH32(esp, 0); sub_0012C5F0(); /* call 0x0012C5F0 */

loc_0012EB81:
    eax = edi;
    PUSH32(esp, 0); sub_0012C860(); /* call 0x0012C860 */

loc_0012EB88:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0012EBA0(); /* call 0x0012EBA0 */

loc_0012EB8E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
