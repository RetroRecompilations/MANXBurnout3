#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00112E70
 * Original: 0x00112E70 - 0x001135DD (1901 bytes, 409 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00112E70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2B4;
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x4C) = ecx;
    ecx = edi + 0xC;
    MEM32(esp + 0x9C) = ecx;
    SET_LO8(ecx, MEM8(eax));
    /* cmp LO8(ecx), 2 - flags set for next jcc */
    MEM32(esp + 0x2C) = edi;
    MEM8(esp + 0x1B) = 0;
    MEM32(esp + 0x64) = edx;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_00112EC4; /* je: equal / zero */

loc_00112EBB:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00112EC4; /* je: equal / zero */

loc_00112EBF:
    if (CMP_NE(LO8(ecx), 1)) goto loc_00112ED1; /* jne: not equal / not zero */

loc_00112EC4:
    if (TEST_NZ(MEM8(ebx + 0x1353), 2)) goto loc_001135D4; /* jne: not equal / not zero */

loc_00112ED1:
    SET_LO8(ecx, MEM8(ebx + 0x210));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00112F13; /* jne: not equal / not zero */

loc_00112EDB:
    eax = MEM32(eax + 4);
    ecx = MEM32(edi + 4);
    xmm0.f[0] = MEMF(eax + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    MEM8(esp + 0x1B) = 1;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1688) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3B1688))) goto loc_001135D4; /* ja: above (unsigned >) */

loc_00112F13:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esi + 0x28);
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm0.b, 16); /* movaps */
    edx = ebx + 0x220;
    MEM32(esp + 0xB0) = edx;
    eax = MEM32(ecx + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1F0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x200), xmm0.b, 16); /* movaps */
    eax = MEM32(ecx + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x210), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x220), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x230), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x210;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x244), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0011300A:
    edx = MEM32(esi + 0x28);
    PUSH32(esp, 0); sub_0010FB70(); /* call 0x0010FB70 */

loc_00113012:
    MEM32(esp + 0x1A0) = eax;
    eax = esp + 0xB0;
    MEM32(esp + 0x290) = 1;
    PUSH32(esp, 0); sub_0010ABC0(); /* call 0x0010ABC0 */

loc_00113030:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011305E; /* je: equal / zero */

loc_00113034:
    ecx = edi;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0011303B:
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0011304A:
    ecx = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(ecx + eax + 0x39AE50));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(esp + 0x1A) = 1;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00113063; /* jne: not equal / not zero */

loc_0011305E:
    MEM8(esp + 0x1A) = 0;

loc_00113063:
    eax = MEM32(esi + 0x28);
    if (CMP_NE(MEM8(eax), 3)) goto loc_0011307C; /* jne: not equal / not zero */

loc_0011306B:
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(MEM8(ecx + 0x174), 8)) goto loc_0011307C; /* je: equal / zero */

loc_00113077:
    MEM8(esp + 0x1A) = 0;

loc_0011307C:
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011350D; /* je: equal / zero */

loc_00113088:
    eax = MEM32(ebx + 0x204);
    xmm0.f[0] = MEMF(ebx + 0x1E8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x1D0); /* addss */
    ecx = MEM32(edi + 4);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x38); /* addss */
    xmm0.f[0] = MEMF(ebx + 0x1D8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1D0); /* subss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x38); /* addss */
    eax = MEM32(edi + 8);
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    edi = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x38); /* addss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    esi = esp + 0x60;
    edi = esp + 0x78;
    edx = esp + 0xB0;
    ecx = esp + 0x80;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0010FCE0(); /* call 0x0010FCE0 */

loc_001131A0:
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 8);
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebx + 0x1D0); /* addss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    esp = esp + 0x10;
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] > xmm3.f[0])) goto loc_001135D4; /* ja: above (unsigned >) */

loc_001131CC:
    xmm4.f[0] = MEMF(esp + 0x68); /* movss */
    xmm5.f[0] = MEMF(esp + 0x6C); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x80);
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x84);
    MEM32(esp + 0x20) = edx;
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEM32(esp + 0x24) = eax;
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x30)); /* sqrtss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x80); /* divss */
    edi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(esp + 0x1A));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    esi = edi + 0x10;
    MEM8(edi + 0x2C) = 1;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001133E9; /* je: equal / zero */

