#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014F130
 * Original: 0x0014F130 - 0x0014F3DF (687 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F130(void)
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

loc_0014F130:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    esp = esp - 0x54;
    PUSH32(esp, edi);
    edi = eax;
    xmm1.f[0] = MEMF(edi + 0x6E8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014F3D8; /* ja: above (unsigned >) */

loc_0014F14D:
    SET_LO8(eax, MEM8(edi + 0x8C8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F3D7; /* jne: not equal / not zero */

loc_0014F15E:
    /* cmp MEM8(edi + 0x8E4), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM8(edi + 0x8E4), LO8(ebx))) goto loc_0014F182; /* je: equal / zero */

loc_0014F167:
    esi = MEM32(edi + 0x87C);
    if (CMP_EQ(esi, ebx)) goto loc_0014F182; /* je: equal / zero */

loc_0014F171:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_0014F176:
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    MEM32(edi + 0x87C) = ebx;

loc_0014F182:
    xmm3.f[0] = MEMF(edi + 0x6EC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x6E8); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 0x6E8); /* subss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEM8(edi + 0x8C8) = 0x14;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x68) ? xmm0.f[0] : MEMF(esp + 0x68)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x64);
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = MEMF(edi + 0x6F4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x6F0); /* subss */
    xmm4.f[0] = MEMF(edi + 0x6FC); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(edi + 0x6F8); /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x6F0); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(edi + 0x6F8); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    /* cmp MEM8(edi + 0x8DF), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x68) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x30) = ebx;
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM8(esp + 0x5D) = LO8(ebx);
    MEM8(esp + 0x5E) = LO8(ebx);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    if (CMP_EQ(MEM8(edi + 0x8DF), LO8(ebx))) goto loc_0014F2C0; /* je: equal / zero */

loc_0014F2B8:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */

loc_0014F2C0:
    eax = MEM32(edi + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CB70;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014F2D9:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = edi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014F2E9:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014F304; /* jge: greater or equal (signed >=) */

loc_0014F2FE:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F304:
    SET_LO8(eax, MEM8(esp + 0x6C));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), LO8(ebx))) ? 1 : 0); /* sete */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(ecx, LO8(ecx) + 1);
    eax = 0x4A71A0;
    /* fstp st(0) */
    MEM8(esp + 0x5C) = LO8(ecx);
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014F325:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F38F; /* je: equal / zero */

loc_0014F329:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014F3D6; /* jle: less or equal (signed <=) */

loc_0014F33B:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);

loc_0014F342:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F359; /* jne: not equal / not zero */

loc_0014F346:
    edx = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014F355:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F35B; /* je: equal / zero */

loc_0014F359:
    SET_LO8(eax, 1);

loc_0014F35B:
    ecx = MEM32(0x73A1C0);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_0014F342; /* jl: less (signed <) */

loc_0014F366:
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014F3D6; /* je: equal / zero */

loc_0014F36B:
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_0014F39D;

loc_0014F38F:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_0014F39D:
    edi = esp + 0x18;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014F3AB:
    if (CMP_EQ(eax, ebx)) goto loc_0014F3D6; /* je: equal / zero */

loc_0014F3AF:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E9EB852);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0x3F2147AE);
    esi = eax;
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014F3D6:
    POP32(esp, esi);

loc_0014F3D7:
    POP32(esp, ebx);

loc_0014F3D8:
    POP32(esp, edi);
    esp = esp + 0x54;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
