#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010E690
 * Original: 0x0010E690 - 0x0010EC02 (1394 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010E690:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x24);
    SET_LO8(eax, MEM8(edx));
    /* cmp LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), 2)) goto loc_0010E6B4; /* je: equal / zero */

loc_0010E6A7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E6B4; /* je: equal / zero */

loc_0010E6AB:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x17) = 0;
    if (CMP_NE(LO8(eax), 1)) goto loc_0010E6B9; /* jne: not equal / not zero */

loc_0010E6B4:
    MEM8(esp + 0x17) = 1;

loc_0010E6B9:
    ecx = MEM32(ebx + 0x28);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0010E6CF; /* je: equal / zero */

loc_0010E6C2:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E6CF; /* je: equal / zero */

loc_0010E6C6:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (CMP_NE(LO8(eax), 1)) goto loc_0010E6D4; /* jne: not equal / not zero */

loc_0010E6CF:
    MEM8(esp + 0x16) = 1;

loc_0010E6D4:
    xmm1.f[0] = MEMF(ebx + 0x20); /* movss */
    xmm0.f[0] = MEMF(0x3A3408); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    edx = MEM32(edx + 0xC);
    edi = MEM32(ecx + 0xC);
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E847; /* jbe: below or equal (unsigned <=) */

loc_0010E6F0:
    SET_LO8(eax, MEM8(esp + 0x17));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1F68); /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E71F; /* jne: not equal / not zero */

loc_0010E70A:
    ecx = MEM32(edx + 0x2420);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(LO8(eax), 2)) goto loc_0010E7A2; /* je: equal / zero */

loc_0010E71F:
    ecx = MEM32(edx + 0xCC4);
    eax = MEM32(esi);
    fp_push(MEMF(ecx + 0x370)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    ebx = ebx + ecx;
    eax = eax << 0x10;
    eax = eax + ebx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    MEM32(esi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0010E755; /* jge: greater or equal (signed >=) */

loc_0010E74F:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010E755:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010E7A2; /* jbe: below or equal (unsigned <=) */

loc_0010E763:
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    ebx = ebx + ecx;
    ecx = MEM32(esi + 4);
    eax = eax << 0x10;
    eax = eax + ebx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    MEM32(esi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0010E785; /* jge: greater or equal (signed >=) */

loc_0010E77F:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010E785:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010E7A2; /* jbe: below or equal (unsigned <=) */

loc_0010E795:
    eax = MEM32(edx + 0xCC4);
    MEM8(eax + 0x1016) = MEM8(eax + 0x1016) | 0xF0;

loc_0010E7A2:
    SET_LO8(eax, MEM8(esp + 0x16));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E7BF; /* jne: not equal / not zero */

loc_0010E7AA:
    ecx = MEM32(edi + 0x2420);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(LO8(eax), 2)) goto loc_0010E847; /* je: equal / zero */

loc_0010E7BF:
    ecx = MEM32(edi + 0xCC4);
    fp_push(MEMF(ecx + 0x370)); /* fld float */
    eax = MEM32(esi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    eax = eax << 0x10;
    ecx = ecx + eax;
    eax = MEM32(esi + 4);
    eax = eax + ecx;
    ecx = MEM32(esi + 4);
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    MEM32(esi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0010E7F8; /* jge: greater or equal (signed >=) */

loc_0010E7F2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010E7F8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010E847; /* jbe: below or equal (unsigned <=) */

loc_0010E806:
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    ebx = ebx + ecx;
    ecx = MEM32(esi + 4);
    eax = eax << 0x10;
    eax = eax + ebx;
    ecx = ecx + eax;
    MEM32(esi + 4) = ecx;
    ecx = eax;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0010E82A; /* jge: greater or equal (signed >=) */

loc_0010E824:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010E82A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010E847; /* jbe: below or equal (unsigned <=) */

loc_0010E83A:
    eax = MEM32(edi + 0xCC4);
    MEM8(eax + 0x1016) = MEM8(eax + 0x1016) | 0xF0;

loc_0010E847:
    SET_LO8(eax, MEM8(esp + 0x17));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E864; /* je: equal / zero */

loc_0010E853:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010EBFA; /* jne: not equal / not zero */

loc_0010E85B:
    ebx = edi;
    edi = edx;
    goto loc_0010E8F8;

loc_0010E864:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E8F6; /* jne: not equal / not zero */

loc_0010E86C:
    ecx = MEM32(edx + 0x2420);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(eax, 0x930)) goto loc_0010E892; /* je: equal / zero */

loc_0010E880:
    ecx = MEM32(edi + 0x2420);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_NZ(LO8(ebx), 2)) goto loc_0010E8B5; /* jne: not equal / not zero */

loc_0010E892:
    ecx = MEM32(edi + 0x2420);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(ebx, 0x930)) goto loc_0010EBFA; /* je: equal / zero */

loc_0010E8AB:
    if (TEST_Z(LO8(eax), 2)) goto loc_0010EBFA; /* je: equal / zero */

loc_0010E8B3:
    edi = edx;

loc_0010E8B5:
    edx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(edx + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A35E4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1F64); /* mulss */
    eax = MEM32(edi + 0xCC4);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x370); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1684); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    goto loc_0010EB90;

