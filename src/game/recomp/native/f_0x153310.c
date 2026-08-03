#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153310
 * Original: 0x00153310 - 0x00153390 (128 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153310:
    SET_LO8(ecx, MEM8(ebx + 0x564));
    SET_LO8(eax, MEM8(ebx + 0x538));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ebx + 0x564) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153386; /* je: equal / zero */

loc_0015332A:
    esi = MEM32(ebx + 0x53C);
    if (TEST_Z(esi, esi)) goto loc_00153360; /* je: equal / zero */

loc_00153334:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001CEA80(); /* call 0x001CEA80 */

loc_0015333A:
    eax = MEM32(ebx + 0x53C);
    PUSH32(esp, 0); sub_001CE920(); /* call 0x001CE920 */

loc_00153345:
    edi = MEM32(ebx + 0x53C);
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE180(); /* call 0x001CE180 */

loc_00153355:
    MEM32(ebx + 0x53C) = 0;
    POP32(esp, edi);

loc_00153360:
    if (CMP_NE(MEM32(ebx + 0x54C), 4)) goto loc_0015337A; /* jne: not equal / not zero */

loc_00153369:
    eax = ebx;
    MEM32(ebx + 0x54C) = 5;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_0015337A:
    MEM32(ebx + 0x544) = 6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00153386:
    esi = ebx + 8;
    PUSH32(esp, 0); sub_00155C00(); /* call 0x00155C00 */

loc_0015338E:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
