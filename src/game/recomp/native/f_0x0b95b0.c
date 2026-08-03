#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B95B0
 * Original: 0x000B95B0 - 0x000B9611 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95B0(void)
{

loc_000B95B0:
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 6;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM8(eax + 0x65) = LO8(ecx);
    SET_LO8(edx, 1);
    MEM8(eax + 0x67) = LO8(edx);
    MEM8(eax + 0x66) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x48) = ecx;
    esp += 4; return; /* ret */

}
