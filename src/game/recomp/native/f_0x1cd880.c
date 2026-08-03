#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD880
 * Original: 0x001CD880 - 0x001CD8C3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD880(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CD880:
    ecx = MEM32(eax + 0x2884);
    if (CMP_BE(ecx & ecx, 0)) goto loc_001CD8C0; /* jbe: below or equal (unsigned <=) */

loc_001CD88A:
    ecx--;
    MEM32(eax + 0x2884) = ecx;
    ecx = ZX8(MEM8(ecx + eax + 0x2784));
    ecx = ecx << 6;
    SET_LO8(edx, MEM8(ecx + eax + 0x3B));
    ecx = ecx + eax + 4;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(ecx + 0x37) = LO8(edx);
    edx = MEM32(eax + 0x2884);
    ecx = ZX8(MEM8(eax + edx + 0x2784));
    ecx = ecx << 6;
    eax = ecx + eax + 4;
    esp += 4; return; /* ret */

loc_001CD8C0:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
