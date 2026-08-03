#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221290
 * Original: 0x00221290 - 0x00221314 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221290(void)
{

loc_00221290:
    esp = esp - 0x20;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 2) = LO8(eax);
    PUSH32(esp, 0x10);
    SET_LO8(eax, 1);
    MEM32(esp + 0x14) = ecx;
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xE) = LO8(eax);
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x18;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM16(esp + 0x10) = 2;
    MEM8(esp + 0x13) = 0x4F;
    MEM8(esp + 0x15) = 0xA8;
    MEM8(esp + 0x14) = 0xC0;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0); sub_00221190(); /* call 0x00221190 */

loc_002212ED:
    ecx = MEM32(esp + 0x24);
    edx = ZX8(MEM8(esp + 0x26));
    eax = ZX8(LO8(ecx));
    eax = eax << 8;
    ecx = ZX8(HI8(ecx));
    eax = eax | ecx;
    ecx = ZX8(MEM8(esp + 0x27));
    eax = eax << 8;
    eax = eax | edx;
    eax = eax << 8;
    eax = eax | ecx;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}
