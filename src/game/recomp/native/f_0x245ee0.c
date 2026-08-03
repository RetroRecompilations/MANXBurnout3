#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245EE0
 * Original: 0x00245EE0 - 0x00245EFF (31 bytes, 15 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00245EE0:
    if (CMP_AE(LO8(ecx), 0x40)) goto loc_00245EFA; /* jae: above or equal (unsigned >=) */

loc_00245EE5:
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_00245EF0; /* jae: above or equal (unsigned >=) */

loc_00245EEA:
    edx = (edx << LO8(ecx)) | (eax >> (32 - LO8(ecx))); /* shld */
    eax = eax << LO8(ecx);
    esp += 4; return; /* ret */

loc_00245EF0:
    edx = eax;
    eax = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    edx = edx << LO8(ecx);
    esp += 4; return; /* ret */

loc_00245EFA:
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}
