#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155D60
 * Original: 0x00155D60 - 0x00155DAA (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00155D60:
    /* cmp MEM32(esi + 0xC0), 1 - flags set for next jcc */
    MEM32(esi + 0xB4) = eax;
    if (CMP_NE(MEM32(esi + 0xC0), 1)) goto loc_00155D84; /* jne: not equal / not zero */

loc_00155D6F:
    eax = MEM32(esi + 0xC4);
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 0x80;
    MEM32(esi + 0xC4) = eax;
    esp += 4; return; /* ret */

loc_00155D84:
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, edi);
    edi = MEM32(0x4AED9C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001B3E20(); /* call 0x001B3E20 */

loc_00155D98:
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xC0) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
