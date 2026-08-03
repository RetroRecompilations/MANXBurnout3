#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019EBA0
 * Original: 0x0019EBA0 - 0x0019F024 (1156 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EBA0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0019EBA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    xmm0.f[0] = MEMF(0x41739C); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    PUSH32(esp, ebx);
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417398); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417394); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417390); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(ebp + 0xC);
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173AC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173A8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173A4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173A0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(ebp + 0xC);
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173BC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173B8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173B4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173B0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(ebp + 0xC);
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173CC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173C8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173C4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173C0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(ebp + 0xC);
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173DC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173D8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173D4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173D0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173EC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173E8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173E4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173E0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4173FC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173F8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173F4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x4173F0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ebx = esp + 0xC;
    xmm4.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x41740C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = esp + 0xC;
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417408); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417404); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x417400); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    edx = esp + 0xC;
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x30), xmm0.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
