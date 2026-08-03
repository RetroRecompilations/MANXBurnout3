#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D19FD
 * Original: 0x001D19FD - 0x001D1A1B (30 bytes, 11 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19FD(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D19FD:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D1A07:
    if (TEST_S(eax, eax)) goto loc_001D1A10; /* jl: less (signed <) */

loc_001D1A0B:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D1A18;

loc_001D1A10:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D1A16:
    eax = 0; /* xor self */

loc_001D1A18:
    esp += 8; return; /* ret 4 */

}
