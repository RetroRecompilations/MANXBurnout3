#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A41A0
 * Original: 0x001A41A0 - 0x001A41E7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A41A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A41A0:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x36364);
    edx = 0; /* xor self */
    if (CMP_NE(esi, edx)) goto loc_001A41C7; /* jne: not equal / not zero */

loc_001A41AD:
    MEM32(eax + 0x36364) = ecx;
    MEM32(eax + 0x36368) = ecx;
    MEM32(ecx + 0x108) = edx;
    MEM8(eax + 0x363AC) = MEM8(eax + 0x363AC) - 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A41C7:
    esi = MEM32(eax + 0x36368);
    MEM32(esi + 0x108) = ecx;
    MEM32(ecx + 0x108) = edx;
    MEM32(eax + 0x36368) = ecx;
    MEM8(eax + 0x363AC) = MEM8(eax + 0x363AC) - 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
