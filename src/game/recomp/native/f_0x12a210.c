#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012A210
 * Original: 0x0012A210 - 0x0012A8A1 (1681 bytes, 384 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012A210:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0012A898; /* jle: less or equal (signed <=) */

loc_0012A232:
    ecx = ecx + 0xAC4;

loc_0012A238:
    if (CMP_EQ(MEM32(ecx), 4)) goto loc_0012A24E; /* je: equal / zero */

loc_0012A23D:
    ebx++;
    ecx = ecx + 4;
    if (CMP_L(ebx, eax)) goto loc_0012A238; /* jl: less (signed <) */

loc_0012A245:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0012A24E:
    if (TEST_S(ebx, ebx)) goto loc_0012A898; /* jl: less (signed <) */

loc_0012A256:
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ebx * 4 + 0xF90); /* addss */
    MEMF(eax + ebx * 4 + 0xF90) = xmm0.f[0]; /* movss */
    eax = eax + ebx * 4 + 0xF90;
    eax = MEM32(esi + 0x14);
    xmm2.f[0] = MEMF(eax + ebx * 8 + 0xF30); /* movss */
    xmm3.f[0] = MEMF(eax + ebx * 8 + 0xF34); /* movss */
    ecx = eax;
    edi = ebx;
    edi = edi << 7;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edi + 0xC30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + edi + 0xC70), 16); /* movaps */
    eax = MEM32(esi + 0x18);
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edi + 0x2A0), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edi + 0x2E0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = eax + edi;
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_0012A7CC; /* jbe: below or equal (unsigned <=) */

loc_0012A34C:
    xmm4.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm5.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm5.f[0] >= xmm4.f[0])) goto loc_0012A898; /* jae: above or equal (unsigned >=) */

loc_0012A35B:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm5.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((xmm5.f[0] > xmm0.f[0])) goto loc_0012A898; /* ja: above (unsigned >) */

loc_0012A39A:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm2.f[0] = MEMF(0x395D78); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00129FF0(); /* call 0x00129FF0 */

loc_0012A41F:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm7.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] < xmm1.f[0])) goto loc_0012A45F; /* jb: below (unsigned <) */

loc_0012A438:
    memcpy(xmm1.b, xmm7.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0012A45A; /* jbe: below or equal (unsigned <=) */

loc_0012A457:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */

loc_0012A45A:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    goto loc_0012A476;

loc_0012A45F:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1A04) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1A04))) goto loc_0012A476; /* jbe: below or equal (unsigned <=) */

loc_0012A46E:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1C1C); /* subss */

loc_0012A476:
    xmm4.f[0] = MEMF(0x3A795C); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B19C4); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    eax = MEM32(esi + 0x14);
    xmm4.f[0] = MEMF(eax + ebx * 8 + 0xF30); /* movss */
    xmm5.f[0] = MEMF(eax + ebx * 8 + 0xF34); /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    if ((xmm3.f[0] >= xmm1.f[0])) goto loc_0012A898; /* jae: above or equal (unsigned >=) */

loc_0012A4DA:
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1684); /* mulss */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm6.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    if ((xmm6.f[0] > xmm0.f[0])) goto loc_0012A898; /* ja: above (unsigned >) */

loc_0012A51C:
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm6.f[0] = MEMF(0x395D78); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + ebx * 8 + 0xF30) = xmm4.f[0]; /* movss */
    ecx = MEM32(esi + 0x14);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1688); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    MEMF(ecx + ebx * 8 + 0xF34) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FEFD0(); /* call 0x000FEFD0 */

loc_0012A612:
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edi + 0xC30), 16); /* movaps */
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    eax = edi + edx + 0x270;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_0012A679:
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = ebx + 0x18;
    ecx = ecx << 7;
    memcpy((void *)XBOX_PTR(ecx + edx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = ecx + edx;
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0xA8;
    eax = edi + eax + 0x2B0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_0012A6D3:
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + edi + 0xC40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = edx + edi + 0xC40;
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x40AF70);
    ecx = esp + 0xE8;
    eax = eax + edi + 0xC40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_0012A724:
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + edi + 0xC40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + edi + 0xC50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + edi + 0xC60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + edi + 0xC70), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    ecx = edx + edi + 0xC40;
    memcpy((void *)XBOX_PTR(eax + edi + 0xC30), xmm2.b, 16); /* movaps */
    ecx = MEM32(esi + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edi + 0xC60), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + edi + 0xC20), 16); /* movaps */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = ecx + edi;
    edx = esp + 0x28;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = esp + 0x24;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0xC70), xmm0.b, 16); /* movaps */

loc_0012A7CC:
    ecx = MEM32(esi + 0x14);
    edx = ebx + 0x18;
    edx = edx << 7;
    edx = edx + ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = edi + ecx + 0x770;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0012A7EC:
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = ebx + 0x12;
    eax = eax << 7;
    eax = eax + edx;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    eax = edx + edi + 0xC40;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi + edx + 0x7B0;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0012A83C:
    eax = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = eax + edi + 0x940;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    edi = 4;
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128830(); /* call 0x00128830 */

loc_0012A876:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012A898; /* jbe: below or equal (unsigned <=) */

loc_0012A884:
    edi = MEM32(esi + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    edi = edi + 0x30;
    esi = 0x40F270;
    PUSH32(esp, 0); sub_0014EAC0(); /* call 0x0014EAC0 */

loc_0012A898:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
