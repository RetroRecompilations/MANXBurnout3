#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DCF0
 * Original: 0x0017DCF0 - 0x0017DD1B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DCF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017DCF0:
    SET_LO8(edx, MEM8(eax + ecx + 0x4F2));
    if (CMP_AE(LO8(edx), 5)) goto loc_0017DD18; /* jae: above or equal (unsigned >=) */

loc_0017DCFC:
    edx = ZX8(LO8(edx));
    PUSH32(esp, esi);
    esi = eax + eax * 4 + 0x10E;
    esi = esi + edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + esi * 4) = edx;
    MEM8(eax + ecx + 0x4F2) = MEM8(eax + ecx + 0x4F2) + 1;
    POP32(esp, esi);

loc_0017DD18:
    esp += 8; return; /* ret 4 */

}
