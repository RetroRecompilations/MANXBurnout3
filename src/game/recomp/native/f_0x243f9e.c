#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243F9E
 * Original: 0x00243F9E - 0x00243FB4 (22 bytes, 10 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243F9E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00243F9E:
    eax = MEM32(esp + 4);

loc_00243FA2:
    SET_LO16(ecx, MEM16(eax));
    eax++;
    eax++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00243FA2; /* jne: not equal / not zero */

loc_00243FAC:
    eax = eax - MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax >> 1);
    eax--;
    esp += 4; return; /* ret */

}
