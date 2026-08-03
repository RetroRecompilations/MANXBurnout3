#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00117730
 * Original: 0x00117730 - 0x001177A7 (119 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00117730:
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00122500(); /* call 0x00122500 */

loc_00117738:
    ecx = MEM32(0x3EBDC0);
    SET_LO8(eax, 4);
    MEM8(esi + 0x1169) = LO8(eax);
    MEM8(esi + 0x116A) = LO8(eax);
    eax = 0; /* xor self */
    /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 0x13F8) = eax;
    MEM8(esi + 0x215) = 2;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00117765; /* jne: not equal / not zero */

loc_00117760:
    MEM32(0x3EBDC0) = eax;

loc_00117765:
    /* cmp MEM8(0x4A1D8C), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (CMP_NE(MEM8(0x4A1D8C), LO8(eax))) goto loc_00117775; /* jne: not equal / not zero */

loc_0011776F:
    MEM8(0x4A1D8C) = LO8(ecx);

loc_00117775:
    MEM8(esi + 0x215) = LO8(ecx);
    MEM32(esi + 0x3A50) = eax;
    MEM32(esi + 0x3A54) = eax;
    MEM32(esi + 0x3A58) = eax;
    MEM8(esi + 0x3A69) = LO8(eax);
    MEM8(esi + 0x4AC3) = LO8(ecx);
    MEM8(esi + 0x4AC2) = LO8(eax);
    MEM8(esi + 0x4AC4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
