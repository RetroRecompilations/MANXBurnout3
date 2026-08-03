#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019F560
 * Original: 0x0019F560 - 0x0019FE9F (2367 bytes, 531 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F560(void)
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

loc_0019F560:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    SET_LO8(ecx, MEM8(edi + 0x46));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019FE97; /* je: equal / zero */

loc_0019F576:
    eax = ZX8(MEM8(edi + 0x4A));
    ebx = eax + eax * 2;
    ebx = ebx << 7;
    ebx = ebx + 0x625FB0;
    /* test MEM8(ebx + 0x174), 4 - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    if (TEST_Z(MEM8(ebx + 0x174), 4)) goto loc_0019F5F0; /* je: equal / zero */

loc_0019F593:
    if (CMP_EQ(MEM8(ebx + 0x173), 8)) goto loc_0019F5F0; /* je: equal / zero */

loc_0019F59C:
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5958); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x2C); /* addss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* maxss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0019F5F0:
    eax = ZX8(MEM8(edi + 0x49));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x642C10;
    /* cmp LO8(ecx), 2 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0019F623; /* je: equal / zero */

loc_0019F608:
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0019F623; /* je: equal / zero */

loc_0019F60D:
    if (CMP_EQ(LO8(ecx), 7)) goto loc_0019F623; /* je: equal / zero */

loc_0019F612:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(edi + 0x46) = 1;
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */

loc_0019F623:
    SET_LO8(eax, MEM8(0x649B98));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019F644; /* je: equal / zero */

loc_0019F62C:
    xmm0.f[0] = MEMF(0x3A7964); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1690); /* movss */
    goto loc_0019F65A;

loc_0019F644:
    xmm0.f[0] = MEMF(0x3B175C); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */

loc_0019F65A:
    /* test MEM8(ebx + 0x174), 6 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_NZ(MEM8(ebx + 0x174), 6)) goto loc_0019FA05; /* jne: not equal / not zero */

loc_0019F66D:
    eax = MEM32(ebp + 8);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0019F837; /* jle: less or equal (signed <=) */

loc_0019F680:
    eax = MEM32(esp + 0x24);
    esi = MEM32(eax * 4 + 0x731E90);
    eax = MEM32(esp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1390), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    ecx = esp + 0x2C;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x30;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F714:
    xmm2.f[0] = MEMF(esp + 0x30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F726:
    eax = MEM32(esi + 0x13A0);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xE88); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B1688); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x34) ? xmm0.f[0] : MEMF(esp + 0x34)); /* maxss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm2.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F783:
    if (CMP_EQ(MEM8(edi + 0x46), 1)) goto loc_0019F793; /* je: equal / zero */

loc_0019F789:
    /* comiss xmm0.f[0], MEMF(edi + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edi + 0x10))) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F793:
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019F7B1; /* jne: not equal / not zero */

loc_0019F79A:
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019F7B1; /* jne: not equal / not zero */

loc_0019F7A1:
    eax = edi;
    MEM8(edi + 0x46) = 4;
    PUSH32(esp, 0); sub_0019FEC0(); /* call 0x0019FEC0 */

loc_0019F7AC:
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */

loc_0019F7B1:
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0019F7BE:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F7CC:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F7D7:
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_0019F80A; /* jbe: below or equal (unsigned <=) */

loc_0019F7FC:
    xmm0.f[0] = MEMF(edi + 0x2C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A7F34) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3A7F34))) goto loc_0019F820; /* ja: above (unsigned >) */

loc_0019F80A:
    eax = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 8);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(eax, ecx)) goto loc_0019F680; /* jl: less (signed <) */

loc_0019F81E:
    goto loc_0019F837;

loc_0019F820:
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    ebx = esi;
    PUSH32(esp, ecx);
    esi = 0x64B310;
    PUSH32(esp, 0); sub_00111750(); /* call 0x00111750 */

loc_0019F833:
    ebx = MEM32(esp + 0x20);

loc_0019F837:
    if (TEST_NZ(MEM8(ebx + 0x174), 2)) goto loc_0019FA05; /* jne: not equal / not zero */

loc_0019F844:
    eax = MEM32(0x73A19C);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0019FA05; /* jle: less or equal (signed <=) */

loc_0019F85C:
    /* nop */

loc_0019F860:
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx * 4 + 0x73A1A8);
    if (TEST_Z(esi, esi)) goto loc_0019F9CA; /* je: equal / zero */

