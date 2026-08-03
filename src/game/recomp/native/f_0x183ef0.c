#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00183EF0
 * Original: 0x00183EF0 - 0x00184589 (1689 bytes, 407 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00183EF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    esi = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = esp + 0x64;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00183F15:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x64;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00183F2E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(esi + 0x24);
    /* cmp MEM8(edx), 2 - flags set for next jcc */
    edi = ZX8(MEM8(esi + 0x2D));
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    if (CMP_EQ(MEM8(edx), 2)) goto loc_00183F4F; /* je: equal / zero */

loc_00183F42:
    eax = MEM32(esi + 0x28);
    /* cmp MEM8(eax), 2 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(MEM8(eax), 2)) goto loc_00183F54; /* jne: not equal / not zero */

loc_00183F4F:
    MEM8(esp + 0xF) = 1;

loc_00183F54:
    SET_LO8(eax, MEM8(ebx + 0x210));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2.f[0] = MEMF(0x3A35E4); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183F97; /* jne: not equal / not zero */

loc_00183F66:
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183F97; /* jne: not equal / not zero */

loc_00183F73:
    MEM8(esp + 0x18) = 0;

loc_00183F78:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_00183F7B:
    xmm1.f[0] = MEMF(0x3A35B8); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00183FCB; /* jb: below (unsigned <) */

loc_00183F93:
    esi = 0; /* xor self */
    goto loc_00183FE7;

loc_00183F97:
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    xmm1.f[0] = MEMF(0x3A35E0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM8(esp + 0x18) = 1;
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_00183F78; /* jae: above or equal (unsigned >=) */

loc_00183FAE:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00183FBD; /* jb: below (unsigned <) */

loc_00183FB3:
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    goto loc_00183F7B;

loc_00183FBD:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1710); /* mulss */
    goto loc_00183F7B;

loc_00183FCB:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00183FD7; /* jb: below (unsigned <) */

loc_00183FD0:
    esi = 0x18;
    goto loc_00183FE7;

loc_00183FD7:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1714); /* mulss */
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_00183FE7:
    eax = MEM32(ebx + 0xCC0);
    eax = eax + 0x5C;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_00183FF9:
    if (CMP_NE(edi, 1)) goto loc_00184034; /* jne: not equal / not zero */

loc_00183FFE:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x41400000);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 5;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00184030:
    esi = 0; /* xor self */
    goto loc_00184050;

loc_00184034:
    if (CMP_NE(edi, 2)) goto loc_00184050; /* jne: not equal / not zero */

loc_00184039:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x416190), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    esi = esi + 0xA;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */

loc_00184050:
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0xCC4);
    xmm2.f[0] = MEMF(esp + 0x34); /* movss */
    eax = MEM32(edi + 0xCC4);
    xmm1.f[0] = MEMF(ecx + 0x49C); /* movss */
    edx = MEM32(ebx + 0xCC0);
    xmm0.f[0] = MEMF(eax + 0x49C); /* movss */
    ecx = MEM32(edi + 0xCC0);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B16CC); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    if ((xmm1.f[0] > xmm2.f[0])) goto loc_001840B9; /* ja: above (unsigned >) */

loc_001840A0:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001840AD; /* jbe: below or equal (unsigned <=) */

loc_001840A5:
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_001840BF;

loc_001840AD:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */

loc_001840B9:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_001840BF:
    if (TEST_Z(esi, esi)) goto loc_001840FB; /* je: equal / zero */

loc_001840C3:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x40A8C0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_001834E0(); /* call 0x001834E0 */

loc_001840FB:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0018413C; /* jbe: below or equal (unsigned <=) */

loc_0018410A:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_0018413C:
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018416B; /* je: equal / zero */

loc_00184144:
    SET_LO8(eax, MEM8(ebx + 0x215));
    edx = esp + 0x20;
    /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edx);
    esi = esp + 0x34;
    if (CMP_EQ(LO8(eax), 1)) edi = ebx; /* cmove */
    PUSH32(esp, 0); sub_0017E7F0(); /* call 0x0017E7F0 */

