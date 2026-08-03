#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F2010
 * Original: 0x000F2010 - 0x000F212C (284 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2010(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000F2010:
    xmm0.f[0] = MEMF(0x3B16F4); /* movss */
    xmm1.f[0] = MEMF(0x3B1A90); /* movss */
    esp = esp - 0x20;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    goto loc_000F2030;

    /* nop */

loc_000F2030:
    xmm3.f[0] = MEMF(eax + 0x408C50); /* movss */
    xmm2.f[0] = MEMF(eax + 0x408C54); /* movss */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    esi = MEM32(esp + 4);
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(eax + 0x408BF8); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(eax + 0x408BFC); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    edx = ecx + 0x5722D8;
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0xC);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(eax + 0x408D04); /* movss */
    MEM32(edx + 8) = esi;
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x408D00); /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 0xC) = esi;
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    edx = ecx + 0x572218;
    MEM32(edx) = esi;
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(eax + 0x408CA8); /* movss */
    esi = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(eax + 0x408CAC); /* movss */
    MEM32(edx + 4) = esi;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    esi = MEM32(esp + 0x1C);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    esi = MEM32(esp + 0x20);
    eax = eax + 8;
    ecx = ecx + 0x10;
    /* cmp eax, 0x58 - flags set for next jcc */
    MEM32(edx + 0xC) = esi;

}
