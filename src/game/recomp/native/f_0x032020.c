#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00032020
 * Original: 0x00032020 - 0x000323C1 (929 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032020:
    ecx = MEM32(esp + 4);
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    eax = 0; /* xor self */
    esp = esp - 0xABC;
    if (CMP_NE(ecx, eax)) goto loc_0003206B; /* jne: not equal / not zero */

loc_00032038:
    eax = MEM32(0x4A1D00);
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    xmm3.f[0] = MEMF(0x4D9164); /* movss */
    xmm0.f[0] = MEMF(0x4D9168); /* movss */
    MEM32(esp + 0x10) = 0x20E0;
    MEM32(esp + 8) = 0x107;
    MEM32(esp + 0x14) = eax;
    goto loc_00032090;

loc_0003206B:
    ecx = MEM32(0x4A1CFC);
    xmm3.f[0] = MEMF(0x4D7058); /* movss */
    xmm0.f[0] = MEMF(0x4D9154); /* movss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = ecx;

loc_00032090:
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    xmm6.f[0] = MEMF(0x3B1688); /* movss */
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1D4C); /* mulss */
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = 0x4D7064;
    eax = 0x4D7074;
    ebx = 0x4D7070;
    edi = 0x4D706C;
    esi = 0x4D7068;
    edx = 0x4D7060;
    MEM32(esp + 0x2C) = 0x21;
    goto loc_00032123;

loc_00032113:
    xmm1.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    eax = MEM32(esp + 0x14);

loc_00032123:
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    /* FPU: fcos  */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = eax + 0x20;
    MEM32(esp + 0x14) = eax;
    ebp = eax;
    memcpy(xmm1.b, xmm7.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1734); /* mulss */
    MEM32(edi) = 0xFF00;
    MEMF(ebx) = xmm1.f[0]; /* movss */
    edx = edx + 0x20;
    esi = esi + 0x20;
    edi = edi + 0x20;
    ebx = ebx + 0x20;
    ecx = ecx + 0x20;
    ebp = ebp + 0xE0;
    eax = ecx;
    edx = edx + 0xE0;
    esi = esi + 0xE0;
    edi = edi + 0xE0;
    ebx = ebx + 0xE0;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = 7;
    MEM32(esp + 0x14) = ebp;
    ecx = ecx + 0xE0;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(edx + -256) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + -256) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_000321C0;

    /* nop */
    /* nop */

loc_000321C0:
    xmm7.f[0] = MEMF(esp + 0x34); /* movss */
    /* cmp MEM32(esp + 0xAD0), 1 - flags set for next jcc */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1A4C); /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(eax + -4) = xmm7.f[0]; /* movss */
    MEM32(eax + 8) = 0xFF00;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    if (CMP_NE(MEM32(esp + 0xAD0), 1)) goto loc_0003225A; /* jne: not equal / not zero */

loc_0003223D:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E4C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */

loc_0003225A:
    ebp = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(0x4D9174); /* movss */
    eax = eax + 0x20;
    ebp--;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    MEM32(esp + 0x1C) = ebp;
    if ((ebp != 0)) goto loc_000321C0; /* jne: not equal / not zero */

loc_0003227B:
    eax = MEM32(esp + 0x2C);
    xmm7.f[0] = MEMF(0x4D916C); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0x10); /* addss */
    eax--;
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    if ((eax != 0)) goto loc_00032113; /* jne: not equal / not zero */

loc_0003229E:
    ecx = MEM32(0x35FB48);
    edi = MEM32(0x4A1CF8);
    esi = ecx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000322C7; /* jb: below (unsigned <) */

loc_000322B3:
    eax = MEM32(0x3609FC);
    PUSH32(esp, eax);
    eax = eax >> 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003518E0(); /* call 0x003518E0 */

loc_000322C1:
    ecx = MEM32(0x35FB48);

loc_000322C7:
    MEM32(eax) = 0x41710;
    ebp = 0; /* xor self */
    MEM32(eax + 4) = ebp;
    eax = eax + 8;
    /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_EQ(ecx, ebp)) goto loc_000322F8; /* je: equal / zero */

loc_000322DB:
    /* test MEM32(edi), 0x780000 - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (TEST_Z(MEM32(edi), 0x780000)) goto loc_000322ED; /* je: equal / zero */

loc_000322E6:
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    goto loc_000322F3;

loc_000322ED:
    if (CMP_EQ(eax, ebp)) goto loc_000322F8; /* je: equal / zero */

loc_000322F1:
    PUSH32(esp, 0x10);

loc_000322F3:
    PUSH32(esp, 0); sub_00351770(); /* call 0x00351770 */

loc_000322F8:
    edi = MEM32(edi + 4);
    eax = MEM32(esp + 0x20);
    edi = edi | 0x80000000u;
    edi = edi + eax;
    ecx = 0x838;
    esi = 0x4D7060;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = 0; /* xor self */

loc_00032315:
    ebx = MEM32(esp + 0x18);
    edi = ebx + ebp * 8;
    ecx = 0; /* xor self */
    ebx = ebx + ebp * 8 + 8;

loc_00032322:
    edx = edi + ecx;
    MEM16(esp + eax * 2 + 0x4C) = LO16(edx);
    edx = ebx + ecx;
    MEM16(esp + eax * 2 + 0x4E) = LO16(edx);
    esi = edi + ecx + 1;
    MEM16(esp + eax * 2 + 0x50) = LO16(esi);
    eax = eax + 3;
    MEM16(esp + eax * 2 + 0x4C) = LO16(edx);
    edx = ebx + ecx + 1;
    MEM16(esp + eax * 2 + 0x4E) = LO16(esi);
    MEM16(esp + eax * 2 + 0x50) = LO16(edx);
    eax = eax + 3;
    ecx++;
    if (CMP_L(ecx, 7)) goto loc_00032322; /* jl: less (signed <) */

loc_0003235A:
    ebx = MEM32(esp + 0x18);
    edi = ebx + ebp * 8 + 0x80;
    ecx = 0; /* xor self */
    ebx = ebx + ebp * 8 + 0x88;
    edi = edi;

loc_00032370:
    edx = edi + ecx;
    MEM16(esp + eax * 2 + 0x4C) = LO16(edx);
    edx = ebx + ecx;
    MEM16(esp + eax * 2 + 0x4E) = LO16(edx);
    esi = edi + ecx + 1;
    MEM16(esp + eax * 2 + 0x50) = LO16(esi);
    eax = eax + 3;
    MEM16(esp + eax * 2 + 0x4C) = LO16(edx);
    edx = ebx + ecx + 1;
    MEM16(esp + eax * 2 + 0x4E) = LO16(esi);
    MEM16(esp + eax * 2 + 0x50) = LO16(edx);
    eax = eax + 3;
    ecx++;
    if (CMP_L(ecx, 7)) goto loc_00032370; /* jl: less (signed <) */

loc_000323A8:
    ebp++;
    if (CMP_L(ebp, 0x10)) goto loc_00032315; /* jl: less (signed <) */

loc_000323B2:
    edi = MEM32(esp + 0x24);
    ecx = 0x2A0;
    esi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
