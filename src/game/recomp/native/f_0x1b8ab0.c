#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B8AB0
 * Original: 0x001B8AB0 - 0x001B8CDE (558 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8AB0:
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    MEM32(esi) = ecx;
    ebx = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(esi + 4) = edi;
    MEM32(esp + 8) = ebx;
    ebp = 0xFFFF;
    if (CMP_L(eax, 4)) goto loc_001B8C60; /* jl: less (signed <) */

loc_001B8ADA:
    eax = eax + 0xFFFFFFFCu;
    eax = eax >> 2;
    eax++;
    MEM32(esp + 0x10) = eax;
    eax = eax << 2;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = eax;

loc_001B8AF0:
    eax = MEM32(esi);
    MEM32(eax + ebx + 0x40) = edi;
    MEM8(eax + ebx) = LO8(edx);
    MEM32(eax + ebx + 4) = ecx;
    MEM32(eax + ebx + 8) = ecx;
    MEM8(eax + ebx + 1) = 0xFF;
    MEM16(eax + ebx + 0xC) = LO16(ebp);
    MEM8(eax + ebx + 3) = LO8(ecx);
    MEM8(eax + ebx + 2) = LO8(edx);
    MEMF(eax + ebx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + ebx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + ebx + 0x20) = LO8(edx);
    MEM32(eax + ebx + 0x24) = ecx;
    MEM32(eax + ebx + 0x28) = ecx;
    MEM8(eax + ebx + 0x21) = 0xFF;
    MEM16(eax + ebx + 0x2C) = LO16(ebp);
    MEM8(eax + ebx + 0x23) = LO8(ecx);
    MEM8(eax + ebx + 0x22) = LO8(edx);
    MEMF(eax + ebx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + ebx + 0x34) = xmm0.f[0]; /* movss */
    eax = eax + ebx;
    eax = MEM32(esi);
    MEM32(ebx + eax + 0x90) = edi;
    MEM8(ebx + eax + 0x50) = LO8(edx);
    MEM32(ebx + eax + 0x54) = ecx;
    MEM32(ebx + eax + 0x58) = ecx;
    MEM8(ebx + eax + 0x51) = 0xFF;
    MEM16(ebx + eax + 0x5C) = LO16(ebp);
    MEM8(ebx + eax + 0x53) = LO8(ecx);
    MEM8(ebx + eax + 0x52) = LO8(edx);
    MEMF(ebx + eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(ebx + eax + 0x64) = xmm0.f[0]; /* movss */
    eax = ebx + eax + 0x50;
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x21) = 0xFF;
    MEM16(eax + 0x2C) = LO16(ebp);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(edx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ebx = ebx + 0xF0;
    eax = ebx + eax + -80;
    MEM32(eax + 0x40) = edi;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = 0xFF;
    MEM16(eax + 0xC) = LO16(ebp);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 2) = LO8(edx);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x21) = 0xFF;
    MEM16(eax + 0x2C) = LO16(ebp);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(edx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    eax = eax + ebx;
    MEM32(eax + 0x40) = edi;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ebx, 0xFF);
    MEM8(eax + 1) = LO8(ebx);
    MEM16(eax + 0xC) = LO16(ebp);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 2) = LO8(edx);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x21) = LO8(ebx);
    ebx = MEM32(esp + 0xC);
    MEM16(eax + 0x2C) = LO16(ebp);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(edx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    ebx = ebx + 0x140;
    eax--;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_001B8AF0; /* jne: not equal / not zero */

loc_001B8C58:
    ebx = MEM32(esp + 8);
    eax = MEM32(esp + 0x18);

loc_001B8C60:
    if (CMP_GE(ebx, eax)) goto loc_001B8CD6; /* jge: greater or equal (signed >=) */

loc_001B8C64:
    ebx = ebx + ebx * 4;
    ebx = ebx << 4;
    MEM32(esp + 0x10) = ebx;
    eax = eax - MEM32(esp + 8);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_001B8C80:
    eax = MEM32(esi);
    eax = eax + ebx;
    MEM32(eax + 0x40) = edi;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = 0xFF;
    MEM16(eax + 0xC) = LO16(ebp);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 2) = LO8(edx);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x21) = 0xFF;
    MEM16(eax + 0x2C) = LO16(ebp);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(edx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    ebx = ebx + 0x50;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_001B8C80; /* jne: not equal / not zero */

loc_001B8CD6:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}
