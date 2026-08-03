#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001EE50
 * Original: 0x0001EE50 - 0x0001EE7F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EE50(void)
{

loc_0001EE50:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001F450(); /* call 0x0001F450 */

loc_0001EE56:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001EFE0(); /* call 0x0001EFE0 */

loc_0001EE5C:
    eax = 0; /* xor self */
    MEM32(0x45B9B0) = eax;
    MEM32(0x45B9B4) = eax;
    MEM32(0x44D678) = eax;
    MEM32(0x44D67C) = eax;
    MEM32(0x44D670) = 3;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
