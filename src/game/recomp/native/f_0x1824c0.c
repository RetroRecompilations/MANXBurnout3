#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001824C0
 * Original: 0x001824C0 - 0x0018291F (1119 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001824C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001824C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ebx + 0x3A3648;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = eax << 8;
    /* test esi, esi - flags set for next jcc */
    ecx = eax + edi + 0x90;
    MEM32(esp + 0x6C) = ecx;
    if (TEST_Z(esi, esi)) goto loc_00182504; /* je: equal / zero */

loc_001824F3:
    edx = ZX8(MEM8(esi));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1B40); /* mulss */
    goto loc_0018250C;

loc_00182504:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */

loc_0018250C:
    eax = MEM32(edi + 0x64558);
    ecx = MEM32(edi + 0x6455C);
    edi = edi + 0x64558;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(edi) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    eax = eax + ecx;
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    if (CMP_GE(eax & eax, 0)) goto loc_0018253F; /* jge: greater or equal (signed >=) */

loc_00182539:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018253F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(ebp + 0x28));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018259F; /* je: equal / zero */

loc_0018255E:
    xmm2.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = MEMF(ebx + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(ebx + 0x34); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x1C) = eax;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x14) = eax;
    goto loc_001825C0;

loc_0018259F:
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = 0;

loc_001825C0:
    /* test esi, esi - flags set for next jcc */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001825E3; /* je: equal / zero */

loc_001825D2:
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001825E1:
    MEM8(esi) = LO8(eax);

loc_001825E3:
    xmm0.f[0] = MEMF(ebx + 0x10); /* movss */
    edx = MEM32(ebp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x14); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x10); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    eax = esp + 0x50;
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = 0x80000000u;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    esi = MEM32(ebp + 0x1C);
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(ebx + 0x28); /* movss */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(ebp + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(ebx + 0x2C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x18); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x24); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x18); /* subss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + 0x20); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ebx = edx + eax;
    /* test ebx, ebx - flags set for next jcc */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    if (TEST_Z(ebx, ebx)) goto loc_00182916; /* je: equal / zero */

loc_00182751:
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(edi) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    eax = eax + ecx;
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    ebx--;
    if (CMP_GE(eax & eax, 0)) goto loc_00182778; /* jge: greater or equal (signed >=) */

loc_00182772:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182778:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x3A7ED8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0018290E; /* jbe: below or equal (unsigned <=) */

loc_0018279E:
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = edi;
    eax = esp + 0xC4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001827B4:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 0x10);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_0018283E; /* jbe: below or equal (unsigned <=) */

loc_001827F0:
    ecx = esp + 0x20;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x68) = 0x80000000u;
    esi = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    esi = MEM32(ebp + 0x1C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */

loc_0018283E:
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(edi) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    eax = eax + ecx;
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    if (CMP_GE(eax & eax, 0)) goto loc_00182864; /* jge: greater or equal (signed >=) */

loc_0018285E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182864:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xF0), 16); /* movaps */
    ecx = esp + 0x10;
    edx = esp + 0xA0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    ecx = edi;
    eax = esp + 0xD4;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_001828AB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x24);
    /* cmp ebx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebx, edx)) ? 1 : 0); /* setge */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x40);
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x64578);
    eax = MEM32(esp + 0x88);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00035C00(); /* call 0x00035C00 */

loc_0018290E:
    if (TEST_NZ(ebx, ebx)) goto loc_00182751; /* jne: not equal / not zero */

loc_00182916:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