loc_0019F873:
    SET_LO8(eax, MEM8(esi + 0x18FA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019F9CA; /* je: equal / zero */

loc_0019F881:
    eax = MEM32(esp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0019F89E:
    ecx = MEM32(esp + 0x14);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0x3C;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F8DB:
    xmm2.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F8ED:
    eax = MEM32(esi + 0x50);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xE88); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B1688); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x38) ? xmm0.f[0] : MEMF(esp + 0x38)); /* maxss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm2.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F947:
    if (CMP_EQ(MEM8(edi + 0x46), 1)) goto loc_0019F953; /* je: equal / zero */

loc_0019F94D:
    /* comiss xmm0.f[0], MEMF(edi + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edi + 0x10))) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F953:
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019F971; /* jne: not equal / not zero */

loc_0019F95A:
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019F971; /* jne: not equal / not zero */

loc_0019F961:
    eax = edi;
    MEM8(edi + 0x46) = 4;
    PUSH32(esp, 0); sub_0019FEC0(); /* call 0x0019FEC0 */

loc_0019F96C:
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */

loc_0019F971:
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0019F97E:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F98C:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F997:
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x24))) goto loc_0019F9CA; /* jbe: below or equal (unsigned <=) */

loc_0019F9BC:
    xmm0.f[0] = MEMF(edi + 0x2C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A7F34) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3A7F34))) goto loc_0019F9E0; /* ja: above (unsigned >) */

loc_0019F9CA:
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 8);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, ecx)) goto loc_0019F860; /* jl: less (signed <) */

loc_0019F9DE:
    goto loc_0019FA05;

loc_0019F9E0:
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    ecx = eax + eax * 2;
    PUSH32(esp, 1);
    ecx = ecx << 4;
    ebx = MEM32(ecx + 0x64B38C);
    PUSH32(esp, edx);
    esi = 0x64B310;
    PUSH32(esp, 0); sub_00111750(); /* call 0x00111750 */

loc_0019FA01:
    ebx = MEM32(esp + 0x20);

loc_0019FA05:
    SET_LO8(eax, MEM8(edi + 0x44));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019FB60; /* je: equal / zero */

loc_0019FA10:
    if (TEST_NZ(MEM8(ebx + 0x174), 4)) goto loc_0019FB60; /* jne: not equal / not zero */

loc_0019FA1D:
    esi = MEM32(esp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x642C40), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ecx = esp + 0x3C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x63DCBC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A2D50); /* subss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm1.f[0] = MEMF(edi + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019FB67; /* jbe: below or equal (unsigned <=) */

loc_0019FAC7:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x14); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5600); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x63DCDC); /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019FB67; /* jbe: below or equal (unsigned <=) */

loc_0019FB31:
    /* comiss xmm3.f[0], MEMF(edi + 0x10) - sets EFLAGS */
    if ((xmm3.f[0] > MEMF(edi + 0x10))) goto loc_0019FB42; /* ja: above (unsigned >) */

loc_0019FB37:
    xmm1.f[0] = MEMF(edi + 0x10); /* movss */
    /* comiss xmm1.f[0], MEMF(edi + 4) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(edi + 4))) goto loc_0019FB67; /* jbe: below or equal (unsigned <=) */

loc_0019FB42:
    edx = MEM32(edi + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E38); /* mulss */
    MEM32(edi + 0x10) = edx;
    MEM8(edi + 0x46) = 3;
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0019FB67;

loc_0019FB60:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x14);

loc_0019FB67:
    SET_LO8(eax, MEM8(edi + 0x40));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019FC04; /* je: equal / zero */

loc_0019FB72:
    if (TEST_NZ(MEM8(ebx + 0x174), 4)) goto loc_0019FC04; /* jne: not equal / not zero */

loc_0019FB7F:
    eax = ZX8(LO8(eax));
    ebx = eax + eax * 2;
    SET_LO8(eax, MEM8(0x649B97));
    ebx = ebx << 7;
    ebx = ebx + 0x625FB0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019FBB7; /* je: equal / zero */

loc_0019FB97:
    ecx = MEM32(ebx + 0x114);
    if (TEST_Z(ecx, ecx)) goto loc_0019FBB1; /* je: equal / zero */

loc_0019FBA1:
    edx = edi;
    PUSH32(esp, 0); sub_001A0F50(); /* call 0x001A0F50 */

loc_0019FBA8:
    /* comiss xmm0.f[0], MEMF(0x3B16B4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16B4))) goto loc_0019FC04; /* jbe: below or equal (unsigned <=) */

loc_0019FBB1:
    MEM8(edi + 0x40) = 0xFF;
    goto loc_0019FC04;

loc_0019FBB7:
    SET_LO8(eax, MEM8(ebx + 0x5E));
    if (CMP_EQ(LO8(eax), MEM8(edi + 0x41))) goto loc_0019FBF7; /* je: equal / zero */

