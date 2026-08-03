#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000E2780
 * Original: 0x000E2780 - 0x000E27DF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2780(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E2780:
    SET_LO8(ecx, MEM8(eax + 0x8E6));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000E27C0; /* jne: not equal / not zero */

loc_000E278A:
    ecx = MEM32(eax + 0x25C);
    eax = MEM32(ecx * 8 + 0x39DF38);
    ecx = MEM32(ecx * 8 + 0x39DF3C);
    if (CMP_A(ecx & ecx, 0)) goto loc_000E27B5; /* ja: above (unsigned >) */

loc_000E27A2:
    if (CMP_B(ecx & ecx, 0)) goto loc_000E27A9; /* jb: below (unsigned <) */

loc_000E27A4:
    if (CMP_AE(eax, 7)) goto loc_000E27B5; /* jae: above or equal (unsigned >=) */

loc_000E27A9:
    edx = MEM32(eax * 4 + 0x3ED0F8);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);

loc_000E27B5:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001582D0(); /* call 0x001582D0 */

loc_000E27BC:
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000E27C0:
    eax = MEM32(eax + 0x25C);
    ecx = MEM32(eax * 8 + 0x39D874);
    edx = MEM32(eax * 8 + 0x39D870);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001582D0(); /* call 0x001582D0 */

loc_000E27DB:
    esp = esp + 8;
    esp += 4; return; /* ret */

}
