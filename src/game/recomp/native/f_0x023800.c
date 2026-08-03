#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00023800
 * Original: 0x00023800 - 0x0002386C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00023800:
    PUSH32(esp, 0); sub_00018BD0(); /* call 0x00018BD0 */

loc_00023805:
    eax = MEM32(ecx + 0x98C);
    if (CMP_LE(eax & eax, 0)) goto loc_00023816; /* jle: less or equal (signed <=) */

loc_0002380F:
    eax--;
    MEM32(ecx + 0x98C) = eax;

loc_00023816:
    eax = MEM32(ecx + 0x9BC);
    if (CMP_LE(eax & eax, 0)) goto loc_00023827; /* jle: less or equal (signed <=) */

loc_00023820:
    eax--;
    MEM32(ecx + 0x9BC) = eax;

loc_00023827:
    eax = MEM32(ecx + 0x9CC);
    if (CMP_LE(eax & eax, 0)) goto loc_00023838; /* jle: less or equal (signed <=) */

loc_00023831:
    eax--;
    MEM32(ecx + 0x9CC) = eax;

loc_00023838:
    eax = MEM32(ecx + 0x9DC);
    if (CMP_LE(eax & eax, 0)) goto loc_00023849; /* jle: less or equal (signed <=) */

loc_00023842:
    eax--;
    MEM32(ecx + 0x9DC) = eax;

loc_00023849:
    eax = MEM32(ecx + 0x99C);
    if (CMP_LE(eax & eax, 0)) goto loc_0002385A; /* jle: less or equal (signed <=) */

loc_00023853:
    eax--;
    MEM32(ecx + 0x99C) = eax;

loc_0002385A:
    eax = MEM32(ecx + 0x9AC);
    if (CMP_LE(eax & eax, 0)) goto loc_0002386B; /* jle: less or equal (signed <=) */

loc_00023864:
    eax--;
    MEM32(ecx + 0x9AC) = eax;

loc_0002386B:
    esp += 4; return; /* ret */

}
