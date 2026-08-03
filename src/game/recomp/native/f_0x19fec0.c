#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019FEC0
 * Original: 0x0019FEC0 - 0x0019FF7A (186 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FEC0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0019FEC0:
    xmm0.f[0] = MEMF(0x3B1720); /* movss */
    esp = esp - 0x10;
    /* comiss xmm0.f[0], MEMF(eax + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(eax + 0x1C))) goto loc_0019FF71; /* ja: above (unsigned >) */

loc_0019FED5:
    xmm0.f[0] = MEMF(eax + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69C4) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3A69C4))) goto loc_0019FF71; /* ja: above (unsigned >) */

loc_0019FEE7:
    ecx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = MEM32(0x649B28);
    xmm0.f[0] = MEMF(0x3A5A44); /* movss */
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x649B2C);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A5A08); /* movss */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x649B28) = eax;
    MEM32(0x649B2C) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_GE(eax & eax, 0)) goto loc_0019FF3A; /* jge: greater or equal (signed >=) */

loc_0019FF34:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0019FF3A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0019FF71:
    xmm0.f[0] = MEMF(eax + 0x1C); /* movss */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
