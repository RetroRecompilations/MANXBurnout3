#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00127340
 * Original: 0x00127340 - 0x00127CBC (2428 bytes, 573 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00127340:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    xmm3.f[0] = MEMF(esi + 4); /* movss */
    edi = edx;
    ebx = MEM32(edi);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    xmm2.f[0] = MEMF(esp + 0x44); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x48) = ebx;
    edi = edx + 0x100;
    ebx = MEM32(edi);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0x4C) = edi;
    esi = edx + 0x40;
    MEM32(esp + 0x48) = ebx;
    edi = esi;
    ebx = MEM32(edi);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0x4C) = edi;
    edi = MEM32(ebp + 8);
    xmm4.f[0] = MEMF(edi + 8); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x44); /* addss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esp + 0x48) = ebx;
    edi = edx + 0x140;
    ebx = MEM32(edi);
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0x4C) = edi;
    edi = MEM32(ebp + 8);
    xmm5.f[0] = MEMF(edi + 0xC); /* movss */
    edi = MEM32(esi);
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0x40) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x44) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x4C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    MEM32(esp + 0x48) = ebx;
    MEMF(esp + 0x64) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x80;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0xC0;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x100;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x140;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x20;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x20;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = edi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x60;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = edx + 0x40;
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x60;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = edx + 0x40;
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = edi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x120;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = esi;
    edx = edx + 0x100;
    esi = MEM32(edx);
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x1C0;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x120;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = edx + 0x100;
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = edi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x1C0;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = esi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x160;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = edx + 0x140;
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x58) = edi;
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x1E0;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    esi = edx + 0x160;
    edi = MEM32(esi);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = edx + 0x140;
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = edi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    edx = edx + 0x1E0;
    esi = MEM32(edx);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = esi;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x3C); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    xmm1.f[0] = MEMF(eax + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    edx = edx + 0x80;
    esi = MEM32(edx);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x48) = esi;
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(eax + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = esp + 0x3C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = esp + 0x3C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    ecx = MEM32(ecx);
    xmm7.f[0] = MEMF(eax + 0x38); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(eax + 0x28); /* subss */
    ecx = ecx + 0xC0;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x48) = edx;
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    xmm7.f[0] = MEMF(eax + 0x30); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(eax + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm7.f[0] = MEMF(eax + 0x20); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x40); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEM32(esp + 0x4C) = ecx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm7.f[0] = MEMF(esp + 0x34); /* movss */
    edx = esp + 0x3C;
    MEMF(esp + 0x3C) = xmm7.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    ecx = esp + 0x3C;
    MEMF(esp + 0x3C) = xmm7.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A69BC); /* movss */
    ecx = eax + 0x44;
    MEMF(eax + 0x54) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm5.f[0]; /* movss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = 4;
    goto loc_00127C80;

    /* nop */

loc_00127C80:
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + -64); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x3C) ? xmm0.f[0] : MEMF(esp + 0x3C)); /* maxss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + -64); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = ecx + 0x10;
    eax--;
    if ((eax != 0)) goto loc_00127C80; /* jne: not equal / not zero */

loc_00127CB6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
