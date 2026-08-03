#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D760
 * Original: 0x0019D760 - 0x0019D798 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D760(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019D760:
    if (TEST_Z(edi, edi)) goto loc_0019D772; /* je: equal / zero */

loc_0019D764:
    ecx = MEM32(edx);
    eax = MEM32(edx + 4);
    ecx = ecx + edx;
    eax = eax + edx;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;

loc_0019D772:
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0019D796; /* jle: less or equal (signed <=) */

loc_0019D779:
    /* nop */

loc_0019D780:
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + esi * 4);
    /* test ecx, ecx - flags set for next jcc */
    eax = eax + esi * 4;
    if (TEST_Z(ecx, ecx)) goto loc_0019D791; /* je: equal / zero */

loc_0019D78D:
    ecx = ecx + edx;
    MEM32(eax) = ecx;

loc_0019D791:
    esi++;
    if (CMP_L(esi, edi)) goto loc_0019D780; /* jl: less (signed <) */

loc_0019D796:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
