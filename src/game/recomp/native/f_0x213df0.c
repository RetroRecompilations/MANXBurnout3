#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213DF0
 * Original: 0x00213DF0 - 0x00213E2B (59 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00213DF0:
    edx = MEM32(esp + 4);
    if (TEST_NZ(edx, edx)) goto loc_00213DFD; /* jne: not equal / not zero */

loc_00213DF8:
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

loc_00213DFD:
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x36FE70);
    eax = 0; /* xor self */
    if (TEST_S(ecx, ecx)) goto loc_00213E2A; /* jl: less (signed <) */

loc_00213E0D:
    PUSH32(esp, esi);
    edi = edi;

loc_00213E10:
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 1);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x36FE70);
    eax = eax | esi;
    edx++;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00213E10; /* jge: greater or equal (signed >=) */

loc_00213E29:
    POP32(esp, esi);

loc_00213E2A:
    esp += 4; return; /* ret */

}
