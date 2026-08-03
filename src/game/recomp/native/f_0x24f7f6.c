#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024F7F6
 * Original: 0x0024F7F6 - 0x0024F810 (26 bytes, 8 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F7F6(void)
{

loc_0024F7F6:
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = 0;
    PUSH32(esp, 0); sub_0024F2D3(); /* call 0x0024F2D3 */

loc_0024F805:
    MEM32(esi + 0x24) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
