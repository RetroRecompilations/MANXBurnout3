#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF153
 * Original: 0x001CF153 - 0x001CF251 (254 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF153(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001CF153:
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2.f[0] *= MEMF(ecx) (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x10) (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0.f[0] *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= MEMF(ecx) (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x10) (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0.f[0] *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* shufps xmm4, xmm4, 0 */
    /* addps: xmm3.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm4.f[0] *= MEMF(ecx) (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x10) (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0.f[0] *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm4.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm4.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* shufps xmm5, xmm5, 0 */
    /* addps: xmm4.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm5.f[0] *= MEMF(ecx) (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x10) (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0.f[0] *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm5.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1.f[0] *= MEMF(ecx + 0x30) (packed 4xfloat) */
    ecx = MEM32(esp + 4);
    /* addps: xmm5.f[0] += xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm5.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm5.b, 16); /* movaps */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

}
