#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1A1B
 * Original: 0x001D1A1B - 0x001D1A41 (38 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A1B(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D1A1B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8A0), _icall_esp); /* indirect call */
    }

loc_001D1A2D:
    if (TEST_S(eax, eax)) goto loc_001D1A36; /* jl: less (signed <) */

loc_001D1A31:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D1A3E;

loc_001D1A36:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D1A3C:
    eax = 0; /* xor self */

loc_001D1A3E:
    esp += 32; return; /* ret 28 */

}
