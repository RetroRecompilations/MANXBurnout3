#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5F40
 * Original: 0x001A5F40 - 0x001A5F87 (71 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A5F40:
    edx = MEM32(eax + 0x40);
    SET_LO8(eax, MEM8(edx + 0xD));
    /* test LO8(eax), 1 - flags set for next jcc */
    ecx = MEM32(0x6137E0);
    if (TEST_Z(LO8(eax), 1)) goto loc_001A5F56; /* je: equal / zero */

loc_001A5F50:
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    esp += 4; return; /* ret */

loc_001A5F56:
    if (TEST_Z(LO8(eax), 2)) goto loc_001A5F61; /* je: equal / zero */

loc_001A5F5A:
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

loc_001A5F61:
    if (TEST_Z(LO8(eax), 4)) goto loc_001A5F6C; /* je: equal / zero */

loc_001A5F65:
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

loc_001A5F6C:
    if (TEST_Z(LO8(eax), 8)) goto loc_001A5F77; /* je: equal / zero */

loc_001A5F70:
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

loc_001A5F77:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_001A5F82; /* je: equal / zero */

loc_001A5F7B:
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

loc_001A5F82:
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}
