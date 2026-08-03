#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AA920
 * Original: 0x001AA920 - 0x001AA988 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA920(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AA920:
    PUSH32(esp, ebx);
    eax = esi + 0x12ADC8;
    PUSH32(esp, 0); sub_0019CF20(); /* call 0x0019CF20 */

loc_001AA92C:
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(MEM32(0x73A1C0), 2)) goto loc_001AA948; /* jne: not equal / not zero */

loc_001AA937:
    eax = esi + 0x12AF94;
    PUSH32(esp, 0); sub_0019CF20(); /* call 0x0019CF20 */

loc_001AA942:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA948; /* jne: not equal / not zero */

loc_001AA946:
    SET_LO8(ebx, 0); /* xor self */

loc_001AA948:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x144331) = LO8(eax);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA96B; /* je: equal / zero */

loc_001AA958:
    SET_LO8(eax, MEM8(esi + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA987; /* je: equal / zero */

loc_001AA95F:
    ecx = esi;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_001AA966:
    MEM8(esi + 0x28) = 0;
    esp += 4; return; /* ret */

loc_001AA96B:
    SET_LO8(eax, MEM8(esi + 0x144330));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA987; /* jne: not equal / not zero */

loc_001AA975:
    SET_LO8(eax, MEM8(esi + 0x28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA987; /* jne: not equal / not zero */

loc_001AA97C:
    ecx = esi;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_001AA983:
    MEM8(esi + 0x28) = 1;

loc_001AA987:
    esp += 4; return; /* ret */

}
