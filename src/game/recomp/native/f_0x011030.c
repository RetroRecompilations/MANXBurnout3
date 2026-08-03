#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011030
 * Original: 0x00011030 - 0x00011079 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011030:
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(edx + 0x780) = ecx;
    MEM32(edx + 0x788) = ecx;
    MEM32(edx + 0x78C) = ecx;
    MEM32(edx + 0x790) = 1;
    eax = edx + 0x44;
    esi = 0x18;

loc_00011057:
    MEM8(eax + -68) = LO8(ecx);
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = eax + 0x50;
    esi--;
    if ((esi != 0)) goto loc_00011057; /* jne: not equal / not zero */

loc_0001106B:
    MEM8(edx + 0x784) = LO8(ecx);
    MEM8(edx + 0x785) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
