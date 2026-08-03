#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012BEB0
 * Original: 0x0012BEB0 - 0x0012C3E9 (1337 bytes, 342 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012BEB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x184);
    ecx = esi;
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012BED1:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x185);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012BEE4:
    SET_LO8(eax, MEM8(esi + 0x184));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012C114; /* je: equal / zero */

loc_0012BEF2:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0012C114; /* je: equal / zero */

loc_0012BEFA:
    SET_LO8(eax, MEM8(esi + 0x185));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012BF08; /* je: equal / zero */

loc_0012BF04:
    if (CMP_NE(LO8(eax), 1)) goto loc_0012BF71; /* jne: not equal / not zero */

loc_0012BF08:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    esp = esp - 8;
    ecx = SX8(LO8(eax));
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012AD10(); /* call 0x0012AD10 */

loc_0012BF3D:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    PUSH32(esp, 1);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012A210(); /* call 0x0012A210 */

loc_0012BF71:
    xmm3.f[0] = MEMF(0x3B168C); /* movss */

loc_0012BF79:
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x40);
    SET_LO8(eax, MEM8(edx + 0xD));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0012C019; /* jle: less or equal (signed <=) */

loc_0012BF8C:
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    edx = 0; /* xor self */
    ecx = 0xF78;
    goto loc_0012BFA0;

    /* nop */

loc_0012BFA0:
    eax = MEM32(esi + 0x14);
    /* comiss xmm3.f[0], MEMF(ecx + eax) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(ecx + eax))) goto loc_0012C004; /* jbe: below or equal (unsigned <=) */

loc_0012BFA9:
    ebx = MEM32(esi + 0x10);
    ebx = MEM32(ebx + 0x40);
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + edx + 0xBB0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + eax + 0x30), 16); /* movaps */
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
    ebx = esp + 0x18;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0012C004; /* jbe: below or equal (unsigned <=) */

loc_0012BFFF:
    MEMF(ecx + eax) = xmm3.f[0]; /* movss */

loc_0012C004:
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x40);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    edi++;
    ecx = ecx + 4;
    edx = edx + 0x40;
    if (CMP_L(edi, eax)) goto loc_0012BFA0; /* jl: less (signed <) */

loc_0012C019:
    SET_LO8(eax, MEM8(esi + 0x184));
    if (CMP_EQ(LO8(eax), 4)) goto loc_0012C24E; /* je: equal / zero */

loc_0012C027:
    if (CMP_EQ(LO8(eax), 5)) goto loc_0012C24E; /* je: equal / zero */

loc_0012C02F:
    SET_LO8(eax, MEM8(esi + 0x185));
    if (CMP_EQ(LO8(eax), 4)) goto loc_0012C041; /* je: equal / zero */

loc_0012C039:
    if (CMP_NE(LO8(eax), 5)) goto loc_0012C395; /* jne: not equal / not zero */

loc_0012C041:
    PUSH32(esp, ecx);
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 5);
    ecx = SX8(LO8(eax));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012C074:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012C09C; /* jbe: below or equal (unsigned <=) */

loc_0012C083:
    eax = MEM32(0x40FAF0);
    if (TEST_Z(eax, eax)) goto loc_0012C09C; /* je: equal / zero */

loc_0012C08C:
    ebx = MEM32(esi + 0x10);
    ebx = ebx + 0x30;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014ECB0(); /* call 0x0014ECB0 */

loc_0012C09C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x185);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012AC00(); /* call 0x0012AC00 */

loc_0012C0D5:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x185);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    goto loc_0012C360;

loc_0012C114:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    edx = SX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012C149:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012C171; /* jbe: below or equal (unsigned <=) */

loc_0012C158:
    eax = MEM32(0x40FAF0);
    if (TEST_Z(eax, eax)) goto loc_0012C171; /* je: equal / zero */

loc_0012C161:
    ebx = MEM32(esi + 0x10);
    ebx = ebx + 0x30;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014ECB0(); /* call 0x0014ECB0 */

