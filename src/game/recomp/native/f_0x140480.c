#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00140480
 * Original: 0x00140480 - 0x00140606 (390 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140480(void)
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

loc_00140480:
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x54);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0x58) = LO8(ebx);
    if (CMP_G(eax, ebx)) goto loc_001405FD; /* jg: greater (signed >) */

loc_0014049D:
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(eax + 0x13F4);
    eax = MEM32(ecx + 0x1920);
    if (CMP_EQ(eax, ebx)) goto loc_001404C7; /* je: equal / zero */

loc_001404B1:
    ecx = MEM32(edx + 0x13F4);
    if (CMP_NE(MEM32(ecx + 0x1920), ebx)) goto loc_001405FD; /* jne: not equal / not zero */

loc_001404C3:
    if (CMP_NE(eax, ebx)) goto loc_001404CC; /* jne: not equal / not zero */

loc_001404C7:
    MEM8(esp + 0x58) = 1;

loc_001404CC:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    edx = MEM32(ebp + 0x78);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    PUSH32(esp, edx);
    eax = 0x39C358;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM8(esp + 0x5A) = LO8(ebx);
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00140565:
    xmm0.f[0] = MEMF(ebp + 0x58); /* movss */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00140587; /* jge: greater or equal (signed >=) */

loc_00140581:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00140587:
    xmm0.f[0] = MEMF(esi); /* movss */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* cmp MEM8(esp + 0x58), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    MEM8(esp + 0x50) = 2;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(MEM8(esp + 0x58), LO8(ebx))) goto loc_001405CE; /* je: equal / zero */

loc_001405B6:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x387C04); /* addss */
    MEMF(0x40E12C) = xmm0.f[0]; /* movss */

loc_001405CE:
    PUSH32(esp, edi);
    edi = esp + 0x10;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001405DD:
    /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001405F6; /* je: equal / zero */

loc_001405E2:
    edx = MEM32(eax + 0xC);
    MEM8(edx + 0x87) = 0xBF;
    eax = MEM32(eax + 0xC);
    MEM8(eax + 0x84) = 0xFF;

loc_001405F6:
    MEM32(ebp + 0x54) = 0x1E;

loc_001405FD:
    POP32(esp, esi);
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
