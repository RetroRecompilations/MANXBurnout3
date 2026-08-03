#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002454DC
 * Original: 0x002454DC - 0x002454ED (17 bytes, 7 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002454DC(void)
{

loc_002454DC:
    eax = MEM32(0x76B934);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002451EB(); /* call 0x002451EB */

loc_002454EA:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
