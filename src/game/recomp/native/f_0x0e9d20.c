#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000E9D20
 * Original: 0x000E9D20 - 0x000E9D9D (125 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D20(void)
{

loc_000E9D20:
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 2;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xEC) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0xE0) = ecx;
    MEM32(eax + 0xF4) = ecx;
    MEM32(eax + 0xE4) = ecx;
    MEM32(eax + 0xF8) = ecx;
    MEM32(eax + 0xE8) = ecx;
    MEM32(eax + 0xFC) = ecx;
    MEM32(eax + 0x58) = ecx;
    esp += 4; return; /* ret */

}
