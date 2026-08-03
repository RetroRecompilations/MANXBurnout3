#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC910
 * Original: 0x001CC910 - 0x001CCD91 (1153 bytes, 363 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC910(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC910:
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(ebp + 0x37));
    SET_LO8(eax, LO8(eax) & 0xEB);
    SET_LO8(eax, LO8(eax) | 0x80);
    MEM8(ebp + 0x37) = LO8(eax);
    eax = MEM32(0x4A1EE8);
    ecx = eax;
    MEM32(ebp + 0x14) = ecx;
    SET_LO8(ecx, MEM8(ebx + 0x44));
    eax++;
    MEM32(0x4A1EE8) = eax;
    MEM8(ebp + 0x36) = LO8(ecx);
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + 0x10) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_001CC951:
    eax = ZX8(MEM8(ebp + 0x36));
    SET_LO8(edx, MEM8(ebx + 0x45));
    eax = eax << 3;
    xmm3.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    esp = esp + 8;
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    esi = ecx;
    /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x8A));
    if (TEST_Z(esi, esi)) goto loc_001CC995; /* je: equal / zero */

loc_001CC990:
    SET_LO8(ecx, LO8(ecx) | 4);
    goto loc_001CC998;

loc_001CC995:
    SET_LO8(ecx, LO8(ecx) & 0xFB);

loc_001CC998:
    MEM8(eax + 0x8A) = LO8(ecx);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC9BC; /* je: equal / zero */

loc_001CC9A8:
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC9B3:
    xmm3.f[0] = MEMF(esp + 0x4C); /* movss */
    esp = esp + 0x10;

loc_001CC9BC:
    /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x37));
    if (TEST_Z(esi, esi)) goto loc_001CC9C7; /* je: equal / zero */

loc_001CC9C3:
    SET_LO8(eax, LO8(eax) | 0x40);
    goto loc_001CC9C9;

loc_001CC9C7:
    SET_LO8(eax, LO8(eax) & 0xBF);

loc_001CC9C9:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM8(ebp + 0x37) = LO8(eax);
    xmm0.f[0] = MEMF(ebx + 0x24); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001CC9E1; /* jb: below (unsigned <) */

loc_001CC9D9:
    eax = MEM32(ebx + 0x24);
    MEM32(ebp + 0x20) = eax;
    goto loc_001CC9FA;

loc_001CC9E1:
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001CC9F7; /* jge: greater or equal (signed >=) */

loc_001CC9F1:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CC9F7:
    MEMF(ebp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */

loc_001CC9FA:
    xmm0.f[0] = MEMF(0x4A1EEC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x20); /* mulss */
    xmm2.f[0] = MEMF(0x3B16CC); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] < xmm0.f[0])) goto loc_001CCA29; /* jb: below (unsigned <) */

loc_001CCA20:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */

loc_001CCA29:
    ecx = MEM32(ebp + 0xC);
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCA56; /* je: equal / zero */

loc_001CCA3B:
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCA4A:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(esp + 0x4C); /* movss */
    esp = esp + 0x10;

loc_001CCA56:
    xmm0.f[0] = MEMF(ebx + 0x1C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001CCA8B; /* jb: below (unsigned <) */

loc_001CCA68:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001CCA7C; /* jbe: below or equal (unsigned <=) */

loc_001CCA72:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_001CCA90;

loc_001CCA7C:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001CCA84; /* jbe: below or equal (unsigned <=) */

loc_001CCA81:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_001CCA84:
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_001CCA90;

loc_001CCA8B:
    MEMF(ebp + 0x1C) = xmm1.f[0]; /* movss */

loc_001CCA90:
    SET_LO8(eax, MEM8(ebp + 0x3F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CCAA1; /* je: equal / zero */

loc_001CCA97:
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 0x1C); /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    goto loc_001CCAB2;

loc_001CCAA1:
    xmm0.f[0] = MEMF(0x4A1EF0); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x1C); /* mulss */

loc_001CCAB2:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001CCABF; /* jbe: below or equal (unsigned <=) */

loc_001CCAB7:
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    goto loc_001CCAD0;

loc_001CCABF:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    if ((xmm0.f[0] > xmm2.f[0])) goto loc_001CCAD0; /* ja: above (unsigned >) */

loc_001CCACA:
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */

loc_001CCAD0:
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CCADF:
    edx = MEM32(ebp + 0xC);
    MEM8(edx + 0x85) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCB04; /* je: equal / zero */

loc_001CCAF2:
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCB01:
    esp = esp + 0x10;

loc_001CCB04:
    xmm0.f[0] = MEMF(ebx + 0x3C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCB37; /* jp: parity */

loc_001CCB16:
    edx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(edx + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCB5B; /* je: equal / zero */

loc_001CCB30:
    PUSH32(esp, 0x41200000);
    goto loc_001CCB4E;

loc_001CCB37:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebx + 0x3C);
    MEM32(ecx + 0x7C) = edx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCB5B; /* je: equal / zero */

loc_001CCB4A:
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);

loc_001CCB4E:
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCB58:
    esp = esp + 0x10;

loc_001CCB5B:
    xmm0.f[0] = MEMF(ebx + 0x38); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCBAB; /* jp: parity */

loc_001CCB6D:
    edx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(edx + 0x80) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCB9C; /* je: equal / zero */

loc_001CCB8A:
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCB99:
    esp = esp + 0x10;

loc_001CCB9C:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_001CCBD8;

loc_001CCBAB:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebx + 0x38);
    MEM32(ecx + 0x80) = edx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCBD2; /* je: equal / zero */

