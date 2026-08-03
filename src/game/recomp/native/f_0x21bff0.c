#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021BFF0
 * Original: 0x0021BFF0 - 0x0021C026 (54 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BFF0(void)
{

loc_0021BFF0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_0021BFF9:
    ebx = eax;
    eax = 0; /* xor self */
    ecx = 0x11;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    MEM32(ebx) = eax;
    PUSH32(esp, 0); sub_0021BEC0(); /* call 0x0021BEC0 */

loc_0021C014:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
