#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DBCC0
 * Original: 0x001DBCC0 - 0x001DBCE4 (36 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBCC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DBCC0:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001DE750(); /* call 0x001DE750 */

loc_001DBCD2:
    ecx = 0; /* xor self */
    esp = esp + 0x14;
    /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    MEM32(0x759288) = eax;
    eax = ecx;
    esp += 4; return; /* ret */

}
