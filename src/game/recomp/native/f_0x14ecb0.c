#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014ECB0
 * Original: 0x0014ECB0 - 0x0014EE9D (493 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ECB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014ECB0:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014EE98; /* jne: not equal / not zero */

loc_0014ECC4:
    xmm1.f[0] = MEMF(esi + 0x5F8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014EE98; /* ja: above (unsigned >) */

loc_0014ECD5:
    SET_LO8(eax, MEM8(esi + 0x8C4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014EE98; /* jne: not equal / not zero */

loc_0014ECE3:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5F8); /* subss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x5FC); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x5F8); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edi);
    MEM8(esi + 0x8C4) = 7;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 0x60C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esp + 0x18;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0014ED5F:
    xmm0.f[0] = MEMF(ebx); /* movss */
    eax = MEM32(esi + 0x880);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x604); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x600); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x600); /* addss */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CBB8;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014EDBC:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014EDCC:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014EDE7; /* jge: greater or equal (signed >=) */

loc_0014EDE1:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014EDE7:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x5C) = 3;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014EDFE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014EE7B; /* je: equal / zero */

loc_0014EE02:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0014EE97; /* jle: less or equal (signed <=) */

loc_0014EE14:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);
    goto loc_0014EE20;

    /* nop */

loc_0014EE20:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014EE33; /* jne: not equal / not zero */

loc_0014EE24:
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014EE2F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014EE35; /* je: equal / zero */

loc_0014EE33:
    SET_LO8(eax, 1);

loc_0014EE35:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014EE20; /* jl: less (signed <) */

loc_0014EE40:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014EE97; /* je: equal / zero */

loc_0014EE45:
    xmm0.f[0] = MEMF(0x395C04); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    edi = esp + 0x18;
    esi = 0x40B844;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014EE75:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

loc_0014EE7B:
    xmm0.f[0] = MEMF(0x3B175C); /* movss */
    edi = esp + 0x18;
    esi = 0x40B844;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014EE97:
    POP32(esp, edi);

loc_0014EE98:
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
