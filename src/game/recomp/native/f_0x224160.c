#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224160
 * Original: 0x00224160 - 0x00224183 (35 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00224160:
    PUSH32(esp, 0x124);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_0022416A:
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) goto loc_00224180; /* je: equal / zero */

loc_00224173:
    PUSH32(esp, edi);
    ecx = 0x49;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00224180:
    eax = edx;
    esp += 4; return; /* ret */

}
