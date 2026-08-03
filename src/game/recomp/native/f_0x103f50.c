#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103F50
 * Original: 0x00103F50 - 0x00103F78 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00103F50:
    SET_LO8(eax, MEM8(esi + 0x2B));
    if (CMP_AE(LO8(eax), 0x18)) goto loc_00103F75; /* jae: above or equal (unsigned >=) */

loc_00103F57:
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    eax = edx + esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00103150(); /* call 0x00103150 */

loc_00103F72:
    MEM8(esi + 0x2B) = MEM8(esi + 0x2B) + 1;

loc_00103F75:
    esp += 12; return; /* ret 8 */

}
