#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00215910
 * Original: 0x00215910 - 0x00215959 (73 bytes, 24 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00215910:
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    goto loc_00215920;

    /* nop */

loc_00215920:
    ecx = MEM32(eax * 8 + 0x41CD58);
    if (CMP_NE(ecx, edx)) goto loc_00215934; /* jne: not equal / not zero */

loc_0021592B:
    if (CMP_EQ(MEM32(eax * 8 + 0x41CD5C), esi)) goto loc_00215945; /* je: equal / zero */

loc_00215934:
    if (TEST_Z(ecx, ecx)) goto loc_0021594A; /* je: equal / zero */

loc_00215938:
    eax++;
    if (CMP_L(eax, 0x10)) goto loc_00215920; /* jl: less (signed <) */

loc_0021593E:
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00215945:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021594A:
    MEM32(eax * 8 + 0x41CD5C) = esi;
    MEM32(eax * 8 + 0x41CD58) = edx;

}
