#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103950
 * Original: 0x00103950 - 0x00103F49 (1529 bytes, 417 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00103950:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = ebx + 0x12;
    PUSH32(esp, eax);
    ecx = ebx + 0x11;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00102CA0(); /* call 0x00102CA0 */

loc_00103974:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A200), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(0x752D60), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x752D70), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A210), 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    esi = esi + 0x30;
    eax = esp + 0x6C;
    /* addps: xmm3.f[0] += xmm0.f[0] (packed 4xfloat) */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = eax;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A210), 16); /* movaps */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    edx = esp + 0x40;
    eax = esp + 0x60;
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x4C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* divps: xmm0.f[0] /= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103A56; /* jbe: below or equal (unsigned <=) */

loc_00103A40:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103A64;

loc_00103A56:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103A64:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103A73:
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x14) = LO16(eax);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103A9F; /* jbe: below or equal (unsigned <=) */

loc_00103A89:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103AAD;

loc_00103A9F:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103AAD:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103ABC:
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x16) = LO16(eax);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103AE8; /* jbe: below or equal (unsigned <=) */

loc_00103AD2:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103AF6;

loc_00103AE8:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103AF6:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103B05:
    MEM16(ebx + 0x18) = LO16(eax);
    esi = MEM32(ebp + 0xC);
    edi = 0x5A38E0;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = 0x5A3940;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    esi = MEM32(ebp + 0x10);
    edi = 0x5A3910;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = 0x5A3920;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103C14; /* jbe: below or equal (unsigned <=) */

loc_00103BF9:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103C27;

loc_00103C14:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103C27:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103C36:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103C4B; /* je: equal / zero */

loc_00103C43:
    esi = esi | 0x8000;
    goto loc_00103C51;

loc_00103C4B:
    esi = esi & 0x7FFF;

loc_00103C51:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x1A) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103C82; /* jbe: below or equal (unsigned <=) */

loc_00103C67:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103C95;

loc_00103C82:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103C95:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103CA4:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103CB9; /* je: equal / zero */

loc_00103CB1:
    esi = esi | 0x8000;
    goto loc_00103CBF;

loc_00103CB9:
    esi = esi & 0x7FFF;

loc_00103CBF:
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x1C) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103CF0; /* jbe: below or equal (unsigned <=) */

loc_00103CD5:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103D03;

loc_00103CF0:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103D03:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103D12:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103D27; /* je: equal / zero */

loc_00103D1F:
    esi = esi | 0x8000;
    goto loc_00103D2D;

loc_00103D27:
    esi = esi & 0x7FFF;

loc_00103D2D:
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x1E) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103D5E; /* jbe: below or equal (unsigned <=) */

loc_00103D43:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103D71;

loc_00103D5E:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103D71:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103D80:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103D95; /* je: equal / zero */

loc_00103D8D:
    esi = esi | 0x8000;
    goto loc_00103D9B;

loc_00103D95:
    esi = esi & 0x7FFF;

loc_00103D9B:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x20) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103DCC; /* jbe: below or equal (unsigned <=) */

loc_00103DB1:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103DDF;

loc_00103DCC:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103DDF:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103DEE:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103E03; /* je: equal / zero */

loc_00103DFB:
    esi = esi | 0x8000;
    goto loc_00103E09;

loc_00103E03:
    esi = esi & 0x7FFF;

loc_00103E09:
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 0x22) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103E3A; /* jbe: below or equal (unsigned <=) */

loc_00103E1F:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103E4D;

loc_00103E3A:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103E4D:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103E5C:
    esi = esi << 8;
    esi = esi - eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103E71; /* je: equal / zero */

loc_00103E69:
    esi = esi | 0x8000;
    goto loc_00103E77;

loc_00103E71:
    esi = esi & 0x7FFF;

loc_00103E77:
    eax = MEM32(ebp + 0x14);
    MEM16(ebx + 0x24) = LO16(esi);
    esi = MEM32(ebp + 0x18);
    MEM8(ebx + 0x2B) = 0;
    SET_LO16(edx, MEM16(eax));
    ecx = ebx + 0x28;
    MEM16(ecx) = LO16(edx);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(ecx + 2) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 4));
    MEM8(ebx + 0x13) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 8));
    MEM8(ebx + 0x2E) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xC));
    MEM8(ebx + 0x2F) = LO8(eax);
    MEM8(ebx + 0x2C) = 0;
    MEM8(ebx + 0x2D) = 0;
    SET_LO8(eax, MEM8(esi + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103EB9; /* je: equal / zero */

loc_00103EB5:
    MEM8(ebx + 0x2C) = 4;

loc_00103EB9:
    SET_LO8(eax, MEM8(esi + 0x15));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103EC4; /* je: equal / zero */

loc_00103EC0:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 8;

loc_00103EC4:
    SET_LO8(eax, MEM8(esi + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103ECF; /* je: equal / zero */

loc_00103ECB:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 0x10;

loc_00103ECF:
    /* cmp MEM32(esi + 0x10), 1 - flags set for next jcc */
    eax = 2;
    if (CMP_NE(MEM32(esi + 0x10), 1)) goto loc_00103EDD; /* jne: not equal / not zero */

loc_00103EDA:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | LO8(eax);

loc_00103EDD:
    if (CMP_NE(MEM32(esi + 0x10), eax)) goto loc_00103EE6; /* jne: not equal / not zero */

loc_00103EE2:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 1;

loc_00103EE6:
    SET_LO8(eax, MEM8(esi + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103EF1; /* je: equal / zero */

loc_00103EED:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 0x20;

loc_00103EF1:
    SET_LO8(eax, MEM8(esi + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103EFC; /* je: equal / zero */

loc_00103EF8:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 0x40;

loc_00103EFC:
    SET_LO8(eax, MEM8(esi + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103F07; /* je: equal / zero */

loc_00103F03:
    MEM8(ebx + 0x2C) = MEM8(ebx + 0x2C) | 0x80;

loc_00103F07:
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001042A0(); /* call 0x001042A0 */

loc_00103F18:
    SET_LO8(eax, MEM8(esi + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00103F38; /* je: equal / zero */

loc_00103F1F:
    SET_LO8(eax, MEM8(ebx + 0x2D));
    SET_LO16(ecx, MEM16(ebp + 0x1C));
    SET_LO8(eax, LO8(eax) | 0x80);
    MEM8(ebx + 0x2D) = LO8(eax);
    MEM16(ebx + 0x26) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_00103F38:
    SET_LO16(edx, MEM16(ebp + 0x1C));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebx + 0x26) = LO16(edx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
