#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00148820
 * Original: 0x00148820 - 0x001489AA (394 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148820(void)
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

loc_00148820:
    esp = esp - 0x58;
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0xB0); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0xB4); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0xB8); /* movss */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    eax = MEM32(esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    xmm0.f[0] = MEMF(eax + 0xC4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C4); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xF8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm1.f[0] = MEMF(0x3A69B4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0014892F; /* jbe: below or equal (unsigned <=) */

loc_00148929:
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */

loc_0014892F:
    xmm0.f[0] = MEMF(esi + 0x108); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00148956; /* jbe: below or equal (unsigned <=) */

loc_00148950:
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */

loc_00148956:
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014896F; /* jge: greater or equal (signed >=) */

loc_00148969:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014896F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00148981:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00148993; /* je: equal / zero */

loc_00148985:
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */

loc_00148993:
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, edi);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001489A3:
    POP32(esp, edi);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
