#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002207E0
 * Original: 0x002207E0 - 0x0022082B (75 bytes, 25 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002207E0:
    if (CMP_GE(eax & eax, 0)) goto loc_0022082A; /* jge: greater or equal (signed >=) */

loc_002207E4:
    PUSH32(esp, 0); sub_003398C4(); /* call 0x003398C4 */

loc_002207E9:
    if (CMP_EQ(eax, 0x2733)) goto loc_00220828; /* je: equal / zero */

loc_002207F0:
    if (CMP_EQ(eax, 0x2746)) goto loc_00220828; /* je: equal / zero */

loc_002207F7:
    if (CMP_EQ(eax, 0x2743)) goto loc_00220822; /* je: equal / zero */

loc_002207FE:
    if (CMP_EQ(eax, 0x2751)) goto loc_00220822; /* je: equal / zero */

loc_00220805:
    if (CMP_NE(eax, 0x2749)) goto loc_00220812; /* jne: not equal / not zero */

loc_0022080C:
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_00220812:
    ecx = 0; /* xor self */
    /* cmp eax, 0x274D - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, 0x274D)) ? 1 : 0); /* sete */
    ecx = ecx + 0xFFFFFFF9u;
    eax = ecx;
    esp += 4; return; /* ret */

loc_00220822:
    eax = 0xFFFFFFFBu;
    esp += 4; return; /* ret */

loc_00220828:
    eax = 0; /* xor self */

loc_0022082A:
    esp += 4; return; /* ret */

}
