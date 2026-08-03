#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158260
 * Original: 0x00158260 - 0x001582C1 (97 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158260:
    eax = MEM32(esp + 4);
    /* cmp eax, 0x57803A94 - flags set for next jcc */
    ecx = MEM32(esp + 8);
    if (CMP_NE(eax, 0x57803A94)) goto loc_0015827D; /* jne: not equal / not zero */

loc_0015826F:
    if (CMP_NE(ecx, 0x135D8666)) goto loc_0015827D; /* jne: not equal / not zero */

loc_00158277:
    eax = 1;
    esp += 4; return; /* ret */

loc_0015827D:
    if (CMP_NE(eax, 0xD7265454u)) goto loc_00158292; /* jne: not equal / not zero */

loc_00158284:
    if (CMP_NE(ecx, 0x135D8C5B)) goto loc_00158292; /* jne: not equal / not zero */

loc_0015828C:
    eax = 2;
    esp += 4; return; /* ret */

loc_00158292:
    if (CMP_NE(eax, 0xB82660D4u)) goto loc_001582A7; /* jne: not equal / not zero */

loc_00158299:
    if (CMP_NE(ecx, 0x13F2954A)) goto loc_001582A7; /* jne: not equal / not zero */

loc_001582A1:
    eax = 3;
    esp += 4; return; /* ret */

loc_001582A7:
    if (CMP_NE(eax, 0x6E3455)) goto loc_001582BB; /* jne: not equal / not zero */

loc_001582AE:
    /* cmp ecx, 0x13A819C4 - flags set for next jcc */
    eax = 4;
    if (CMP_EQ(ecx, 0x13A819C4)) goto loc_001582C0; /* je: equal / zero */

loc_001582BB:
    eax = 8;

loc_001582C0:
    esp += 4; return; /* ret */

}
