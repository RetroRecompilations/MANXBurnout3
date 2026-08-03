#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FC30
 * Original: 0x0010FC30 - 0x0010FC4F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC30(void)
{

loc_0010FC30:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0010FC36:
    ecx = MEM32(esp + 8);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0010FC44:
    SET_LO8(eax, MEM8(esi + eax + 0x39AE50));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
