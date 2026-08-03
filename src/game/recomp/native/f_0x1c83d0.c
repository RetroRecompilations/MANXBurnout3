#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C83D0
 * Original: 0x001C83D0 - 0x001C8461 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C83D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C83D0:
    if (CMP_EQ(esi, MEM32(0x4A1B64))) goto loc_001C8460; /* je: equal / zero */

loc_001C83DC:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C83EA; /* jbe: below or equal (unsigned <=) */

loc_001C83E5:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C83EA:
    edx = MEM32(0x75D990);
    /* test edx, edx - flags set for next jcc */
    eax = MEM32(esi * 4 + 0x4A1B54);
    ecx = 1;
    if (TEST_NZ(edx, edx)) goto loc_001C8424; /* jne: not equal / not zero */

loc_001C8400:
    edx = MEM32(0x75D940);
    PUSH32(esp, edi);
    edi = edx;
    edi = edi << 4;
    edx++;
    MEM32(edi + 0x75D2A0) = 3;
    MEM32(0x75D990) = ecx;
    MEM32(0x75D940) = edx;
    POP32(esp, edi);

loc_001C8424:
    edx = MEM32(0x75D9A0);
    /* test edx, edx - flags set for next jcc */
    MEM32(0x75D770) = eax;
    if (TEST_NZ(edx, edx)) goto loc_001C8455; /* jne: not equal / not zero */

loc_001C8433:
    MEM32(0x75D9A0) = ecx;
    ecx = MEM32(0x75D940);
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(edx + 0x75D2A0) = 4;
    MEM32(0x75D940) = ecx;

loc_001C8455:
    MEM32(0x75D780) = eax;
    MEM32(0x4A1B64) = esi;

loc_001C8460:
    esp += 4; return; /* ret */

}
