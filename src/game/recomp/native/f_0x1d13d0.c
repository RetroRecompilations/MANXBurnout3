#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D13D0
 * Original: 0x001D13D0 - 0x001D13F7 (39 bytes, 18 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D13D0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B84C), _icall_esp); /* indirect call */
    }

loc_001D13E2:
    if (TEST_S(eax, eax)) goto loc_001D13EB; /* jl: less (signed <) */

loc_001D13E6:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D13F3;

loc_001D13EB:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D13F1:
    eax = 0; /* xor self */

loc_001D13F3:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
