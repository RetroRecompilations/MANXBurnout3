#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001121F0
 * Original: 0x001121F0 - 0x00112E65 (3189 bytes, 769 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001121F0(void)
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

loc_001121F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2A4;
    edx = MEM32(0x4D5370);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x28);
    esi = MEM32(ecx + 0xC);
    eax = MEM32(edi + 0x24);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(edx + 0x1B8);
    ecx = esp + 0xA0;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    edx = ebx;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_0010A9D0(); /* call 0x0010A9D0 */

loc_00112235:
    esp = esp + 8;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x2C) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112243:
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    MEM8(ebx + 0x211) = 1;
    MEM8(esi + 0x211) = 1;
    eax = MEM32(esp + 0x284);
    if (TEST_Z(eax, eax)) goto loc_00112373; /* je: equal / zero */

loc_00112263:
    edx = MEM32(ebx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x100), 16); /* movaps */
    eax = MEM32(esi + 0x204);
    xmm3.f[0] = MEMF(ebx + 0x1F0); /* movss */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x1F0), 16); /* movaps */
    SET_LO8(eax, MEM8(esi + 0x212));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x1F0); /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x64) = xmm7.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEMF(esp + 0x54) = xmm7.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001122F1; /* je: equal / zero */

loc_001122DB:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm1.b, 16); /* movaps */
    goto loc_00112373;

loc_001122F1:
    SET_LO8(eax, MEM8(ebx + 0x212));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112311; /* je: equal / zero */

loc_001122FB:
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00112309:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    goto loc_00112362;

loc_00112311:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm7.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = esp + 0x14;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */

loc_00112362:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm1.b, 16); /* movaps */

loc_00112373:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x2A0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    ecx = MEM32(ebx + 0x204);
    xmm0.f[0] = MEMF(ecx + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3EBE40); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x290), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    MEMF(edi + 0x14) = xmm7.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(ebx + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x150), xmm0.b, 16); /* movaps */
    eax = MEM32(ebx + 0x204);
    xmm0.f[0] = MEMF(ebx + 0x1E8); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(ebx + 0x1D8); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x1E8); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm1.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(esi + 0x204);
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x1E8); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 0x1D8); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x1E8); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    edx = esp + 0x48;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x14;
    MEMF(eax) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0x18;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x24;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x48); /* divss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x44) ? xmm0.f[0] : MEMF(esp + 0x44)); /* minss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    ecx = ebx;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00112599:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x64;
    ecx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_001125AD:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x50) (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = edi + 0x10;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x14;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(0x3EBE3C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0010F8D0(); /* call 0x0010F8D0 */

loc_0011261D:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_00112808; /* jbe: below or equal (unsigned <=) */

loc_0011262F:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x110), 16); /* movaps */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x54;
    memcpy((void *)XBOX_PTR(ebx + 0x110), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00112653:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x110), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x110), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x1408); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3EBE70); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    ecx = esp + 0x20;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x41A4D0); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = esp + 0x20;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B168C); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    eax = esp + 0x20;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0xF0), 16); /* movaps */
    PUSH32(esp, edi);
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    edi = esp + 0x64;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xF0), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001205E0(); /* call 0x001205E0 */

loc_00112736:
    xmm0.f[0] = MEMF(ebx + 0x1408); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3EBE70); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x1F0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = esp + 0x20;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x41A4D0); /* movss */
    eax = eax + 0x10;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = esp + 0x20;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B168C); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    eax = esp + 0x20;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xF0), 16); /* movaps */
    ecx = MEM32(ebp + 8);
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, ecx);
    eax = esi;
    memcpy((void *)XBOX_PTR(esi + 0xF0), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001205E0(); /* call 0x001205E0 */

loc_00112802:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(ebp + 8);

loc_00112808:
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x1F0); /* addss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm2.f[0], MEMF(0x3EBE4C) - sets EFLAGS */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBE74); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= MEMF(0x3EBE4C))) goto loc_00112976; /* jbe: below or equal (unsigned <=) */

loc_00112844:
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0011284C:
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    ecx = MEM32(edi + 0x28);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0011285B:
    ecx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(ecx + eax + 0x39AE50));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001128A8; /* je: equal / zero */

loc_0011286A:
    edx = MEM32(ebx + 0x13F4);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64ACE8);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_00112888:
    ecx = MEM32(ebx + 0x13F4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    esi = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = edx;
    goto loc_001128B9;

loc_001128A8:
    eax = MEM32(esi + 0x13F4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    MEM32(esp + 0x10) = ecx;

loc_001128B9:
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_001128C1:
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_001128D0:
    ecx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(ecx + eax + 0x39AE50));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00112991; /* je: equal / zero */

loc_001128E3:
    SET_LO8(edx, MEM8(edi + 0x2C));
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    MEM8(esp + 0xA0) = LO8(edx);
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_001128FA:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi + 0x28);
    ecx = MEM32(edi + 0x24);
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = ecx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x4C) ? xmm0.f[0] : MEMF(esp + 0x4C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64ACE8);
    esi = 0; /* xor self */
    edi = esp + 0x7C;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_0011296D:
    esi = MEM32(esp + 0x2C);
    edi = MEM32(ebp + 8);
    goto loc_00112988;

