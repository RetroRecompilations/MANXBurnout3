#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6840
 * Original: 0x001B6840 - 0x001B68F7 (183 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6840(void)
{
    recomp_xmm_t xmm0;

loc_001B6840:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 4;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM8(eax + 0x58) = LO8(ecx);
    MEM8(eax + 0x59) = LO8(ecx);
    MEM8(eax + 0x5A) = LO8(ecx);
    MEM8(eax + 0x5B) = LO8(ecx);
    MEM8(eax + 0x5C) = LO8(ecx);
    MEM8(eax + 0x5D) = LO8(ecx);
    MEM8(eax + 0x5E) = LO8(ecx);
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM8(eax + 0x60) = LO8(ecx);
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM8(eax + 0x61) = 0xFF;
    MEM16(eax + 0x6C) = 0xFFFF;
    MEM8(eax + 0x63) = LO8(edx);
    MEM8(eax + 0x62) = LO8(ecx);
    MEM8(eax + 0x70) = LO8(ecx);
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x78) = edx;
    MEM8(eax + 0x71) = 0xFF;
    MEM16(eax + 0x7C) = 0xFFFF;
    MEM8(eax + 0x73) = LO8(edx);
    MEM8(eax + 0x72) = LO8(ecx);
    MEM8(eax + 0x80) = LO8(ecx);
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0x88) = edx;
    MEM8(eax + 0x81) = 0xFF;
    MEM16(eax + 0x8C) = 0xFFFF;
    MEM8(eax + 0x83) = LO8(edx);
    MEM8(eax + 0x82) = LO8(ecx);
    esp += 4; return; /* ret */

}
