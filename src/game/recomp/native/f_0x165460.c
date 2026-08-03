#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00165460
 * Original: 0x00165460 - 0x001654BC (92 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00165460:
    PUSH32(esp, esi);
    esi = MEM32(0x3F7278);
    edx = 0; /* xor self */
    /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(eax + 4) = 0x2B9D6F8;
    MEM32(eax) = 0xFD462907u;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_00165481; /* jne: not equal / not zero */

loc_0016547B:
    MEM32(0x3F7278) = edx;

loc_00165481:
    esi = ecx + 0x250;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0xC) = ecx;
    esi = MEM32(ecx + 0xC30);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1050);
    esi = esi + 0x737710;
    MEM32(eax + 8) = esi;
    esi = ecx + 0x540;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 0xC30);
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x33) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
