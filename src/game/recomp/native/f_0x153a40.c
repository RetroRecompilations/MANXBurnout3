#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153A40
 * Original: 0x00153A40 - 0x00153A9C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153A40:
    eax = MEM32(esi + 0x554);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00153A60; /* je: equal / zero */

loc_00153A4B:
    SET_LO8(ecx, MEM8(esi + 0x538));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00153A58; /* jne: not equal / not zero */

loc_00153A55:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00153A58:
    if (CMP_B(eax, MEM32(esi + 0x4E8))) goto loc_00153A63; /* jb: below (unsigned <) */

loc_00153A60:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00153A63:
    eax = MEM32(0x73A190);
    eax = eax | MEM32(0x73A194);
    if ((eax != 0)) goto loc_00153A74; /* jne: not equal / not zero */

loc_00153A70:
    SET_LO8(ecx, 4);
    goto loc_00153A85;

loc_00153A74:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00153A7E:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) + 1);

loc_00153A85:
    eax = MEM32(esi + 0x554);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x530);
    /* test MEM8(eax + edx * 8 + 0x14), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(MEM8(eax + edx * 8 + 0x14), LO8(ecx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}
