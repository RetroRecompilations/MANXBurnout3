#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000526C0
 * Original: 0x000526C0 - 0x00052AA6 (998 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000526C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_000526C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edi + 0x170) = ebx;
    MEM32(edi + 0x174) = ebx;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(0x3FD4A4) = edi;
    MEM32(0x3FD4AC) = ebx;
    MEM32(0x3FD4FC) = edi;
    MEM32(0x3FD504) = ebx;
    MEM32(0x3FD554) = edi;
    MEM32(0x3FD55C) = ebx;
    MEM32(0x3FDC04) = edi;
    MEM32(0x3FDC0C) = ebx;
    MEM32(0x3FDD4C) = edi;
    MEM32(0x3FDD54) = ebx;
    MEM32(0x3FDD9C) = edi;
    MEM32(0x3FDDA4) = ebx;
    MEM32(0x3FDE74) = edi;
    MEM32(0x3FDE7C) = ebx;
    MEM32(0x3FDF14) = edi;
    MEM32(0x3FDF1C) = ebx;
    MEM32(0x3FDF74) = edi;
    MEM32(0x3FDF7C) = ebx;
    MEM32(0x3FDFAC) = edi;
    MEM32(0x3FDFB4) = ebx;
    MEM32(0x3FDFF4) = edi;
    MEM32(0x3FDFFC) = ebx;
    MEM32(0x3FE26C) = edi;
    MEM32(0x3FE274) = ebx;
    MEM32(0x3FE414) = edi;
    MEM32(0x3FE41C) = ebx;
    MEM32(0x3FE464) = edi;
    MEM32(0x3FE46C) = ebx;
    MEM32(0x3FE4BC) = edi;
    MEM32(0x3FE4C4) = ebx;
    MEM32(0x3FE5F4) = edi;
    MEM32(0x3FE5FC) = ebx;
    MEM32(0x3FE64C) = edi;
    MEM32(0x3FE654) = ebx;
    MEM32(0x3FE6A4) = edi;
    MEM32(0x3FE6AC) = ebx;
    MEM32(0x3FED54) = edi;
    MEM32(0x3FED5C) = ebx;
    MEM32(0x3FEE9C) = edi;
    MEM32(0x3FEEA4) = ebx;
    MEM32(0x3FEEEC) = edi;
    MEM32(0x3FEEF4) = ebx;
    MEM32(0x3FEF8C) = edi;
    MEM32(0x3FEF94) = ebx;
    MEM32(0x3FEFEC) = edi;
    MEM32(0x3FEFF4) = ebx;
    MEM32(0x3FF194) = edi;
    MEM32(0x3FF19C) = ebx;
    MEM32(0x3FF2CC) = edi;
    MEM32(0x3FF2D4) = ebx;
    MEM32(0x3FF33C) = edi;
    MEM32(0x3FF344) = ebx;
    MEM32(0x3FF308) = edi;
    MEM32(0x3FF310) = ebx;
    MEM32(esp + 0xC) = eax;
    esi = edi + 0x4C;
    goto loc_00052830;

loc_0005282B:
    eax = MEM32(esp + 0xC);
    /* nop */

loc_00052830:
    MEM32(esi + -60) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = MEM32(eax * 4 + 0x3EAF28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x12);
    ecx = esi + -56;
    PUSH32(esp, ecx);
    ecx = 0x1880;
    edx = 0x2F;
    PUSH32(esp, 0); sub_001C6660(); /* call 0x001C6660 */

loc_00052858:
    eax = MEM32(esp + 0xC);
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    eax++;
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    esi = esi + 0x70;
    /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, 2)) goto loc_0005282B; /* jl: less (signed <) */

loc_0005287B:
    xmm0.f[0] = MEMF(0x3B16C4); /* movss */
    xmm1.f[0] = MEMF(0x3B1CE0); /* movss */
    xmm5.f[0] = MEMF(0x3B1CDC); /* movss */
    xmm6.f[0] = MEMF(0x398CC0); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16AC); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(0x395BE0); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(edi + 0xF0), xmm4.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = esp + 0xC;
    xmm3.f[0] = MEMF(eax); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(0x3A1A00); /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(edi + 0x110), xmm4.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm3.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x120), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x160), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x100), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B1754); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1CD8); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x3B1CD4); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1CD0); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B175C); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(edi + 0x130), xmm3.b, 16); /* movaps */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x140), xmm3.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B1884); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x150), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0004DA90(); /* call 0x0004DA90 */

loc_00052A96:
    POP32(esp, esi);
    MEM32(edi + 0x178) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
