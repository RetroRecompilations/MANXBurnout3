#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC700
 * Original: 0x001CC700 - 0x001CC909 (521 bytes, 149 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC700(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CC700:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(ecx, MEM8(esi + 0x37));
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(ecx, LO8(ecx) & 0xDF);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esi + 0x37) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CC8E7; /* jne: not equal / not zero */

loc_001CC719:
    eax = ZX8(MEM8(esi + 0x36));
    eax = eax << 3;
    /* test LO8(ecx), 0x10 - flags set for next jcc */
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_001CC767; /* je: equal / zero */

loc_001CC73B:
    xmm1.f[0] = MEMF(esi + 0x20); /* movss */
    eax = MEM32(esi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC7AE; /* je: equal / zero */

loc_001CC756:
    xmm1.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_001CC7A1;

loc_001CC767:
    xmm2.f[0] = MEMF(esi + 0x20); /* movss */
    xmm1.f[0] = MEMF(0x4A1EEC); /* movss */
    edx = MEM32(esi + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + 0x78) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC7AE; /* je: equal / zero */

loc_001CC78E:
    xmm2.f[0] = MEMF(esi + 0x20); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_001CC7A1:
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC7AB:
    esp = esp + 0x10;

loc_001CC7AE:
    SET_LO8(eax, MEM8(esi + 0x3F));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esi + 0x1C); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CC7C2; /* jne: not equal / not zero */

loc_001CC7BA:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1EF0); /* mulss */

loc_001CC7C2:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001CC7E3; /* ja: above (unsigned >) */

loc_001CC7D6:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CC7E9; /* jbe: below or equal (unsigned <=) */

loc_001CC7E3:
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_001CC7E9:
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CC7F8:
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0x85) = LO8(eax);
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC81D; /* je: equal / zero */

loc_001CC80B:
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC81A:
    esp = esp + 0x10;

loc_001CC81D:
    SET_LO8(eax, MEM8(esi + 0x37));
    if (TEST_Z(LO8(eax), 2)) goto loc_001CC858; /* je: equal / zero */

loc_001CC824:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001CC8E7; /* jbe: below or equal (unsigned <=) */

loc_001CC840:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001CC84B:
    SET_LO8(eax, MEM8(esi + 0x37));
    esp = esp + 8;
    SET_LO8(eax, LO8(eax) & 0xFC);
    goto loc_001CC8E4;

loc_001CC858:
    if (TEST_Z(LO8(eax), 4)) goto loc_001CC8E7; /* je: equal / zero */

loc_001CC860:
    xmm0.f[0] = MEMF(esi + 0x24); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_001CC8DA; /* jbe: below or equal (unsigned <=) */

loc_001CC86E:
    edi = MEM32(esi + 0xC);
    if (TEST_Z(MEM8(edi + 0x8A), 2)) goto loc_001CC8E2; /* je: equal / zero */

loc_001CC87A:
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = ZX8(MEM8(edi + 0x85));
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CC8A6:
    MEM8(edi + 0x85) = LO8(eax);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC8C8; /* je: equal / zero */

loc_001CC8B6:
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC8C5:
    esp = esp + 0x10;

loc_001CC8C8:
    xmm0.f[0] = MEMF(esi + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_001CC8E7;

loc_001CC8DA:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001CC8DF:
    SET_LO8(eax, MEM8(esi + 0x37));

loc_001CC8E2:
    SET_LO8(eax, LO8(eax) & 0xFB);

loc_001CC8E4:
    MEM8(esi + 0x37) = LO8(eax);

loc_001CC8E7:
    eax = esi;
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001CC8EE:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CC8FE; /* jne: not equal / not zero */

loc_001CC8F2:
    SET_LO8(eax, MEM8(esi + 0x37));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_001CC8FE; /* jns: not sign (positive) */

loc_001CC8F9:
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(esi + 0x37) = LO8(eax);

loc_001CC8FE:
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CC903:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
