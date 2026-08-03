#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150040
 * Original: 0x00150040 - 0x00150252 (530 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150040:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015024B; /* jne: not equal / not zero */

loc_00150054:
    xmm1.f[0] = MEMF(esi + 0x640); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0015024B; /* ja: above (unsigned >) */

loc_00150065:
    SET_LO8(eax, MEM8(esi + 0x8CE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015024B; /* jne: not equal / not zero */

loc_00150073:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x640); /* subss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x644); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x640); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM8(esi + 0x8CE) = 0xF;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x64C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x648); /* subss */
    SET_LO8(eax, MEM8(esp + 0x60));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x648); /* addss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001500FF; /* je: equal / zero */

loc_001500F5:
    xmm3.f[0] = MEMF(esi + 0x658); /* movss */
    goto loc_00150107;

loc_001500FF:
    xmm3.f[0] = MEMF(esi + 0x65C); /* movss */

loc_00150107:
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(esi + 0x654); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x650); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x650); /* addss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0015024B; /* ja: above (unsigned >) */

loc_0015013E:
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_00150148:
    xmm0.f[0] = MEMF(ebx); /* movss */
    eax = MEM32(esi + 0x880);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    PUSH32(esp, eax);
    eax = 0x39CBD0;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00150187:
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_00150197:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001501B2; /* jge: greater or equal (signed >=) */

loc_001501AC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001501B2:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001501C4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00150229; /* je: equal / zero */

loc_001501C8:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0015024A; /* jle: less or equal (signed <=) */

loc_001501D6:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);
    /* nop */

loc_001501E0:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001501F3; /* jne: not equal / not zero */

loc_001501E4:
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_001501EF:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001501F5; /* je: equal / zero */

loc_001501F3:
    SET_LO8(eax, 1);

loc_001501F5:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_001501E0; /* jl: less (signed <) */

loc_00150200:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015024A; /* je: equal / zero */

loc_00150205:
    xmm0.f[0] = MEMF(0x3A1A00); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_00150237;

loc_00150229:
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_00150237:
    edi = esp + 0x18;
    esi = 0x40B844;
    MEM8(esp + 0x5C) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0015024A:
    POP32(esp, edi);

loc_0015024B:
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
