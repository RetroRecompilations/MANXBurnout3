#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246EE4
 * Original: 0x00246EE4 - 0x00246F00 (28 bytes, 8 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EE4(void)
{

loc_00246EE4:
    PUSH32(esp, 0); sub_0024B2A1(); /* call 0x0024B2A1 */

loc_00246EE9:
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0024B275(); /* call 0x0024B275 */

loc_00246EF2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C63B8), _icall_esp); /* indirect call */
    }

loc_00246EFD:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
