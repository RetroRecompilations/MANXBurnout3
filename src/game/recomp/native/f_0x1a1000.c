#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A1000
 * Original: 0x001A1000 - 0x001A10D2 (210 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1000(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A1000:
    PUSH32(esp, ecx);
    eax = MEM32(0x649B28);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = eax << 0x10;
    eax = eax + esi;
    esi = MEM32(0x649B2C);
    eax = eax + esi;
    esi = esi + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    MEM32(0x649B28) = eax;
    MEM32(0x649B2C) = esi;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001A103A; /* jge: greater or equal (signed >=) */

loc_001A1034:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A103A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + edx * 4 + -4); /* cvtsi2ss */
    xmm1.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_001A1082; /* jbe: below or equal (unsigned <=) */

loc_001A106B:
    xmm1.f[0] = MEMF(ecx + 0x24); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    MEM8(edi) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001A1082:
    xmm0.f[0] = (float)(int32_t)MEM32(eax + edx * 4 + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm4.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm3.f[0])) goto loc_001A10B2; /* jbe: below or equal (unsigned <=) */

loc_001A1098:
    xmm1.f[0] = MEMF(ecx + 0x24); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    MEM8(edi) = 1;
    MEM8(ebx) = 1;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001A10B2:
    xmm0.f[0] = (float)(int32_t)MEM32(eax + edx * 4 + 0x2C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEM8(edi) = 1;
    MEM8(ebx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
