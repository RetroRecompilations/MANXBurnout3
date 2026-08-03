#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103150
 * Original: 0x00103150 - 0x0010365F (1295 bytes, 350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103150(void)
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

loc_00103150:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = ebx + 2;
    PUSH32(esp, eax);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00102CA0(); /* call 0x00102CA0 */

loc_00103171:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A200), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(0x752D60), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x752D70), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A210), 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    esi = esi + 0x30;
    edx = esp + 0x6C;
    /* addps: xmm3.f[0] += xmm0.f[0] (packed 4xfloat) */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A210), 16); /* movaps */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    ecx = esp + 0x40;
    edx = esp + 0x60;
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x4C) = eax;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
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
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103253; /* jbe: below or equal (unsigned <=) */

loc_0010323D:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103261;

loc_00103253:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103261:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103270:
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 4) = LO16(eax);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010329C; /* jbe: below or equal (unsigned <=) */

loc_00103286:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_001032AA;

loc_0010329C:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001032AA:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001032B9:
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(ebx + 6) = LO16(eax);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001032E5; /* jbe: below or equal (unsigned <=) */

loc_001032CF:
    eax = (uint32_t)(-(int32_t)eax);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_001032F3;

loc_001032E5:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001032F3:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103302:
    MEM16(ebx + 8) = LO16(eax);
    esi = MEM32(ebp + 0x10);
    edi = 0x5A38E0;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x20;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x1C);
    edi = 0x5A3940;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    esi = MEM32(ebp + 0x14);
    edi = 0x5A3910;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x30;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x1C);
    edi = 0x5A3920;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x50);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010340E; /* jbe: below or equal (unsigned <=) */

loc_001033F6:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0010341E;

loc_0010340E:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0010341E:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0010342D:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0010343E; /* je: equal / zero */

loc_00103436:
    esi = esi | 0x8000;
    goto loc_00103444;

loc_0010343E:
    esi = esi & 0x7FFF;

loc_00103444:
    edi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(edi + 0xA) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103475; /* jbe: below or equal (unsigned <=) */

loc_0010345D:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103485;

loc_00103475:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103485:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103494:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001034A5; /* je: equal / zero */

loc_0010349D:
    esi = esi | 0x8000;
    goto loc_001034AB;

loc_001034A5:
    esi = esi & 0x7FFF;

loc_001034AB:
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(edi + 0xC) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001034D9; /* jbe: below or equal (unsigned <=) */

loc_001034C1:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_001034E9;

loc_001034D9:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001034E9:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001034F8:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00103509; /* je: equal / zero */

loc_00103501:
    esi = esi | 0x8000;
    goto loc_0010350F;

loc_00103509:
    esi = esi & 0x7FFF;

loc_0010350F:
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(edi + 0xE) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010353D; /* jbe: below or equal (unsigned <=) */

loc_00103525:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0010354D;

loc_0010353D:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0010354D:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0010355C:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0010356D; /* je: equal / zero */

loc_00103565:
    esi = esi | 0x8000;
    goto loc_00103573;

loc_0010356D:
    esi = esi & 0x7FFF;

loc_00103573:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(edi + 0x10) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001035A1; /* jbe: below or equal (unsigned <=) */

loc_00103589:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_001035B1;

loc_001035A1:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001035B1:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001035C0:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001035D1; /* je: equal / zero */

loc_001035C9:
    esi = esi | 0x8000;
    goto loc_001035D7;

loc_001035D1:
    esi = esi & 0x7FFF;

loc_001035D7:
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(edi + 0x12) = LO16(esi);
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00103605; /* jbe: below or equal (unsigned <=) */

loc_001035ED:
    esi = (uint32_t)(-(int32_t)esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00103615;

loc_00103605:
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00103615:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00103624:
    esi = esi << 8;
    esi = esi - eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00103646; /* je: equal / zero */

loc_0010362D:
    SET_LO8(eax, MEM8(ebp + 0xC));
    esi = esi | 0x8000;
    MEM16(edi + 0x14) = LO16(esi);
    MEM8(edi + 3) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00103646:
    SET_LO8(ecx, MEM8(ebp + 0xC));
    esi = esi & 0x7FFF;
    MEM16(edi + 0x14) = LO16(esi);
    MEM8(edi + 3) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