loc_0018415D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edi = MEM32(ebp + 0xC);
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */

loc_0018416B:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = 0x60DFC0;
    ecx = esp + 0x74;
    PUSH32(esp, 0); sub_00188600(); /* call 0x00188600 */

loc_00184195:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x60) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(0x3B191C); /* movss */
    ecx = esp + 0x18;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(esp + 0x18))) goto loc_00184581; /* ja: above (unsigned >) */

loc_001841DB:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = esp + 0x18;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69BC); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00184260:
    eax = MEM32(ebx + 0x13F4);
    ecx = MEM32(eax + 0x1920);
    if (TEST_NZ(ecx, ecx)) goto loc_001843E6; /* jne: not equal / not zero */

loc_00184274:
    ecx = MEM32(ebx + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x27D0);
    eax = MEM32(0x4A1CB0);
    eax = eax - 0;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C846C); /* mulss */
    if ((eax == 0)) goto loc_0018439C; /* je: equal / zero */

loc_00184308:
    eax--;
    if ((eax != 0)) goto loc_001843E6; /* jne: not equal / not zero */

loc_0018430F:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001843E6; /* jne: not equal / not zero */

loc_0018431C:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001843E6; /* jne: not equal / not zero */

loc_00184329:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_001843E6; /* jne: not equal / not zero */

loc_00184336:
    eax = SX8(LO8(ecx));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001843E6; /* je: equal / zero */

loc_0018434E:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_001843E6; /* jbe: below or equal (unsigned <=) */

loc_00184363:
    xmm1.f[0] = MEMF(0x3C8470); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CB4); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001843E6; /* jbe: below or equal (unsigned <=) */

loc_00184396:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    goto loc_001843E6;

loc_0018439C:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001843E6; /* jne: not equal / not zero */

loc_001843A5:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001843E6; /* jne: not equal / not zero */

loc_001843AE:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_001843E6; /* jne: not equal / not zero */

loc_001843B7:
    eax = SX8(LO8(ecx));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001843E6; /* je: equal / zero */

loc_001843CB:
    xmm0.f[0] = MEMF(0x3C8470); /* movss */
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED68) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED68))) goto loc_001843E6; /* jbe: below or equal (unsigned <=) */

loc_001843DD:
    MEMF(eax * 4 + 0x4AED68) = xmm0.f[0]; /* movss */

loc_001843E6:
    edi = MEM32(edi + 0x13F4);
    eax = MEM32(edi + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_00184581; /* jne: not equal / not zero */

loc_001843FA:
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 0x204);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00184411:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(0x4A1CB0);
    eax = eax - 0;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(edi + 0x27D0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C846C); /* mulss */
    if ((eax == 0)) goto loc_00184537; /* je: equal / zero */

loc_0018449D:
    eax--;
    if ((eax != 0)) goto loc_00184581; /* jne: not equal / not zero */

loc_001844A4:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184581; /* jne: not equal / not zero */

loc_001844B1:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184581; /* jne: not equal / not zero */

loc_001844BE:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184581; /* jne: not equal / not zero */

loc_001844CB:
    eax = SX8(LO8(ecx));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00184581; /* je: equal / zero */

loc_001844E3:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_00184581; /* jbe: below or equal (unsigned <=) */

loc_001844F8:
    xmm1.f[0] = MEMF(0x3C8470); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CB4); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00184581; /* jbe: below or equal (unsigned <=) */

loc_0018452B:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00184537:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184581; /* jne: not equal / not zero */

loc_00184540:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184581; /* jne: not equal / not zero */

loc_00184549:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184581; /* jne: not equal / not zero */

loc_00184552:
    eax = SX8(LO8(ecx));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00184581; /* je: equal / zero */

loc_00184566:
    xmm0.f[0] = MEMF(0x3C8470); /* movss */
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED68) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED68))) goto loc_00184581; /* jbe: below or equal (unsigned <=) */

loc_00184578:
    MEMF(eax * 4 + 0x4AED68) = xmm0.f[0]; /* movss */

loc_00184581:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
