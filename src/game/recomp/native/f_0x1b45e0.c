#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B45E0
 * Original: 0x001B45E0 - 0x001B461D (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B45E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B45E0:
    esp = esp - 0x690;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x698);
    eax = MEM32(ebp + 0xBFC);
    SET_LO8(ecx, MEM8(eax + 4));
    PUSH32(esp, esi);
    MEM32(esp + 8) = 0;
    MEM8(esp + 0xC) = LO8(ecx);
    MEM8(esp + 0xD) = 0x3A;
    MEM8(esp + 0xE) = 0x5C;
    MEM8(esp + 0xF) = 0;
    MEM32(ebp + 4) = 0xFFFFFFFFu;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_001B4620(); return; /* tail jmp 0x001B4620 */

}
