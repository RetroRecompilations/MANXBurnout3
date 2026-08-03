#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF8EA
 * Original: 0x001CF8EA - 0x001CF913 (41 bytes, 20 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF8EA:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x103);
    PUSH32(esp, 0); sub_001D7024(); /* call 0x001D7024 */

loc_001CF905:
    if (TEST_S(eax, eax)) goto loc_001CF90F; /* jl: less (signed <) */

loc_001CF909:
    eax = ZX8(MEM8(ebp + -3));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001CF90F:
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
