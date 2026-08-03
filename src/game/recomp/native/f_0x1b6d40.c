#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6D40
 * Original: 0x001B6D40 - 0x001B6DAD (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6D40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B6D40:
    ecx = eax + eax * 4;
    ecx = edx + ecx * 4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xB0));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001B6D57; /* je: equal / zero */

loc_001B6D51:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001B6D57:
    ebx = MEM32(esp + 8);
    eax = eax + eax * 4 + 0x28;
    eax = MEM32(edx + eax * 4);
    if (CMP_NE(eax, ebx)) goto loc_001B6D51; /* jne: not equal / not zero */

loc_001B6D66:
    if (CMP_NE(MEM32(ecx + 0xA8), 0xFFFFFFFFu)) goto loc_001B6D75; /* jne: not equal / not zero */

loc_001B6D6F:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001B6D75:
    ecx = ZX16(MEM16(ecx + 0xA8));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0x88));
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_001B6DA0; /* jae: above or equal (unsigned >=) */

loc_001B6D8B:
    if (CMP_BE(LO16(ecx), 0xAAAA)) goto loc_001B6DA0; /* jbe: below or equal (unsigned <=) */

loc_001B6D92:
    eax = eax - ecx;
    eax--;
    /* cmp LO16(eax), 0xA - flags set for next jcc */
    SET_LO8(eax, (CMP_A(LO16(eax), 0xA)) ? 1 : 0); /* seta */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001B6DA0:
    eax = eax - ecx;
    /* cmp LO16(eax), 0xA - flags set for next jcc */
    SET_LO8(eax, (CMP_A(LO16(eax), 0xA)) ? 1 : 0); /* seta */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
