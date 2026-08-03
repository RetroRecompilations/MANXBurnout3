#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C18A0
 * Original: 0x001C18A0 - 0x001C1926 (134 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001C18A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi); /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEM32(esp + 0xC) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    edx = MEM32(esp);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x1C1930;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
