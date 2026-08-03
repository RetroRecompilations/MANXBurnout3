#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001989A0
 * Original: 0x001989A0 - 0x00198E55 (1205 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001989A0(void)
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

loc_001989A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x13F4);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x40), 16); /* movaps */
    ebx = eax;
    esi = MEM32(ebx + 0x13F4);
    eax = edi;
    ecx = MEM32(eax + 0x1920);
    esi = esi + 0x10D0;
    /* test ecx, ecx - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if (TEST_NZ(ecx, ecx)) goto loc_00198A42; /* jne: not equal / not zero */

loc_001989D8:
    SET_LO8(ecx, MEM8(ebp + 0x10));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(eax + 0x27D0);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00198A12; /* je: equal / zero */

loc_001989E5:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    eax = MEM32(ecx + 0x4CFB20);
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001989FE:
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411560);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00140480(); /* call 0x00140480 */

loc_00198A10:
    goto loc_00198A42;

loc_00198A12:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    eax = MEM32(ecx + 0x4CFB20);
    edx = edx + 0x153C;
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00198A30:
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411560);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00140610(); /* call 0x00140610 */

loc_00198A42:
    eax = MEM32(ebx + 0x13F4);
    ecx = MEM32(eax + 0x1920);
    if (TEST_NZ(ecx, ecx)) goto loc_00198ABF; /* jne: not equal / not zero */

loc_00198A52:
    SET_LO8(ecx, MEM8(ebp + 0x10));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(eax + 0x27D0);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00198A8C; /* je: equal / zero */

loc_00198A5F:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    edx = MEM32(ecx + 0x4CFB20);
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00198A78:
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411560);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00140480(); /* call 0x00140480 */

loc_00198A8A:
    goto loc_00198ABF;

loc_00198A8C:
    edx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    eax = MEM32(ecx + 0x4CFB20);
    edx = edx + 0x153C;
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00198AAD:
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411560);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00140610(); /* call 0x00140610 */

loc_00198ABF:
    eax = MEM32(ebx + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FB));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3F73EC); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x12) = 0;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00198B15; /* jne: not equal / not zero */

loc_00198AE2:
    xmm0.f[0] = MEMF(esi + 0x340); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1698); /* addss */
    /* comiss xmm0.f[0], MEMF(esi + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0xC))) goto loc_00198B15; /* ja: above (unsigned >) */

loc_00198AF8:
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    xmm1.f[0] = MEMF(0x3A2938); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00198B1A; /* jbe: below or equal (unsigned <=) */

loc_00198B15:
    MEM8(esp + 0x12) = 1;

loc_00198B1A:
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00197F90(); /* call 0x00197F90 */

loc_00198B28:
    edx = MEM32(ebx + 0x13F4);
    MEM32(esp + 0x18) = edx;
    SET_LO8(edx, MEM8(esp + 0x16));
    ecx = edi + 0x11F4;
    MEM8(ecx + 4) = LO8(edx);
    edx = MEM32(ecx + 0x148);
    MEM32(ecx) = eax;
    SET_LO8(edx, MEM8(edx + 0x11EE));
    MEM8(esp + 0x17) = LO8(edx);
    MEM8(ecx + 5) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x16));
    esp = esp + 4;
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00198B6C; /* je: equal / zero */

loc_00198B63:
    eax = MEM32(eax * 4 + 0x3F7458);
    goto loc_00198B73;

loc_00198B6C:
    eax = MEM32(eax * 4 + 0x3F7448);

loc_00198B73:
    SET_LO8(edx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00198B81; /* je: equal / zero */

loc_00198B7B:
    eax = eax + MEM32(0x3F7444);

loc_00198B81:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A050(); /* call 0x0019A050 */

loc_00198B91:
    eax = MEM32(edi + 0x1174);
    xmm0.f[0] = MEMF(edi + 0x1588); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = MEM32(edi + 0x10DC);
    SET_LO8(edx, MEM8(ebp + 0x10));
    eax++;
    MEM32(edi + 0x1174) = eax;
    eax = MEM32(edi + 0x11CC);
    eax++;
    MEMF(edi + 0x1588) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x158C) = ecx;
    MEM8(edi + 0x159C) = LO8(edx);
    xmm0.f[0] = MEMF(0x3F72E4); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = 0x4A71A0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00198BF0:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198C7A; /* jne: not equal / not zero */

loc_00198BF8:
    xmm0.f[0] = MEMF(edi + 0x11E8); /* movss */
    eax = MEM32(0x4D5370);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x11E4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00198C3D; /* je: equal / zero */

