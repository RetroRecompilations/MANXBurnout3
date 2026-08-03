#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F0DF0
 * Original: 0x000F0DF0 - 0x000F0E67 (119 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0DF0(void)
{
    recomp_xmm_t xmm0;

loc_000F0DF0:
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    edx = MEM32(0x557A54);
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    edx = edx + 4;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
