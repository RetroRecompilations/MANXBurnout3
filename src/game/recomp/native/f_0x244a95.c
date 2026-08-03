#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244A95
 * Original: 0x00244A95 - 0x00244AF3 (94 bytes, 41 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A95(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244A95:
    ecx = MEM32(esp + 8);
    /* cmp MEM16(ecx), 0 - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_00244AED; /* je: equal / zero */

loc_00244AA6:
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax));
    /* test LO16(edx), LO16(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00244AEA; /* je: equal / zero */

loc_00244AB1:
    eax = eax - ecx;

loc_00244AB3:
    /* test LO16(edx), LO16(edx) - flags set for next jcc */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00244AD8; /* je: equal / zero */

loc_00244ABC:
    SET_LO16(edx, MEM16(ecx));
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00244AEF; /* je: equal / zero */

loc_00244AC4:
    ebx = ZX16(MEM16(eax + ecx));
    edx = ZX16(LO16(edx));
    ebx = ebx - edx;
    if ((ebx != 0)) goto loc_00244AD8; /* jne: not equal / not zero */

loc_00244ACF:
    ecx++;
    ecx++;
    if (CMP_NE(MEM16(eax + ecx), 0)) goto loc_00244ABC; /* jne: not equal / not zero */

loc_00244AD8:
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_00244AEF; /* je: equal / zero */

loc_00244ADE:
    edi++;
    edi++;
    SET_LO16(edx, MEM16(edi));
    eax++;
    eax++;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_00244AB3; /* jne: not equal / not zero */

loc_00244AEA:
    eax = 0; /* xor self */

loc_00244AEC:
    POP32(esp, ebx);

loc_00244AED:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00244AEF:
    eax = edi;
    goto loc_00244AEC;

}
