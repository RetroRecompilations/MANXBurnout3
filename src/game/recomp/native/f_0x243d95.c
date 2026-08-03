#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243D95
 * Original: 0x00243D95 - 0x00243DB7 (34 bytes, 9 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243D95(void)
{

loc_00243D95:
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_00243D9A:
    ecx = MEM32(eax + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    ecx = ecx + 0x269EC3;
    MEM32(eax + 0x14) = ecx;
    eax = ecx;
    eax = eax >> 0x10;
    eax = eax & 0x7FFF;
    esp += 4; return; /* ret */

}
