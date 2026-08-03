#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221570
 * Original: 0x00221570 - 0x002215AC (60 bytes, 20 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221570:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0022158A; /* je: equal / zero */

loc_0022157B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221581:
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0022158A:
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_002215A1; /* je: equal / zero */

loc_00221591:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221597:
    esp = esp + 4;
    MEM32(esi + 0x70) = 0;

loc_002215A1:
    MEM32(esi + 0x5C) = 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
