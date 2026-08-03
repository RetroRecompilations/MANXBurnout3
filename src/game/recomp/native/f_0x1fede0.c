#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FEDE0
 * Original: 0x001FEDE0 - 0x001FEDEE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEDE0(void)
{

loc_001FEDE0:
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_001FEDEA:
    esp = esp + 4;
    esp += 4; return; /* ret */

}
