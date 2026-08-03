#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8C90
 * Original: 0x001A8C90 - 0x001A8E77 (487 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8C90(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001A8C90:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = edx + 0x70;
    MEM32(edx + 0x114) = ebx;
    MEM32(edx + 0x118) = ebx;
    MEMF(edx + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x11C) = xmm1.f[0]; /* movss */
    eax = 0; /* xor self */
    ecx = 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(edx + 0x17A));
    MEM8(edx + 0xC8) = LO8(ebx);
    MEM8(edx + 0x175) = LO8(ebx);
    MEM8(edx + 0x17B) = LO8(ebx);
    MEM8(edx + 0x177) = LO8(ebx);
    MEM8(edx + 0x172) = LO8(ebx);
    MEM32(edx + 0x16C) = ebx;
    MEM8(edx + 0x173) = LO8(ebx);
    MEM8(edx + 0xC9) = LO8(ebx);
    MEM32(edx + 0x10C) = ebx;
    MEM32(edx + 0x110) = ebx;
    MEM32(edx + 0xB0) = ebx;
    MEM32(edx + 0x108) = ebx;
    MEM8(edx + 0x174) = LO8(ebx);
    MEMF(edx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(edx + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xB8) = xmm2.f[0]; /* movss */
    MEMF(edx + 0x128) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x130) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x120) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x124) = xmm2.f[0]; /* movss */
    MEMF(edx + 0x13C) = xmm0.f[0]; /* movss */
    MEM8(edx + 0x170) = 0xFF;
    MEMF(edx + 0x140) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x144) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x148) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x150) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x154) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x158) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x168) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x160) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x134) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x138) = xmm0.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(edx + 0x17A) = LO8(eax);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(edx + 0x60), xmm3.b, 16); /* movaps */
    MEMF(edx + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x100) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x104) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM8(edx + 0x176) = LO8(ebx);
    MEM8(edx + 0x171) = LO8(ebx);
    MEM8(edx + 0x179) = LO8(ebx);
    MEM8(edx + 0x178) = LO8(ebx);
    MEM8(0x499D20) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
