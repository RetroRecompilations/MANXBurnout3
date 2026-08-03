#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141950
 * Original: 0x00141950 - 0x00141997 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00141950:
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 8); /* cvttss2si */
    if (TEST_S(esi, esi)) goto loc_00141960; /* jl: less (signed <) */

loc_0014195B:
    if (CMP_L(esi, 5)) goto loc_0014196B; /* jl: less (signed <) */

loc_00141960:
    MEM32(edi + 0x60) = 0x3E7;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014196B:
    if (CMP_GE(esi, MEM32(edi + 0x60))) goto loc_00141993; /* jge: greater or equal (signed >=) */

loc_00141970:
    eax = MEM32(edi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0xBD69B91Eu);
    PUSH32(esp, 0x81C00000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141990:
    MEM32(edi + 0x60) = esi;

loc_00141993:
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
