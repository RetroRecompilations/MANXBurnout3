#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001520D0
 * Original: 0x001520D0 - 0x001521BD (237 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001520D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001520D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    SET_LO8(eax, MEM8(esi + 0x93D));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001521B7; /* jbe: below or equal (unsigned <=) */

loc_001520EB:
    goto loc_001520F0;

    /* nop */

loc_001520F0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    eax = ZX8(LO8(ebx));
    ecx = eax + eax * 2;
    eax = MEM32(esi + eax * 4 + 0x91C);
    edx = esi + ecx * 4 + 0x8EC;
    ecx = MEM32(edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39CC08); /* movss */
    edi = esp + 8;
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    MEM8(esp + 0x4C) = 0;
    MEM8(esp + 0x4E) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x4D) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001521A7:
    SET_LO8(eax, MEM8(esi + 0x93D));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(eax))) goto loc_001520F0; /* jb: below (unsigned <) */

loc_001521B7:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
