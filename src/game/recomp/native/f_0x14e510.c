#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014E510
 * Original: 0x0014E510 - 0x0014E779 (617 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E510(void)
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

loc_0014E510:
    esp = esp - 0x60;
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    eax = ecx + ecx * 2 + 0x33;
    xmm2.f[0] = MEMF(esi + eax * 8); /* movss */
    eax = ecx + ecx * 2;
    xmm3.f[0] = MEMF(esi + eax * 8 + 0x19C); /* movss */
    eax = esi + eax * 8;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x1A0); /* movss */
    edx = 0; /* xor self */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x1A4); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x190);
    eax = MEM32(eax + 0x194);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x74); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    MEM8(esp + 0x64) = LO8(edx);
    MEM8(esp + 0x65) = LO8(edx);
    MEM8(esp + 0x66) = LO8(edx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    if ((xmm2.f[0] > xmm1.f[0])) goto loc_0014E771; /* ja: above (unsigned >) */

loc_0014E609:
    if (CMP_NE(MEM8(ecx + esi + 0x514), LO8(edx))) goto loc_0014E771; /* jne: not equal / not zero */

loc_0014E616:
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    MEM8(ecx + esi + 0x514) = 4;
    MEMF(esp + 0x74) = xmm4.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x74) ? xmm0.f[0] : MEMF(esp + 0x74)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esi + 0x520);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esi + 0x524);
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    eax = eax << 0x10;
    edi = edi + ecx;
    eax = eax + edi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0x520) = eax;
    eax = eax + ecx;
    ecx = MEM32(esi + 0x520);
    /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(esi + 0x520)); /* fild */
    MEM32(esi + 0x524) = eax;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0014E6A8; /* jge: greater or equal (signed >=) */

loc_0014E6A2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014E6A8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esp + 0x70));
    /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_0014E6DA; /* je: equal / zero */

loc_0014E6C6:
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_0014E6DA:
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ebx = esp + 0x20;
    eax = 0x40B7F4;
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_0014E6F1:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0014E771; /* je: equal / zero */

loc_0014E6FA:
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014E70D; /* jge: greater or equal (signed >=) */

loc_0014E707:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014E70D:
    PUSH32(esp, 0x3DCCCCCD);
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014E71D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    edi = esp + 0x20;
    esi = 0x40B844;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(esp + 0x64) = 3;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014E746:
    if (TEST_Z(eax, eax)) goto loc_0014E771; /* je: equal / zero */

loc_0014E74A:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    esi = eax;
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014E771:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
