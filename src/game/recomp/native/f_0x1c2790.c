#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C2790
 * Original: 0x001C2790 - 0x001C28DB (331 bytes, 90 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;

loc_001C2790:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x14);
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx + 0xC); /* subss */
    eax = eax & 0x64;
    /* cmp LO8(eax), 0x64 - flags set for next jcc */
    memcpy(xmm5.b, xmm6.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] / MEMF(ebx + 8); /* divss */
    PUSH32(esp, edi);
    MEM32(esp + 8) = edx;
    MEM8(esp + 0x10) = (CMP_EQ(LO8(eax), 0x64)) ? 1 : 0; /* sete */

loc_001C27C2:
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001C1060(); /* call 0x001C1060 */

loc_001C27DB:
    edx = MEM32(esp + 0x18);
    if (CMP_EQ(MEM32(esp + 8), edx)) goto loc_001C2800; /* je: equal / zero */

loc_001C27E5:
    /* cmp MEM16(edx), 0 - flags set for next jcc */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    MEM32(esp + 8) = edx;
    if (CMP_NE(MEM16(edx), 0)) goto loc_001C27C2; /* jne: not equal / not zero */

loc_001C2800:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = MEM32(ebp + 0x14);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x2C) = ebx;
    MEMF(esi + 0x34) = xmm5.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(esi + 0x30) = ecx;
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = MEM32(ebp + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(eax); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    eax = MEM32(ecx * 4 + 0x3A7B18);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    edx = MEM32(esp + 0x18);
    MEM32(esi) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(ebp + 0x10);
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x3C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}
