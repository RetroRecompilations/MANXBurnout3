#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00015750
 * Original: 0x00015750 - 0x00015782 (50 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00015750:
    ecx = MEM32(eax * 4 + 0x75DB80);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax * 4 + 0x75D4A0) = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_00015781; /* jne: not equal / not zero */

loc_00015762:
    ecx = MEM32(0x75DB60);
    MEM32(ecx * 4 + 0x75DE20) = eax;
    ecx++;
    MEM32(eax * 4 + 0x75DB80) = 1;
    MEM32(0x75DB60) = ecx;

loc_00015781:
    esp += 4; return; /* ret */

}
