#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017060
 * Original: 0x00017060 - 0x000170A6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017060:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0x572980;
    PUSH32(esp, 0); sub_000FC710(); /* call 0x000FC710 */

loc_0001706C:
    SET_LO8(eax, MEM8(0x4D53BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017088; /* je: equal / zero */

loc_00017075:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017088; /* je: equal / zero */

loc_0001707E:
    PUSH32(esp, 0x60EA00);
    PUSH32(esp, 0); sub_001AA720(); /* call 0x001AA720 */

loc_00017088:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x2E1D0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00017097:
    esi = 0x572980;
    PUSH32(esp, 0); sub_000FC990(); /* call 0x000FC990 */

loc_000170A1:
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
