#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014E780
 * Original: 0x0014E780 - 0x0014E7CB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E780(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0014E780:
    /* test edx, edx - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) goto loc_0014E7A6; /* je: equal / zero */

loc_0014E78D:
    if (CMP_EQ(edx, 1)) goto loc_0014E7A6; /* je: equal / zero */

loc_0014E792:
    if (CMP_EQ(edx, 2)) goto loc_0014E7BB; /* je: equal / zero */

loc_0014E797:
    if (CMP_EQ(edx, 3)) goto loc_0014E7BB; /* je: equal / zero */

loc_0014E79C:
    if (CMP_EQ(edx, 4)) goto loc_0014E7A6; /* je: equal / zero */

loc_0014E7A1:
    if (CMP_NE(edx, 5)) goto loc_0014E7B6; /* jne: not equal / not zero */

loc_0014E7A6:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00150040(); /* call 0x00150040 */

loc_0014E7B2:
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0014E7B6:
    if (CMP_NE(edx, 6)) goto loc_0014E7C7; /* jne: not equal / not zero */

loc_0014E7BB:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00150260(); /* call 0x00150260 */

loc_0014E7C7:
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
