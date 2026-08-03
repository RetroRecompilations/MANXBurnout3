#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E18B0
 * Original: 0x001E18B0 - 0x001E18E9 (57 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E18B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E18B0:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_001E18E6; /* jne: not equal / not zero */

loc_001E18BB:
    edx = MEM32(eax + 8);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edx & edx, 0)) goto loc_001E18CF; /* jle: less or equal (signed <=) */

loc_001E18C3:
    esi = MEM32(esp + 0xC);
    if (CMP_GE(esi, edx)) goto loc_001E18D8; /* jge: greater or equal (signed >=) */

loc_001E18CB:
    ecx = ecx + esi;
    goto loc_001E18D5;

loc_001E18CF:
    edx = MEM32(esp + 0xC);
    ecx = ecx + edx;

loc_001E18D5:
    MEM32(eax + 8) = ecx;

loc_001E18D8:
    MEM32(eax + 0xC) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001E18E6:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
