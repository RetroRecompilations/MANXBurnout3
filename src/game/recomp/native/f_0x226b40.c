#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226B40
 * Original: 0x00226B40 - 0x00226B86 (70 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226B40:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_BE(esi, 0x14)) goto loc_00226B52; /* jbe: below or equal (unsigned <=) */

loc_00226B4D:
    esi = 0x14;

loc_00226B52:
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00226B83; /* je: equal / zero */

loc_00226B58:
    goto loc_00226B60;

    /* nop */

loc_00226B60:
    edx = eax;
    edx = edx & 3;
    ecx = 3;
    ecx = ecx - edx;
    edx = eax;
    edx = edx >> 2;
    edx = MEM32(ebp + edx * 4 + 8);
    ecx = ecx << 3;
    edx = edx >> LO8(ecx);
    eax++;
    /* cmp eax, esi - flags set for next jcc */
    MEM8(eax + edi + -1) = LO8(edx);
    if (CMP_NE(eax, esi)) goto loc_00226B60; /* jne: not equal / not zero */

loc_00226B83:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
