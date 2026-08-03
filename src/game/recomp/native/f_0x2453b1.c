#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002453B1
 * Original: 0x002453B1 - 0x0024540E (93 bytes, 40 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002453B1(void)
{
    int _flags = 0; /* fallback flag var */

loc_002453B1:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), 2)) goto loc_00245400; /* jne: not equal / not zero */

loc_002453C6:
    if (TEST_Z(LO16(eax), 0x108)) goto loc_00245400; /* je: equal / zero */

loc_002453CC:
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi - eax;
    if (CMP_LE(edi & edi, 0)) goto loc_002453FF; /* jle: less or equal (signed <=) */

loc_002453D8:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0024A3DB(); /* call 0x0024A3DB */

loc_002453E2:
    esp = esp + 0xC;
    if (CMP_NE(eax, edi)) goto loc_002453F8; /* jne: not equal / not zero */

loc_002453E9:
    eax = MEM32(esi + 0xC);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_002453FF; /* jns: not sign (positive) */

loc_002453F0:
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0xC) = eax;
    goto loc_002453FF;

loc_002453F8:
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    ebx = ebx | 0xFFFFFFFFu;

loc_002453FF:
    POP32(esp, edi);

loc_00245400:
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
