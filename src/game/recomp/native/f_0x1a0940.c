#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0940
 * Original: 0x001A0940 - 0x001A09E4 (164 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0940(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001A0940:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16E4); /* movss */
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    SET_LO8(ecx, 0xFF);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x4B));
    edx = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) & 0xE2);
    MEM8(eax + 0x47) = LO8(ecx);
    MEM8(eax + 0x41) = LO8(ecx);
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x42) = LO8(ecx);
    MEM8(eax + 0x43) = LO8(ecx);
    ecx = 0xFFFF;
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x4B) = LO8(ebx);
    MEM8(eax + 0x46) = LO8(edx);
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x4D) = LO8(edx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x4C) = LO8(edx);
    MEM8(eax + 0x48) = LO8(edx);
    MEM16(eax + 0x3C) = LO16(ecx);
    MEM16(eax + 0x3E) = LO16(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
