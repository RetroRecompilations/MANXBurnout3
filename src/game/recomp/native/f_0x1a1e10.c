#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A1E10
 * Original: 0x001A1E10 - 0x001A20ED (733 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm4, xmm5;

loc_001A1E10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x363AD));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1E4C; /* jbe: below or equal (unsigned <=) */

loc_001A1E29:
    esi = esi + 4;
    /* nop */

loc_001A1E30:
    PUSH32(esp, 0); sub_001A5D70(); /* call 0x001A5D70 */

loc_001A1E35:
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 0x363AD));
    edi++;
    esi = esi + 0x118;
    if (CMP_L(edi, ecx)) goto loc_001A1E30; /* jl: less (signed <) */

loc_001A1E4A:
    esi = eax;

loc_001A1E4C:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    esi = esi + 0x1282C;
    MEM32(esp + 0xC) = 0xFE;
    SET_LO8(ebx, 0xFF);
    edi = 0xFFFF;
    /* nop */

loc_001A1E70:
    edx = esi + -92;
    PUSH32(esp, 0); sub_001A8C90(); /* call 0x001A8C90 */

loc_001A1E78:
    MEM8(esi + -46) = LO8(ebx);
    MEM16(esi + -48) = 0xFFFF;
    MEM8(esi + -45) = LO8(ebx);
    MEM16(esi + -60) = LO16(edi);
    MEM16(esi + -58) = LO16(edi);
    MEM16(esi + -56) = LO16(edi);
    MEM16(esi + -54) = LO16(edi);
    MEMF(esi + -88) = xmm4.f[0]; /* movss */
    MEMF(esi + -84) = xmm4.f[0]; /* movss */
    MEMF(esi + -80) = xmm4.f[0]; /* movss */
    MEMF(esi + -76) = xmm4.f[0]; /* movss */
    MEMF(esi + -72) = xmm5.f[0]; /* movss */
    MEMF(esi + -68) = xmm4.f[0]; /* movss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    eax = 0; /* xor self */
    MEM32(esi + -52) = eax;
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);
    MEM8(esi + 2) = LO8(ebx);
    MEM16(esi) = 0xFFFF;
    MEM8(esi + 3) = LO8(ebx);
    MEM16(esi + -12) = LO16(edi);
    MEM16(esi + -10) = LO16(edi);
    MEM16(esi + -8) = LO16(edi);
    MEM16(esi + -6) = LO16(edi);
    MEMF(esi + -44) = xmm4.f[0]; /* movss */
    MEMF(esi + -40) = xmm4.f[0]; /* movss */
    MEMF(esi + -36) = xmm4.f[0]; /* movss */
    MEMF(esi + -32) = xmm4.f[0]; /* movss */
    MEMF(esi + -28) = xmm4.f[0]; /* movss */
    MEMF(esi + -24) = xmm5.f[0]; /* movss */
    MEMF(esi + -20) = xmm4.f[0]; /* movss */
    esi = esi + 0x180;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_001A1E70; /* jne: not equal / not zero */

loc_001A1F11:
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    xmm1.f[0] = MEMF(0x3B16E4); /* movss */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    eax = esi + 0x2A508;
    ecx = 0x7F;
    SET_LO8(edx, 0xE2);
    /* nop */

loc_001A1F40:
    MEM8(eax + 0x13) = MEM8(eax + 0x13) & LO8(edx);
    MEM8(eax + 0x63) = MEM8(eax + 0x63) & LO8(edx);
    MEM8(eax + 0xE) = 0;
    MEM32(eax) = 0;
    MEM8(eax + 0xF) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEM8(eax + 0xC) = LO8(ebx);
    MEM8(eax + 0xD) = LO8(ebx);
    MEMF(eax + -12) = xmm4.f[0]; /* movss */
    MEMF(eax + -56) = xmm4.f[0]; /* movss */
    MEMF(eax + -52) = xmm4.f[0]; /* movss */
    MEMF(eax + -8) = xmm4.f[0]; /* movss */
    MEMF(eax + -4) = xmm4.f[0]; /* movss */
    MEMF(eax + -24) = xmm4.f[0]; /* movss */
    MEMF(eax + -28) = xmm4.f[0]; /* movss */
    MEMF(eax + -48) = xmm0.f[0]; /* movss */
    MEMF(eax + -44) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x12) = LO8(ebx);
    MEMF(eax + -16) = xmm4.f[0]; /* movss */
    MEMF(eax + -40) = xmm2.f[0]; /* movss */
    MEMF(eax + -36) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x15) = 0;
    MEMF(eax + -32) = xmm4.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + -20) = xmm4.f[0]; /* movss */
    MEM8(eax + 0x14) = 0;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(edi);
    MEM8(eax + 0x5E) = 0;
    MEM32(eax + 0x50) = 0;
    MEM8(eax + 0x5F) = LO8(ebx);
    MEM8(eax + 0x59) = LO8(ebx);
    MEM8(eax + 0x5C) = LO8(ebx);
    MEM8(eax + 0x5D) = LO8(ebx);
    MEMF(eax + 0x44) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x62) = LO8(ebx);
    MEMF(eax + 0x40) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x65) = 0;
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    MEM8(eax + 0x58) = LO8(ebx);
    MEMF(eax + 0x3C) = xmm4.f[0]; /* movss */
    MEM8(eax + 0x64) = 0;
    MEM8(eax + 0x60) = 0;
    MEM8(eax + 0x5A) = LO8(ebx);
    MEM8(eax + 0x5B) = LO8(ebx);
    MEM16(eax + 0x54) = LO16(edi);
    MEM16(eax + 0x56) = LO16(edi);
    eax = eax + 0xA0;
    ecx--;
    if ((ecx != 0)) goto loc_001A1F40; /* jne: not equal / not zero */

loc_001A204B:
    SET_LO8(eax, MEM8(esi + 0x34450));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001A2079; /* jle: less or equal (signed <=) */

loc_001A2057:
    ebx = 0x479560;
    /* nop */

loc_001A2060:
    eax = ebx;
    PUSH32(esp, 0); sub_00134DA0(); /* call 0x00134DA0 */

loc_001A2067:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    edi++;
    ebx = ebx + 0xB0;
    if (CMP_L(edi, edx)) goto loc_001A2060; /* jl: less (signed <) */

loc_001A2079:
    ecx = 0x3FA024;
    edx = esi + 0x343F0;
    eax = esi + 0x34390;
    edi = 2;
    /* nop */

loc_001A2090:
    if (CMP_NE(MEM32(0x3FA644), edi)) goto loc_001A20A0; /* jne: not equal / not zero */

loc_001A2098:
    MEM32(ecx + 0x4C0) = edi;
    goto loc_001A20A2;

loc_001A20A0:
    MEM32(ecx) = edi;

loc_001A20A2:
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(edx) = 0;
    ecx = ecx + 0x10;
    eax = eax + 8;
    edx = edx + 4;
    if (CMP_L(ecx, 0x3FA0E4)) goto loc_001A2090; /* jl: less (signed <) */

loc_001A20C6:
    eax = 0x18;
    POP32(esp, edi);
    MEM32(esi) = 0;
    MEM8(esi + 0x34450) = 0;
    MEM32(esi + 0x374F8) = eax;
    MEM32(esi + 0x374FC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
