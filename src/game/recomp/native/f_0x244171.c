#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244171
 * Original: 0x00244171 - 0x0024419D (44 bytes, 16 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244171(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244171:
    if (CMP_A(MEM32(esp + 4), 0xFFFFFFE0u)) goto loc_0024419A; /* ja: above (unsigned >) */

loc_00244178:
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0024414A(); /* call 0x0024414A */

loc_00244181:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0024419C; /* jne: not equal / not zero */

loc_00244186:
    if (CMP_EQ(MEM32(esp + 8), eax)) goto loc_0024419C; /* je: equal / zero */

loc_0024418C:
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_002486DC(); /* call 0x002486DC */

loc_00244195:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00244178; /* jne: not equal / not zero */

loc_0024419A:
    eax = 0; /* xor self */

loc_0024419C:
    esp += 4; return; /* ret */

}
