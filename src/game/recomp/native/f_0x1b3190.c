#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B3190
 * Original: 0x001B3190 - 0x001B320A (122 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3190(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B3190:
    eax = MEM32(0x4A1EA8);
    if (TEST_Z(eax, eax)) goto loc_001B319C; /* je: equal / zero */

loc_001B3199:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B319C:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001B31A3:
    esi = eax;
    ecx = 0xB;
    edi = 0x49C0DC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 4) = 0x1B3410;
    MEM32(eax + 8) = 0x1B34B0;
    MEM32(eax + 0xC) = 0x1B34C0;
    MEM32(eax + 0x10) = 0x1B34F0;
    MEM32(eax + 0x14) = 0x24B90;
    MEM32(eax + 0x18) = 0x1B3520;
    MEM32(eax + 0x1C) = 0x1B3550;
    MEM32(eax + 0x20) = 0x1B3570;
    MEM32(eax + 0x24) = 0x24B90;
    MEM32(eax) = 0x1B35D0;
    MEM32(eax + 0x28) = 0x1B35F0;
    eax = 1;
    POP32(esp, edi);
    MEM32(0x4A1EA8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
