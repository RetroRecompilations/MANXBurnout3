#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD490
 * Original: 0x001DD490 - 0x001DD4E9 (89 bytes, 25 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD490(void)
{

loc_001DD490:
    esp = esp - 0x14;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035BBD0(); /* call 0x0035BBD0 */

loc_001DD4A0:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = 1;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = 0x11;
    MEM32(eax + 0x18) = 0x2A;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x80000000u;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
