#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001518F0
 * Original: 0x001518F0 - 0x00151988 (152 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001518F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001518F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x30;
    edx = eax;
    eax = eax + 0xA;
    eax = eax << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    eax = MEM32(ebp + 8);
    edx = edx << 6;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ecx + 0x270), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = 1.0f / sqrtf(xmm1.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    ecx = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF0E0(); /* call 0x000FF0E0 */

loc_0015196F:
    /* comiss xmm0.f[0], MEMF(ebp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + 0xC))) goto loc_00151980; /* jbe: below or equal (unsigned <=) */

loc_00151975:
    eax = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00151980:
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
