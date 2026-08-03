#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D276B
 * Original: 0x001D276B - 0x001D2793 (40 bytes, 20 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D276B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D276B:
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
    PUSH32(esp, 0x104);
    PUSH32(esp, 0); sub_001D7024(); /* call 0x001D7024 */

loc_001D2786:
    if (TEST_S(eax, eax)) goto loc_001D278F; /* jl: less (signed <) */

loc_001D278A:
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001D278F:
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
