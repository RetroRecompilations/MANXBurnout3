#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB9E0
 * Original: 0x001CB9E0 - 0x001CBA0A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB9E0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CB9E0:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001CB9FE; /* jne: not equal / not zero */

loc_001CB9EB:
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x160) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_001CB9FE:
    MEMF(ecx + eax * 4 + 0x15C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}
