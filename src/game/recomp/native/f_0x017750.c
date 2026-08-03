#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017750
 * Original: 0x00017750 - 0x0001778F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017750:
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, ebx);

loc_00017753:
    eax = SX8(LO8(ecx));
    SET_LO8(ebx, MEM8(eax + edx + 0xB3B));
    eax = eax + edx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00017780; /* je: equal / zero */

loc_00017763:
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xB39);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    eax = MEM32(eax + edx + 0x51C);
    if (CMP_EQ(MEM32(eax + 0x11C), 0xFFFFFFFFu)) goto loc_0001778B; /* je: equal / zero */

loc_00017780:
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_L(LO8(ecx), 2)) goto loc_00017753; /* jl: less (signed <) */

loc_00017787:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001778B:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
