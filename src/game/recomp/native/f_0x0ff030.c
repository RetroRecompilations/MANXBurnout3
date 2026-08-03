#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF030
 * Original: 0x000FF030 - 0x000FF088 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF030(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000FF030:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 1.0f / sqrtf(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
