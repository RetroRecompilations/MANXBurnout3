#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010E580
 * Original: 0x0010E580 - 0x0010E60C (140 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E580(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010E580:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010E58C:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + esi + 0x138) = xmm0.f[0]; /* movss */
    eax = MEM32(0x731F9C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = eax + eax * 2;
    eax = esi + ecx * 4 + 0x278;
    MEM32(eax + 4) = 0;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 9) = 0;
    MEM8(eax + 0xA) = 1;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    ecx = ecx << 0x10;
    edi = edi + edx;
    ecx = ecx + edi;
    MEM32(esi) = ecx;
    fp_push((double)SMEM32(esi)); /* fild */
    ecx = ecx + edx;
    edx = MEM32(esi);
    /* test edx, edx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_GE(edx & edx, 0)) goto loc_0010E5EB; /* jge: greater or equal (signed >=) */

loc_0010E5E5:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010E5EB:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    fp_push(MEMF(0x3B1684)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010E606; /* jbe: below or equal (unsigned <=) */

loc_0010E600:
    MEM8(eax + 8) = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010E606:
    MEM8(eax + 8) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
