#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00115130
 * Original: 0x00115130 - 0x00115FA4 (3700 bytes, 878 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00115130:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x98) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xA0) = ecx;
    SET_LO8(ecx, MEM8(ebx + 0x215));
    eax = 0; /* xor self */
    /* cmp LO8(ecx), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0x78) = eax;
    if (CMP_NE(LO8(ecx), 4)) goto loc_001151B8; /* jne: not equal / not zero */

loc_00115183:
    SET_LO8(edx, MEM8(ebx + 0x2429));
    /* nop */

loc_00115190:
    esi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + eax + 0xE9CA8));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001151AF; /* je: equal / zero */

loc_0011519F:
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_00115F9B; /* je: equal / zero */

loc_001151A7:
    eax++;
    if (CMP_L(eax, 4)) goto loc_00115190; /* jl: less (signed <) */

loc_001151AD:
    goto loc_001151BB;

loc_001151AF:
    MEM8(eax + esi + 0xE9CA8) = LO8(edx);
    goto loc_001151BB;

loc_001151B8:
    esi = MEM32(ebp + 8);

loc_001151BB:
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001151DA; /* je: equal / zero */

loc_001151C2:
    xmm0.f[0] = MEMF(0x3EBE88); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EBE90); /* movss */
    goto loc_0011524A;

loc_001151DA:
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001151F9; /* je: equal / zero */

loc_001151E1:
    xmm0.f[0] = MEMF(0x3EBE84); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EBE8C); /* movss */
    goto loc_0011524A;

loc_001151F9:
    eax = MEM32(ebx + 0x13F4);
    edi = MEM32(eax + 0x1970);
    ebx = MEM32(eax + 0x1974);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00158A60(); /* call 0x00158A60 */

loc_00115212:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00115226; /* je: equal / zero */

loc_0011521D:
    xmm0.f[0] = MEMF(eax * 8 + 0x5A8D1C); /* movss */

loc_00115226:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00158A60(); /* call 0x00158A60 */

loc_00115233:
    ebx = MEM32(ebp + 0xC);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0011524A; /* je: equal / zero */

loc_00115241:
    xmm0.f[0] = MEMF(eax * 8 + 0x5A8D18); /* movss */

loc_0011524A:
    SET_LO8(eax, MEM8(ebp + 0x10));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011526A; /* je: equal / zero */

loc_00115263:
    eax = ebx;
    PUSH32(esp, 0); sub_00127180(); /* call 0x00127180 */

loc_0011526A:
    edi = 0x626124;
    /* nop */

loc_00115270:
    SET_LO8(eax, MEM8(edi));
    if (TEST_Z(LO8(eax), 1)) goto loc_001152E8; /* je: equal / zero */

loc_00115276:
    if (TEST_NZ(LO8(eax), 2)) goto loc_001152E8; /* jne: not equal / not zero */

loc_0011527A:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + -212), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0xA0) (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_001152E8; /* jbe: below or equal (unsigned <=) */

loc_001152D4:
    PUSH32(esp, 1);
    edx = edi + -372;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00111750(); /* call 0x00111750 */

loc_001152E2:
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);

loc_001152E8:
    edi = edi + 0x180;
    if (CMP_L(edi, 0x63DE24)) goto loc_00115270; /* jl: less (signed <) */

loc_001152FA:
    eax = MEM32(esi + 0xE6C8C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0011571D; /* jle: less or equal (signed <=) */

loc_0011530A:
    esi = esi + 0xE6B80;
    MEM32(esp + 0x1C) = esi;
    goto loc_00115320;

    /* nop */
    /* nop */

loc_00115320:
    esi = MEM32(esi);
    eax = MEM32(esi + 0x204);
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x9C) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    /* subps: xmm1.f[0] -= MEMF(esp + 0xA0) (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    xmm2.f[0] = sqrtf(xmm2.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    eax = esp + 0x7C;
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x7C); /* movss */
    /* comiss xmm5.f[0], xmm3.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if ((xmm5.f[0] <= xmm3.f[0])) goto loc_00115700; /* jbe: below or equal (unsigned <=) */

