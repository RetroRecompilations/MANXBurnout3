#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8580
 * Original: 0x001F8580 - 0x001F85A0 (32 bytes, 16 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8580(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F8580:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_001F859C; /* je: equal / zero */

loc_001F858C:
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F8595:
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F859C:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
