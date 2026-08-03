#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6320
 * Original: 0x001C6320 - 0x001C6398 (120 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6320(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6320:
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx ^ edx;
    /* test LO8(ebx), 0x66 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ebx), 0x66)) goto loc_001C635B; /* je: equal / zero */

loc_001C632D:
    eax = eax & 0x26;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001C6351; /* je: equal / zero */

loc_001C6335:
    eax = eax - 2;
    if ((eax == 0)) goto loc_001C634A; /* je: equal / zero */

loc_001C633A:
    eax = eax - 0x1C;
    if ((eax == 0)) goto loc_001C6343; /* je: equal / zero */

loc_001C633F:
    esi = 0; /* xor self */
    goto loc_001C6356;

loc_001C6343:
    esi = 3;
    goto loc_001C6356;

loc_001C634A:
    esi = 2;
    goto loc_001C6356;

loc_001C6351:
    esi = 1;

loc_001C6356:
    PUSH32(esp, 0); sub_001C82E0(); /* call 0x001C82E0 */

loc_001C635B:
    if (TEST_Z(LO8(ebx), 0x48)) goto loc_001C6373; /* je: equal / zero */

loc_001C6360:
    if (TEST_Z(MEM8(edi), 8)) goto loc_001C636C; /* je: equal / zero */

loc_001C6365:
    esi = 1;
    goto loc_001C636E;

loc_001C636C:
    esi = 0; /* xor self */

loc_001C636E:
    PUSH32(esp, 0); sub_001C83D0(); /* call 0x001C83D0 */

loc_001C6373:
    if (TEST_Z(LO8(ebx), 0x50)) goto loc_001C6393; /* je: equal / zero */

loc_001C6378:
    if (TEST_Z(MEM8(edi), 0x10)) goto loc_001C638C; /* je: equal / zero */

loc_001C637D:
    esi = 1;
    PUSH32(esp, 0); sub_001C8470(); /* call 0x001C8470 */

loc_001C6387:
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C638C:
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_001C8470(); /* call 0x001C8470 */

loc_001C6393:
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
