#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C19A0
 * Original: 0x001C19A0 - 0x001C1A56 (182 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C19A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001C19A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    MEM32(eax + 0x30) = ebx;
    ebx = MEM32(ebp + 0x1C);
    MEM32(eax + 0x34) = ebx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    ebx = MEM32(esi);
    MEM32(eax + 0x20) = ebx;
    esi = MEM32(esi + 4);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(edx);
    MEM32(eax + 0x28) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 0x2C) = edx;
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    POP32(esp, esi);
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x1C1A60;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}