loc_001153BA:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B191C); /* movss */
    ecx = esp + 0x4C;
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x4C) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x4C))) goto loc_001153FB; /* jbe: below or equal (unsigned <=) */

loc_001153EA:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    goto loc_0011544B;

loc_001153FB:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */

loc_0011544B:
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* shufps xmm6, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0 */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x54) ? xmm0.f[0] : MEMF(esp + 0x54)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x58) ? xmm0.f[0] : MEMF(esp + 0x58)); /* minss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0011551C:
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x3EBE94)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x3EBE94))); }
    if (CMP_A(edx, 5)) goto loc_001155DD; /* ja: above (unsigned >) */

loc_0011552E:
    { uint32_t _jt = MEM32(edx * 4 + 0x115FA4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00115535u) goto loc_00115535;
    if (_jt == 0x0011554Eu) goto loc_0011554E;
    if (_jt == 0x0011556Du) goto loc_0011556D;
    if (_jt == 0x00115589u) goto loc_00115589;
    if (_jt == 0x001155A5u) goto loc_001155A5;
    if (_jt == 0x001155C1u) goto loc_001155C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00115535:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    PUSH32(esp, 1);
    goto loc_001155F7;

loc_0011554E:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    eax = esp + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0x108), xmm0.b, 16); /* movaps */
    PUSH32(esp, 8);
    goto loc_001155F7;

loc_0011556D:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADE0), 16); /* movaps */
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0x118), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0x20);
    goto loc_001155F7;

loc_00115589:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADE0), 16); /* movaps */
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0xD8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0x40);
    goto loc_001155F7;

loc_001155A5:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0xE8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 4);
    goto loc_001155F7;

loc_001155C1:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADE0), 16); /* movaps */
    ecx = esp + 0xF0;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0xF8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0x40);
    goto loc_001155F7;

loc_001155DD:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0xC8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 2);

loc_001155F7:
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_001155FC:
    eax = MEM32(esi + 0xCC4);
    SET_LO8(ebx, MEM8(eax + 0x1015));
    SET_LO8(ebx, LO8(ebx) | 1);
    PUSH32(esp, 1);
    MEM8(eax + 0x1014) = 2;
    MEM8(eax + 0x1015) = LO8(ebx);
    PUSH32(esp, 0); sub_001253C0(); /* call 0x001253C0 */

loc_0011561F:
    eax = ZX8(MEM8(esi + 0x242A));
    if (CMP_NE(MEM32(eax * 8 + 0x647B70), 0x671E0800)) goto loc_00115675; /* jne: not equal / not zero */

loc_00115633:
    if (CMP_NE(MEM32(eax * 8 + 0x647B74), 0x77042838)) goto loc_00115675; /* jne: not equal / not zero */

loc_00115640:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    xmm0.f[0] = MEMF(esp + 0x7C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0011567B; /* jbe: below or equal (unsigned <=) */

loc_00115659:
    ecx = MEM32(esi + 0x204);
    ecx = ecx + 0x30;
    edx = esi;
    PUSH32(esp, 0); sub_0010E610(); /* call 0x0010E610 */

loc_00115669:
    eax = esi;
    PUSH32(esp, 0); sub_00127180(); /* call 0x00127180 */

loc_00115670:
    goto loc_00115700;

loc_00115675:
    xmm0.f[0] = MEMF(esp + 0x7C); /* movss */

loc_0011567B:
    SET_LO8(ecx, MEM8(esi + 0x215));
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(LO8(eax), 2)) goto loc_00115700; /* je: equal / zero */

loc_0011568C:
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00115700; /* jbe: below or equal (unsigned <=) */

loc_00115697:
    ecx = MEM32(esp + 0x78);
    if (CMP_GE(ecx, 4)) goto loc_001156A5; /* jge: greater or equal (signed >=) */

loc_001156A0:
    ecx++;
    MEM32(esp + 0x78) = ecx;

loc_001156A5:
    eax = ecx + -1;
    if (CMP_LE(eax & eax, 0)) goto loc_001156DC; /* jle: less or equal (signed <=) */

