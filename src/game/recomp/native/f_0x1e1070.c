#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1070
 * Original: 0x001E1070 - 0x001E10D9 (105 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1070(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1070:
    PUSH32(esp, 0); sub_001E1010(); /* call 0x001E1010 */

loc_001E1075:
    if (TEST_NZ(eax, eax)) goto loc_001E107A; /* jne: not equal / not zero */

loc_001E1079:
    esp += 4; return; /* ret */

loc_001E107A:
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_001E10AB; /* je: equal / zero */

loc_001E1082:
    ecx = MEM32(eax);
    MEM32(0x7593D4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x7593D8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x7593DC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x7593E0) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_001E10AB:
    MEM32(0x7593D4) = 0x1FEDE0;
    MEM32(0x7593D8) = 0x2440A5;
    MEM32(0x7593DC) = 0x1E0DC0;
    MEM32(0x7593E0) = 0x1E0DE0;
    eax = 1;
    esp += 4; return; /* ret */

}
