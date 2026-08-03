#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019F030
 * Original: 0x0019F030 - 0x0019F1B4 (388 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F030(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0019F030:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edi = esp + 0xC;
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edi = esp + 0xC;
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edi = esp + 0xC;
    xmm4.f[0] = MEMF(edi); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax = esp + 0xC;
    xmm4.f[0] = MEMF(eax); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    edi = esi + 0x20;
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019F14A:
    ecx = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* shufps xmm2, xmm1, 0xd2 */
    ebx = esi + 0x10;
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019F17F:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019F1AE:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
