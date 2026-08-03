#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A4150
 * Original: 0x001A4150 - 0x001A4195 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4150(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A4150:
    SET_LO8(ecx, MEM8(eax + 0x363B9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A415F; /* jne: not equal / not zero */

loc_001A415A:
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_001A415F:
    ecx = ZX16(MEM16(esp + 8));
    edx = ecx;
    edx = edx >> 2;
    SET_LO8(eax, MEM8(edx + 0x498D80));
    edx = MEM32(esp + 4);
    /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001A4185; /* jns: not sign (positive) */

loc_001A4180:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A4185:
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    /* test LO8(eax), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(edx))) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}
