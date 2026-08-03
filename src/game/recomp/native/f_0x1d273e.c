#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D273E
 * Original: 0x001D273E - 0x001D276B (45 bytes, 24 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D273E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D273E:
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
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_001D7024(); /* call 0x001D7024 */

loc_001D2756:
    if (TEST_S(eax, eax)) goto loc_001D2767; /* jl: less (signed <) */

loc_001D275A:
    eax = MEM32(ebp + -4);
    if (CMP_BE(eax, 9)) goto loc_001D2769; /* jbe: below or equal (unsigned <=) */

loc_001D2762:
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001D2767:
    eax = 0; /* xor self */

loc_001D2769:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
