#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0011A020
 * Original: 0x0011A020 - 0x0011A328 (776 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0011A020:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_0011A032:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    eax = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    MEM32(esi + 0x220) = eax;
    eax = edi;
    edx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x204) = edi;
    PUSH32(esp, 0); sub_0010A440(); /* call 0x0010A440 */

loc_0011A06D:
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x5C); /* movss */
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    eax = esi + 0x570;
    MEM32(esi + 0x208) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = ebx + 0x10;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = esp + 4;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */
    ecx = eax + 0x40;
    MEM32(eax + 4) = ecx;
    ecx = eax + 0x1C;
    MEM32(eax) = ecx;
    ecx = eax + 0x100;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0x180;
    MEM32(eax + 0xC) = ecx;
    ecx = eax + 0x1A4;
    MEM32(eax + 0x10) = ecx;
    ecx = ebx;
    MEM8(esi + 0x20C) = 1;
    PUSH32(esp, 0); sub_00156510(); /* call 0x00156510 */

loc_0011A137:
    xmm0.f[0] = MEMF(0x3A2928); /* movss */
    xmm1.f[0] = MEMF(esi + 0x1D0); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x1E0); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x1D8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1E8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A292C); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esi;
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00109BB0(); /* call 0x00109BB0 */

loc_0011A19E:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7F34); /* addss */
    eax = esi + 0x230;
    MEMF(esi + 0x224) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(esi + 0x200) = eax;
    edx = eax + 0x10;
    ecx = eax + 0x310;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(0x64ACE8);
    edx = (uint32_t)(int32_t)SMEM16(0x64ACEA);
    ecx = MEM32(0x64ACEC);
    eax = eax << 0x10;
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(0x64ACE8) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0011A20F; /* jge: greater or equal (signed >=) */

loc_0011A209:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011A20F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0011A248; /* jge: greater or equal (signed >=) */

loc_0011A242:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011A248:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0011A281; /* jge: greater or equal (signed >=) */

loc_0011A27B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011A281:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    MEM32(0x64ACEC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0011A2C0; /* jge: greater or equal (signed >=) */

loc_0011A2BA:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011A2C0:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    eax = esp + 0xC;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_0011A2F8:
    xmm0.f[0] = MEMF(esi + 0x1D4); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x1E4); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
