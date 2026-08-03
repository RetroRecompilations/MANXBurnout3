#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014EB00
 * Original: 0x0014EB00 - 0x0014ECAB (427 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB00(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0014EB00:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014ECA6; /* jne: not equal / not zero */

loc_0014EB14:
    xmm1.f[0] = MEMF(esi + 0x5E0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014ECA6; /* ja: above (unsigned >) */

loc_0014EB25:
    SET_LO8(eax, MEM8(esi + 0x8C3));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014ECA6; /* jne: not equal / not zero */

loc_0014EB33:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5E0); /* subss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x5E4); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x5E0); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM8(esi + 0x8C3) = 4;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 0x5F4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esp + 0x14;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0014EBAE:
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = MEM32(esi + 0x880);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5EC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5E8); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5E8); /* addss */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CBB0;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014EC0B:
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014EC1B:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014EC36; /* jge: greater or equal (signed >=) */

loc_0014EC30:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014EC36:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x58) = 3;
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014EC4D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014EC88; /* je: equal / zero */

loc_0014EC51:
    xmm0.f[0] = MEMF(0x395C04); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    PUSH32(esp, edi);
    edi = esp + 0x18;
    esi = 0x40B844;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014EC82:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

loc_0014EC88:
    xmm0.f[0] = MEMF(0x3B175C); /* movss */
    PUSH32(esp, edi);
    edi = esp + 0x18;
    esi = 0x40B844;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014ECA5:
    POP32(esp, edi);

loc_0014ECA6:
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
