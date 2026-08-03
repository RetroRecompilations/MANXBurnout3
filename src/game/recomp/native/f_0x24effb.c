#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024EFFB
 * Original: 0x0024EFFB - 0x0024F023 (40 bytes, 12 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EFFB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EFFB:
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_0024F020; /* je: equal / zero */

loc_0024F002:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0024F011; /* je: equal / zero */

loc_0024F00A:
    eax = eax | 0x218A0000;
    goto loc_0024F016;

loc_0024F011:
    eax = 0x218A2000;

loc_0024F016:
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_0024F020:
    esp += 12; return; /* ret 8 */

}
