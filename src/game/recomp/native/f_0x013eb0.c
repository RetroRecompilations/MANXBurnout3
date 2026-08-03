#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00013EB0
 * Original: 0x00013EB0 - 0x00013F0A (90 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013EB0(void)
{

loc_00013EB0:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = esi + 0x710;
    MEM32(0x420C60) = ebx;
    MEM32(0x420C5C) = 0x40;
    PUSH32(esp, 0); sub_00116080(); /* call 0x00116080 */

loc_00013ECE:
    SET_LO8(eax, 1);
    MEM8(esi + 0x25F0) = LO8(ebx);
    MEM8(esi + 0x25F1) = LO8(ebx);
    MEM8(esi + 0x25F2) = LO8(ebx);
    MEM8(esi + 0x25F3) = LO8(ebx);
    MEM8(esi + 0x25F4) = LO8(eax);
    MEM32(0x499E4C) = 0x14470;
    MEM8(esi + 0x2608) = LO8(eax);
    MEM32(esi + 0x25FC) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
