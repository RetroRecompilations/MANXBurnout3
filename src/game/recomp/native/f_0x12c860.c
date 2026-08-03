#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012C860
 * Original: 0x0012C860 - 0x0012CEDD (1661 bytes, 398 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012C860:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x1C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0012C8D4; /* je: equal / zero */

loc_0012C878:
    SET_LO8(ecx, MEM8(eax + 0x215));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0012C88D; /* je: equal / zero */

loc_0012C883:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0012C88D; /* je: equal / zero */

loc_0012C888:
    if (CMP_NE(LO8(ecx), 3)) goto loc_0012C8A7; /* jne: not equal / not zero */

loc_0012C88D:
    ecx = MEM32(eax + 0x13F4);
    SET_LO8(edx, MEM8(ecx + 0x15D6));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0012C8A7; /* je: equal / zero */

loc_0012C89D:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    goto loc_0012C90B;

loc_0012C8A7:
    if (TEST_Z(eax, eax)) goto loc_0012C8D4; /* je: equal / zero */

loc_0012C8AB:
    eax = MEM32(ebx + 8);
    /* cmp eax, 0xA1192600u - flags set for next jcc */
    ecx = MEM32(ebx + 0xC);
    if (CMP_NE(eax, 0xA1192600u)) goto loc_0012C8C0; /* jne: not equal / not zero */

loc_0012C8B8:
    if (CMP_EQ(ecx, 0x790798FB)) goto loc_0012C8CF; /* je: equal / zero */

loc_0012C8C0:
    if (CMP_NE(eax, 0xA11A2000u)) goto loc_0012C8D4; /* jne: not equal / not zero */

loc_0012C8C7:
    if (CMP_NE(ecx, 0x790798FB)) goto loc_0012C8D4; /* jne: not equal / not zero */

loc_0012C8CF:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_0012C90B;

loc_0012C8D4:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0012C8DE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012C903; /* je: equal / zero */

loc_0012C8E2:
    eax = MEM32(ebx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0012C903; /* je: equal / zero */

loc_0012C8E9:
    SET_LO8(eax, MEM8(eax + 0x215));
    if (CMP_EQ(LO8(eax), 1)) goto loc_0012C903; /* je: equal / zero */

loc_0012C8F3:
    if (CMP_EQ(LO8(eax), 2)) goto loc_0012C903; /* je: equal / zero */

loc_0012C8F7:
    /* cmp LO8(eax), 3 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    if (CMP_NE(LO8(eax), 3)) goto loc_0012C90B; /* jne: not equal / not zero */

loc_0012C903:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */

loc_0012C90B:
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx + 0x40);
    SET_LO8(ecx, MEM8(eax + 0xC));
    edi = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0012CAC8; /* jle: less or equal (signed <=) */

loc_0012C928:
    MEM32(esp + 0x14) = 0x180;
    esi = 0xFD8;
    goto loc_0012C940;

    /* nop */
    edi = edi;

loc_0012C940:
    ecx = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(ecx + esi + -72); /* movss */
    xmm1.f[0] = MEMF(ecx + esi); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + esi + -3704); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0012C977; /* jbe: below or equal (unsigned <=) */

loc_0012C962:
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    eax = ecx;
    MEMF(esi + eax + -72) = xmm0.f[0]; /* movss */
    goto loc_0012CAA9;

loc_0012C977:
    ecx = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(ecx + esi + -72); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + esi + -24) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + esi + -24))) goto loc_0012C9B6; /* jbe: below or equal (unsigned <=) */

loc_0012C987:
    SET_LO8(eax, MEM8(ecx + edi + 0x4B2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012C99A; /* je: equal / zero */

loc_0012C992:
    if (CMP_NE(LO8(eax), 1)) goto loc_0012CAA9; /* jne: not equal / not zero */

loc_0012C99A:
    eax = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(eax + esi + -24); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    MEMF(eax + esi + -72) = xmm0.f[0]; /* movss */
    goto loc_0012CAA9;

loc_0012C9B6:
    xmm0.f[0] = MEMF(ecx + esi + -72); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + esi + -48) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + esi + -48))) goto loc_0012CAA9; /* jbe: below or equal (unsigned <=) */

loc_0012C9C7:
    edx = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(edx + edi + 0x4B2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012CAA9; /* jne: not equal / not zero */

loc_0012C9D9:
    if (CMP_NE(MEM32(eax + esi + -1300), 4)) goto loc_0012C9F6; /* jne: not equal / not zero */

loc_0012C9E3:
    eax = ebx;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0012C9EA:
    fp_push(MEMF(0x3B1684)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0012C99A; /* ja: above (unsigned >) */

loc_0012C9F6:
    eax = MEM32(ebx + 0x14);
    MEM8(eax + edi + 0x4B2) = 1;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x40);
    ecx = ZX8(MEM8(edi + ecx + 0xADC));
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0012CA29; /* je: equal / zero */

loc_0012CA14:
    ecx--;
    if ((ecx == 0)) goto loc_0012CA20; /* je: equal / zero */

loc_0012CA17:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF80), 16); /* movaps */
    goto loc_0012CA30;

