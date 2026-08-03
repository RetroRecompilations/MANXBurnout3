#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00185360
 * Original: 0x00185360 - 0x00186023 (3267 bytes, 760 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00185360:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x160), 16); /* movaps */
    eax = MEM32(ebx + 0xCC0);
    ecx = MEM32(ebx + 0xCC4);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x190));
    memcpy((void *)XBOX_PTR(esp + 0x88), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x170), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 0x194); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x8C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x49C); /* addss */
    edx = edx & 0xFF;
    PUSH32(esp, esi);
    edx = edx << 4;
    PUSH32(esp, edi);
    edx = edx + 0x3A3BF8;
    eax = esp + 0x90;
    esi = edx;
    PUSH32(esp, eax);
    eax = esp + 0xA4;
    ecx = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = esi;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_001853F2:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    SET_LO8(edx, MEM8(ebx + 0x210));
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    ecx = esp + 0xC;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(esi + 0xE));
    eax = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM32(esp + 0x5C) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018549C; /* je: equal / zero */

loc_00185449:
    ecx = MEM32(ebx + 0x13F4);
    SET_LO8(edx, MEM8(ecx + 0x18FA));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0018549C; /* je: equal / zero */

loc_00185459:
    xmm1.f[0] = MEMF(0x3A35B8); /* movss */
    xmm0.f[0] = MEMF(esp + 0x84); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00185475; /* jb: below (unsigned <) */

loc_0018546F:
    MEM32(esp + 0x5C) = eax;
    goto loc_0018549C;

loc_00185475:
    /* comiss xmm0.f[0], MEMF(0x3A35E4) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3A35E4))) goto loc_00185488; /* jb: below (unsigned <) */

loc_0018547E:
    MEM32(esp + 0x5C) = 0x18;
    goto loc_0018549C;

loc_00185488:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1714); /* mulss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x5C) = edx;

loc_0018549C:
    edi = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xCC0);
    xmm0.f[0] = MEMF(edi + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xBC); /* mulss */
    eax = eax + 0x5C;
    ecx = esp + 0x88;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_001854CA:
    eax = MEM32(edi + 0x64558);
    ecx = MEM32(edi + 0x6455C);
    esi = edi + 0x64558;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_001854FD; /* jge: greater or equal (signed >=) */

loc_001854F7:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001854FD:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp + 0x10;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm5, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B178C) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    if ((xmm0.f[0] <= MEMF(0x3B178C))) goto loc_0018561E; /* jbe: below or equal (unsigned <=) */

loc_00185590:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A360C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A360C))) goto loc_0018561E; /* jbe: below or equal (unsigned <=) */

loc_0018559F:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x11B0), 16); /* movaps */
    eax = ebx + 0x11B0;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm5, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x41A528); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm1.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esp + 0x10))) goto loc_00185617; /* jbe: below or equal (unsigned <=) */

loc_001855E9:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    edx = edi + 0x5B9B0;
    edi = eax;
    PUSH32(esp, 0); sub_00044EF0(); /* call 0x00044EF0 */

loc_00185604:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    edi = MEM32(ebp + 8);

loc_00185617:
    memcpy((void *)XBOX_PTR(ebx + 0x11B0), xmm2.b, 16); /* movaps */

loc_0018561E:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B194C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B194C))) goto loc_00185B86; /* jbe: below or equal (unsigned <=) */

loc_00185631:
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00185B86; /* je: equal / zero */

loc_0018563D:
    SET_LO8(eax, MEM8(ebp + 0xC));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm4.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001857BC; /* je: equal / zero */

loc_0018566C:
    eax = esi;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185673:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0018568E:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001856A9:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001856C0:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185717:
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(ebx + 0xCC4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ecx + 0x1017;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x78;
    edx = esp + 0x58;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_001857BA:
    goto loc_0018580C;

loc_001857BC:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39B2B0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00185A03; /* jp: parity */

loc_0018580C:
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_00185832; /* jge: greater or equal (signed >=) */

loc_0018582C:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185832:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00185872; /* jge: greater or equal (signed >=) */

loc_0018586C:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185872:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001858B2; /* jge: greater or equal (signed >=) */

loc_001858AC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001858B2:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esi) = eax;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001858EE; /* jge: greater or equal (signed >=) */

loc_001858E8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001858EE:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1708); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_00185967; /* jge: greater or equal (signed >=) */

loc_00185961:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00185967:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(ebx + 0xCC4);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = edx + 0x1018;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x78;
    eax = esp + 0x58;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = 3;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00185A00:
    xmm3.f[0] = 0.0f; /* xorps self = zero */

loc_00185A03:
    edx = MEM32(esp + 0x38);
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_00185B35; /* jbe: below or equal (unsigned <=) */

loc_00185A15:
    eax = esi;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185A1C:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185A37:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185A52:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185A69:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 0x38);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69BC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A69BC))) goto loc_00185B35; /* jbe: below or equal (unsigned <=) */

