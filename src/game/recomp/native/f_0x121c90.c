#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00121C90
 * Original: 0x00121C90 - 0x00121D61 (209 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121C90(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00121C90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = 0x30;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(edx), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x10), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x30), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x40), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(edx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x68) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x78) = eax;
    MEM8(edx + 0xA0) = LO8(eax);
    MEM8(edx + 0xA1) = LO8(eax);
    MEM8(edx + 0xA2) = LO8(eax);
    MEM8(edx + 0xA4) = LO8(eax);
    MEM8(edx + 0xA5) = LO8(eax);
    MEM8(edx + 0xA6) = LO8(eax);
    MEM8(edx + 0xA7) = LO8(eax);
    MEM32(edx + 0x90) = eax;
    MEMF(edx + 0x94) = xmm1.f[0]; /* movss */
    MEM16(edx + 0xB0) = LO16(eax);
    MEM8(edx + 0xB2) = LO8(eax);
    MEM8(edx + 0xB3) = LO8(eax);
    MEM8(edx + 0xB4) = LO8(eax);
    MEMF(edx + 0x74) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
