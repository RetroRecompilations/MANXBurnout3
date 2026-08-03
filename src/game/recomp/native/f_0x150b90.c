#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150B90
 * Original: 0x00150B90 - 0x00150D33 (419 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150B90:
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x8DF));
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00150D2C; /* jne: not equal / not zero */

loc_00150BA8:
    /* cmp MEM32(0x73A1C0), ebx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (CMP_LE(MEM32(0x73A1C0), ebx)) goto loc_00150D2C; /* jle: less or equal (signed <=) */

loc_00150BB8:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x73C610;
    PUSH32(esp, edi);

loc_00150BC3:
    ebp = 0; /* xor self */
    goto loc_00150BD0;

    /* nop */
    edi = edi;

loc_00150BD0:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    SET_LO8(ecx, MEM8(edx + ebp + 0x8D2));
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    eax = edx + ebp;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00150CF2; /* je: equal / zero */

loc_00150BE8:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x61) = LO8(ebx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x5C) = 0xFFFFFFFFu;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM8(esp + 0x62) = LO8(ebx);
    xmm0.f[0] = MEMF(eax + 0x820); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x824); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x828); /* movss */
    eax = MEM32(esp + 0x68);
    ecx = MEM32(eax + 0x880);
    PUSH32(esp, 1);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ecx);
    eax = 0x39CB58;
    MEM8(esp + 0x69) = LO8(ebx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00150CC4:
    MEM32(esp + 0x34) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00150CDB; /* jge: greater or equal (signed >=) */

loc_00150CD5:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00150CDB:
    edi = esp + 0x1C;
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    MEM8(esp + 0x60) = 5;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00150CF2:
    ebp = ebp + 0xC0;
    if (CMP_L(ebp, 0x300)) goto loc_00150BD0; /* jl: less (signed <) */

loc_00150D04:
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(0x73A1C0);
    eax++;
    edx = edx + 0x27E0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(eax, ecx)) goto loc_00150BC3; /* jl: less (signed <) */

loc_00150D29:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00150D2C:
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
