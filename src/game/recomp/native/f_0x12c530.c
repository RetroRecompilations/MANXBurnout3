#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012C530
 * Original: 0x0012C530 - 0x0012C5F0 (192 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C530(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012C530:
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    ecx = ecx << 0x10;
    esi = esi + edx;
    ecx = ecx + esi;
    MEM32(eax) = ecx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = ecx + edx;
    edx = MEM32(eax);
    /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax + 0x14);
    if (CMP_GE(edx & edx, 0)) goto loc_0012C55B; /* jge: greater or equal (signed >=) */

loc_0012C555:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012C55B:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx + 0x1010) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_0012C5C4; /* je: equal / zero */

loc_0012C587:
    xmm1.f[0] = MEMF(0x5A82A4); /* movss */
    xmm0.f[0] = MEMF(0x5A8284); /* movss */

loc_0012C597:
    eax = MEM32(eax + 0x14);
    xmm2.f[0] = MEMF(eax + 0x1010); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0012C5CE; /* jbe: below or equal (unsigned <=) */

loc_0012C5A7:
    SET_LO8(edx, MEM8(eax + 0x1014));
    SET_LO8(ecx, 2);
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0012C5CE; /* je: equal / zero */

loc_0012C5B3:
    MEM8(eax + 0x1014) = LO8(ecx);
    MEM8(eax + 0x1015) = MEM8(eax + 0x1015) | 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0012C5C4:
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    goto loc_0012C597;

loc_0012C5CE:
    xmm0.f[0] = MEMF(eax + 0x1010); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0012C5EC; /* jbe: below or equal (unsigned <=) */

loc_0012C5DB:
    SET_LO8(ecx, MEM8(eax + 0x1014));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012C5EC; /* jne: not equal / not zero */

loc_0012C5E5:
    MEM8(eax + 0x1014) = 1;

loc_0012C5EC:
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
