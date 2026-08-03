#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00061B20
 * Original: 0x00061B20 - 0x00061BEE (206 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061B20(void)
{

loc_00061B20:
    ecx = 0; /* xor self */
    edx = 3;
    MEM32(eax + 0xC4) = edx;
    MEM32(eax + 0xC8) = edx;
    MEM32(eax + 0xCC) = edx;
    SET_LO8(edx, 1);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 4;
    MEM32(eax + 0x10) = 0x370;
    MEM32(eax + 0x14) = 0x36F;
    MEM32(eax + 0x18) = 0x354;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM8(eax + 0xD0) = LO8(ecx);
    MEM8(eax + 0xD1) = LO8(ecx);
    MEM8(eax + 0xD2) = LO8(ecx);
    MEM8(eax + 0xD3) = LO8(ecx);
    MEM8(eax + 0xD4) = LO8(ecx);
    MEM8(eax + 0xD5) = LO8(ecx);
    MEM8(eax + 0xD6) = LO8(ecx);
    MEM8(eax + 0xD7) = LO8(ecx);
    MEM8(eax + 0xD8) = LO8(ecx);
    MEM8(eax + 0xD9) = LO8(ecx);
    MEM8(eax + 0xDA) = LO8(ecx);
    MEM8(eax + 0xDB) = LO8(edx);
    MEM8(eax + 0xDC) = LO8(edx);
    MEM8(eax + 0xDD) = LO8(ecx);
    MEM8(eax + 0xDE) = LO8(ecx);
    MEM8(eax + 0xDF) = 5;
    MEM8(eax + 0xE0) = LO8(ecx);
    MEM16(eax + 0xE1) = LO16(ecx);
    MEM32(eax + 0x72) = 0x1010101;
    MEM32(eax + 0x398) = 0xFFFFFFFFu;
    MEM8(eax + 0x39C) = LO8(ecx);
    esp += 4; return; /* ret */

}
