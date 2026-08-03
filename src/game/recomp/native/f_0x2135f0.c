#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002135F0
 * Original: 0x002135F0 - 0x00213622 (50 bytes, 24 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002135F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002135F0:
    eax = MEM32(esp + 8);
    /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = eax;
    if (CMP_LE(eax, 1)) goto loc_00213616; /* jle: less or equal (signed <=) */

loc_00213601:
    edi = MEM32(esp + 0x14);

loc_00213605:
    SET_LO8(edx, MEM8(edi));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00213616; /* je: equal / zero */

loc_0021360B:
    esi++;
    MEM8(esi + -1) = LO8(edx);
    edi++;
    ecx--;
    if (CMP_G(ecx, 1)) goto loc_00213605; /* jg: greater (signed >) */

loc_00213616:
    if (CMP_LE(ecx & ecx, 0)) goto loc_0021361D; /* jle: less or equal (signed <=) */

loc_0021361A:
    MEM8(esi) = 0;

loc_0021361D:
    POP32(esp, edi);
    eax = eax - ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
