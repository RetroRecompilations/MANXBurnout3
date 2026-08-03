#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE320
 * Original: 0x001FE320 - 0x001FE379 (89 bytes, 32 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE320(void)
{

loc_001FE320:
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    ecx = esp + 8;
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE33D:
    PUSH32(esp, 4);
    edx = esi + 4;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE34D:
    PUSH32(esp, 4);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE35D:
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    esp = esp + 0x24;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