loc_001156AC:
    /* nop */

loc_001156B0:
    xmm1.f[0] = MEMF(esp + eax * 4 + 0x80); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001156DC; /* jbe: below or equal (unsigned <=) */

loc_001156BE:
    edx = MEM32(esp + eax * 4 + 0xAC);
    MEM32(esp + eax * 4 + 0xB0) = edx;
    edx = MEM32(esp + eax * 4 + 0x7C);
    MEM32(esp + eax * 4 + 0x80) = edx;
    eax--;
    if (CMP_G(eax & eax, 0)) goto loc_001156B0; /* jg: greater (signed >) */

loc_001156DC:
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esp + eax * 4 + 0xB0) = esi;
    MEMF(esp + eax * 4 + 0x80) = xmm0.f[0]; /* movss */
    if (CMP_NE(ecx, 4)) goto loc_00115700; /* jne: not equal / not zero */

loc_001156F1:
    xmm0.f[0] = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00115700:
    esi = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xE6C8C);
    edi++;
    esi = esi + 4;
    /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(edi, ecx)) goto loc_00115320; /* jl: less (signed <) */

loc_0011571D:
    edi = 0; /* xor self */
    esi = 0x71E894;

loc_00115724:
    eax = 1;
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00115732:
    ecx = MEM32(0x734FA8);
    ebx = MEM32(0x734FAC);
    eax = eax & ecx;
    edx = edx & ebx;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00115B07; /* je: equal / zero */

loc_0011574A:
    ecx = esi + -516;
    if (TEST_Z(ecx, ecx)) goto loc_00115B07; /* je: equal / zero */

loc_00115758:
    edx = MEM32(esi);
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    edx = edx + 0x30;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x8C) = ecx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    /* subps: xmm1.f[0] -= MEMF(esp + 0xA0) (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    xmm2.f[0] = sqrtf(xmm2.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x48;
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm5.f[0], xmm3.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if ((xmm5.f[0] <= xmm3.f[0])) goto loc_00115B07; /* jbe: below or equal (unsigned <=) */

loc_001157EC:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B191C); /* movss */
    eax = esp + 0x44;
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x44))) goto loc_0011582D; /* jbe: below or equal (unsigned <=) */

loc_0011581C:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    goto loc_0011587D;

loc_0011582D:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    ecx = 0x3832AC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */

loc_0011587D:
    xmm0.f[0] = MEMF(0x3A2D54); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* shufps xmm6, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x54) ? xmm0.f[0] : MEMF(esp + 0x54)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x50) ? xmm0.f[0] : MEMF(esp + 0x50)); /* minss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + -20); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBE98); /* mulss */
    ecx = (uint32_t)(int32_t)SMEM16(0x64ACEA);
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(0x64ACE8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x64ACEC);
    eax = eax + ecx;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0 */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00115982; /* jge: greater or equal (signed >=) */

loc_0011597C:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115982:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x90) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_001159BE; /* jge: greater or equal (signed >=) */

loc_001159B8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001159BE:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x94) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_001159FA; /* jge: greater or equal (signed >=) */

loc_001159F4:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001159FA:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = 0x3832AC;
    eax = eax << 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x98) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx); /* movss */
    edx = MEM32(0x64ACE8);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(0x64ACE8) = eax;
    MEM32(0x64ACEC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00115A88; /* jge: greater or equal (signed >=) */

loc_00115A82:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115A88:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi);
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x14;
    MEM32(esp + 0x60) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x6C) = eax;
    ecx = esp + 0xC0;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEM32(esp + 0x68) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    PUSH32(esp, ecx);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    eax = esi + -516;
    ecx = esp + 0x34;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_00115B03:
    MEM8(esi + 0xA) = 0;

loc_00115B07:
    esi = esi + 0x4E0;
    edi++;
    if (CMP_L(esi, 0x732094)) goto loc_00115724; /* jl: less (signed <) */

loc_00115B1A:
    edi = 0; /* xor self */
    esi = 0x70F894;

