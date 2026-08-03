#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213E80
 * Original: 0x00213E80 - 0x00213EB9 (57 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00213E80:
    edx = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) goto loc_00213EB4; /* je: equal / zero */

loc_00213E88:
    SET_LO8(eax, MEM8(edx));
    if (CMP_LE(LO8(eax), 0x20)) goto loc_00213EB4; /* jle: less or equal (signed <=) */

loc_00213E8E:
    if (CMP_GE(LO8(eax), 0x7F)) goto loc_00213EB4; /* jge: greater or equal (signed >=) */

loc_00213E92:
    eax = 0x20202020;

loc_00213E97:
    SET_LO8(ecx, MEM8(edx));
    if (CMP_LE(LO8(ecx), 0x20)) goto loc_00213EB8; /* jle: less or equal (signed <=) */

loc_00213E9E:
    if (CMP_GE(LO8(ecx), 0x7F)) goto loc_00213EB8; /* jge: greater or equal (signed >=) */

loc_00213EA3:
    eax = eax << 8;
    ecx = SX8(LO8(ecx));
    eax = eax | ecx;
    edx++;
    if (CMP_L(eax, 0x20FFFFFF)) goto loc_00213E97; /* jl: less (signed <) */

loc_00213EB3:
    esp += 4; return; /* ret */

loc_00213EB4:
    eax = MEM32(esp + 8);

loc_00213EB8:
    esp += 4; return; /* ret */

}
