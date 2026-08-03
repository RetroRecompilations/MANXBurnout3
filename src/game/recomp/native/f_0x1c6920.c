#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6920
 * Original: 0x001C6920 - 0x001C69B7 (151 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6920(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_001C6920:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    xmm0.f[0] = MEMF(0x3B16C4); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = esp + 4;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(esp + 0xC), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    ecx = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    edx = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    esi = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    edi = eax;
    eax = ecx;
    eax = eax << 8;
    eax = eax | edx;
    eax = eax << 8;
    eax = eax | esi;
    eax = eax << 8;
    eax = eax | edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
