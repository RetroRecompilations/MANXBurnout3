#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00116080
 * Original: 0x00116080 - 0x00116109 (137 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116080(void)
{
    recomp_xmm_t xmm0;

loc_00116080:
    xmm0.f[0] = MEMF(0x3B1870); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    SET_LO8(edx, 1);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B186C); /* movss */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(ecx);
    MEM8(eax + 0xF) = LO8(ecx);
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM8(eax + 0x12) = LO8(edx);
    MEM8(eax + 0x13) = LO8(edx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1B40) = ecx;
    MEM32(eax + 0x1ED0) = ecx;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x96;
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEMF(0x5A7F9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
