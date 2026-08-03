#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FBE20
 * Original: 0x000FBE20 - 0x000FBE5A (58 bytes, 22 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBE20(void)
{

loc_000FBE20:
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    edx = eax;
    ecx = eax;
    esi = ZX8(HI8(eax));
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = edx >> 0x10;
    PUSH32(esp, esi);
    edx = ZX8(LO8(edx));
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3AC804);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_000FBE55:
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
