#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5790
 * Original: 0x001A5790 - 0x001A5872 (226 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5790(void)
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

loc_001A5790:
    SET_LO8(eax, MEM8(edi + 0x114));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A57AA; /* jne: not equal / not zero */

loc_001A579D:
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A586C; /* jne: not equal / not zero */

loc_001A57AA:
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_001A586C; /* jle: less or equal (signed <=) */

loc_001A57BD:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = edi + 0x10;
    PUSH32(esp, esi);
    ebx = 0x27;
    MEM32(esp + 0x10) = edx;

loc_001A57D5:
    esi = 1;
    /* nop */

loc_001A57E0:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    xmm2.f[0] = MEMF(edx + esi * 4); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_001A5842; /* jbe: below or equal (unsigned <=) */

loc_001A57F0:
    if (CMP_GE(esi, 6)) goto loc_001A583A; /* jge: greater or equal (signed >=) */

loc_001A57F5:
    SET_LO8(ecx, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A5820; /* je: equal / zero */

loc_001A57FD:
    ecx = ebx + esi;
    /* comiss xmm0.f[0], MEMF(edi + ecx * 4) - sets EFLAGS */
    ebp = edi + ecx * 4;
    if ((xmm0.f[0] < MEMF(edi + ecx * 4))) goto loc_001A5842; /* jb: below (unsigned <) */

loc_001A5809:
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_001A5DC0(); /* call 0x001A5DC0 */

loc_001A5817:
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xC);
    goto loc_001A5842;

loc_001A5820:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_001A5DC0(); /* call 0x001A5DC0 */

loc_001A582E:
    eax = MEM32(esp + 0xC);
    edx = ebx + esi;
    MEMF(edi + edx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_001A5842;

loc_001A583A:
    ecx = ebx + esi;
    MEMF(edi + ecx * 4) = xmm0.f[0]; /* movss */

loc_001A5842:
    esi++;
    if (CMP_L(esi, 7)) goto loc_001A57E0; /* jl: less (signed <) */

loc_001A5848:
    esi = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x40);
    ecx = MEM32(edx + 8);
    eax++;
    esi = esi + 4;
    ebx = ebx + 7;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(eax, ecx)) goto loc_001A57D5; /* jl: less (signed <) */

loc_001A5869:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001A586C:
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
