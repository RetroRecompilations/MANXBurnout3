#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D9510
 * Original: 0x001D9510 - 0x001D9632 (290 bytes, 62 insns)
 * Category: rw_core
 * Source: src/bacamera.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9510(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001D9510:
    eax = MEM32(0x41AA68);
    ecx = MEM32(eax + 0x7592A0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30005);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E4), _icall_esp); /* indirect call */
    }

loc_001D9528:
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(esi, eax)) goto loc_001D9535; /* jne: not equal / not zero */

loc_001D9533:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D9535:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x36C2D4); /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x36C418); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEM8(esi) = 4;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 2) = LO8(eax);
    MEM8(esi + 3) = LO8(eax);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = 0x1D9130;
    MEM32(esi + 0x18) = 0x1D91B0;
    MEM32(esi + 0x1C) = 0x1D9180;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x14) = 1;
    xmm2.f[0] = MEMF(0x7592B8); /* movss */
    xmm1.f[0] = MEMF(0x7592BC); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B188C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x36C414); /* mulss */
    MEMF(esi + 0x8C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x36C410); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C0810);
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0); sub_001E1AF0(); /* call 0x001E1AF0 */

loc_001D962B:
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
