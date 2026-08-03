#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021CAB0
 * Original: 0x0021CAB0 - 0x0021CAE7 (55 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CAB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021CAB0:
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CAB8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021CAC2; /* je: equal / zero */

loc_0021CABF:
    MEM8(eax) = 0;

loc_0021CAC2:
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CACA:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021CAD4; /* je: equal / zero */

loc_0021CAD1:
    MEM8(eax) = 0;

loc_0021CAD4:
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CADC:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021CAE6; /* je: equal / zero */

loc_0021CAE3:
    MEM8(eax) = 0;

loc_0021CAE6:
    esp += 4; return; /* ret */

}
