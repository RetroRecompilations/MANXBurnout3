#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014D2C0
 * Original: 0x0014D2C0 - 0x0014D577 (695 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0014D2C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x8DF));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0014D570; /* jne: not equal / not zero */

loc_0014D2DC:
    SET_LO8(ecx, MEM8(esi + 0x8C9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0014D570; /* jne: not equal / not zero */

loc_0014D2EA:
    xmm0.f[0] = MEMF(eax + 0x194); /* movss */
    xmm1.f[0] = MEMF(esi + 0x6B8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014D570; /* ja: above (unsigned >) */

loc_0014D303:
    eax = MEM32(eax + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x520);
    MEM32(esp + 0x2C) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x524);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    MEM32(esi + 0x520) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x524) = eax;
    eax = MEM32(esi + 0x520);
    edx = 0; /* xor self */
    ecx = 0x14;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6B8); /* subss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x6BC); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x6B8); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(esi + 0x8C9) = LO8(edx);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x6CC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6C8); /* subss */
    xmm4.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x6C8); /* addss */
    eax = esp + 0x38;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0014D3E6:
    eax = MEM32(esi + 0x520);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esi + 0x524);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    edx = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x6C4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6C0); /* subss */
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x6C0); /* addss */
    MEM32(esi + 0x520) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x524) = eax;
    eax = MEM32(esi + 0x520);
    edx = 0; /* xor self */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    if (CMP_AE(edx, 5)) goto loc_0014D47C; /* jae: above or equal (unsigned >=) */

loc_0014D46E:
    edx = MEM32(esi + 0x880);
    PUSH32(esp, edx);
    eax = 0x39CB68;
    goto loc_0014D488;

loc_0014D47C:
    eax = MEM32(esi + 0x880);
    PUSH32(esp, eax);
    eax = 0x39CB78;

loc_0014D488:
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014D48D:
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014D49D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014D4B8; /* jge: greater or equal (signed >=) */

loc_0014D4B2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014D4B8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x7C) = 3;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014D4CF:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D53C; /* je: equal / zero */

loc_0014D4D3:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0014D570; /* jle: less or equal (signed <=) */

loc_0014D4E5:
    ebx = MEM32(0x3EC414);
    goto loc_0014D4F0;

    /* nop */

loc_0014D4F0:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D507; /* jne: not equal / not zero */

loc_0014D4F4:
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014D503:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D509; /* je: equal / zero */

loc_0014D507:
    SET_LO8(eax, 1);

loc_0014D509:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014D4F0; /* jl: less (signed <) */

loc_0014D514:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D570; /* je: equal / zero */

loc_0014D518:
    xmm0.f[0] = MEMF(0x3A1A00); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    goto loc_0014D54A;

loc_0014D53C:
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */

loc_0014D54A:
    edi = esp + 0x38;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014D558:
    if (TEST_Z(eax, eax)) goto loc_0014D570; /* je: equal / zero */

loc_0014D55C:
    edx = MEM32(eax + 0xC);
    SET_LO8(ecx, 0xFF);
    MEM8(edx + 0x87) = LO8(ecx);
    eax = MEM32(eax + 0xC);
    MEM8(eax + 0x84) = LO8(ecx);

loc_0014D570:
    POP32(esp, edi);
    POP32(esp, esi);
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
