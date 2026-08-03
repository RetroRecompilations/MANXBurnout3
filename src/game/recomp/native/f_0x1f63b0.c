#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F63B0
 * Original: 0x001F63B0 - 0x001F63E7 (55 bytes, 18 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F63B0:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    edx = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_001F63DD; /* jle: less or equal (signed <=) */

loc_001F63D1:
    if (CMP_GE(edx, 5)) goto loc_001F63DD; /* jge: greater or equal (signed >=) */

loc_001F63D6:
    MEM32(ecx + 0x10) = 1;

loc_001F63DD:
    eax = MEM32(ecx + 4);
    edx = eax + 1;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}
