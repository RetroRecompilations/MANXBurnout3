#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9E90
 * Original: 0x001C9E90 - 0x001C9ECA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C9E90:
    edx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001C9EB2; /* jle: less or equal (signed <=) */

loc_001C9E99:
    ecx = MEM32(esi + 0xC);
    ecx = ecx + 8;
    /* nop */

loc_001C9EA0:
    if (CMP_NE(MEM32(ecx + -4), edi)) goto loc_001C9EAA; /* jne: not equal / not zero */

loc_001C9EA5:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_001C9EB5; /* je: equal / zero */

loc_001C9EAA:
    eax++;
    ecx = ecx + 0xC;
    if (CMP_L(eax, edx)) goto loc_001C9EA0; /* jl: less (signed <) */

loc_001C9EB2:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001C9EB5:
    ecx = MEM32(esi + 0xC);
    eax = eax + eax * 2;
    eax = eax << 2;
    MEM8(ecx + eax + 8) = 1;
    edx = MEM32(esi + 0xC);
    eax = MEM32(eax + edx);
    esp += 4; return; /* ret */

}
