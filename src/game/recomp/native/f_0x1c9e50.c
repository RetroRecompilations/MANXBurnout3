#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9E50
 * Original: 0x001C9E50 - 0x001C9E87 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C9E50:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(esi, esi)) goto loc_001C9E80; /* je: equal / zero */

loc_001C9E5D:
    /* nop */

loc_001C9E60:
    SET_LO8(ecx, MEM8(esi + 0x3B2));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 8;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C9E7A; /* je: equal / zero */

loc_001C9E6D:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_001C9E76:
    if (TEST_NZ(eax, eax)) goto loc_001C9E82; /* jne: not equal / not zero */

loc_001C9E7A:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001C9E60; /* jne: not equal / not zero */

loc_001C9E80:
    eax = 0; /* xor self */

loc_001C9E82:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
