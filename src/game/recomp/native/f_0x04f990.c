#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004F990
 * Original: 0x0004F990 - 0x0004F9D7 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F990(void)
{

loc_0004F990:
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0004F9A3:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = edx + eax + 0x14;
    SET_LO8(edx, MEM8(esp + 4));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    MEM8(esi + 0x30) = LO8(edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004F9CF:
    MEM32(esi + 0x20) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}
