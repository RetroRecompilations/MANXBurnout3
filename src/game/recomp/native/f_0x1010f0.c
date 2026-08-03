#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001010F0
 * Original: 0x001010F0 - 0x00101113 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001010F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001010F0:
    eax = MEM32(0x4A1D84);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_001010FD; /* jne: not equal / not zero */

loc_001010FB:
    eax = 0; /* xor self */

loc_001010FD:
    eax = eax - MEM32(0x5A3760);
    ecx = 0; /* xor self */
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO16(eax), 0xFFFF)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & eax;
    SET_LO16(eax, LO16(ecx));
    esp += 4; return; /* ret */

}
