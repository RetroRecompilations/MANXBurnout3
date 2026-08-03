#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C6E0
 * Original: 0x0019C6E0 - 0x0019C73D (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C6E0(void)
{

loc_0019C6E0:
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM8(eax + 0x18) = LO8(edx);
    MEM8(eax + 0x44) = LO8(edx);
    MEM8(eax + 0x45) = LO8(edx);
    MEM8(eax + 0x46) = LO8(edx);
    MEM8(eax + 0x47) = LO8(edx);
    MEM8(eax + 0x19) = LO8(edx);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(0x494EF8) = ecx;
    MEM32(eax + 0x10) = 1;
    esp += 4; return; /* ret */

}
