#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024E0D4
 * Original: 0x0024E0D4 - 0x0024E0F8 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E0D4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024E0D4:
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + eax * 4 + 0x28), esi)) goto loc_0024E0ED; /* je: equal / zero */

loc_0024E0E5:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024DF71(); /* call 0x0024DF71 */

loc_0024E0EB:
    goto loc_0024E0F2;

loc_0024E0ED:
    esi = 0x80004005u;

loc_0024E0F2:
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
