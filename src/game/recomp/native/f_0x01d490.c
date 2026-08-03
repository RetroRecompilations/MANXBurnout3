#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001D490
 * Original: 0x0001D490 - 0x0001D4BD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001D490:
    PUSH32(esp, edi);
    MEM32(0x44D158) = 0;
    edi = 0; /* xor self */
    /* nop */

loc_0001D4A0:
    PUSH32(esp, 0); sub_0001D1D0(); /* call 0x0001D1D0 */

loc_0001D4A5:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x44D00B) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001D4B5; /* je: equal / zero */

loc_0001D4AF:
    MEM32(0x44D158) = MEM32(0x44D158) + 1;

loc_0001D4B5:
    edi++;
    if (CMP_L(edi, 0x14)) goto loc_0001D4A0; /* jl: less (signed <) */

loc_0001D4BB:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
