#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4FC0
 * Original: 0x001B4FC0 - 0x001B4FF2 (50 bytes, 17 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4FC0(void)
{
    int _cf = 0; /* carry flag */

loc_001B4FC0:
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xBFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0xC08;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x5C3A78;
    SET_LO8(edx, MEM8(ecx + 4));
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = LO8(edx);
    PUSH32(esp, 0); sub_001CF98C(); /* call 0x001CF98C */

loc_001B4FEA:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
