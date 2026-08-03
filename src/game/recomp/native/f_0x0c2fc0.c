#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C2FC0
 * Original: 0x000C2FC0 - 0x000C3258 (664 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2FC0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm6, xmm7;

loc_000C2FC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    xmm0.f[0] = MEMF(0x570394); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1884); /* subss */
    eax = MEM32(0x557A34);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 8));
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    esi++;
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1DA4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x395C04); /* addss */
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x557A20;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000C3028:
    MEM32(ebx + edi * 4 + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000C303D:
    xmm0.f[0] = MEMF(0x3B19D0); /* movss */
    MEM32(ebx + edi * 4 + 0x10) = eax;
    ecx = edi + edi * 2;
    eax = ebx + ecx * 8;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1FA4); /* movss */
    esi = eax + 0x20;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x4D6180);
    edx = edi + edi * 2 + 6;
    MEM32(ebx + edx * 8) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0xC);
    ecx = ecx | 0xFFFFFFFFu;
    MEM16(eax + 0x34) = LO16(ecx);
    MEM16(eax + 0x36) = LO16(ecx);
    ecx = MEM32(0x4D532C);
    edx++;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    eax = edi;
    eax = eax << 8;
    eax = eax + ebx + 0x50;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000589E0(); /* call 0x000589E0 */

loc_000C30B6:
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    xmm6.f[0] = MEMF(esp + 0x48); /* movss */
    esp = esp + 8;
    PUSH32(esp, 2);
    PUSH32(esp, 0x67);
    PUSH32(esp, esi);
    esi = MEM32(ebx + edi * 4 + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm7.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C2790(); /* call 0x001C2790 */

loc_000C3110:
    MEMF(esp + 0x40) = xmm7.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x406E10); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x406E14); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + edi * 4 + 0x18);
    edi = MEM32(ebx + edi * 4 + 0x10);
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = ecx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    edx = MEM32(esp + 0x2C);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x2C);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(edi) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x44) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = edx;
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x3C) = 0x1C1930;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