loc_001CCBC1:
    ecx = MEM32(ebx + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCBCF:
    esp = esp + 0x10;

loc_001CCBD2:
    edx = MEM32(ebx + 0x38);
    MEM32(ebp + 0x2C) = edx;

loc_001CCBD8:
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    ecx = ebx + 0xC;
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCC4C; /* jp: parity */

loc_001CCBF1:
    xmm1.f[0] = MEMF(ebx + 0x10); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCC4C; /* jp: parity */

loc_001CCBFF:
    xmm1.f[0] = MEMF(ebx + 0x14); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCC4C; /* jp: parity */

loc_001CCC0D:
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = eax + 0x3C;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCC7C; /* je: equal / zero */

loc_001CCC46:
    ecx = esp + 0x10;
    goto loc_001CCC6E;

loc_001CCC4C:
    edx = MEM32(ebp + 0xC);
    edx = edx + 0x3C;
    eax = ecx;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCC7C; /* je: equal / zero */

loc_001CCC6E:
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001CCC79:
    esp = esp + 0x10;

loc_001CCC7C:
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x30;
    ecx = ebx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCCAC; /* je: equal / zero */

loc_001CCC9E:
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001CCCA9:
    esp = esp + 0x10;

loc_001CCCAC:
    eax = MEM32(ebx + 0x40);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001CCD23; /* je: equal / zero */

loc_001CCCB8:
    eax = MEM32(ebx + 0x18);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    esi = esi + 0x10;
    ecx = 7;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX8(MEM8(esp + 0x2C));
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(esp + 0x28);
    /* test edx, edx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    /* FPU: fdivr dword ptr [0x3b16b0] */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001CCCF2; /* jge: greater or equal (signed >=) */

loc_001CCCEC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CCCF2:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CCCF9:
    ecx = MEM32(esp + 0x40);
    /* cmp ecx, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_AE(ecx, eax)) goto loc_001CCD23; /* jae: above or equal (unsigned >=) */

loc_001CCD02:
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x6C) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CCD23; /* je: equal / zero */

loc_001CCD12:
    edx = MEM32(ebx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCD20:
    esp = esp + 0x10;

loc_001CCD23:
    xmm1.f[0] = MEMF(ebx + 0x34); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001CCD3D; /* jbe: below or equal (unsigned <=) */

loc_001CCD30:
    eax = MEM32(ebx + 0x34);
    MEM32(ebp + 0x30) = eax;
    SET_LO8(eax, MEM8(ebp + 0x37));
    SET_LO8(eax, LO8(eax) | 3);
    goto loc_001CCD47;

loc_001CCD3D:
    SET_LO8(eax, MEM8(ebp + 0x37));
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) & 0xFD);

loc_001CCD47:
    /* test LO8(eax), 2 - flags set for next jcc */
    MEM8(ebp + 0x37) = LO8(eax);
    MEM8(ebp + 0x34) = 0;
    if (TEST_NZ(LO8(eax), 2)) goto loc_001CCD60; /* jne: not equal / not zero */

loc_001CCD52:
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001CCD5D:
    esp = esp + 8;

loc_001CCD60:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    esi = ebp;
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_001CCD84:
    POP32(esp, esi);
    MEM8(ebp + 0x3E) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
