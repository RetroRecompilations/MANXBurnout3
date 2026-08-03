#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5D90
 * Original: 0x001B5D90 - 0x001B5DD9 (73 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B5D90:
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    MEM8(esp + 7) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    MEM8(esp + 6) = LO8(edx);
    SET_LO8(ebx, LO8(ebx) & 1);
    edx = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    MEM8(ecx) = LO8(eax);
    if (CMP_LE(esi & esi, 0)) goto loc_001B5DB8; /* jle: less or equal (signed <=) */

loc_001B5DB0:
    SET_LO8(eax, LO8(eax) ^ MEM8(edx + ecx));
    edx++;
    if (CMP_L(edx, esi)) goto loc_001B5DB0; /* jl: less (signed <) */

loc_001B5DB8:
    SET_LO8(edx, MEM8(esp + 7));
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(esp + 6));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebx);
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_001B5DD3; /* jne: not equal / not zero */

loc_001B5DCF:
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001B5DD3:
    MEM8(ecx) = LO8(edx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
