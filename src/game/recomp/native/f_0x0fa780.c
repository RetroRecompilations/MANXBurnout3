#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FA780
 * Original: 0x000FA780 - 0x000FA83B (187 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA780(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_000FA780:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 4); /* divss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx); /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edi = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0x24) = edi;
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0xFA840;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
