#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011540
 * Original: 0x00011540 - 0x00011545 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011540(void)
{
    recomp_xmm_t xmm0;

loc_00011540:
    xmm0.f[0] = MEMF(eax); /* movss */
    esp += 4; return; /* ret */

}