loc_00198C1D:
    ecx = MEM32(eax + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_00198C3D; /* je: equal / zero */

loc_00198C27:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xAC), _icall_esp); /* indirect call */
    }

loc_00198C2F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */

loc_00198C3D:
    xmm1.f[0] = MEMF(edi + 0x11D8); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x11D8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x11D4); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    /* comiss xmm1.f[0], MEMF(edi + 0x11D0) - sets EFLAGS */
    MEMF(edi + 0x11D4) = xmm1.f[0]; /* movss */
    if ((xmm1.f[0] <= MEMF(edi + 0x11D0))) goto loc_00198C7A; /* jbe: below or equal (unsigned <=) */

loc_00198C6E:
    eax = MEM32(edi + 0x11D0);
    MEM32(edi + 0x11D4) = eax;

loc_00198C7A:
    edx = MEM32(edi + 0x10DC);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x15A0) = eax;
    ecx = MEM32(ebx + 0x13F4);
    MEM32(edi + 0x16C0) = edx;
    MEM32(edi + 0x16BC) = ecx;
    edx = MEM32(esi + 0x4C0);
    ecx = MEM32(esi + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x4C4); /* addss */
    edx++;
    MEM32(esi + 0x4C0) = edx;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEMF(esi + 0x4C4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x4C8) = ecx;
    MEM8(esi + 0x4CC) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x11C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00198D43; /* jne: not equal / not zero */

loc_00198CDE:
    SET_LO8(ecx, MEM8(esi + 0x11D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00198D43; /* jne: not equal / not zero */

loc_00198CE8:
    ecx = MEM32(esi + 0xFC);
    xmm2.f[0] = MEMF(0x3F72E4); /* movss */
    ecx++;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(esi + 0x104); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x114); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00198D43; /* jb: below (unsigned <) */

loc_00198D20:
    SET_LO8(ecx, MEM8(esi + 0x11E));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esi + 0x104) = xmm1.f[0]; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00198D43; /* je: equal / zero */

loc_00198D32:
    SET_LO8(ecx, MEM8(esi + 0x121));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00198D43; /* jne: not equal / not zero */

loc_00198D3C:
    MEM8(esi + 0x11F) = 1;

loc_00198D43:
    edi = MEM32(ebp + 8);
    MEM32(esi + 0x4D0) = eax;
    edx = MEM32(edi + 0x13F4);
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x5EC) = edx;
    MEM32(esi + 0x5F0) = eax;
    ebx = MEM32(ebx + 0x13F4);
    if (CMP_NE(MEM32(ebx + 0x1920), 1)) goto loc_00198E35; /* jne: not equal / not zero */

loc_00198D74:
    ecx = MEM32(edi + 0x13F4);
    eax = MEM32(ecx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_00198E35; /* jne: not equal / not zero */

loc_00198D88:
    xmm0.f[0] = MEMF(ebx + 0x23F0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x23E0); /* addss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x23F4) - sets EFLAGS */
    MEMF(ebx + 0x23E0) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(ebx + 0x23F4))) goto loc_00198DBA; /* jbe: below or equal (unsigned <=) */

loc_00198DAE:
    edx = MEM32(ebx + 0x23F4);
    MEM32(ebx + 0x23E0) = edx;

loc_00198DBA:
    SET_LO8(eax, MEM8(ebx + 0x1BC8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198E35; /* jne: not equal / not zero */

loc_00198DC4:
    xmm0.f[0] = MEMF(ebx + 0x1BBC); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_00198E35; /* ja: above (unsigned >) */

loc_00198DD1:
    eax = 0x47A138;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00198DDB:
    fp_push(MEMF(0x3A69C4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00198E35; /* ja: above (unsigned >) */

loc_00198DE7:
    eax = MEM32(0x4A1E24);
    esi = MEM32(eax * 4 + 0x3A2638);
    eax++;
    eax = eax & 0xF;
    MEM32(0x4A1E24) = eax;
    eax = 0x47A138;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00198E06:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(0x3A69BC); /* movss */
    MEMF(ebx + 0x1BC0) = xmm0.f[0]; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebx + 0x1BC4) = esi;
    MEM8(ebx + 0x1BC8) = 1;
    MEMF(ebx + 0x1BBC) = (float)fp_top(); fp_popp(); /* fstp */

loc_00198E35:
    eax = MEM32(edi + 0x13F4);
    ecx = MEM32(eax + 0x1920);
    if (TEST_NZ(ecx, ecx)) goto loc_00198E4C; /* jne: not equal / not zero */

loc_00198E45:
    MEM8(eax + 0x1B94) = 1;

loc_00198E4C:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
