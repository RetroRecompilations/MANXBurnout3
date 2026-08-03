#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018CAF0
 * Original: 0x0018CAF0 - 0x0018CB5D (109 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CAF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018CAF0:
    SET_LO8(ecx, MEM8(eax + 0x27D9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018CB32; /* je: equal / zero */

loc_0018CAFA:
    SET_LO8(ecx, MEM8(0x752D80));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018CB2B; /* je: equal / zero */

loc_0018CB04:
    eax = MEM32(eax + 0x27D0);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1CC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    ecx = ecx + 0x4CFDA0;
    PUSH32(esp, ecx);
    eax = eax + 0x7397C8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AD4A0(); /* call 0x001AD4A0 */

loc_0018CB2A:
    esp += 4; return; /* ret */

loc_0018CB2B:
    eax = MEM32(eax + 0x18F4);
    esp += 4; return; /* ret */

loc_0018CB32:
    eax = MEM32(eax + 0x27D0);
    if (CMP_GE(eax, MEM32(0x731F90))) goto loc_0018CB53; /* jge: greater or equal (signed >=) */

loc_0018CB40:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4AD0);
    eax = eax + 0x667E90;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    esp += 4; return; /* ret */

loc_0018CB53:
    eax = 0; /* xor self */
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    esp += 4; return; /* ret */

}
