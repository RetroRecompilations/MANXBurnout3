#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC130
 * Original: 0x001FC130 - 0x001FC393 (611 bytes, 186 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC130(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001FC130:
    SET_LO8(eax, MEM8(esi + 0x5D));
    esp = esp - 0x48;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM8(esi + 0x60) = 0;
    ebx = 1;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001FC251; /* jbe: below or equal (unsigned <=) */

loc_001FC148:
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(MEM8(eax + 0x54), 2)) goto loc_001FC285; /* je: equal / zero */

loc_001FC155:
    ecx = esi + 8;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    edx = esi + 0x14;
    eax = MEM32(edx);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x54);
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esi + 0x58);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(0x41B870);
    MEM32(esp + 0x50) = eax;
    eax = esp + 0x2C;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, eax);
    ecx = esi + -4000;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F79B0(); /* call 0x001F79B0 */

loc_001FC1B1:
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = esi + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    edx = esi + 0x2C;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(edx + 4) = ecx;
    ecx = ZX8(MEM8(esi + 0x5D));
    MEM32(esp + 0x1C) = ecx;
    MEM32(edx + 8) = eax;
    esp = esp + 0x18;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b16e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001FC24F; /* jne: not equal / not zero */

loc_001FC205:
    edx = ZX8(MEM8(esi + 0x5F));
    eax = ZX8(MEM8(esi + 0x5C));
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x3B168C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001FC24C:
    MEM8(esi + 0x60) = LO8(eax);

loc_001FC24F:
    /* fstp st(0) */

loc_001FC251:
    if (TEST_Z(MEM8(esi + 0x62), LO8(ebx))) goto loc_001FC31C; /* je: equal / zero */

loc_001FC25A:
    edx = ZX8(MEM8(esi + 0x60));
    MEM32(esp + 4) = edx;
    ecx = esi;
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* nop */

loc_001FC270:
    edx = MEM32(ecx);
    /* cmp edx, 0x41B850 - flags set for next jcc */
    edi = MEM32(ecx + 4);
    if (CMP_NE(edx, 0x41B850)) goto loc_001FC290; /* jne: not equal / not zero */

loc_001FC27D:
    fp_push(MEMF(0x3B1688)); /* fld float */
    goto loc_001FC2A2;

loc_001FC285:
    fp_push(MEMF(0x3B168C)); /* fld float */
    goto loc_001FC205;

loc_001FC290:
    eax = ZX8(MEM8(edx + 0x60));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_001FC2A2:
    if (CMP_NE(edi, 0x41B850)) goto loc_001FC2B4; /* jne: not equal / not zero */

loc_001FC2AA:
    MEM32(esp + 8) = 0xBF800000u;
    goto loc_001FC2CA;

loc_001FC2B4:
    eax = ZX8(MEM8(edi + 0x60));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_001FC2CA:
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001FC2DB; /* jne: not equal / not zero */

loc_001FC2D7:
    ecx = edx;
    goto loc_001FC270;

loc_001FC2DB:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001FC2EA; /* jp: parity */

loc_001FC2E6:
    ecx = edi;
    goto loc_001FC270;

loc_001FC2EA:
    /* cmp ecx, esi - flags set for next jcc */
    /* fstp st(0) */
    POP32(esp, edi);
    if (CMP_EQ(ecx, esi)) goto loc_001FC38B; /* je: equal / zero */

loc_001FC2F5:
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(edx) = eax;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    MEM32(esi) = ecx;
    eax = MEM32(ecx + 4);
    MEM32(eax) = esi;
    MEM32(ecx + 4) = esi;
    MEM8(esi + 0x62) = MEM8(esi + 0x62) | LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_001FC31C:
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x41B850);
    if (CMP_EQ(eax, 0x41B850)) goto loc_001FC357; /* je: equal / zero */

loc_001FC337:
    SET_LO8(ecx, MEM8(esi + 0x60));
    /* nop */

loc_001FC340:
    if (CMP_B(LO8(ecx), MEM8(eax + 0x60))) goto loc_001FC350; /* jb: below (unsigned <) */

loc_001FC345:
    eax = MEM32(eax);
    if (CMP_NE(eax, 0x41B850)) goto loc_001FC340; /* jne: not equal / not zero */

loc_001FC34E:
    goto loc_001FC357;

loc_001FC350:
    if (CMP_NE(eax, 0x41B850)) goto loc_001FC37B; /* jne: not equal / not zero */

loc_001FC357:
    edx = MEM32(0x41B854);
    MEM32(esi + 4) = edx;
    MEM32(esi) = 0x41B850;
    eax = MEM32(0x41B854);
    MEM32(eax) = esi;
    MEM32(0x41B854) = esi;
    MEM8(esi + 0x62) = MEM8(esi + 0x62) | LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_001FC37B:
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    MEM32(esi) = eax;
    edx = MEM32(eax + 4);
    MEM32(edx) = esi;
    MEM32(eax + 4) = esi;

loc_001FC38B:
    MEM8(esi + 0x62) = MEM8(esi + 0x62) | LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
