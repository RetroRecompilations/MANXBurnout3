#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213DA0
 * Original: 0x00213DA0 - 0x00213DEB (75 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00213DA0:
    edx = MEM32(esp + 4);
    if (TEST_NZ(edx, edx)) goto loc_00213DAD; /* jne: not equal / not zero */

loc_00213DA8:
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

loc_00213DAD:
    SET_LO8(eax, MEM8(edx));
    /* cmp LO8(eax), 0x2B - flags set for next jcc */
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_NE(LO8(eax), 0x2B)) goto loc_00213DBC; /* jne: not equal / not zero */

loc_00213DB9:
    edx++;
    goto loc_00213DC4;

loc_00213DBC:
    if (CMP_NE(LO8(eax), 0x2D)) goto loc_00213DC4; /* jne: not equal / not zero */

loc_00213DC0:
    edx++;
    esi = esi | 0xFFFFFFFFu;

loc_00213DC4:
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    if (CMP_L(LO8(ecx), 0x30)) goto loc_00213DE6; /* jl: less (signed <) */

loc_00213DCF:
    /* nop */

loc_00213DD0:
    if (CMP_G(LO8(ecx), 0x39)) goto loc_00213DE6; /* jg: greater (signed >) */

loc_00213DD5:
    ecx = ecx & 0xF;
    eax = eax + eax * 4;
    edx++;
    eax = ecx + eax * 2;
    SET_LO8(ecx, MEM8(edx));
    if (CMP_GE(LO8(ecx), 0x30)) goto loc_00213DD0; /* jge: greater or equal (signed >=) */

loc_00213DE6:
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
