#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5E70
 * Original: 0x001B5E70 - 0x001B5ED1 (97 bytes, 27 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5E70(void)
{

loc_001B5E70:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x10);
    eax = esi + 0x1C;
    PUSH32(esp, 0x3B12F0);
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, eax);
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x40) = LO8(ebx);
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_001B5EAC:
    ecx = 0; /* xor self */
    edx = esi + 0x2C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    esp = esp + 0xC;
    MEM8(esi + 0xC4) = LO8(ebx);
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
