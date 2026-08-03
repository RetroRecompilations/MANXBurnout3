#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A10E0
 * Original: 0x001A10E0 - 0x001A13E2 (770 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A10E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A10E0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esi + 0x127D0;
    ecx = 0x5F40;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = 0xFE;
    /* nop */

loc_001A1100:
    PUSH32(esp, 0); sub_001A8C90(); /* call 0x001A8C90 */

loc_001A1105:
    edx = edx + 0x180;
    edi--;
    if ((edi != 0)) goto loc_001A1100; /* jne: not equal / not zero */

loc_001A110E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    xmm2.f[0] = MEMF(0x3B16E4); /* movss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    eax = 0; /* xor self */
    ecx = 0x13D8;
    edi = esi + 0x2A4D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esi + 0x2A508;
    ebp = 0x7F;
    ebx = 0; /* xor self */
    edx = 0xFF;
    SET_LO8(ecx, 0xE2);
    edi = 0xFFFF;

loc_001A1151:
    MEM8(eax + 0x13) = MEM8(eax + 0x13) & LO8(ecx);
    MEM8(eax + 0x63) = MEM8(eax + 0x63) & LO8(ecx);
    MEM8(eax + 0xE) = LO8(ebx);
    MEM32(eax) = ebx;
    MEM8(eax + 0xF) = LO8(edx);
    MEM8(eax + 9) = LO8(edx);
    MEM8(eax + 0xC) = LO8(edx);
    MEM8(eax + 0xD) = LO8(edx);
    MEMF(eax + -12) = xmm0.f[0]; /* movss */
    MEMF(eax + -56) = xmm0.f[0]; /* movss */
    MEMF(eax + -52) = xmm0.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax + -24) = xmm0.f[0]; /* movss */
    MEMF(eax + -28) = xmm0.f[0]; /* movss */
    MEMF(eax + -48) = xmm1.f[0]; /* movss */
    MEMF(eax + -44) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x12) = LO8(edx);
    MEMF(eax + -16) = xmm0.f[0]; /* movss */
    MEMF(eax + -40) = xmm3.f[0]; /* movss */
    MEMF(eax + -36) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x15) = LO8(ebx);
    MEMF(eax + -32) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(edx);
    MEMF(eax + -20) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x14) = LO8(ebx);
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 0xA) = LO8(edx);
    MEM8(eax + 0xB) = LO8(edx);
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(edi);
    MEM8(eax + 0x5E) = LO8(ebx);
    MEM32(eax + 0x50) = ebx;
    MEM8(eax + 0x5F) = LO8(edx);
    MEM8(eax + 0x59) = LO8(edx);
    MEM8(eax + 0x5C) = LO8(edx);
    MEM8(eax + 0x5D) = LO8(edx);
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x62) = LO8(edx);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x65) = LO8(ebx);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x58) = LO8(edx);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x64) = LO8(ebx);
    MEM8(eax + 0x60) = LO8(ebx);
    MEM8(eax + 0x5A) = LO8(edx);
    MEM8(eax + 0x5B) = LO8(edx);
    MEM16(eax + 0x54) = LO16(edi);
    MEM16(eax + 0x56) = LO16(edi);
    eax = eax + 0xA0;
    ebp--;
    if ((ebp != 0)) goto loc_001A1151; /* jne: not equal / not zero */

loc_001A124C:
    eax = 0; /* xor self */
    ecx = 0x45BA;
    edi = esi + 4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esi + 0x64;
    MEM32(esp + 0xC) = edx;
    edi = 2;

loc_001A1264:
    ecx = eax + 0x34;
    ebp = ecx;
    edx = 0; /* xor self */
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = edx;
    MEM32(eax + -28) = ecx;
    ecx = eax + 0x36;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -20) = edi;
    edx = eax + 0x38;
    ecx = eax + 0x3A;
    MEM32(eax) = edi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x28) = edi;
    eax = eax + 0x118;
    ecx--;
    MEM32(esp + 0xC) = ecx;
    if ((ecx != 0)) goto loc_001A1264; /* jne: not equal / not zero */

loc_001A12A1:
    ecx = esi + 0x343F0;
    eax = esi + 0x34390;
    edx = 0xC;

loc_001A12B2:
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(ecx) = ebx;
    eax = eax + 8;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001A12B2; /* jne: not equal / not zero */

loc_001A12C2:
    xmm1.f[0] = MEMF(0x39B2B0); /* movss */
    xmm2.f[0] = MEMF(0x3B17D8); /* movss */
    xmm0.f[0] = MEMF(0x3B17E0); /* movss */
    MEM8(esi + 0x34450) = LO8(ebx);
    eax = 1;
    MEM32(esi + 0x374F8) = eax;
    MEM32(esi + 0x374FC) = eax;
    MEMF(esi + 0x37468) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17DC); /* movss */
    MEMF(esi + 0x3746C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEM32(esi + 0x37400) = ebx;
    MEM32(esi + 0x37404) = ebx;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(esi + 0x37408) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37428) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37448) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x3740C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3742C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3744C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x37410) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37430) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37450) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x37414) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37434) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37454) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x37418) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37438) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37458) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x3741C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3743C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3745C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x37420) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37440) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37460) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x37424) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x37444) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x37464) = xmm2.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
