#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CECE0
 * Original: 0x001CECE0 - 0x001CED07 (39 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CECE0(void)
{

loc_001CECE0:
    esp = esp - 0x14;
    eax = esi + 0x260;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CE290);
    PUSH32(esp, 0); sub_00302272(); /* call 0x00302272 */

loc_001CECFC:
    MEM32(esi + 0x24) = 7;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
