#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D154C
 * Original: 0x001D154C - 0x001D1572 (38 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D154C(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D154C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B870), _icall_esp); /* indirect call */
    }

loc_001D155E:
    if (TEST_S(eax, eax)) goto loc_001D1567; /* jl: less (signed <) */

loc_001D1562:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D156F;

loc_001D1567:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D156D:
    eax = 0; /* xor self */

loc_001D156F:
    esp += 16; return; /* ret 12 */

}
