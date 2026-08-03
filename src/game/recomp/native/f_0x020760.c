#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00020760
 * Original: 0x00020760 - 0x000207F4 (148 bytes, 43 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020760:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001CF8EA(); /* call 0x001CF8EA */

loc_00020767:
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(eax, 3)) goto loc_00020781; /* jne: not equal / not zero */

loc_0002076E:
    PUSH32(esp, 0); sub_001CF913(); /* call 0x001CF913 */

loc_00020773:
    SET_LO8(eax, LO8(eax) >> 6);
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(0x45B9C0) = LO8(eax);
    goto loc_00020787;

loc_00020781:
    MEM8(0x45B9C0) = LO8(ebx);

loc_00020787:
    SET_LO8(eax, 0x5A);
    MEM8(0x45B9B8) = LO8(ebx);
    MEM8(esi + 0x30) = LO8(ebx);
    MEM8(esi + 0x31) = LO8(ebx);
    MEM8(esi + 0x33) = LO8(ebx);
    MEM8(esi + 0x34) = LO8(eax);
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x36) = LO8(eax);
    MEM8(esi + 0x37) = LO8(ebx);
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = 1;
    MEM8(esi + 0x3A) = 1;
    MEM8(esi + 0x3B) = 1;
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM8(esi + 0x3D) = 1;
    MEM8(esi + 0x3E) = 1;
    MEM8(esi + 0x3F) = LO8(ebx);
    MEM32(0x45B9BC) = 1;
    PUSH32(esp, 0); sub_001B5C60(); /* call 0x001B5C60 */

loc_000207D0:
    MEM32(0x45B9BC) = eax;
    PUSH32(esp, 0); sub_000173D0(); /* call 0x000173D0 */

loc_000207DA:
    eax = 0xF0F0F0F;
    ecx = 0xB;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esi + 0x2C;
    POP32(esp, edi);
    MEM32(eax) = 0x1010101;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
