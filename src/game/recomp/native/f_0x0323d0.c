#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000323D0
 * Original: 0x000323D0 - 0x00032497 (199 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000323D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000323D0:
    eax = MEM32(0x75DC6C);
    edx = 0; /* xor self */
    /* cmp eax, edx - flags set for next jcc */
    eax = MEM32(0x75DB60);
    ecx = 1;
    if (CMP_NE(eax, edx)) goto loc_000323FC; /* jne: not equal / not zero */

loc_000323E5:
    MEM32(eax * 4 + 0x75DE20) = 0x3B;
    eax++;
    MEM32(0x75DC6C) = ecx;
    MEM32(0x75DB60) = eax;

loc_000323FC:
    /* cmp MEM32(0x75DC70), edx - flags set for next jcc */
    MEM32(0x75D58C) = edx;
    if (CMP_NE(MEM32(0x75DC70), edx)) goto loc_00032421; /* jne: not equal / not zero */

loc_0003240A:
    MEM32(eax * 4 + 0x75DE20) = 0x3C;
    eax++;
    MEM32(0x75DC70) = ecx;
    MEM32(0x75DB60) = eax;

loc_00032421:
    /* cmp MEM32(0x75DC80), edx - flags set for next jcc */
    MEM32(0x75D590) = edx;
    if (CMP_NE(MEM32(0x75DC80), edx)) goto loc_00032446; /* jne: not equal / not zero */

loc_0003242F:
    MEM32(eax * 4 + 0x75DE20) = 0x40;
    eax++;
    MEM32(0x75DC80) = ecx;
    MEM32(0x75DB60) = eax;

loc_00032446:
    /* cmp MEM32(0x75DDBC), edx - flags set for next jcc */
    MEM32(0x75D5A0) = edx;
    if (CMP_NE(MEM32(0x75DDBC), edx)) goto loc_0003246B; /* jne: not equal / not zero */

loc_00032454:
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = ecx;
    MEM32(0x75DB60) = eax;

loc_0003246B:
    /* cmp MEM32(0x75DDCC), edx - flags set for next jcc */
    MEM32(0x75D6DC) = ecx;
    MEM32(0x75D6EC) = edx;
    if (CMP_NE(MEM32(0x75DDCC), edx)) goto loc_00032496; /* jne: not equal / not zero */

loc_0003247F:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = ecx;
    MEM32(0x75DB60) = eax;

loc_00032496:
    esp += 4; return; /* ret */

}