loc_00185ABD:
    eax = esi;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00185AC4:
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebx + 0xCC4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 0x1019;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = esp + 0x58;
    ecx = esp + 0x88;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = 4;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00185B35:
    edx = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edx + 0xC));
    if (CMP_EQ(LO8(eax), 0x1A)) goto loc_00185B86; /* je: equal / zero */

loc_00185B40:
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebx + 0xCC4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = edx + 0x101A;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3E99999A);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = SX8(LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00185B86:
    eax = MEM32(ebx + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00185C6D; /* je: equal / zero */

loc_00185B9A:
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0xB0), 16); /* movaps */
    ecx = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = 0x80000000u;
    esi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A20); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 8))) goto loc_00185C6D; /* jbe: below or equal (unsigned <=) */

loc_00185C09:
    xmm0.f[0] = MEMF(esp + 0x84); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A3614) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A3614))) goto loc_00185C6D; /* jbe: below or equal (unsigned <=) */

loc_00185C1B:
    ecx = MEM32(esp + 0x3C);
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43480000);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = esp + 0x10;
    xmm0.f[0] = MEMF(eax); /* movss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, edi);
    ecx = 3;
    eax = esp + 0x5C;
    memcpy((void *)XBOX_PTR(esp + 0x5C), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_00185C6D:
    PUSH32(esp, 0x60E010);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00187E40(); /* call 0x00187E40 */

loc_00185C7A:
    eax = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_00185CB9; /* je: equal / zero */

loc_00185C82:
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001834E0(); /* call 0x001834E0 */

loc_00185CB9:
    edx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F270);
    esi = ebx;
    PUSH32(esp, 0); sub_0014D0F0(); /* call 0x0014D0F0 */

loc_00185CCD:
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018601B; /* je: equal / zero */

loc_00185CD8:
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    /* comiss xmm0.f[0], MEMF(0x3A7950) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A7950))) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00185CF5:
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x170), 16); /* movaps */
    ecx = MEM32(ebx + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xB0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = MEM32(ebx + 0x13F4);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(eax + 0x27D0);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00185F1A; /* je: equal / zero */

loc_00185E13:
    ecx = MEM32(0x3C848C);
    ecx = ecx - 0;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C8490); /* mulss */
    if ((ecx == 0)) goto loc_00185ECB; /* je: equal / zero */

loc_00185E2A:
    ecx--;
    if ((ecx != 0)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185E31:
    SET_LO8(ecx, MEM8(0x4AED88));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185E3F:
    SET_LO8(ecx, MEM8(0x752D33));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185E4D:
    ecx = MEM32(0x557A70);
    if (TEST_NZ(ecx, ecx)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185E5B:
    eax = SX8(LO8(eax));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* je: equal / zero */

loc_00185E73:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00185E88:
    xmm1.f[0] = MEMF(0x3C8494); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CD0); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00185EBF:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00185ECB:
    SET_LO8(ecx, MEM8(0x4AED88));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185ED9:
    SET_LO8(ecx, MEM8(0x752D33));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185EE7:
    ecx = MEM32(0x557A70);
    if (TEST_NZ(ecx, ecx)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185EF5:
    eax = SX8(LO8(eax));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0018601B; /* je: equal / zero */

loc_00185F0D:
    xmm0.f[0] = MEMF(0x3C8494); /* movss */
    goto loc_00186008;

loc_00185F1A:
    ecx = MEM32(0x4A1CC8);
    ecx = ecx - 0;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C8484); /* mulss */
    if ((ecx == 0)) goto loc_00185FCE; /* je: equal / zero */

loc_00185F31:
    ecx--;
    if ((ecx != 0)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185F38:
    SET_LO8(ecx, MEM8(0x4AED88));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185F46:
    SET_LO8(ecx, MEM8(0x752D33));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185F54:
    ecx = MEM32(0x557A70);
    if (TEST_NZ(ecx, ecx)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185F62:
    eax = SX8(LO8(eax));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* je: equal / zero */

loc_00185F7A:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00185F8F:
    xmm1.f[0] = MEMF(0x3C8488); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CCC); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00185FC2:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00185FCE:
    SET_LO8(ecx, MEM8(0x4AED88));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185FD8:
    SET_LO8(ecx, MEM8(0x752D33));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185FE2:
    ecx = MEM32(0x557A70);
    if (TEST_NZ(ecx, ecx)) goto loc_0018601B; /* jne: not equal / not zero */

loc_00185FEC:
    eax = SX8(LO8(eax));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0018601B; /* je: equal / zero */

loc_00186000:
    xmm0.f[0] = MEMF(0x3C8488); /* movss */

loc_00186008:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED68) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED68))) goto loc_0018601B; /* jbe: below or equal (unsigned <=) */

loc_00186012:
    MEMF(eax * 4 + 0x4AED68) = xmm0.f[0]; /* movss */

loc_0018601B:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
