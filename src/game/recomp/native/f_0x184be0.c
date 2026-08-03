#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00184BE0
 * Original: 0x00184BE0 - 0x0018535C (1916 bytes, 432 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184BE0(void)
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

loc_00184BE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm1.f[0] = MEMF(ebx + 0x64578); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xCC4);
    /* test MEM8(eax + 0x1015), 4 - flags set for next jcc */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xFFC); /* subss */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x204);
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (TEST_Z(MEM8(eax + 0x1015), 4)) goto loc_00184D6B; /* je: equal / zero */

loc_00184C2F:
    /* comiss xmm1.f[0], MEMF(0x3B1A78) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1A78))) goto loc_00184D6B; /* jbe: below or equal (unsigned <=) */

loc_00184C3C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x49C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0xCC4);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xFF0), 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1730); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x88;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00184CE3:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x38) ? xmm0.f[0] : MEMF(esp + 0x38)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = 0x60E200;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0018AB50(); /* call 0x0018AB50 */

loc_00184D4B:
    eax = MEM32(esi + 0xCC4);
    SET_LO8(ecx, MEM8(eax + 0x1015));
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    MEM8(eax + 0x1015) = LO8(ecx);

loc_00184D6B:
    if (CMP_NE(MEM8(esi + 0x215), 1)) goto loc_00184D7E; /* jne: not equal / not zero */

loc_00184D74:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    goto loc_00184D86;

loc_00184D7E:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B181C); /* mulss */

loc_00184D86:
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((xmm1.f[0] < xmm2.f[0])) goto loc_00184DBD; /* jb: below (unsigned <) */

loc_00184DA7:
    esi = MEM32(esi + 0xCC4);
    MEM8(esi + 0x1015) = MEM8(esi + 0x1015) & 0xFD;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00184DBD:
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = esp + 0x14;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = MEM32(esi + 0xCC0);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    eax = eax + 0x5C;
    ecx = ebp + 0xC;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_00184E23:
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7547D4); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7547D0); /* addss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x7547D4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = eax + ecx;
    ebx = ebx + 0x990;
    /* test eax, eax - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x3C) = ecx;
    MEMF(0x7547D0) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00185356; /* jle: less or equal (signed <=) */

loc_00184E84:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm5.f[0] = MEMF(esp + 0x78); /* movss */
    xmm3.f[0] = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm6.f[0] (packed 4xfloat) */
    xmm6.f[0] = MEMF(esp + 0x60); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1684); /* movss */
    eax = esp + 0x14;
    xmm3.f[0] = MEMF(eax); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(esp + 0x68); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    xmm4.f[0] = MEMF(0x3B16A4); /* movss */
    ecx = esp + 0x14;
    xmm3.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm5.f[0] = MEMF(edx); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = esp + 0x14;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    eax = esp + 0x14;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm1.f[0] = MEMF(ecx); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edi = MEM32(ebp + 8);
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    eax = esp + 0x14;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1B34); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5A48); /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B16EC); /* mulss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1B30); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    esi = edi + 0x64558;
    goto loc_00185100;

    /* nop */

loc_00185100:
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_00185113:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
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
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (CMP_GE(eax & eax, 0)) goto loc_00185141; /* jge: greater or equal (signed >=) */

loc_0018513B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185141:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    edx = eax;
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    if (CMP_GE(eax & eax, 0)) goto loc_00185196; /* jge: greater or equal (signed >=) */

loc_00185190:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185196:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0xF0), 16); /* movaps */
    edx = eax;
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    /* shufps xmm0, xmm0, 0 */
    edx = edx + ecx;
    eax = eax + edx;
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    if (CMP_GE(eax & eax, 0)) goto loc_00185207; /* jge: greater or equal (signed >=) */

loc_00185201:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185207:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x130), 16); /* movaps */
    ecx = esp + 0x14;
    edx = esp + 0x38;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm2.f[0])) goto loc_00185260; /* jb: below (unsigned <) */

loc_00185258:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    goto loc_00185279;

loc_00185260:
    xmm4.f[0] = MEMF(esp + 0x4C); /* movss */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    /* comiss xmm4.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm2.f[0])) goto loc_00185279; /* jbe: below or equal (unsigned <=) */

loc_00185272:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00185279:
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x1C);
    xmm4.f[0] = MEMF(edi + 0x64578); /* movss */
    /* cmp eax, ecx - flags set for next jcc */
    ecx = ebx + 0x1C;
    if (CMP_G(eax, ecx)) goto loc_00185292; /* jg: greater (signed >) */

loc_00185290:
    ecx = ebx;

loc_00185292:
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    xmm5.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm6.f[0] = MEMF(ecx + 0x14); /* movss */
    eax = eax + eax * 2;
    eax = eax << 4;
    xmm5.f[0] = xmm5.f[0] - MEMF(eax + edx + 0xC); /* subss */
    eax = eax + edx;
    /* comiss xmm6.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm6.f[0] > xmm5.f[0])) goto loc_0018534C; /* ja: above (unsigned >) */

loc_001852BB:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x18) = xmm4.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00185349; /* jne: not equal / not zero */

loc_00185343:
    edx = MEM32(ecx + 4);
    MEM32(ecx + 8) = edx;

loc_00185349:
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;

loc_0018534C:
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    if ((MEM32(esp + 0x1C) != 0)) goto loc_00185100; /* jne: not equal / not zero */

loc_00185356:
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
