#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000589E0
 * Original: 0x000589E0 - 0x00058A3A (90 bytes, 31 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000589E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000589E0:
    esp = esp - 0x60;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3AB3E4);
    PUSH32(esp, edx);
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_000589FD:
    PUSH32(esp, 0x1E);
    eax = esp + 0x30;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_00058A0C:
    eax = MEM32(esp + 0x6C);
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00058A1B; /* jne: not equal / not zero */

loc_00058A17:
    eax = esp + 0x20;

loc_00058A1B:
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_001B2FF0(); /* call 0x001B2FF0 */

loc_00058A32:
    esp = esp + 0x14;
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}
