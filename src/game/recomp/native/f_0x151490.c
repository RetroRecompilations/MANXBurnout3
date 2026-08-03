#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00151490
 * Original: 0x00151490 - 0x001516B4 (548 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151490:
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001516AC; /* je: equal / zero */

loc_001514A3:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0x880);
    PUSH32(esp, 1);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    PUSH32(esp, eax);
    eax = 0x39CB28;
    MEM32(esp + 0x28) = ebx;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM8(esp + 0x55) = LO8(ebx);
    MEM8(esp + 0x56) = LO8(ebx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0015154D:
    xmm1.f[0] = MEMF(ebp + 0x89C); /* movss */
    xmm0.f[0] = MEMF(ebp + 0x8A0); /* movss */
    edx = MEM32(0x73A1C0);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    SET_LO8(ecx, 0); /* xor self */
    /* cmp edx, ebx - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_LE(edx, ebx)) goto loc_001516AC; /* jle: less or equal (signed <=) */

loc_00151585:
    PUSH32(esp, esi);
    esi = 0x73BACA;
    goto loc_00151590;

    /* nop */

loc_00151590:
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0015159C; /* jne: not equal / not zero */

loc_00151594:
    if (CMP_NE(MEM8(esi), LO8(ebx))) goto loc_0015159C; /* jne: not equal / not zero */

loc_00151598:
    SET_LO8(ecx, 0); /* xor self */
    goto loc_0015159E;

loc_0015159C:
    SET_LO8(ecx, 1);

loc_0015159E:
    esi = esi + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_00151590; /* jne: not equal / not zero */

loc_001515A7:
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001516AB; /* je: equal / zero */

loc_001515AF:
    if (CMP_EQ(MEM8(ebp + 0x8DF), LO8(ebx))) goto loc_001515C5; /* je: equal / zero */

loc_001515B7:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_001515C5:
    ecx = MEM32(ebp + 0x520);
    edx = MEM32(ebp + 0x524);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    ecx = ecx << 0x10;
    esi = esi + edx;
    ecx = ecx + esi;
    MEM32(ebp + 0x520) = ecx;
    fp_push((double)SMEM32(ebp + 0x520)); /* fild */
    ecx = ecx + edx;
    MEM32(ebp + 0x524) = ecx;
    ecx = MEM32(ebp + 0x520);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(ecx & ecx, 0)) goto loc_00151602; /* jge: greater or equal (signed >=) */

loc_001515FC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00151602:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    /* test eax, eax - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00151633; /* jge: greater or equal (signed >=) */

loc_0015162D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00151633:
    eax = MEM32(0x73A1C0);
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* cmp eax, 1 - flags set for next jcc */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(eax, 1)) goto loc_00151682; /* jne: not equal / not zero */

loc_00151643:
    if (CMP_NE(MEM32(ebp + 0x874), ebx)) goto loc_001516AA; /* jne: not equal / not zero */

loc_0015164B:
    edi = esp + 0x10;
    esi = 0x40B844;
    MEM8(esp + 0x54) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0015165E:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x874) = eax;
    MEM8(ebp + 0x8D6) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001516AA; /* je: equal / zero */

loc_0015166F:
    ecx = MEM32(eax + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8AC) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

loc_00151682:
    edi = esp + 0x10;
    esi = 0x40B844;
    MEM8(esp + 0x54) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00151695:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x874) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_001516AA; /* je: equal / zero */

loc_0015169F:
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001516A4:
    MEM32(ebp + 0x874) = ebx;

loc_001516AA:
    POP32(esp, edi);

loc_001516AB:
    POP32(esp, esi);

loc_001516AC:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
