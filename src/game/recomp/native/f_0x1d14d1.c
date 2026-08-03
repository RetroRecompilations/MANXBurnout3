#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D14D1
 * Original: 0x001D14D1 - 0x001D14F1 (32 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14D1(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D14D1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B868), _icall_esp); /* indirect call */
    }

loc_001D14DD:
    if (TEST_S(eax, eax)) goto loc_001D14E6; /* jl: less (signed <) */

loc_001D14E1:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D14EE;

loc_001D14E6:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D14EC:
    eax = 0; /* xor self */

loc_001D14EE:
    esp += 8; return; /* ret 4 */

}
