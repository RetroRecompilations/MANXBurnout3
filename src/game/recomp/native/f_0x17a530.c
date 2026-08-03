#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017A530
 * Original: 0x0017A530 - 0x0017A5A8 (120 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A530(void)
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

loc_0017A530:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017A53A:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017A5A5; /* jne: not equal / not zero */

loc_0017A53E:
    xmm1.f[0] = MEMF(esi + 0x4C); /* movss */
    eax = MEM32(0x4D5370);
    /* test eax, eax - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0017A57D; /* je: equal / zero */

loc_0017A55D:
    ecx = MEM32(eax + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_0017A57D; /* je: equal / zero */

loc_0017A567:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xAC), _icall_esp); /* indirect call */
    }

loc_0017A56F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 4); /* movss */

loc_0017A57D:
    xmm0.f[0] = MEMF(esi + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x38); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* comiss xmm0.f[0], MEMF(esi + 0x34) - sets EFLAGS */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(esi + 0x34))) goto loc_0017A5A5; /* jbe: below or equal (unsigned <=) */

loc_0017A59F:
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x38) = ecx;

loc_0017A5A5:
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
