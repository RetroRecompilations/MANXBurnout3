#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD220
 * Original: 0x001DD220 - 0x001DD27D (93 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD220(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD220:
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xA0);
    ecx = ZX8(MEM8(edx + 3));
    if (TEST_NZ(LO8(ecx), 3)) goto loc_001DD26C; /* jne: not equal / not zero */

loc_001DD233:
    PUSH32(esp, esi);
    esi = MEM32(0x75935C);
    MEM32(edx + 8) = esi;
    edx = MEM32(eax + 0xA0);
    MEM32(edx + 0xC) = 0x75935C;
    edx = MEM32(eax + 0xA0);
    esi = MEM32(0x75935C);
    edx = edx + 8;
    MEM32(esi + 4) = edx;
    edx = MEM32(eax + 0xA0);
    edx = edx + 8;
    MEM32(0x75935C) = edx;
    POP32(esp, esi);

loc_001DD26C:
    edx = MEM32(eax + 0xA0);
    SET_LO8(ecx, LO8(ecx) | 3);
    MEM8(edx + 3) = LO8(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 0xC;
    esp += 4; return; /* ret */

}
