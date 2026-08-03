#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221E80
 * Original: 0x00221E80 - 0x00221EBC (60 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221E80:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00221EA8; /* je: equal / zero */

loc_00221E8C:
    /* nop */

loc_00221E90:
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00221E9E:
    eax = MEM32(esi + 0x18);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00221E90; /* jne: not equal / not zero */

loc_00221EA8:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00221EB1:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00221EB7:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
