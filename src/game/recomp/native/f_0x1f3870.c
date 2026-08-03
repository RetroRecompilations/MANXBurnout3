#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F3870
 * Original: 0x001F3870 - 0x001F3919 (169 bytes, 43 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3870(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F3870:
    PUSH32(esp, 0x1F30B0);
    PUSH32(esp, 0x1F3090);
    PUSH32(esp, 0x511);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001F3886:
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_001F38F4; /* jl: less (signed <) */

loc_001F388D:
    PUSH32(esp, 0x1F3070);
    PUSH32(esp, 0x1F3060);
    PUSH32(esp, 0x1F3060);
    PUSH32(esp, 0x511);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_001F0F50(); /* call 0x001F0F50 */

loc_001F38A8:
    esp = esp + 0x14;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41B394) = eax;
    if (TEST_S(eax, eax)) goto loc_001F38F4; /* jl: less (signed <) */

loc_001F38B4:
    PUSH32(esp, 0x1F30D0);
    PUSH32(esp, 0x1F30E0);
    PUSH32(esp, 0x1F3790);
    PUSH32(esp, 0x511);
    PUSH32(esp, 0); sub_001F0F80(); /* call 0x001F0F80 */

loc_001F38CD:
    PUSH32(esp, 0x1F3070);
    PUSH32(esp, 0x1F3060);
    PUSH32(esp, 0x1F3060);
    PUSH32(esp, 0x511);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_001ED1A0(); /* call 0x001ED1A0 */

loc_001F38E8:
    esp = esp + 0x24;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41B398) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_001F38F7; /* jge: greater or equal (signed >=) */

loc_001F38F4:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001F38F7:
    PUSH32(esp, 0x1F30D0);
    PUSH32(esp, 0x1F30E0);
    PUSH32(esp, 0x1F3830);
    PUSH32(esp, 0x511);
    PUSH32(esp, 0); sub_001ED1D0(); /* call 0x001ED1D0 */

loc_001F3910:
    esp = esp + 0x10;
    eax = 1;
    esp += 4; return; /* ret */

}