loc_0010E8F6:
    ebx = edx;

loc_0010E8F8:
    ecx = MEM32(ebx + 0x2420);
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(edx, 0x930)) goto loc_0010EBFA; /* je: equal / zero */

loc_0010E911:
    eax = ZX8(MEM8(ebx + 0x242A));
    if (CMP_NE(MEM32(eax * 8 + 0x647B70), 0x671E0800)) goto loc_0010EB54; /* jne: not equal / not zero */

loc_0010E929:
    if (CMP_NE(MEM32(eax * 8 + 0x647B74), 0x77042838)) goto loc_0010EB54; /* jne: not equal / not zero */

loc_0010E93A:
    xmm1.f[0] = MEMF(edi + 0xBC); /* movss */
    /* comiss xmm1.f[0], MEMF(0x39AC50) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x39AC50))) goto loc_0010EB54; /* jbe: below or equal (unsigned <=) */

loc_0010E94F:
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(eax + 0x20); /* movss */
    xmm2.f[0] = MEMF(0x3A5FF4); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010EB54; /* jbe: below or equal (unsigned <=) */

loc_0010E968:
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1F60); /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ebx + 0x204);
    /* shufps xmm0, xmm0, 0 */
    /* divps: xmm1.f[0] /= xmm0.f[0] (packed 4xfloat) */
    eax = eax + 0x20;
    ecx = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010E9AD:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x1D0), 16); /* movaps */
    eax = eax + 0x30;
    PUSH32(esp, eax);
    ecx = ebx + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x1E0), 16); /* movaps */
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010E9EC:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x48), 16); /* movaps */
    /* addps: xmm1.f[0] += MEMF(esp + 0x58) (packed 4xfloat) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = esp + 0x20;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x38), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* minss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* minss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1F5C); /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1688); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    eax = 0x4A71A0;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0010EAE3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010EAFB; /* je: equal / zero */

loc_0010EAE7:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16B0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0010EAFB:
    eax = esi;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010EB02:
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010EB54; /* jbe: below or equal (unsigned <=) */

loc_0010EB0C:
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_0010EC10(); /* call 0x0010EC10 */

loc_0010EB1D:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0010EB27:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010EBFA; /* je: equal / zero */

loc_0010EB2F:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010EBFA; /* jne: not equal / not zero */

loc_0010EB3C:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(edi + 0x3A74) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010EB54:
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ecx + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A340C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1F58); /* mulss */
    edx = MEM32(edi + 0xCC4);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 0x370); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B16E8); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1D0C); /* mulss */

loc_0010EB90:
    eax = MEM32(edi + 0xCC4);
    /* test MEM8(eax + 0x1015), 0x10 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_NZ(MEM8(eax + 0x1015), 0x10)) goto loc_0010EBFA; /* jne: not equal / not zero */

loc_0010EBA5:
    eax = MEM32(esi);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    eax = eax << 0x10;
    ecx = ecx + eax;
    eax = ecx + edx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ecx = edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    MEM32(esi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0010EBE2; /* jge: greater or equal (signed >=) */

loc_0010EBDC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010EBE2:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0010EBFA; /* jb: below (unsigned <) */

loc_0010EBF0:
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0010E610(); /* call 0x0010E610 */

loc_0010EBFA:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
