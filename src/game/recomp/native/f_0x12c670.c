#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012C670
 * Original: 0x0012C670 - 0x0012C85A (490 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C670(void)
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

loc_0012C670:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0x40);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0xC));
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_0012C73C; /* jle: less or equal (signed <=) */

loc_0012C692:
    xmm3.f[0] = MEMF(ebp + 8); /* movss */
    xmm4.f[0] = MEMF(0x3A69C4); /* movss */
    xmm5.f[0] = MEMF(0x3B1834); /* movss */
    edi = 0; /* xor self */
    edx = 0xF90;
    edi = edi;

loc_0012C6B0:
    esi = MEM32(eax + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + edi + 0x1B0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* shufps xmm6, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    esi = esp + 0xC;
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0xC))) goto loc_0012C723; /* jbe: below or equal (unsigned <=) */

loc_0012C6EA:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(eax + 0x14);
    xmm0.f[0] = MEMF(esi + edx); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    esi = esi + edx;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0012C723:
    esi = MEM32(eax + 0x10);
    esi = MEM32(esi + 0x40);
    esi = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    ecx++;
    edx = edx + 4;
    edi = edi + 0x40;
    if (CMP_L(ecx, esi)) goto loc_0012C6B0; /* jl: less (signed <) */

loc_0012C73C:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x40);
    xmm0.f[0] = MEMF(edx + 0xE94); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0xE84); /* addss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144))) goto loc_0012C851; /* jbe: below or equal (unsigned <=) */

loc_0012C76B:
    ecx = edx;
    SET_LO8(edx, MEM8(ecx + 0xD));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0012C851; /* jle: less or equal (signed <=) */

loc_0012C77A:
    MEM32(esp + 0xC) = edi;
    esi = 0xF78;

loc_0012C783:
    edx = MEM32(eax + 0x14);
    ecx = MEM32(esp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + ecx + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x18))) goto loc_0012C830; /* jbe: below or equal (unsigned <=) */

loc_0012C7BE:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    ecx = ecx << 0x10;
    ebx = ebx + edx;
    ecx = ecx + ebx;
    MEM32(eax) = ecx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = ecx + edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0012C7EA; /* jge: greater or equal (signed >=) */

loc_0012C7E4:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012C7EA:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x14);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + esi); /* addss */
    ecx = edx + esi;
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_0012C830:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x40);
    ebx = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    edi++;
    ebx = ebx + 0x40;
    esi = esi + 4;
    /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_L(edi, ecx)) goto loc_0012C783; /* jl: less (signed <) */

loc_0012C851:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
