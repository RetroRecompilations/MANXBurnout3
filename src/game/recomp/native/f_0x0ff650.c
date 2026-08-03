#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF650
 * Original: 0x000FF650 - 0x000FF823 (467 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF650(void)
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

loc_000FF650:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    xmm0.f[0] = MEMF(esi + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm1.f[0] = MEMF(esi + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* shufps xmm5, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = esp + 4;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_000FF718; /* jbe: below or equal (unsigned <=) */

loc_000FF6FA:
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    edx = esp + 4;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm3.b, 16); /* movaps */
    goto loc_000FF71E;

loc_000FF718:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(eax), xmm2.b, 16); /* movaps */

loc_000FF71E:
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 4); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1C28); /* mulss */
    ecx = MEM32(ebp + 8);
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A7ED8); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm0.f[0])) goto loc_000FF75A; /* jb: below (unsigned <) */

loc_000FF74E:
    /* comiss xmm5.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm5.f[0] < xmm1.f[0])) goto loc_000FF75A; /* jb: below (unsigned <) */

loc_000FF753:
    ecx = esi;
    PUSH32(esp, 0); sub_000FF550(); /* call 0x000FF550 */

loc_000FF75A:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    edx = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_000FF7A8:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0x30); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = esp + 0xC;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0x38); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
