#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00013C10
 * Original: 0x00013C10 - 0x00013C5B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C10(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00013C10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
