#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000218A0
 * Original: 0x000218A0 - 0x00021917 (119 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000218A0(void)
{

loc_000218A0:
    eax = 0; /* xor self */
    MEM32(esi + 0x90) = eax;
    MEM8(esi + 0x94) = LO8(eax);
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, 0); sub_00363D8A(); /* call 0x00363D8A */

loc_000218E4:
    edx = esi + 0x98;
    PUSH32(esp, 0); sub_001B5000(); /* call 0x001B5000 */

loc_000218EF:
    edx = esi + 0x1B8;
    PUSH32(esp, 0); sub_001B5000(); /* call 0x001B5000 */

loc_000218FA:
    edx = esi + 0x2D8;
    PUSH32(esp, 0); sub_001B5000(); /* call 0x001B5000 */

loc_00021905:
    edx = esi + 0x3F8;
    PUSH32(esp, 0); sub_001B5000(); /* call 0x001B5000 */

loc_00021910:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00018050(); /* call 0x00018050 */

loc_00021916:
    esp += 4; return; /* ret */

}