loc_0019FBBF:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esi;
    ecx = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0019FBDA:
    xmm1.f[0] = MEMF(0x3B1E34); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0019FBF0; /* ja: above (unsigned >) */

loc_0019FBE7:
    /* comiss xmm0.f[0], MEMF(0x3A5A48) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A5A48))) goto loc_0019FBF4; /* jbe: below or equal (unsigned <=) */

loc_0019FBF0:
    MEM8(edi + 0x40) = 0xFF;

loc_0019FBF4:
    xmm3.f[0] = 0.0f; /* xorps self = zero */

loc_0019FBF7:
    if (TEST_Z(MEM8(ebx + 0x17A), 1)) goto loc_0019FC04; /* je: equal / zero */

loc_0019FC00:
    MEM8(edi + 0x40) = 0;

loc_0019FC04:
    if (CMP_EQ(MEM8(edi + 0x40), 0xFF)) goto loc_0019FD21; /* je: equal / zero */

loc_0019FC0E:
    if (TEST_NZ(MEM8(ebx + 0x174), 4)) goto loc_0019FD21; /* jne: not equal / not zero */

loc_0019FC1B:
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019FC33; /* je: equal / zero */

loc_0019FC24:
    ecx = MEM32(ebx + 0x114);
    edx = edi;
    PUSH32(esp, 0); sub_001A0F50(); /* call 0x001A0F50 */

loc_0019FC31:
    goto loc_0019FC57;

loc_0019FC33:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0019FC4C:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A2D50); /* subss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */

loc_0019FC57:
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x14); /* movss */
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0019FD21; /* jbe: below or equal (unsigned <=) */

loc_0019FC89:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x14); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xC4); /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0019FD21; /* jbe: below or equal (unsigned <=) */

loc_0019FCF6:
    /* comiss xmm3.f[0], MEMF(edi + 0x10) - sets EFLAGS */
    if ((xmm3.f[0] > MEMF(edi + 0x10))) goto loc_0019FD06; /* ja: above (unsigned >) */

loc_0019FCFC:
    xmm2.f[0] = MEMF(edi + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0019FD21; /* jbe: below or equal (unsigned <=) */

loc_0019FD06:
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E38); /* mulss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    MEM8(edi + 0x46) = 5;
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */

loc_0019FD21:
    eax = ZX8(MEM8(edi + 0x46));
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 5)) goto loc_0019FDD5; /* ja: above (unsigned >) */

loc_0019FD31:
    { uint32_t _jt = MEM32(eax * 4 + 0x19FEA0); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0019FD38u) goto loc_0019FD38;
    if (_jt == 0x0019FD78u) goto loc_0019FD78;
    if (_jt == 0x0019FD83u) goto loc_0019FD83;
    if (_jt == 0x0019FDA9u) goto loc_0019FDA9;
    if (_jt == 0x0019FE5Fu) goto loc_0019FE5F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019FD38:
    xmm0.f[0] = MEMF(edi + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* minss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    goto loc_0019FE5A;

loc_0019FD78:
    ecx = MEM32(edi + 0x1C);
    MEM32(edi + 0x18) = ecx;
    goto loc_0019FE5F;

loc_0019FD83:
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5958); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC08); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */

loc_0019FD9C:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E38); /* mulss */
    goto loc_0019FE5A;

loc_0019FDA9:
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5958); /* mulss */
    /* test MEM8(edi + 0x4B), 4 - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2AB4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    if (TEST_Z(MEM8(edi + 0x4B), 4)) goto loc_0019FD9C; /* je: equal / zero */

loc_0019FDC8:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E30); /* mulss */
    goto loc_0019FE5A;

loc_0019FDD5:
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5958); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x2C); /* subss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019FE15; /* jne: not equal / not zero */

loc_0019FDF4:
    if (CMP_EQ(MEM8(edi + 0x47), 0xFF)) goto loc_0019FE15; /* je: equal / zero */

loc_0019FDFA:
    eax = MEM32(edi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0019FE15; /* je: equal / zero */

loc_0019FE01:
    esi = edi;
    PUSH32(esp, 0); sub_001A0B70(); /* call 0x001A0B70 */

loc_0019FE08:
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x18); /* addss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */

loc_0019FE15:
    xmm0.f[0] = MEMF(0x39C16C); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1720); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x38) ? xmm0.f[0] : MEMF(esp + 0x38)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* minss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */

loc_0019FE5A:
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */

loc_0019FE5F:
    xmm0.f[0] = MEMF(edi + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x2C); /* addss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */

loc_0019FE97:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
