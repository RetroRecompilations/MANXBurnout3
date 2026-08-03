#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1B20
 * Original: 0x001C1B20 - 0x001C1BE8 (200 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B20(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001C1B20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    edx = ebx;
    PUSH32(esp, 0); sub_001C0F50(); /* call 0x001C0F50 */

loc_001C1B37:
    eax = MEM32(ebp + 0xC);
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = ebx;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x3C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
