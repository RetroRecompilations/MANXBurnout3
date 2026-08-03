#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244A00
 * Original: 0x00244A00 - 0x00244A1F (31 bytes, 15 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244A00:
    if (CMP_AE(LO8(ecx), 0x40)) goto loc_00244A1A; /* jae: above or equal (unsigned >=) */

loc_00244A05:
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_00244A10; /* jae: above or equal (unsigned >=) */

loc_00244A0A:
    eax = (eax >> LO8(ecx)) | (edx << (32 - LO8(ecx))); /* shrd */
    edx = edx >> LO8(ecx);
    esp += 4; return; /* ret */

loc_00244A10:
    eax = edx;
    edx = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    eax = eax >> LO8(ecx);
    esp += 4; return; /* ret */

loc_00244A1A:
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}
