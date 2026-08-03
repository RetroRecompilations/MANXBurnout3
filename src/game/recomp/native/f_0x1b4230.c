#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4230
 * Original: 0x001B4230 - 0x001B4252 (34 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4230(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4230:
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_001B424F; /* je: equal / zero */

loc_001B4237:
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001B424E:
    POP32(esp, esi);

loc_001B424F:
    esp += 12; return; /* ret 8 */

}
