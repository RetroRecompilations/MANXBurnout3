#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225AC0
 * Original: 0x00225AC0 - 0x00225AF9 (57 bytes, 18 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225AC0(void)
{

loc_00225AC0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00225980(); /* call 0x00225980 */

loc_00225ACC:
    MEM32(esi + 0x18) = 0;
    eax = 0; /* xor self */
    edi = esi + 0x1C;
    ecx = 0x10CE;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = esi + 0x4354;
    esp = esp + 4;
    ecx = 0xB6;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
