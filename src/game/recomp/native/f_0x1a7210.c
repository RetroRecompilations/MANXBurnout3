#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A7210
 * Original: 0x001A7210 - 0x001A7598 (904 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001A7210:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm4.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(ecx + 0x11C) = xmm4.f[0]; /* movss */
    MEM16(ecx + 0x2C) = 0xFFFF;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    eax = 0xFFFF;
    MEM16(ecx + 0x20) = LO16(eax);
    MEM16(ecx + 0x22) = LO16(eax);
    MEM16(ecx + 0x24) = LO16(eax);
    MEM16(ecx + 0x26) = LO16(eax);
    SET_LO8(edx, 0xFF);
    MEM8(ecx + 0x2E) = LO8(edx);
    MEM8(ecx + 0x2F) = LO8(edx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x118) = ebx;
    MEM32(ecx + 0x28) = ebx;
    MEM8(ecx + 0x5E) = LO8(edx);
    MEM16(ecx + 0x5C) = 0xFFFF;
    MEM8(ecx + 0x5F) = LO8(edx);
    MEM16(ecx + 0x50) = LO16(eax);
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x54) = LO16(eax);
    MEM16(ecx + 0x56) = LO16(eax);
    MEM32(ecx + 0x58) = ebx;
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xB0);
    /* cmp edx, ebx - flags set for next jcc */
    MEM32(ecx + 0x10C) = ebx;
    MEM32(ecx + 0x110) = ebx;
    MEMF(ecx + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x150) = xmm0.f[0]; /* movss */
    if (CMP_EQ(edx, ebx)) goto loc_001A73AD; /* je: equal / zero */

loc_001A72F7:
    xmm2.f[0] = MEMF(edx + 0x18); /* movss */
    xmm3.f[0] = MEMF(0x3A69C4); /* movss */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    MEMF(ecx + 0x120) = xmm2.f[0]; /* movss */
    if ((xmm3.f[0] <= xmm2.f[0])) goto loc_001A7319; /* jbe: below or equal (unsigned <=) */

loc_001A7311:
    MEMF(ecx + 0x120) = xmm3.f[0]; /* movss */

loc_001A7319:
    if (CMP_BE(MEM8(edx + 0x16BA), LO8(ebx))) goto loc_001A733D; /* jbe: below or equal (unsigned <=) */

loc_001A7321:
    eax = MEM32(edx + 0x169C);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x150) = xmm2.f[0]; /* movss */

loc_001A733D:
    if (CMP_BE(MEM8(edx + 0x16BB), LO8(ebx))) goto loc_001A7361; /* jbe: below or equal (unsigned <=) */

loc_001A7345:
    eax = MEM32(edx + 0x16A0);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x14C) = xmm2.f[0]; /* movss */

loc_001A7361:
    if (CMP_BE(MEM8(edx + 0x16BC), LO8(ebx))) goto loc_001A7389; /* jbe: below or equal (unsigned <=) */

loc_001A7369:
    eax = MEM32(edx + 0x16A4);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 0x138) = xmm2.f[0]; /* movss */

loc_001A7389:
    if (CMP_BE(MEM8(edx + 0x16BD), LO8(ebx))) goto loc_001A73AD; /* jbe: below or equal (unsigned <=) */

loc_001A7391:
    eax = MEM32(edx + 0x16A8);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x134) = xmm2.f[0]; /* movss */

loc_001A73AD:
    xmm2.f[0] = MEMF(ecx + 0x14C); /* movss */
    /* ucomiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A73DF; /* jp: parity */

loc_001A73BE:
    xmm2.f[0] = MEMF(ecx + 0x150); /* movss */
    /* ucomiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A73DF; /* jp: parity */

loc_001A73CF:
    xmm2.f[0] = MEMF(0x3B16A4); /* movss */
    MEMF(ecx + 0x14C) = xmm2.f[0]; /* movss */

loc_001A73DF:
    /* cmp edx, ebx - flags set for next jcc */
    xmm2.f[0] = MEMF(0x3A69B4); /* movss */
    MEM8(ecx + 0x172) = LO8(ebx);
    MEM8(ecx + 0x170) = 0xFF;
    MEMF(ecx + 0x130) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    if (CMP_EQ(edx, ebx)) goto loc_001A743D; /* je: equal / zero */

loc_001A7420:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(edx + 0xE80); /* divss */
    MEMF(ecx + 0x158) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] / MEMF(edx + 0xE88); /* divss */
    goto loc_001A7445;

loc_001A743D:
    MEMF(ecx + 0x158) = xmm2.f[0]; /* movss */

loc_001A7445:
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(ecx + 0x173) = LO8(eax);
    MEMF(ecx + 0x154) = xmm2.f[0]; /* movss */
    edx = SX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x3A5E74);
    MEM32(ecx + 0x15C) = eax;
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x124) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    SET_LO8(edx, MEM8(ecx + 0x173));
    /* cmp LO8(edx), 5 - flags set for next jcc */
    SET_LO8(eax, 1);
    MEM8(ecx + 0x174) = LO8(eax);
    if (CMP_LE(LO8(edx), 5)) goto loc_001A74C5; /* jle: less or equal (signed <=) */

loc_001A74B9:
    if (CMP_GE(LO8(edx), 0xB)) goto loc_001A74C5; /* jge: greater or equal (signed >=) */

loc_001A74BE:
    MEM8(ecx + 0x174) = 5;

loc_001A74C5:
    xmm0.f[0] = MEMF(0x3B1900); /* movss */
    edx = ZX8(MEM8(ecx + 0x176));
    MEMF(ecx + 0xCC) = xmm0.f[0]; /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    xmm0.f[0] = MEMF(0x3B193C); /* movss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1938); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x384A80); /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1934); /* movss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1930); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B192C); /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1928); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1924); /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    edx = MEM32(edx + 0x4795E8);
    MEM32(ecx + 0x168) = edx;
    if (TEST_Z(MEM8(ebp + 0xC), LO8(eax))) goto loc_001A7591; /* je: equal / zero */

loc_001A7573:
    if (CMP_EQ(MEM8(0x649B99), LO8(ebx))) goto loc_001A7584; /* je: equal / zero */

loc_001A757B:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A7584:
    MEM8(ecx + 0x174) = MEM8(ecx + 0x174) | 8;
    MEM32(0x739C68) = ecx;

loc_001A7591:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