loc_00112976:
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x64), _icall_esp); /* indirect call */
    }

loc_00112988:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */

loc_00112991:
    eax = MEM32(esi + 0x204);
    ecx = MEM32(ebx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    xmm5.f[0] = MEMF(ebx + 0xBC); /* movss */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = MEMF(esp + 0x48); /* movss */
    edx = esp + 0x24;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x10))) goto loc_00112B26; /* jb: below (unsigned <) */

loc_00112A20:
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x10))) goto loc_00112B26; /* jb: below (unsigned <) */

loc_00112A44:
    xmm0.f[0] = MEMF(0x3EBE60); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00112E5C; /* jbe: below or equal (unsigned <=) */

loc_00112A55:
    /* comiss xmm5.f[0], MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm5.f[0] <= MEMF(esp + 0x2C))) goto loc_00112E5C; /* jbe: below or equal (unsigned <=) */

loc_00112A60:
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x3EBE68); /* divss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEM8(esp + 0x1F) = 0;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00112A85; /* jbe: below or equal (unsigned <=) */

loc_00112A7C:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112A85:
    xmm0.f[0] = MEMF(0x3EBE80); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00112ABA; /* jb: below (unsigned <) */

loc_00112A92:
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    MEM8(esp + 0x1F) = 1;
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00112AA6; /* jbe: below or equal (unsigned <=) */

loc_00112A9C:
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112AA6:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x64), _icall_esp); /* indirect call */
    }

loc_00112AB8:
    goto loc_00112AE1;

loc_00112ABA:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x64), _icall_esp); /* indirect call */
    }

loc_00112ACC:
    PUSH32(esp, esi);
    PUSH32(esp, 0x411560);
    edx = ebx;
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0); sub_00141700(); /* call 0x00141700 */

loc_00112ADD:
    SET_LO8(eax, MEM8(esp + 0xF));

loc_00112AE1:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112AE9:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esp + 0x24) - sets EFLAGS */
    MEM8(edi + 0x2D) = 2;
    if ((xmm0.f[0] <= MEMF(esp + 0x24))) goto loc_00112AFE; /* jbe: below or equal (unsigned <=) */

loc_00112AF7:
    eax = 1;
    goto loc_00112B00;

loc_00112AFE:
    eax = 0; /* xor self */

loc_00112B00:
    SET_LO8(ecx, MEM8(esp + 0x1F));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esi + 0x153C) = LO8(eax);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00112E5C; /* je: equal / zero */

loc_00112B12:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(eax), 1)) ? 1 : 0); /* setne */
    MEM8(ebx + 0x153C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00112B26:
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x10))) goto loc_00112C41; /* jb: below (unsigned <) */

loc_00112B4A:
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x10))) goto loc_00112C41; /* jb: below (unsigned <) */

loc_00112B6C:
    xmm0.f[0] = MEMF(0x3EBE60); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00112E5C; /* jbe: below or equal (unsigned <=) */

loc_00112B7D:
    xmm4.f[0] = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm5.f[0])) goto loc_00112E5C; /* jbe: below or equal (unsigned <=) */

loc_00112B8C:
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x3EBE68); /* divss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEM8(esp + 0x1F) = 0;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00112BB1; /* jbe: below or equal (unsigned <=) */

loc_00112BA8:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112BB1:
    xmm0.f[0] = MEMF(0x3EBE80); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00112BE6; /* jb: below (unsigned <) */

loc_00112BBE:
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    MEM8(esp + 0x1F) = 1;
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00112BD2; /* jbe: below or equal (unsigned <=) */

loc_00112BC8:
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112BD2:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_00112BE4:
    goto loc_00112C0D;

loc_00112BE6:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_00112BF8:
    PUSH32(esp, esi);
    PUSH32(esp, 0x411560);
    edx = ebx;
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0); sub_00141700(); /* call 0x00141700 */

loc_00112C09:
    SET_LO8(eax, MEM8(esp + 0xF));

loc_00112C0D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112C15:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    MEM8(edi + 0x2D) = 2;
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00112C36; /* jbe: below or equal (unsigned <=) */

loc_00112C28:
    SET_LO8(ecx, MEM8(esp + 0x1F));
    eax = 1;
    goto loc_00112E47;

loc_00112C36:
    SET_LO8(ecx, MEM8(esp + 0x1F));
    eax = 0; /* xor self */
    goto loc_00112E47;

