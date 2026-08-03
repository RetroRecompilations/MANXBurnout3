#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A75A0
 * Original: 0x001A75A0 - 0x001A75F9 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A75A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A75A0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(edi + 0x17A));
    SET_LO8(ecx, LO8(ecx) | 1);
    esi = edi;
    MEM8(edi + 0x17A) = LO8(ecx);
    PUSH32(esp, 0); sub_001A8C30(); /* call 0x001A8C30 */

loc_001A75BA:
    SET_LO8(eax, MEM8(0x649B97));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(edi + 0x110);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A75CF; /* je: equal / zero */

loc_001A75C9:
    if (TEST_Z(ecx, ecx)) goto loc_001A75E1; /* je: equal / zero */

loc_001A75CD:
    goto loc_001A75DC;

loc_001A75CF:
    if (TEST_Z(ecx, ecx)) goto loc_001A75E1; /* je: equal / zero */

loc_001A75D3:
    if (TEST_NZ(MEM8(edi + 0x174), 2)) goto loc_001A75E1; /* jne: not equal / not zero */

loc_001A75DC:
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A75E1:
    PUSH32(esp, 1);
    eax = edi;
    esi = 0x6137E0;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A75EF:
    MEM8(edi + 0x174) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
