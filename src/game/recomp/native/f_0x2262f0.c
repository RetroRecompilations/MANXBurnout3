#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002262F0
 * Original: 0x002262F0 - 0x00226321 (49 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002262F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002262F0:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00226307; /* je: equal / zero */

loc_002262FE:
    ecx = 8;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00226307:
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_00226319; /* je: equal / zero */

loc_0022630F:
    esi = eax + 0x20;
    ecx = 0xD;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00226319:
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
