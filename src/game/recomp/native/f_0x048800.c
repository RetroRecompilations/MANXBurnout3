#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00048800
 * Original: 0x00048800 - 0x0004889A (154 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048800(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00048800:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3FCAA0); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3FCAA4); /* mulss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    MEM32(esp + 8) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    ecx = MEM32(esp + 4);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    edx = MEM32(esp);
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x3FCAA0);
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x3FCAA4);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ecx = MEM32(ebp + 0x10);
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x4AE40;
    MEM32(eax + 0x20) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
