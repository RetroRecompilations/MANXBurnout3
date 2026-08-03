#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221470
 * Original: 0x00221470 - 0x002214AF (63 bytes, 25 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221470:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00221484; /* je: equal / zero */

loc_0022147B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221481:
    esp = esp + 4;

loc_00221484:
    eax = MEM32(esi + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_00221494; /* je: equal / zero */

loc_0022148B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221491:
    esp = esp + 4;

loc_00221494:
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_002214A4; /* je: equal / zero */

loc_0022149B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_002214A1:
    esp = esp + 4;

loc_002214A4:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_002214AA:
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
