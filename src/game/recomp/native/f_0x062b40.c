#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00062B40
 * Original: 0x00062B40 - 0x00062BCC (140 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062B40(void)
{

loc_00062B40:
    ecx = 0; /* xor self */
    MEM32(eax + 0x6BC) = ecx;
    MEM32(eax + 0x6DC) = ecx;
    MEM32(eax + 0x6C0) = ecx;
    MEM32(eax + 0x6E0) = ecx;
    MEM32(eax + 0x6C4) = ecx;
    MEM32(eax + 0x6E4) = ecx;
    MEM32(eax + 0x6C8) = ecx;
    MEM32(eax + 0x6E8) = ecx;
    MEM32(eax + 0x6CC) = ecx;
    MEM32(eax + 0x6EC) = ecx;
    MEM32(eax + 0x6D0) = ecx;
    MEM32(eax + 0x6F0) = ecx;
    MEM32(eax + 0x6D4) = ecx;
    MEM32(eax + 0x6F4) = ecx;
    MEM32(eax + 0x6D8) = ecx;
    MEM32(eax + 0x6F8) = ecx;
    MEM8(eax + 0x708) = LO8(ecx);
    MEM32(eax + 0x6FC) = ecx;
    MEM32(eax + 0x704) = ecx;
    MEM32(eax + 0x6B4) = 1;
    MEM32(eax + 0x6B8) = ecx;
    MEM8(eax + 0x709) = 0xFF;
    esp += 4; return; /* ret */

}