loc_0011329A:
    if (TEST_NZ(MEM8(ebx + 0x1353), 0x10)) goto loc_001133E9; /* jne: not equal / not zero */

loc_001132A7:
    /* comiss xmm3.f[0], MEMF(ebx + 0x152C) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(ebx + 0x152C))) goto loc_001133E9; /* jbe: below or equal (unsigned <=) */

loc_001132B4:
    edx = MEM32(ebx + 0x204);
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    edx = edx + 0x20;
    eax = esp + 0xA0;
    PUSH32(esp, 0); sub_00011610(); /* call 0x00011610 */

loc_001132D1:
    PUSH32(esp, eax);
    eax = esp + 0x84;
    ecx = esp + 0x74;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001132E2:
    eax = MEM32(esp + 0x64);
    xmm0.f[0] = MEMF(eax + 0xC4); /* movss */
    edx = eax + 0x90;
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_00011610(); /* call 0x00011610 */

loc_00113300:
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0xA4;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00113311:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esi;
    ecx = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00113331:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(ebx + 0x1F0); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3EBE74); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    eax = 0x4A71A0;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0011338B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001133B2; /* je: equal / zero */

loc_0011338F:
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00113398:
    xmm1.f[0] = MEMF(ebx + 0x1534); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3EBE48); /* mulss */
    goto loc_001133CB;

loc_001133B2:
    xmm1.f[0] = MEMF(ebx + 0x1534); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3EBE44); /* mulss */
    xmm0.f[0] = MEMF(esp + 0x80); /* movss */

loc_001133CB:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(esp + 0x68); /* movss */
    xmm5.f[0] = MEMF(esp + 0x6C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001133E9; /* jbe: below or equal (unsigned <=) */

loc_001133E4:
    MEM8(esp + 0x1B) = 0;

loc_001133E9:
    SET_LO8(eax, MEM8(ebx + 0x212));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113400; /* je: equal / zero */

loc_001133F3:
    if (CMP_NE(MEM8(ebx + 0x215), 3)) goto loc_0011351B; /* jne: not equal / not zero */

loc_00113400:
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113506; /* je: equal / zero */

loc_0011340C:
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 0x1D0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    edx = MEM32(ebx + 0x204);
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(edx + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3EBE40); /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x1D0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(0x3EBE70); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x1F0); /* movss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x80); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBE6C); /* mulss */
    eax = esp + 0xA0;
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001134D3:
    eax = esp + 0x70;
    PUSH32(esp, eax);
    edi = esp + 0x54;
    eax = ebx;
    PUSH32(esp, 0); sub_001205E0(); /* call 0x001205E0 */

loc_001134E3:
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x54), _icall_esp); /* indirect call */
    }

loc_001134F2:
    ecx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00113506:
    edi = MEM32(esp + 0x2C);
    esi = MEM32(ebp + 0xC);

loc_0011350D:
    SET_LO8(eax, MEM8(esp + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001135D4; /* je: equal / zero */

loc_00113519:
    goto loc_00113522;

loc_0011351B:
    edi = MEM32(esp + 0x2C);
    esi = MEM32(ebp + 0xC);

loc_00113522:
    MEM8(esi + 0x2C) = 1;
    MEM8(ebx + 0x211) = 1;
    esi = MEM32(esi + 0x24);
    edx = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    SET_LO8(eax, MEM8(esi));
    /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x4C) = edx;
    if (CMP_EQ(LO8(eax), 2)) goto loc_00113549; /* je: equal / zero */

loc_00113541:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113549; /* je: equal / zero */

loc_00113545:
    if (CMP_NE(LO8(eax), 1)) goto loc_00113589; /* jne: not equal / not zero */

loc_00113549:
    eax = MEM32(esp + 0x64);
    ecx = MEM32(ebx + 0x13F4);
    edi = MEM32(ebp + 0xC);
    MEM8(esp + 0x51) = 1;
    MEM8(esp + 0x50) = 0;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = 0;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64ACE8);
    esi = esp + 0x5C;
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_00113583:
    edi = MEM32(esp + 0x2C);
    goto loc_0011359C;

loc_00113589:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x218);
    ecx = ebx;
    esi = 0x64ACE8;
    PUSH32(esp, 0); sub_0010E580(); /* call 0x0010E580 */

loc_0011359C:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x218);
    ecx = MEM32(esp + 0x4C);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_001135BA:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x9C);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(eax + 0x211) = 1;
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_001135D4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
