#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C590
 * Original: 0x0010C590 - 0x0010C5A7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010C590:
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0010C5A4; /* je: equal / zero */

loc_0010C597:
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0010C5A4; /* je: equal / zero */

loc_0010C59E:
    eax = 1;
    esp += 4; return; /* ret */

loc_0010C5A4:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
