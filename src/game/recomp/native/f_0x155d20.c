#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155D20
 * Original: 0x00155D20 - 0x00155D5C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00155D20:
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0xC0), 6)) goto loc_00155D32; /* je: equal / zero */

loc_00155D2C:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00155D32:
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xA8) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0xB0) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 0xAC) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00155D60(); /* call 0x00155D60 */

loc_00155D56:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
