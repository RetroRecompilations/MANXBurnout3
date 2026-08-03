#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000173B0
 * Original: 0x000173B0 - 0x000173CE (30 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000173B0(void)
{

loc_000173B0:
    MEM32(eax) = 0x3AA490;
    MEM32(0x45B9BC) = 1;
    MEM32(ecx) = 0x3AA3F0;
    PUSH32(esp, 0); sub_000173D0(); /* call 0x000173D0 */

loc_000173CB:
    esp += 8; return; /* ret 4 */

}
