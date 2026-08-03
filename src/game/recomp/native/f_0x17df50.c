#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DF50
 * Original: 0x0017DF50 - 0x0017E024 (212 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DF50(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0017DF50:
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(eax + 0x4AF));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0017DF7C; /* jle: less or equal (signed <=) */

loc_0017DF62:
    esi = eax + 0x18;

loc_0017DF65:
    if (CMP_EQ(MEM32(esi), edi)) goto loc_0017DF77; /* je: equal / zero */

loc_0017DF69:
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, edx)) goto loc_0017DF65; /* jl: less (signed <) */

loc_0017DF71:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017DF77:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0017DF82; /* jne: not equal / not zero */

loc_0017DF7C:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017DF82:
    edx = MEM32(edi + 0xCC4);
    xmm0.f[0] = MEMF(edx + 0x370); /* movss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DFA0; /* jbe: below or equal (unsigned <=) */

loc_0017DF9D:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0017DFA0:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A3494); /* mulss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0017DFB8; /* jbe: below or equal (unsigned <=) */

loc_0017DFB5:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0017DFB8:
    xmm1.f[0] = (float)(int32_t)MEM32(eax + ecx * 4 + 0x120); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm1.f[0]; /* cvttss2si */
    if (CMP_LE(esi, 0x186A0)) goto loc_0017DFD6; /* jle: less or equal (signed <=) */

loc_0017DFD1:
    esi = 0x186A0;

loc_0017DFD6:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    ecx = ecx << 0x10;
    edi = edi + edx;
    ecx = ecx + edi;
    MEM32(eax + 0x10) = ecx;
    ecx = ecx + edx;
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(eax + 0x10);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0017E005; /* jge: greater or equal (signed >=) */

loc_0017DFFF:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0017E005:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0017E01C:
    esi = esi - eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
