#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00187E40
 * Original: 0x00187E40 - 0x001885D9 (1945 bytes, 413 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00187E40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x160), 16); /* movaps */
    ecx = MEM32(edi + 0x204);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x190));
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x170), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = eax & 0xFF;
    eax = eax << 4;
    eax = eax + 0x3A3BF8;
    esi = eax;
    eax = esp + 0x124;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x134), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00187EAB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    SET_LO8(ecx, MEM8(edi + 0x210));
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    eax = esp + 0x9C;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0xD));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x104) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001885D0; /* je: equal / zero */

loc_00187F0F:
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = MEMF(esp + 0x9C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(ebx + 0x6457C); /* movss */
    if ((xmm2.f[0] >= xmm0.f[0])) goto loc_001885D0; /* jae: above or equal (unsigned >=) */

loc_00187F30:
    /* comiss xmm0.f[0], MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(eax + 4))) goto loc_00187F3D; /* jb: below (unsigned <) */

loc_00187F36:
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    goto loc_00187F61;

loc_00187F3D:
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(eax + 0xC); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */

loc_00187F61:
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001885D0; /* jae: above or equal (unsigned >=) */

loc_00187F7A:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x215);
    if (CMP_LE(eax & eax, 0)) goto loc_00187FB4; /* jle: less or equal (signed <=) */

loc_00187F85:
    if (CMP_G(eax, 3)) goto loc_00187FB4; /* jg: greater (signed >) */

loc_00187F8A:
    edx = MEM32(edi + 0xCC0);
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    eax = MEM32(edi + 0xCC4);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x49C); /* addss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    goto loc_00187FBD;

loc_00187FB4:
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */

loc_00187FBD:
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x1D0), 16); /* movaps */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x1E0), 16); /* movaps */
    esi = edi + 0x70;
    PUSH32(esp, esi);
    eax = esp + 0xE8;
    MEM32(esp + 0x64) = 0;
    memcpy((void *)XBOX_PTR(esp + 0xC8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00188006:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x644E0), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x644D0), 16); /* movaps */
    edx = esp + 0x20;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xEC) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x644F0), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x20;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x64500), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0x20;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x64510), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0x20;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xF4) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x20;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x64520), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC0); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x118) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    /* nop */

loc_00188260:
    xmm0.f[0] = MEMF(esp + eax * 4 + 0xE0); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_001882A6; /* jbe: below or equal (unsigned <=) */

loc_00188272:
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + eax * 4 + 0x108); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001882A6; /* jbe: below or equal (unsigned <=) */

loc_0018829C:
    MEM32(esp + 0x5C) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_001882A6:
    eax++;
    if (CMP_L(eax, 6)) goto loc_00188260; /* jl: less (signed <) */

loc_001882AC:
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0xE8;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_001882C1:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esp + 0x64);
    eax = eax + 0x644D;
    eax = eax << 4;
    eax = eax + ebx;
    esp = esp + 8;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0x80000000u;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    eax = MEM32(esp + 0x5C);
    /* cmp eax, 5 - flags set for next jcc */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if (CMP_A(eax, 5)) goto loc_00188416; /* ja: above (unsigned >) */

loc_00188330:
    { uint32_t _jt = MEM32(eax * 4 + 0x1885DC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00188337u) goto loc_00188337;
    if (_jt == 0x00188342u) goto loc_00188342;
    if (_jt == 0x0018836Eu) goto loc_0018836E;
    if (_jt == 0x00188379u) goto loc_00188379;
    if (_jt == 0x001883C3u) goto loc_001883C3;
    if (_jt == 0x001883CEu) goto loc_001883CE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00188337:
    xmm1.f[0] = MEMF(esp + 0xC0); /* movss */
    goto loc_0018834B;

loc_00188342:
    xmm1.f[0] = MEMF(esp + 0xB0); /* movss */

loc_0018834B:
    xmm0.f[0] = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_001883A3;

loc_0018836E:
    xmm1.f[0] = MEMF(esp + 0xB4); /* movss */
    goto loc_00188382;

loc_00188379:
    xmm1.f[0] = MEMF(esp + 0xC4); /* movss */

loc_00188382:
    xmm0.f[0] = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */

loc_001883A3:
    xmm2.f[0] = MEMF(esp + 0xC8); /* movss */
    xmm0.f[0] = MEMF(esp + 0xB8); /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_00188416;

loc_001883C3:
    xmm1.f[0] = MEMF(esp + 0xB8); /* movss */
    goto loc_001883D7;

loc_001883CE:
    xmm1.f[0] = MEMF(esp + 0xC8); /* movss */

loc_001883D7:
    xmm0.f[0] = MEMF(esp + 0xC0); /* movss */
    xmm2.f[0] = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_00188416:
    eax = MEM32(edi + 0x204);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0xE8;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0018842E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(edi + 0x204);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xF0;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0018844E:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm5.f[0] = MEMF(0x3A69B4); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm4.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x2C;
    xmm3.f[0] = MEMF(eax); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    ecx = esp + 0x2C;
    xmm3.f[0] = MEMF(ecx); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = esp + 0x2C;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 0x2C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm3.b, 16); /* movaps */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00188522; /* jbe: below or equal (unsigned <=) */

loc_0018851B:
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    goto loc_0018857C;

loc_00188522:
    ecx = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x1C) = 0x80000000u;
    esi = MEM32(esp + 0x5C);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0xA0);
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(esp + 0xA8);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0xAC);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;

loc_0018857C:
    if (CMP_NE(MEM8(edi + 0x215), 1)) goto loc_001885A1; /* jne: not equal / not zero */

loc_00188585:
    eax = esp + 0x130;
    PUSH32(esp, eax);
    esi = esp + 0x64;
    PUSH32(esp, 0); sub_0017E7F0(); /* call 0x0017E7F0 */

loc_00188596:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */

loc_001885A1:
    ecx = MEM32(esp + 0x104);
    edx = MEM32(esp + 0xDC);
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x138;
    PUSH32(esp, 0); sub_00182CB0(); /* call 0x00182CB0 */

loc_001885D0:
    POP32(esp, edi);
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
