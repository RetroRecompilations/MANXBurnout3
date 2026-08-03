#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014DB50
 * Original: 0x0014DB50 - 0x0014DDE1 (657 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DB50(void)
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

loc_0014DB50:
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014DDD9; /* jne: not equal / not zero */

loc_0014DB67:
    edx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0014DDD9; /* jle: less or equal (signed <=) */

loc_0014DB77:
    ecx = 0x73BACA;
    /* nop */

loc_0014DB80:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014DB8C; /* jne: not equal / not zero */

loc_0014DB84:
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_0014DB8C; /* jne: not equal / not zero */

loc_0014DB88:
    SET_LO8(eax, 0); /* xor self */
    goto loc_0014DB8E;

loc_0014DB8C:
    SET_LO8(eax, 1);

loc_0014DB8E:
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0014DB80; /* jne: not equal / not zero */

loc_0014DB97:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014DDD9; /* je: equal / zero */

loc_0014DB9F:
    if (CMP_EQ(MEM8(esi + 0x8CD), LO8(ebx))) goto loc_0014DBB1; /* je: equal / zero */

loc_0014DBA7:
    if (CMP_EQ(MEM8(esp + 0x64), LO8(ebx))) goto loc_0014DDD9; /* je: equal / zero */

loc_0014DBB1:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    eax = MEM32(esp + 0x5C);
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
    MEM8(esi + 0x8CD) = 0x1E;
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x60); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x59C); /* subss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x5A8); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x59C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM8(esp + 0x5A) = LO8(ebx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x68) ? xmm0.f[0] : MEMF(esp + 0x68)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5D8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5CC); /* subss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5CC); /* addss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5C0); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5B4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5B4); /* addss */
    eax = 0x4A71A0;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014DCFC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014DD6B; /* je: equal / zero */

loc_0014DD00:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014DDD8; /* jle: less or equal (signed <=) */

loc_0014DD12:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);
    /* nop */

loc_0014DD20:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014DD37; /* jne: not equal / not zero */

loc_0014DD24:
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014DD33:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014DD39; /* je: equal / zero */

loc_0014DD37:
    SET_LO8(eax, 1);

loc_0014DD39:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014DD20; /* jl: less (signed <) */

loc_0014DD44:
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014DDD8; /* je: equal / zero */

loc_0014DD4D:
    xmm0.f[0] = MEMF(0x3B1770); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    goto loc_0014DD7F;

loc_0014DD6B:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */

loc_0014DD7F:
    ecx = MEM32(esi + 0x880);
    PUSH32(esp, 1);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ecx);
    eax = 0x39CB98;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014DDA6:
    MEM32(esp + 0x2C) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014DDBD; /* jge: greater or equal (signed >=) */

loc_0014DDB7:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014DDBD:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = esp + 0x14;
    esi = 0x40B844;
    MEM8(esp + 0x58) = 3;
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014DDD8:
    POP32(esp, edi);

loc_0014DDD9:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
