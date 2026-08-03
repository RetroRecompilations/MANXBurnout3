#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4520
 * Original: 0x001B4520 - 0x001B45DC (188 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4520(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4520:
    esp = esp - 0x448;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_001B4542; /* je: equal / zero */

loc_001B4530:
    edx = esp + 8;
    edx = edx - eax;

loc_001B4536:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4536; /* jne: not equal / not zero */

loc_001B4540:
    goto loc_001B455E;

loc_001B4542:
    eax = MEM32(esi + 0xBFC);
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(esp + 8) = LO8(ecx);
    MEM8(esp + 9) = 0x3A;
    MEM8(esp + 0xA) = 0x5C;
    MEM8(esp + 0xB) = 0;

loc_001B455E:
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_001B4565:
    eax = MEM32(esi + 4);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001B4584; /* jne: not equal / not zero */

loc_001B456D:
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0C95(); /* call 0x001D0C95 */

loc_001B457F:
    MEM32(esi + 4) = eax;
    goto loc_001B4592;

loc_001B4584:
    ecx = esp + 0x10C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0D9F(); /* call 0x001D0D9F */

loc_001B4592:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4597:
    if (CMP_EQ(eax, 0x12)) goto loc_001B45BA; /* je: equal / zero */

loc_001B459C:
    if (TEST_NZ(eax, eax)) goto loc_001B45BA; /* jne: not equal / not zero */

loc_001B45A0:
    if (CMP_EQ(MEM32(esi + 4), 0xFFFFFFFFu)) goto loc_001B45A7; /* je: equal / zero */

loc_001B45A6:
    ebx++;

loc_001B45A7:
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B45AC:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x134) = eax;
    goto loc_001B4565;

loc_001B45BA:
    esi = MEM32(esi + 4);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_001B45D1; /* je: equal / zero */

loc_001B45C2:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D0DE6(); /* call 0x001D0DE6 */

loc_001B45C8:
    if (TEST_NZ(eax, eax)) goto loc_001B45D1; /* jne: not equal / not zero */

loc_001B45CC:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B45D1:
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x448;
    esp += 4; return; /* ret */

}