loc_00115B21:
    eax = 1;
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00115B2F:
    ecx = MEM32(0x734FB0);
    ebx = MEM32(0x734FB4);
    eax = eax & ecx;
    edx = edx & ebx;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00115F04; /* je: equal / zero */

loc_00115B47:
    edx = esi + -516;
    if (TEST_Z(edx, edx)) goto loc_00115F04; /* je: equal / zero */

loc_00115B55:
    eax = MEM32(esi);
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* subps: xmm1.f[0] -= MEMF(esp + 0xA0) (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    xmm2.f[0] = sqrtf(xmm2.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x48;
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm5.f[0], xmm3.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if ((xmm5.f[0] <= xmm3.f[0])) goto loc_00115F04; /* jbe: below or equal (unsigned <=) */

loc_00115BDA:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B191C); /* movss */
    ecx = esp + 0x44;
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x44))) goto loc_00115C1B; /* jbe: below or equal (unsigned <=) */

loc_00115C0A:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    goto loc_00115C6B;

loc_00115C1B:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */

loc_00115C6B:
    xmm0.f[0] = MEMF(0x3A2D54); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* shufps xmm6, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x54) ? xmm0.f[0] : MEMF(esp + 0x54)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x50) ? xmm0.f[0] : MEMF(esp + 0x50)); /* minss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + -20); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBE98); /* mulss */
    eax = MEM32(0x64ACE8);
    edx = (uint32_t)(int32_t)SMEM16(0x64ACEA);
    ecx = esp + 0x1C;
    eax = eax << 0x10;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(0x64ACEC);
    eax = eax + edx;
    eax = eax + ecx;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0 */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00115D70; /* jge: greater or equal (signed >=) */

loc_00115D6A:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115D70:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x90) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00115DAC; /* jge: greater or equal (signed >=) */

loc_00115DA6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115DAC:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x94) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00115DE8; /* jge: greater or equal (signed >=) */

loc_00115DE2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115DE8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = 0x3832AC;
    eax = eax << 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x98) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx); /* movss */
    edx = MEM32(0x64ACE8);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(0x64ACE8) = eax;
    MEM32(0x64ACEC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00115E76; /* jge: greater or equal (signed >=) */

loc_00115E70:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00115E76:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi);
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x14;
    MEM32(esp + 0x80) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x8C) = eax;
    ecx = esp + 0xC0;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEM32(esp + 0x88) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    PUSH32(esp, ecx);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    eax = esi + -516;
    ecx = esp + 0x34;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_00115F00:
    MEM8(esi + 0xA) = 0;

loc_00115F04:
    esi = esi + 0x780;
    edi++;
    if (CMP_L(esi, 0x71E894)) goto loc_00115B21; /* jl: less (signed <) */

loc_00115F17:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x204);
    ecx = ecx + 0x30;
    PUSH32(esp, 0); sub_0010E610(); /* call 0x0010E610 */

loc_00115F28:
    esi = MEM32(esp + 0x78);
    if (TEST_Z(esi, esi)) goto loc_00115F9B; /* je: equal / zero */

loc_00115F30:
    SET_LO8(ebx, 0xF0);

loc_00115F32:
    eax = MEM32(esp + esi * 4 + 0xAC);
    ecx = MEM32(eax + 0xCC4);
    SET_LO8(edx, MEM8(ecx + 0x1016));
    esi--;
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEM8(ecx + 0x1016) = LO8(edx);
    ecx = MEM32(eax + 0xCC4);
    MEM8(ecx + 0x1015) = MEM8(ecx + 0x1015) | 0x10;
    ecx = MEM32(eax + 0x204);
    edx = MEM32(eax + 0xCC4);
    edi = MEM32(ecx + 0x30);
    ecx = ecx + 0x30;
    edx = edx + 0x1000;
    /* test esi, esi - flags set for next jcc */
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xCC4);
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(edx + 0x100C) = xmm0.f[0]; /* movss */
    if (TEST_NZ(esi, esi)) goto loc_00115F32; /* jne: not equal / not zero */

loc_00115F9B:
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
