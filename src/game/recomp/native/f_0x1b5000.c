#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5000
 * Original: 0x001B5000 - 0x001B50B2 (178 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5000(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001B5000:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(edx + 8) = LO8(ebx);
    eax = edx + 0x25;
    ecx = edx + 0x44;
    esi = 0x1C;

loc_001B5016:
    MEM8(eax + -28) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = ecx + 4;
    eax++;
    esi--;
    if ((esi != 0)) goto loc_001B5016; /* jne: not equal / not zero */

loc_001B5026:
    xmm1.f[0] = MEMF(0x3A69B8); /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    xmm2.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = 0x11;
    eax = 0; /* xor self */
    edi = edx + 0xD0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEMF(edx + 0xB8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A69BC); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0xBC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A69C0); /* movss */
    POP32(esp, esi);
    MEM32(edx + 0x118) = ebx;
    MEMF(edx + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC0) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC4) = xmm2.f[0]; /* movss */
    MEMF(edx + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x11C) = 0xFFFFFFFFu;
    MEM32(edx + 4) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
