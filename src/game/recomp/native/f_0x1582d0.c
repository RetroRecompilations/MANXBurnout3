#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001582D0
 * Original: 0x001582D0 - 0x00158335 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001582D0(void)
{

loc_001582D0:
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_001582E7:
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(edx, MEM8(esp + 0x12));
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(esp + 0xD) = LO8(eax);
    SET_LO8(eax, 0x5F);
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x16));
    MEM8(esp + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x15));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x17));
    MEM8(esp + 0x12) = LO8(eax);
    esp = esp + 8;
    eax = edi;
    MEM8(esp + 8) = LO8(edx);
    MEM8(esp + 0xB) = LO8(ecx);
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00158330:
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
