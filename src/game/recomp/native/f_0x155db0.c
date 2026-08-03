#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155DB0
 * Original: 0x00155DB0 - 0x00155E0D (93 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00155DB0:
    esp = esp - 0x10;
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    /* cmp MEM32(esi + 0xC0), 1 - flags set for next jcc */
    MEM32(esp) = 0;
    if (CMP_NE(MEM32(esi + 0xC0), 1)) goto loc_00155DDC; /* jne: not equal / not zero */

loc_00155DD1:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) | 0x20;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00155DDC:
    ecx = MEM32(esi + 0x98);
    edx = esi + 0x94;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = 0x10000;
    PUSH32(esp, 0); sub_0030211F(); /* call 0x0030211F */

loc_00155DFF:
    MEM32(esi + 0xC0) = 2;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
