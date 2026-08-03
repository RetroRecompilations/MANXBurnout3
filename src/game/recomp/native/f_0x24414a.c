#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024414A
 * Original: 0x0024414A - 0x00244171 (39 bytes, 14 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024414A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024414A:
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_00244153; /* jne: not equal / not zero */

loc_00244152:
    eax++;

loc_00244153:
    if (CMP_EQ(MEM32(0x76B920), 1)) goto loc_00244162; /* je: equal / zero */

loc_0024415C:
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;

loc_00244162:
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D4076(); /* call 0x001D4076 */

loc_0024416A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D5707(); /* call 0x001D5707 */

loc_00244170:
    esp += 4; return; /* ret */

}
