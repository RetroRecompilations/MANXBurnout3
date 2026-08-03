#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000EF060
 * Original: 0x000EF060 - 0x000EF164 (260 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF060(void)
{

loc_000EF060:
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 5;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0xB0) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0xC4) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    esp += 4; return; /* ret */

}
