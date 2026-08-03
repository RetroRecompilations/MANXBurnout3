#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC260
 * Original: 0x001CC260 - 0x001CC2B5 (85 bytes, 23 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC260(void)
{

loc_001CC260:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(0x3F7BD5));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x3F7BD4));
    esp = esp - 0x100;
    edx = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CC130(); /* call 0x001CC130 */

loc_001CC287:
    eax = MEM32(esp + 0x114);
    edx = MEM32(esp + 0x110);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x11C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3B1674);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001CC2AE:
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}
