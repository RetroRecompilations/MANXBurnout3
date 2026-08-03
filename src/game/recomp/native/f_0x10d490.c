#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010D490
 * Original: 0x0010D490 - 0x0010D9D6 (1350 bytes, 324 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010D490:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x2428));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D9CE; /* jne: not equal / not zero */

loc_0010D4AB:
    eax = MEM32(edi + 4);
    /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esi + 0x204);
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(eax, eax)) goto loc_0010D846; /* je: equal / zero */

loc_0010D4C0:
    if (CMP_NE(MEM8(esi + 0x116B), 1)) goto loc_0010D846; /* jne: not equal / not zero */

loc_0010D4CD:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */
    edx = MEM32(eax + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    ebx = ebx + 0x20;
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010D518:
    eax = MEM32(esp + 0x14);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    eax = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0010C3B0(); /* call 0x0010C3B0 */

loc_0010D531:
    esp = esp + 4;
    /* comiss xmm0.f[0], MEMF(0x3B1A04) - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3B1A04))) goto loc_0010D551; /* jbe: below or equal (unsigned <=) */

loc_0010D543:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1C1C); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0010D551:
    ebx = MEM32(ebp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010D55B:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm4.f[0] = MEMF(0x3B16B4); /* movss */
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(0x41A4BC); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm4.f[0] <= xmm5.f[0])) goto loc_0010D5E4; /* jbe: below or equal (unsigned <=) */

loc_0010D58A:
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010D5B6; /* jbe: below or equal (unsigned <=) */

loc_0010D598:
    /* comiss xmm1.f[0], MEMF(esi + 0x1164) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esi + 0x1164))) goto loc_0010D5B6; /* jbe: below or equal (unsigned <=) */

loc_0010D5A1:
    xmm0.f[0] = MEMF(esi + 0x1164); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x41A4B4); /* addss */
    goto loc_0010D668;

loc_0010D5B6:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010D658; /* jbe: below or equal (unsigned <=) */

loc_0010D5BF:
    xmm2.f[0] = MEMF(esi + 0x1164); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010D658; /* jbe: below or equal (unsigned <=) */

loc_0010D5D4:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x41A4B4); /* subss */
    goto loc_0010D668;

loc_0010D5E4:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A7F34) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A7F34))) goto loc_0010D658; /* jbe: below or equal (unsigned <=) */

loc_0010D609:
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010D638; /* jbe: below or equal (unsigned <=) */

loc_0010D617:
    xmm6.f[0] = MEMF(esi + 0x1164); /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm6.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm6.f[0] <= xmm3.f[0])) goto loc_0010D638; /* jbe: below or equal (unsigned <=) */

loc_0010D62B:
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x41A4B8); /* subss */
    goto loc_0010D668;

loc_0010D638:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010D658; /* jbe: below or equal (unsigned <=) */

loc_0010D63D:
    /* comiss xmm1.f[0], MEMF(esi + 0x1164) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esi + 0x1164))) goto loc_0010D658; /* jbe: below or equal (unsigned <=) */

loc_0010D646:
    xmm0.f[0] = MEMF(esi + 0x1164); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x41A4B8); /* addss */
    goto loc_0010D668;

loc_0010D658:
    xmm0.f[0] = MEMF(esi + 0x1164); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69B8); /* mulss */

loc_0010D668:
    MEMF(esi + 0x1164) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    xmm2.f[0] = MEMF(esi + 0xBC); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(0x41A4B0); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0010D71D; /* jbe: below or equal (unsigned <=) */

loc_0010D6B2:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010D6C2; /* jbe: below or equal (unsigned <=) */

loc_0010D6BF:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */

loc_0010D6C2:
    ecx = esi + 0xC0;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEM32(esp + 0x28) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_0010D70F:
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    xmm4.f[0] = MEMF(0x3B16B4); /* movss */

loc_0010D71D:
    SET_LO8(eax, MEM8(edi + 9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D9CE; /* jne: not equal / not zero */

loc_0010D728:
    ecx = MEM32(esi + 0x2424);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_0010D7B9; /* je: equal / zero */

loc_0010D738:
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm5.f[0])) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D741:
    MEM8(esi + 0x116B) = LO8(eax);
    MEM32(edi + 4) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010D751:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = ebx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010D762:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(0x3B16E0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0010D790; /* jbe: below or equal (unsigned <=) */

loc_0010D77C:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C0); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0010D790:
    esi = MEM32(esi + 0x2424);
    edx = MEM32(esi + 0x204);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010D7A9:
    MEM8(edi + 9) = 1;
    MEM8(edi + 8) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010D7B9:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16D4) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3B16D4))) goto loc_0010D7E7; /* ja: above (unsigned >) */

loc_0010D7DE:
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm5.f[0])) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D7E7:
    MEM8(esi + 0x116B) = 0;
    MEM32(edi + 4) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010D7F8:
    xmm0.f[0] = MEMF(esi + 0x1164); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0010D827; /* jbe: below or equal (unsigned <=) */

loc_0010D813:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C0); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0010D827:
    ecx = MEM32(esi + 0x204);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010D83A:
    MEM8(edi + 9) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010D846:
    SET_LO8(eax, MEM8(esi + 0x1169));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, 1);
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0010D874; /* jle: less or equal (signed <=) */

loc_0010D852:
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    eax = esi + 0x8D3;
    /* nop */

loc_0010D860:
    if (CMP_NE(MEM8(eax), 0)) goto loc_0010D867; /* jne: not equal / not zero */

loc_0010D865:
    SET_LO8(edx, 0); /* xor self */

loc_0010D867:
    eax = eax + 0xC0;
    ecx--;
    if ((ecx != 0)) goto loc_0010D860; /* jne: not equal / not zero */

loc_0010D86F:
    if (CMP_NE(LO8(edx), 1)) goto loc_0010D87F; /* jne: not equal / not zero */

loc_0010D874:
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    goto loc_0010D882;

loc_0010D87F:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_0010D882:
    SET_LO8(eax, MEM8(edi + 8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D9CE; /* jne: not equal / not zero */

loc_0010D891:
    /* comiss xmm0.f[0], MEMF(0x3B1684) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1684))) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D89E:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1694) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1694))) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D8F7:
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx + 0x20;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0010C3B0(); /* call 0x0010C3B0 */

loc_0010D907:
    esp = esp + 4;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* comiss xmm1.f[0], MEMF(0x3B1A04) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1A04))) goto loc_0010D91E; /* jbe: below or equal (unsigned <=) */

loc_0010D916:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B1C1C); /* subss */

loc_0010D91E:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16E8); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69BC); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B17E8) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B17E8))) goto loc_0010D99E; /* jbe: below or equal (unsigned <=) */

loc_0010D96F:
    xmm0.f[0] = MEMF(0x3A1A00); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010D99E; /* jbe: below or equal (unsigned <=) */

loc_0010D97C:
    edx = MEM32(esi + 0x204);
    eax = MEM32(esp + 0x18);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010D992:
    MEM8(edi + 8) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010D99E:
    xmm0.f[0] = MEMF(0x3B1D98); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D9AB:
    /* comiss xmm1.f[0], MEMF(0x3B1D94) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1D94))) goto loc_0010D9CE; /* jbe: below or equal (unsigned <=) */

loc_0010D9B4:
    ecx = MEM32(esi + 0x204);
    edx = MEM32(esp + 0x18);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010D9CA:
    MEM8(edi + 8) = 1;

loc_0010D9CE:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
