#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C030
 * Original: 0x0021C030 - 0x0021C06C (60 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C030:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0021C058; /* je: equal / zero */

loc_0021C03C:
    /* nop */

loc_0021C040:
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_0021C04E:
    eax = MEM32(esi + 0x3C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0021C040; /* jne: not equal / not zero */

loc_0021C058:
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_0021C061:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_0021C067:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
