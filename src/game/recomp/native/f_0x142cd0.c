#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142CD0
 * Original: 0x00142CD0 - 0x00142E6D (413 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142CD0(void)
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

loc_00142CD0:
    esp = esp - 0x48;
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    eax = MEM32(ebp);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEM8(esp + 0x4D) = LO8(ebx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4E) = LO8(ebx);
    eax = MEM32(eax + 0x204);
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    eax = eax + 0x30;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    MEMF(ebp + 0x24) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    eax = MEM32(0x40FBB8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBBC) = ecx;
    MEM32(0x40FBB8) = eax;
    edx = 0; /* xor self */
    ecx = 0x1E;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x4D) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0x2C) = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx + ecx;
    MEM32(ebp + 0x28) = edx;
    edx = MEM32(ebp);
    eax = MEM32(edx + 0x2420);
    if (CMP_EQ(eax, 3)) goto loc_00142E2A; /* je: equal / zero */

loc_00142DE7:
    if (CMP_EQ(eax, 4)) goto loc_00142E2A; /* je: equal / zero */

loc_00142DEC:
    if (CMP_EQ(eax, 5)) goto loc_00142E2A; /* je: equal / zero */

loc_00142DF1:
    eax = MEM32(ebp + 0x28);
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00142E00; /* jns: not sign (positive) */

loc_00142DFB:
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00142E00:
    if ((eax != 0)) goto loc_00142E16; /* jne: not equal / not zero */

loc_00142E02:
    eax = MEM32(ebp + 0xC);
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    /* test edx, edx - flags set for next jcc */
    goto loc_00142E3C;

loc_00142E16:
    eax = MEM32(ebp + 0x10);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    /* test ecx, ecx - flags set for next jcc */
    goto loc_00142E3C;

loc_00142E2A:
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0x28) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    /* test eax, eax - flags set for next jcc */

loc_00142E3C:
    if (CMP_GE(eax & eax, 0)) goto loc_00142E44; /* jge: greater or equal (signed >=) */

loc_00142E3E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00142E44:
    edi = esp + 0x10;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00142E56:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x18) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00142E63; /* je: equal / zero */

loc_00142E5D:
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + 0x1C) = ecx;

loc_00142E63:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