loc_00112C41:
    edx = MEM32(ebx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    eax = MEM32(esi + 0x204);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = esp + 0x50;
    eax = esp + 0x60;
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_00112C78:
    xmm1.f[0] = MEMF(0x41A4C4); /* movss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    SET_LO8(eax, 0); /* xor self */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00112C8F; /* jbe: below or equal (unsigned <=) */

loc_00112C8D:
    SET_LO8(eax, 1);

loc_00112C8F:
    xmm3.f[0] = MEMF(0x41A4C8); /* movss */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    xmm4.f[0] = MEMF(0x41A4CC); /* movss */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00112CC1; /* jbe: below or equal (unsigned <=) */

loc_00112CA4:
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm5.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm5.f[0] <= xmm4.f[0])) goto loc_00112CC1; /* jbe: below or equal (unsigned <=) */

loc_00112CBF:
    SET_LO8(eax, 1);

loc_00112CC1:
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm1.f[0])) goto loc_00112CDE; /* ja: above (unsigned >) */

loc_00112CD6:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112CDE:
    /* test MEM8(0x754B8C), 1 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (TEST_NZ(MEM8(0x754B8C), 1)) goto loc_00112D0B; /* jne: not equal / not zero */

loc_00112CEC:
    eax = MEM32(0x754B8C);
    xmm1.f[0] = MEMF(0x3B1B68); /* movss */
    eax = eax | 1;
    MEM32(0x754B8C) = eax;
    MEMF(0x754B88) = xmm1.f[0]; /* movss */
    goto loc_00112D13;

loc_00112D0B:
    xmm1.f[0] = MEMF(0x754B88); /* movss */

loc_00112D13:
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3EBE5C); /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x3EBE64); /* divss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00112D3F; /* jbe: below or equal (unsigned <=) */

loc_00112D36:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112D3F:
    xmm0.f[0] = MEMF(0x3EBE80); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00112D64; /* jb: below (unsigned <) */

loc_00112D4C:
    /* comiss xmm2.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    MEM8(esp + 0xF) = 1;
    if ((xmm2.f[0] <= MEMF(0x3B16E0))) goto loc_00112D64; /* jbe: below or equal (unsigned <=) */

loc_00112D5A:
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00112D64:
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x44))) goto loc_00112D75; /* jbe: below or equal (unsigned <=) */

loc_00112D71:
    SET_LO8(eax, 1);
    goto loc_00112D77;

loc_00112D75:
    SET_LO8(eax, 0); /* xor self */

loc_00112D77:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112DAA; /* je: equal / zero */

loc_00112D80:
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00112DC3; /* jbe: below or equal (unsigned <=) */

loc_00112D91:
    SET_LO8(eax, MEM8(esp + 0xF));
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E1E; /* je: equal / zero */

loc_00112DA6:
    PUSH32(esp, 3);
    goto loc_00112E20;

loc_00112DAA:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00112E5C; /* je: equal / zero */

loc_00112DB2:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00112D91; /* jbe: below or equal (unsigned <=) */

loc_00112DC3:
    SET_LO8(eax, MEM8(esp + 0xF));
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112DDC; /* je: equal / zero */

loc_00112DD8:
    PUSH32(esp, 3);
    goto loc_00112DDE;

loc_00112DDC:
    PUSH32(esp, 5);

loc_00112DDE:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_00112DE1:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112DE5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esp + 0x24) - sets EFLAGS */
    MEM8(edi + 0x2D) = 1;
    if ((xmm0.f[0] <= MEMF(esp + 0x24))) goto loc_00112DFA; /* jbe: below or equal (unsigned <=) */

loc_00112DF3:
    eax = 1;
    goto loc_00112DFC;

loc_00112DFA:
    eax = 0; /* xor self */

loc_00112DFC:
    SET_LO8(ecx, MEM8(esp + 0xF));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esi + 0x153C) = LO8(eax);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00112E5C; /* je: equal / zero */

loc_00112E0A:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 1)) ? 1 : 0); /* setne */
    MEM8(ebx + 0x153C) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00112E1E:
    PUSH32(esp, 5);

loc_00112E20:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_00112E23:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112E5C; /* je: equal / zero */

loc_00112E27:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    MEM8(edi + 0x2D) = 1;
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00112E41; /* jbe: below or equal (unsigned <=) */

loc_00112E3A:
    eax = 1;
    goto loc_00112E43;

loc_00112E41:
    eax = 0; /* xor self */

loc_00112E43:
    SET_LO8(ecx, MEM8(esp + 0xF));

loc_00112E47:
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(ebx + 0x153C) = LO8(eax);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00112E5C; /* je: equal / zero */

loc_00112E51:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 1)) ? 1 : 0); /* setne */
    MEM8(esi + 0x153C) = LO8(ecx);

loc_00112E5C:
    POP32(esp, edi);
    POP32(esp, esi);
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
