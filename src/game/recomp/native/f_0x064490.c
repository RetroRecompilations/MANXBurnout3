#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00064490
 * Original: 0x00064490 - 0x000644F7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00064490:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_enter;
        if (traced_enter++ < 4)
            fprintf(stderr,
                    "[B3-FE] 64490 enter active=%08X list=%08X flag=%u mode=%u esp=%08X\n",
                    MEM32(0x4D5370), esi, MEM8(0x752D33),
                    MEM32(0x463AF0), esp);
    }
    if (CMP_EQ(MEM32(0x4D5370), 0x4D4008)) goto loc_000644F6; /* je: equal / zero */

loc_0006449C:
    SET_LO8(eax, MEM8(0x752D33));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000644E3; /* je: equal / zero */

loc_000644A6:
    if (CMP_NE(MEM32(0x463AF0), 3)) goto loc_000644F5; /* jne: not equal / not zero */

loc_000644AF:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_000644B9:
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000644D1; /* je: equal / zero */

loc_000644BF:
    PUSH32(esp, 0x94414040u);
    PUSH32(esp, 0x3E74F2B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000644CF:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000644D1:
    PUSH32(esp, 0x94414082u);
    PUSH32(esp, 0xECC11C0Au);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000644E1:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000644E3:
    PUSH32(esp, 0x94413EDBu);
    PUSH32(esp, 0x6B01A028);
    edi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000644F5:
    POP32(esp, edi);

loc_000644F6:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_exit;
        if (traced_exit++ < 4)
            fprintf(stderr, "[B3-FE] 64490 exit esp=%08X\n", esp);
    }
    esp += 4; return; /* ret */

}
