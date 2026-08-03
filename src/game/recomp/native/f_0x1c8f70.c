#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8F70
 * Original: 0x001C8F70 - 0x001C91F2 (642 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8F70(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001C8F70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C;
    xmm0.f[0] = MEMF(eax + 0x94); /* movss */
    xmm1.f[0] = MEMF(eax + 0x98); /* movss */
    xmm2.f[0] = MEMF(eax + 0x9C); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xA0); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(edx + 8) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = esi;
    xmm0.f[0] = MEMF(eax + 0xA8); /* movss */
    xmm1.f[0] = MEMF(eax + 0xAC); /* movss */
    xmm2.f[0] = MEMF(eax + 0xB0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xB4); /* movss */
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = ecx + 0x10;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = esi;
    xmm1.f[0] = MEMF(eax + 0xC0); /* movss */
    xmm0.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm2.f[0] = MEMF(eax + 0xC4); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xC8); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(ecx + 0x30) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xD4); /* movss */
    xmm0.f[0] = MEMF(eax + 0xD0); /* movss */
    xmm2.f[0] = MEMF(eax + 0xD8); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xDC); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x24) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(ecx + 0x34) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xE8); /* movss */
    xmm0.f[0] = MEMF(eax + 0xE4); /* movss */
    xmm2.f[0] = MEMF(eax + 0xEC); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xF0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xFC); /* movss */
    xmm0.f[0] = MEMF(eax + 0xF8); /* movss */
    xmm2.f[0] = MEMF(eax + 0x100); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x104); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEMF(ecx + 0x2C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(ecx + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
