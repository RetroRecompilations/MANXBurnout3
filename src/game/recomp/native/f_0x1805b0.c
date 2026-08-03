#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001805B0
 * Original: 0x001805B0 - 0x0018064A (154 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001805B0(void)
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

loc_001805B0:
    eax = ZX8(MEM8(esi));
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16C4); /* mulss */
    esp = esp - 0xC;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001805FD; /* jbe: below or equal (unsigned <=) */

loc_001805C7:
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1840); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    goto loc_00180631;

loc_001805FD:
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1840); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */

loc_00180631:
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00180644:
    MEM8(esi) = LO8(eax);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
