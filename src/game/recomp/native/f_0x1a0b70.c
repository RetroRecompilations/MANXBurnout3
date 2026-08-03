#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0B70
 * Original: 0x001A0B70 - 0x001A0F3E (974 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0B70:
    SET_LO8(eax, MEM8(esi + 0x41));
    esp = esp - 0x2C;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_001A0B83; /* jne: not equal / not zero */

loc_001A0B7A:
    MEM32(esp) = 0;
    goto loc_001A0B91;

loc_001A0B83:
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    MEM32(esp) = eax;

loc_001A0B91:
    eax = ZX8(MEM8(esi + 0x47));
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm6.f[0], MEMF(edx + eax * 4) - sets EFLAGS */
    PUSH32(esp, ebp);
    ebp = edx + eax * 4;
    if ((xmm6.f[0] > MEMF(edx + eax * 4))) goto loc_001A0EE6; /* ja: above (unsigned >) */

loc_001A0BAB:
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_0019E430(); /* call 0x0019E430 */

loc_001A0BC8:
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001A0D0A; /* je: equal / zero */

loc_001A0BD2:
    ecx = MEM32(esi + 0x30);
    eax = MEM32(esp + 0xC);
    xmm2.f[0] = MEMF(edi + 0x30); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019E210(); /* call 0x0019E210 */

loc_001A0BE4:
    xmm2.f[0] = MEMF(ebp); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x10))) goto loc_001A0D0A; /* jbe: below or equal (unsigned <=) */

loc_001A0C04:
    xmm3.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = MEMF(0x3A5958); /* movss */
    xmm4.f[0] = MEMF(esi + 0x2C); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3.f[0] = MEMF(edi); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esp + 0x1C))) goto loc_001A0D04; /* jbe: below or equal (unsigned <=) */

loc_001A0C5F:
    eax = MEM32(edi + 0x38);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(eax, eax)) goto loc_001A0C8E; /* je: equal / zero */

loc_001A0C6E:
    SET_LO8(ecx, MEM8(edi + 0x47));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A0C8E; /* je: equal / zero */

loc_001A0C76:
    eax = MEM32(eax);
    edx = ZX8(LO8(ecx));
    xmm1.f[0] = MEMF(eax + edx * 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    goto loc_001A0C91;

loc_001A0C8E:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */

loc_001A0C91:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5A44); /* mulss */
    xmm3.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm1.f[0])) goto loc_001A0D04; /* jbe: below or equal (unsigned <=) */

loc_001A0CCE:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    ecx = ecx & 0xBF800000u;
    ecx = ecx | 0x3F800000;
    MEM32(esp + 0x1C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x384A80); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, 1);
    goto loc_001A0D0A;

loc_001A0D04:
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */

loc_001A0D0A:
    if (TEST_Z(MEM8(esi + 0x4B), 1)) goto loc_001A0D41; /* je: equal / zero */

loc_001A0D10:
    eax = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    edx = eax + eax * 8;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(eax + edx * 2 + 0xE));
    eax = eax + edx * 2;
    MEM8(esi + 0x42) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0xF));
    MEM8(esi + 0x43) = LO8(edx);
    SET_LO16(ecx, MEM16(eax + 4));
    MEM16(esi + 0x3C) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(esi + 0x3E) = LO16(edx);

loc_001A0D41:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001A0EDC; /* jne: not equal / not zero */

loc_001A0D49:
    ebp = 0; /* xor self */
    goto loc_001A0D50;

    /* nop */

loc_001A0D50:
    /* test ebp, ebp - flags set for next jcc */
    ecx = MEM32(esi + 0x38);
    eax = ZX8(MEM8(esi + 0x47));
    if (TEST_NZ(ebp, ebp)) goto loc_001A0D6C; /* jne: not equal / not zero */

loc_001A0D5B:
    edx = MEM32(ecx + 4);
    xmm0.f[0] = MEMF(edx + eax * 4); /* movss */
    edx = ZX16(MEM16(esi + 0x3C));
    SET_LO8(eax, MEM8(esi + 0x42));
    goto loc_001A0D7B;

loc_001A0D6C:
    edx = MEM32(ecx + 8);
    xmm0.f[0] = MEMF(edx + eax * 4); /* movss */
    edx = ZX16(MEM16(esi + 0x3E));
    SET_LO8(eax, MEM8(esi + 0x43));

loc_001A0D7B:
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_001A0D8D; /* jne: not equal / not zero */

loc_001A0D89:
    ecx = 0; /* xor self */
    goto loc_001A0D99;

loc_001A0D8D:
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;

loc_001A0D99:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], xmm6.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm6.f[0])) goto loc_001A0ED2; /* jb: below (unsigned <) */

loc_001A0DA8:
    if (TEST_Z(ecx, ecx)) goto loc_001A0ED2; /* je: equal / zero */

loc_001A0DB0:
    if (CMP_EQ(edx, 0xFFFF)) goto loc_001A0ED2; /* je: equal / zero */

loc_001A0DBC:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x28) = (int32_t)fp_top(); /* fist */
    /* FPU: fisub dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x34);
    edx = edx + 0x7FFFFFFF;
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    eax = ecx;
    /* FPU: fsubr dword ptr [esi + 0x30] */
    /* FPU: fiadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019E2A0(); /* call 0x0019E2A0 */

loc_001A0E07:
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001A0ECF; /* je: equal / zero */

loc_001A0E11:
    eax = MEM32(esp + 0xC);
    xmm2.f[0] = MEMF(edi + 0x30); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019E210(); /* call 0x0019E210 */

loc_001A0E20:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esi + 0x38);
    xmm1.f[0] = MEMF(eax + 0xC); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esp + 0x1C))) goto loc_001A0ECF; /* jbe: below or equal (unsigned <=) */

loc_001A0E43:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x38);
    edx++;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(eax, eax)) goto loc_001A0E7F; /* je: equal / zero */

loc_001A0E53:
    SET_LO8(ecx, MEM8(edi + 0x47));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A0E7F; /* je: equal / zero */

loc_001A0E5B:
    /* test ebp, ebp - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (TEST_NZ(ebp, ebp)) goto loc_001A0E7A; /* jne: not equal / not zero */

loc_001A0E62:
    edx = MEM32(eax + 8);

loc_001A0E65:
    xmm1.f[0] = MEMF(edx + ecx * 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    goto loc_001A0E85;

loc_001A0E7A:
    edx = MEM32(eax + 4);
    goto loc_001A0E65;

loc_001A0E7F:
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */

loc_001A0E85:
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    eax = eax & 0xBF800000u;
    eax = eax | 0x3F800000;
    MEM32(esp + 0x24) = eax;
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x384A80); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_001A0ECF:
    xmm6.f[0] = 0.0f; /* xorps self = zero */

loc_001A0ED2:
    ebp++;
    if (CMP_L(ebp, 2)) goto loc_001A0D50; /* jl: less (signed <) */

loc_001A0EDC:
    eax = MEM32(esp + 0x18);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_001A0EEE; /* jne: not equal / not zero */

loc_001A0EE6:
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    POP32(esp, ebp);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_001A0EEE:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5A44); /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x2C) ? xmm0.f[0] : MEMF(esp + 0x2C)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    POP32(esp, ebp);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
