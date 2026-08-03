#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000116D0
 * Original: 0x000116D0 - 0x000116D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116D0(void)
{
    recomp_xmm_t xmm0;

loc_000116D0:
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    esp += 4; return; /* ret */

}
