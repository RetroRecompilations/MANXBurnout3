#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214C90
 * Original: 0x00214C90 - 0x00214CC9 (57 bytes, 18 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C90(void)
{

loc_00214C90:
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00214A30(); /* call 0x00214A30 */

loc_00214CA2:
    eax = ZX8(MEM8(esp + 0xC));
    edx = ZX8(MEM8(esp + 0xD));
    ecx = ZX8(MEM8(esp + 0xE));
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(esp + 0xF));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
