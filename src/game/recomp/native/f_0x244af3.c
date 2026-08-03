#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244AF3
 * Original: 0x00244AF3 - 0x00244B25 (50 bytes, 26 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AF3(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244AF3:
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    goto loc_00244B08;

loc_00244AFF:
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00244B15; /* je: equal / zero */

loc_00244B04:
    edx++;
    edx++;
    esi++;
    esi++;

loc_00244B08:
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(MEM16(edx));
    edi = ZX16(LO16(ecx));
    eax = eax - edi;
    if ((eax == 0)) goto loc_00244AFF; /* je: equal / zero */

loc_00244B15:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(eax & eax, 0)) goto loc_00244B1F; /* jge: greater or equal (signed >=) */

loc_00244B1B:
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00244B1F:
    if (((int32_t)eax <= 0)) goto loc_00244B24; /* jle: less or equal (signed <=) */

loc_00244B21:
    eax = 0; /* xor self */
    eax++;

loc_00244B24:
    esp += 4; return; /* ret */

}
