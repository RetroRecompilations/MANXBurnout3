#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B0F00
 * Original: 0x001B0F00 - 0x001B0FD7 (215 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0F00(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001B0F00:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0xA);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0xB);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = edx + edx * 2;
    ecx = ecx + edx * 2;
    edx = ZX16(MEM16(ecx));
    esi = esp + 8;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX16(MEM16(ecx + 2));
    ecx = ZX16(MEM16(ecx + 4));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1830); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    ecx = esp + 0xC;
    xmm2.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* divps: xmm3.f[0] /= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm3.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
