#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014F690
 * Original: 0x0014F690 - 0x0014FC27 (1431 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F690:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    esp = esp - 0x50;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    xmm1.f[0] = MEMF(ebp + 0x700); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, edi);
    edi = eax;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014FC1F; /* ja: above (unsigned >) */

loc_0014F6B2:
    SET_LO8(eax, MEM8(ebp + 0x8C7));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014FC1F; /* jne: not equal / not zero */

loc_0014F6C0:
    SET_LO8(eax, MEM8(ebp + 0x8DB));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F6E4; /* je: equal / zero */

loc_0014F6CB:
    SET_LO8(eax, MEM8(ebp + 0x8E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014F6E4; /* jne: not equal / not zero */

loc_0014F6D5:
    eax = edi;
    ebx = ebp;
    PUSH32(esp, 0); sub_00150D40(); /* call 0x00150D40 */

loc_0014F6DE:
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */

loc_0014F6E4:
    xmm3.f[0] = MEMF(ebp + 0x704); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x700); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebp + 0x700); /* subss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    PUSH32(esp, esi);
    MEM8(ebp + 0x8C7) = 0x14;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x64) ? xmm0.f[0] : MEMF(esp + 0x64)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x68) ? xmm0.f[0] : MEMF(esp + 0x68)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = MEMF(ebp + 0x70C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x708); /* subss */
    xmm4.f[0] = MEMF(ebp + 0x714); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebp + 0x710); /* subss */
    SET_LO8(eax, MEM8(ebp + 0x8DF));
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x708); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ebp + 0x710); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    esi = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x68) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x30) = esi;
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0x5D) = 0;
    MEM8(esp + 0x5E) = 0;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F826; /* je: equal / zero */

loc_0014F81E:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */

loc_0014F826:
    eax = MEM32(ebp + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CB70;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014F83F:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = ebp;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014F84F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014F86A; /* jge: greater or equal (signed >=) */

loc_0014F864:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F86A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x5C) = 3;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014F881:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F8EC; /* je: equal / zero */

loc_0014F885:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(ecx, esi)) goto loc_0014FC1D; /* jle: less or equal (signed <=) */

loc_0014F895:
    ebx = MEM32(0x3EC414);
    goto loc_0014F8A0;

    /* nop */

loc_0014F8A0:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014F8B3; /* jne: not equal / not zero */

loc_0014F8A4:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014F8AF:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F8B5; /* je: equal / zero */

loc_0014F8B3:
    SET_LO8(eax, 1);

loc_0014F8B5:
    ecx = MEM32(0x73A1C0);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_0014F8A0; /* jl: less (signed <) */

loc_0014F8C0:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014FC1D; /* je: equal / zero */

loc_0014F8C8:
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_0014F8FA;

loc_0014F8EC:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_0014F8FA:
    edi = esp + 0x18;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014F908:
    esi = eax;
    /* test esi, esi - flags set for next jcc */
    SET_LO8(ebx, 0xFF);
    if (TEST_Z(esi, esi)) goto loc_0014F947; /* je: equal / zero */

loc_0014F910:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E9EB852);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014F935:
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0x87) = LO8(ebx);
    edx = MEM32(esi + 0xC);
    MEM8(edx + 0x84) = LO8(ebx);

loc_0014F947:
    SET_LO8(eax, MEM8(ebp + 0x8C2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014FC1D; /* jne: not equal / not zero */

loc_0014F955:
    eax = MEM32(esp + 0x34);
    MEM8(ebp + 0x8C2) = LO8(ebx);
    ecx = MEM32(ebp + 0x524);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(ebp + 0x520);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebp + 0x520) = eax;
    fp_push((double)SMEM32(ebp + 0x520)); /* fild */
    eax = eax + ecx;
    MEM32(ebp + 0x524) = eax;
    eax = MEM32(ebp + 0x520);
    if (CMP_GE(eax & eax, 0)) goto loc_0014F99F; /* jge: greater or equal (signed >=) */

loc_0014F999:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F99F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 0x520);
    ecx = MEM32(ebp + 0x524);
    edx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0x520) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x524) = eax;
    eax = MEM32(ebp + 0x520);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x520)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014F9FB; /* jge: greater or equal (signed >=) */

loc_0014F9F5:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F9FB:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(ebp + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x39CB70;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014FA2E:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3E4CCCCD);
    eax = ebp;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014FA3E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0x3E4CCCCD);
    eax = ebp;
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014FA52:
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0014FA69; /* jge: greater or equal (signed >=) */

loc_0014FA63:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014FA69:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    edi = esp + 0x18;
    esi = 0x40B844;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014FA83:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0014FAC0; /* je: equal / zero */

loc_0014FA89:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E9EB852);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014FAAE:
    edx = MEM32(esi + 0xC);
    MEM8(edx + 0x87) = LO8(ebx);
    eax = MEM32(esi + 0xC);
    MEM8(eax + 0x84) = LO8(ebx);

loc_0014FAC0:
    eax = MEM32(ebp + 0x520);
    ecx = MEM32(ebp + 0x524);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebp + 0x520) = eax;
    fp_push((double)SMEM32(ebp + 0x520)); /* fild */
    eax = eax + ecx;
    MEM32(ebp + 0x524) = eax;
    eax = MEM32(ebp + 0x520);
    if (CMP_GE(eax & eax, 0)) goto loc_0014FAFC; /* jge: greater or equal (signed >=) */

loc_0014FAF6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014FAFC:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 0x520);
    ecx = MEM32(ebp + 0x524);
    edx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0x520) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x524) = eax;
    eax = MEM32(ebp + 0x520);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x520)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014FB58; /* jge: greater or equal (signed >=) */

loc_0014FB52:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014FB58:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(ebp + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x39CB70;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014FB8B:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3E4CCCCD);
    eax = ebp;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014FB9B:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0x3E4CCCCD);
    eax = ebp;
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014FBAF:
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0014FBC6; /* jge: greater or equal (signed >=) */

loc_0014FBC0:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014FBC6:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    edi = esp + 0x18;
    esi = 0x40B844;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014FBE0:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0014FC1D; /* je: equal / zero */

loc_0014FBE6:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E9EB852);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014FC0B:
    edx = MEM32(esi + 0xC);
    MEM8(edx + 0x87) = LO8(ebx);
    eax = MEM32(esi + 0xC);
    MEM8(eax + 0x84) = LO8(ebx);

loc_0014FC1D:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0014FC1F:
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
