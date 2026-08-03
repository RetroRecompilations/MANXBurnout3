#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CEE0
 * Original: 0x0019CEE0 - 0x0019CF11 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019CEE0:
    if (TEST_S(esi, esi)) goto loc_0019CF0D; /* jl: less (signed <) */

loc_0019CEE4:
    eax = MEM32(ecx + 0x24);
    if (CMP_EQ(eax, MEM32(ecx + 0x2C))) goto loc_0019CEF4; /* je: equal / zero */

loc_0019CEEC:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0xC))); }
    if (CMP_EQ(esi, edx)) goto loc_0019CF0D; /* je: equal / zero */

loc_0019CEF4:
    if (CMP_GE(esi, MEM32(ecx + 0xC))) goto loc_0019CF0D; /* jge: greater or equal (signed >=) */

loc_0019CEF9:
    ecx = MEM32(ecx + esi * 4 + 0x17C);
    if (CMP_NE(MEM32(ecx), 2)) goto loc_0019CF0D; /* jne: not equal / not zero */

loc_0019CF05:
    if (TEST_Z(ecx, ecx)) goto loc_0019CF0D; /* je: equal / zero */

loc_0019CF09:
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

loc_0019CF0D:
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}