loc_0012CA20:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF70), 16); /* movaps */
    goto loc_0012CA30;

loc_0012CA29:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF60), 16); /* movaps */

loc_0012CA30:
    edx = MEM32(eax + 0x40);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + edx + -1244); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    eax = eax & 0xBF800000u;
    eax = eax | 0x3F800000;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E4); /* mulss */
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    eax = eax + edx;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_0012CA84:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = ecx + MEM32(esp + 0x14);
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */

loc_0012CAA9:
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x40;
    eax = MEM32(ebx + 0x10);
    eax = MEM32(eax + 0x40);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, ecx)) goto loc_0012C940; /* jl: less (signed <) */

loc_0012CAC4:
    MEM32(esp + 0x1C) = edi;

loc_0012CAC8:
    esi = MEM32(ebx + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) { sub_0012CEDF(); return; } /* jle: less or equal (signed <=) */

loc_0012CAD9:
    ecx = esi + 0xAC4;
    /* nop */

loc_0012CAE0:
    if (CMP_EQ(MEM32(ecx), 4)) goto loc_0012CAF4; /* je: equal / zero */

loc_0012CAE5:
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, eax)) goto loc_0012CAE0; /* jl: less (signed <) */

loc_0012CAED:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012CAF4:
    if (TEST_S(edx, edx)) { sub_0012CEDF(); return; } /* jl: less (signed <) */

loc_0012CAFC:
    eax = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(eax + edi + 0x4B2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0012CEDF(); return; } /* jne: not equal / not zero */

loc_0012CB0E:
    ecx = MEM32(0x3EBFAC);
    ecx = ecx << 6;
    eax = ecx + esi + 0xA0;
    ecx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebx + 0x38);
    eax = eax - 0;
    MEM32(esp + 0x38) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    if ((eax == 0)) goto loc_0012CB63; /* je: equal / zero */

loc_0012CB4B:
    eax--;
    if ((eax == 0)) goto loc_0012CB5A; /* je: equal / zero */

loc_0012CB4E:
    eax--;
    if ((eax == 0)) goto loc_0012CB63; /* je: equal / zero */

loc_0012CB51:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012CB6A;

loc_0012CB5A:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012CB6A;

loc_0012CB63:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEE0), 16); /* movaps */

loc_0012CB6A:
    eax = MEM32(ebx + 0x18);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B16E8); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0xA7C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3925A4); /* movss */
    xmm4.f[0] = MEMF(0x3B1684); /* movss */
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x160), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0x264); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x164); /* subss */
    eax = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x58) = eax;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x4C);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEM32(esp + 0x5C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x60;
    ecx = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = MEM32(0x3EBFB0);
    ecx = MEM32(ebx + 0x18);
    eax = eax << 6;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = eax + ecx + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    esi = MEM32(eax);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(eax + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebx + 0x38);
    eax = eax - 0;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    if ((eax == 0)) goto loc_0012CD03; /* je: equal / zero */

loc_0012CCEB:
    eax--;
    if ((eax == 0)) goto loc_0012CCFA; /* je: equal / zero */

loc_0012CCEE:
    eax--;
    if ((eax == 0)) goto loc_0012CD03; /* je: equal / zero */

loc_0012CCF1:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012CD0A;

loc_0012CCFA:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012CD0A;

loc_0012CD03:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEE0), 16); /* movaps */

loc_0012CD0A:
    eax = MEM32(ebx + 0x18);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0xA7C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = esp + 0x14;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x160), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0x264); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x164); /* subss */
    ecx = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x28) = ecx;
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x50); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x4C);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEM32(esp + 0x2C) = eax;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ecx = esp + 0x80;
    eax = esp + 0x90;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(esp + 0x74); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0012CE7A; /* jbe: below or equal (unsigned <=) */

loc_0012CE61:
    eax = MEM32(ebx + 0x14);
    ecx = edx;
    ecx = ecx << 6;
    xmm1.f[0] = MEMF(ecx + eax + 0x734); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0012CE7A:
    xmm0.f[0] = MEMF(esp + 0x84); /* movss */
    xmm3.f[0] = MEMF(esp + 0x94); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0012CEAC; /* jbe: below or equal (unsigned <=) */

loc_0012CE95:
    ecx = MEM32(ebx + 0x14);
    edx = edx << 6;
    xmm2.f[0] = MEMF(edx + ecx + 0x734); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */

loc_0012CEAC:
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0012CEBE; /* ja: above (unsigned >) */

loc_0012CEB9:
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) { sub_0012CEDF(); return; } /* jbe: below or equal (unsigned <=) */

loc_0012CEBE:
    ebx = MEM32(ebx + 0x14);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(ebx + eax * 4 + 0xFC0); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
