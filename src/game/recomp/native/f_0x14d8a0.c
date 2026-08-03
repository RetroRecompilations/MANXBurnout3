#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014D8A0
 * Original: 0x0014D8A0 - 0x0014DB42 (674 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D8A0(void)
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

loc_0014D8A0:
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014DB3A; /* jne: not equal / not zero */

loc_0014D8B7:
    edx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0014DB3A; /* jle: less or equal (signed <=) */

loc_0014D8C7:
    ecx = 0x73BACA;
    /* nop */

loc_0014D8D0:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014D8DC; /* jne: not equal / not zero */

loc_0014D8D4:
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_0014D8DC; /* jne: not equal / not zero */

loc_0014D8D8:
    SET_LO8(eax, 0); /* xor self */
    goto loc_0014D8DE;

loc_0014D8DC:
    SET_LO8(eax, 1);

loc_0014D8DE:
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0014D8D0; /* jne: not equal / not zero */

loc_0014D8E7:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014DB3A; /* je: equal / zero */

loc_0014D8EF:
    if (CMP_EQ(MEM8(esi + 0x8CC), LO8(ebx))) goto loc_0014D901; /* je: equal / zero */

loc_0014D8F7:
    if (CMP_EQ(MEM8(esp + 0x70), LO8(ebx))) goto loc_0014DB3A; /* je: equal / zero */

loc_0014D901:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    eax = MEM32(esp + 0x68);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x8CC) = 0x1E;
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x6C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5A0); /* subss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x5AC); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x5A0); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    MEM8(esp + 0x64) = LO8(ebx);
    MEM8(esp + 0x65) = LO8(ebx);
    MEM8(esp + 0x66) = LO8(ebx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x70); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x74) ? xmm0.f[0] : MEMF(esp + 0x74)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5C4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5B8); /* subss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5B8); /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5DC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5D0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5D0); /* addss */
    eax = 0x4A71A0;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014DA64:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014DACC; /* je: equal / zero */

loc_0014DA68:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014DB39; /* jle: less or equal (signed <=) */

loc_0014DA7A:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);

loc_0014DA81:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014DA98; /* jne: not equal / not zero */

loc_0014DA85:
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014DA94:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014DA9A; /* je: equal / zero */

loc_0014DA98:
    SET_LO8(eax, 1);

loc_0014DA9A:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014DA81; /* jl: less (signed <) */

loc_0014DAA5:
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014DB39; /* je: equal / zero */

loc_0014DAAE:
    xmm0.f[0] = MEMF(0x3B1770); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    goto loc_0014DAE0;

loc_0014DACC:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */

loc_0014DAE0:
    ecx = MEM32(esi + 0x880);
    PUSH32(esp, 1);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ecx);
    eax = 0x39CB90;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014DB07:
    MEM32(esp + 0x38) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014DB1E; /* jge: greater or equal (signed >=) */

loc_0014DB18:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014DB1E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = esp + 0x20;
    esi = 0x40B844;
    MEM8(esp + 0x64) = 3;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014DB39:
    POP32(esp, edi);

loc_0014DB3A:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
