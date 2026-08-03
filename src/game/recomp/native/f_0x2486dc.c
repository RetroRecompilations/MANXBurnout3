#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002486DC
 * Original: 0x002486DC - 0x002486F7 (27 bytes, 13 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486DC(void)
{
    int _flags = 0; /* fallback flag var */

loc_002486DC:
    eax = MEM32(0x41D498);
    if (TEST_Z(eax, eax)) goto loc_002486F4; /* je: equal / zero */

loc_002486E5:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002486EB:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_002486F4; /* je: equal / zero */

loc_002486F0:
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_002486F4:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
