#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CCED0
 * Original: 0x001CCED0 - 0x001CD0CD (509 bytes, 154 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCED0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CCED0:
    eax = ZX8(MEM8(esi + 0x34));
    esp = esp - 8;
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_001CCFB2; /* je: equal / zero */

loc_001CCEDF:
    eax = eax - 2;
    if ((eax != 0)) goto loc_001CD0C8; /* jne: not equal / not zero */

loc_001CCEE8:
    if (TEST_NZ(MEM8(esi + 0x37), 8)) goto loc_001CCEF7; /* jne: not equal / not zero */

loc_001CCEEE:
    MEM8(esi + 0x34) = 0;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001CCEF7:
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CCF30; /* jne: not equal / not zero */

loc_001CCEFE:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001CCF09:
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    MEM32(ecx + 0x6C) = edx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x60);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CCF30; /* je: equal / zero */

loc_001CCF1F:
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CCF2D:
    esp = esp + 0x10;

loc_001CCF30:
    if (CMP_AE(MEM8(esi + 0x35), 5)) goto loc_001CCFA5; /* jae: above or equal (unsigned >=) */

loc_001CCF36:
    eax = esi;
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001CCF3D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CCFA5; /* je: equal / zero */

loc_001CCF41:
    edi = MEM32(esi + 0xC);
    eax = ZX8(MEM8(esi + 0x35));
    edx = ZX8(MEM8(edi + 0x85));
    SET_LO8(ecx, MEM8(esi + 0x3E));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    /* cmp LO8(ecx), MEM8(0x3F7BD6) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69B4); /* mulss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_AE(LO8(ecx), MEM8(0x3F7BD6))) goto loc_001CCF85; /* jae: above or equal (unsigned >=) */

loc_001CCF7C:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_001CCF85:
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CCF94:
    MEM8(edi + 0x85) = LO8(eax);
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    goto loc_001CD059;

loc_001CCFA5:
    MEM8(esi + 0x34) = 0;
    MEM8(esi + 0x35) = 0;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001CCFB2:
    SET_LO8(ecx, MEM8(esi + 0x35));
    if (CMP_AE(LO8(ecx), 5)) goto loc_001CD077; /* jae: above or equal (unsigned >=) */

loc_001CCFBE:
    SET_LO8(eax, MEM8(esi + 0x37));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001CCFDB; /* je: equal / zero */

loc_001CCFC5:
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_001CCFEF; /* js: sign (negative) */

loc_001CCFC9:
    SET_LO8(eax, LO8(eax) & 0xF7);
    MEM8(esi + 0x37) = LO8(eax);
    MEM8(esi + 0x34) = 2;
    MEM8(esi + 0x35) = 0;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001CCFDB:
    edx = MEM32(esi + 0xC);
    SET_LO8(edx, MEM8(edx + 0x8A));
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esp + 7) = LO8(edx);
    if ((LO8(edx) == 0)) goto loc_001CCFC9; /* je: equal / zero */

loc_001CCFEF:
    edi = MEM32(esi + 0xC);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, MEM8(esi + 0x3E));
    eax = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(edi + 0x85));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69B4); /* mulss */
    /* cmp LO8(edx), MEM8(0x3F7BD6) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if (CMP_AE(LO8(edx), MEM8(0x3F7BD6))) goto loc_001CD03E; /* jae: above or equal (unsigned >=) */

loc_001CD035:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_001CD03E:
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CD04D:
    MEM8(edi + 0x85) = LO8(eax);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x60);

loc_001CD059:
    if (TEST_Z(eax, eax)) goto loc_001CD06F; /* je: equal / zero */

loc_001CD05D:
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CD06C:
    esp = esp + 0x10;

loc_001CD06F:
    MEM8(esi + 0x35) = MEM8(esi + 0x35) + 1;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001CD077:
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001CD0C0; /* je: equal / zero */

loc_001CD081:
    MEM8(esi + 0x37) = MEM8(esi + 0x37) | 8;
    ecx = MEM32(eax + 0x60);
    if (TEST_Z(ecx, ecx)) goto loc_001CD0A6; /* je: equal / zero */

loc_001CD08C:
    if (TEST_Z(MEM8(eax + 0x8A), 2)) goto loc_001CD0A6; /* je: equal / zero */

loc_001CD095:
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FBBB0(); /* call 0x001FBBB0 */

loc_001CD0A1:
    esp = esp + 0x10;
    goto loc_001CD0A9;

loc_001CD0A6:
    eax = MEM32(eax + 0x6C);

loc_001CD0A9:
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x6C) = eax;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001CD0BD:
    esp = esp + 8;

loc_001CD0C0:
    MEM8(esi + 0x34) = 2;
    MEM8(esi + 0x35) = 0;

loc_001CD0C8:
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
