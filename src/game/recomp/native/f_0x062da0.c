#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00062DA0
 * Original: 0x00062DA0 - 0x00062DD6 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062DA0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x38A4C0;
    ebx = ebx + 0x63C;

loc_00062DB2:
    eax = MEM32(edi);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_00062DC0:
    MEM32(ebx) = eax;
    edi = edi + 4;
    ebx = ebx + 4;
    if (CMP_L(edi, 0x38A538)) goto loc_00062DB2; /* jl: less (signed <) */

loc_00062DD0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
