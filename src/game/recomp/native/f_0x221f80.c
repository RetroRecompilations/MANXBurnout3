#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221F80
 * Original: 0x00221F80 - 0x00221FBA (58 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221F80:
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00221FAA; /* je: equal / zero */

loc_00221F8A:
    /* nop */

loc_00221F90:
    if (CMP_LE(LO8(ecx), 0x20)) goto loc_00221FA2; /* jle: less or equal (signed <=) */

loc_00221F95:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x83);
    ecx = ecx & 0x5F;
    ecx = ecx + eax;
    eax = ecx;

loc_00221FA2:
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00221F90; /* jne: not equal / not zero */

loc_00221FAA:
    ecx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x10))); }
    eax = edx;
    esp += 4; return; /* ret */

}