loc_0012C171:
    ecx = MEM32(esi + 0x18);
    SET_LO8(edx, MEM8(ecx + 0xC));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0012C19B; /* jle: less or equal (signed <=) */

loc_0012C17D:
    ecx = ecx + 0xAC4;

loc_0012C183:
    if (CMP_EQ(MEM32(ecx), 4)) goto loc_0012C247; /* je: equal / zero */

loc_0012C18C:
    edx = MEM32(esi + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_0012C183; /* jl: less (signed <) */

loc_0012C19B:
    edi = edi | 0xFFFFFFFFu;

loc_0012C19E:
    eax = MEM32(esi + 0x14);
    SET_LO8(eax, MEM8(edi + eax + 0x4B2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012C1B4; /* je: equal / zero */

loc_0012C1AC:
    if (CMP_NE(LO8(eax), 1)) goto loc_0012BF71; /* jne: not equal / not zero */

loc_0012C1B4:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    PUSH32(esp, 1);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012A210(); /* call 0x0012A210 */

loc_0012C1E5:
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_0012C20B; /* jge: greater or equal (signed >=) */

loc_0012C205:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012C20B:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x3A69C4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0012BF71; /* jbe: below or equal (unsigned <=) */

loc_0012C221:
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(eax + edi * 4 + 0xFC0); /* movss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + edi * 4 + 0xF90) = xmm0.f[0]; /* movss */
    goto loc_0012BF79;

loc_0012C247:
    edi = eax;
    goto loc_0012C19E;

loc_0012C24E:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 5);
    ecx = SX8(LO8(eax));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012C283:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012C2AB; /* jbe: below or equal (unsigned <=) */

loc_0012C292:
    eax = MEM32(0x40FAF0);
    if (TEST_Z(eax, eax)) goto loc_0012C2AB; /* je: equal / zero */

loc_0012C29B:
    ebx = MEM32(esi + 0x10);
    ebx = ebx + 0x30;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014ECB0(); /* call 0x0014ECB0 */

loc_0012C2AB:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x184);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012C2E4:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012C32F; /* jbe: below or equal (unsigned <=) */

loc_0012C2F3:
    edi = MEM32(esi + 0x10);
    eax = MEM32(0x40FAF0);
    edi = edi + 0x30;
    if (TEST_Z(eax, eax)) goto loc_0012C32F; /* je: equal / zero */

loc_0012C302:
    /* comiss xmm0.f[0], MEMF(0x40F808) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x40F808))) goto loc_0012C323; /* jbe: below or equal (unsigned <=) */

loc_0012C30B:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014D5F0(); /* call 0x0014D5F0 */

loc_0012C31D:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */

loc_0012C323:
    edx = edi;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014EB00(); /* call 0x0014EB00 */

loc_0012C32F:
    fp_push(MEMF(ebp + 8)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x184);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, edx);

loc_0012C360:
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012C367:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012C395; /* jbe: below or equal (unsigned <=) */

loc_0012C376:
    eax = MEM32(0x40FAF0);
    if (TEST_Z(eax, eax)) goto loc_0012C395; /* je: equal / zero */

loc_0012C37F:
    ebx = MEM32(esi + 0x10);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = 0x40F270;
    ebx = ebx + 0x30;
    PUSH32(esp, 0); sub_0014ECB0(); /* call 0x0014ECB0 */

loc_0012C395:
    SET_LO8(eax, MEM8(esi + 0x184));
    if (CMP_NE(LO8(eax), 2)) goto loc_0012C3B6; /* jne: not equal / not zero */

loc_0012C39F:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    goto loc_0012C3CF;

loc_0012C3B6:
    if (CMP_NE(LO8(eax), 3)) goto loc_0012C3E3; /* jne: not equal / not zero */

loc_0012C3BA:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);

loc_0012C3CF:
    xmm1.f[0] = MEMF(ebp + 8); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x178); /* mulss */
    eax = esi;
    PUSH32(esp, 0); sub_00129D00(); /* call 0x00129D00 */

loc_0012C3E3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
