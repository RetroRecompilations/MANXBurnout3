#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BCB10
 * Original: 0x000BCB10 - 0x000BCB9B (139 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB10(void)
{

loc_000BCB10:
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 4;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x20C) = ecx;
    MEM32(eax + 0x25C) = 9;
    MEM32(eax + 0x260) = 0xFFFFFFFFu;
    MEM32(eax + 0x258) = ecx;
    MEM32(eax + 0x254) = ecx;
    MEM32(eax + 0x244) = ecx;
    MEM32(eax + 0x240) = ecx;
    MEM32(eax + 0x250) = ecx;
    MEM32(eax + 0x210) = ecx;
    MEM32(eax + 0x218) = ecx;
    MEM32(eax + 0x21C) = ecx;
    MEM32(eax + 0x220) = ecx;
    MEM32(eax + 0x224) = ecx;
    MEM32(eax + 0x228) = ecx;
    MEM32(eax + 0x22C) = ecx;
    esp += 4; return; /* ret */

}
