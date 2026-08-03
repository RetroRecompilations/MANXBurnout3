#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00036450
 * Original: 0x00036450 - 0x000365CB (379 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036450(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00036450:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    ecx = eax + 0x418EA0;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    MEM32(esi + 0xE8) = ecx;
    PUSH32(esp, 0); sub_00036250(); /* call 0x00036250 */

loc_00036473:
    ecx = esi + 0x94;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE8);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00036250(); /* call 0x00036250 */

loc_00036487:
    eax = MEM32(esi + 0xE8);
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    xmm0.f[0] = MEMF(0x395BE0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi), xmm2.b, 16); /* movaps */
    xmm1.f[0] = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x1C); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm2.b, 16); /* movaps */
    eax = MEM32(esi + 0xE8);
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x24); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x28); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x2C); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm2.b, 16); /* movaps */
    eax = MEM32(esi + 0xE8);
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x38); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x3C); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm1.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
