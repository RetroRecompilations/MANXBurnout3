#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FC50
 * Original: 0x0010FC50 - 0x0010FCDA (138 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010FC50:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0010FC5D:
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_0010FC66:
    if (CMP_NE(esi, 1)) goto loc_0010FCA0; /* jne: not equal / not zero */

loc_0010FC6B:
    if (CMP_NE(eax, 5)) goto loc_0010FCA0; /* jne: not equal / not zero */

loc_0010FC70:
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 0x13F4);
    ecx = MEM32(edi + 0xC);
    SET_LO8(ecx, MEM8(ecx + 0x242B));
    if (CMP_NE(LO8(ecx), MEM8(edx + 0x19BC))) goto loc_0010FCC9; /* jne: not equal / not zero */

loc_0010FC8A:
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    eax = 4;
    esi = esi + eax;
    eax = MEM32(esi * 4 + 0x39AE88);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010FCA0:
    if (CMP_NE(eax, 1)) goto loc_0010FCC9; /* jne: not equal / not zero */

loc_0010FCA5:
    if (CMP_NE(esi, 5)) goto loc_0010FCC9; /* jne: not equal / not zero */

loc_0010FCAA:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(edx + 0x13F4);
    edx = MEM32(ebx + 0xC);
    SET_LO8(edx, MEM8(edx + 0x242B));
    if (CMP_NE(LO8(edx), MEM8(ecx + 0x19BC))) goto loc_0010FCC9; /* jne: not equal / not zero */

loc_0010FCC4:
    esi = 4;

loc_0010FCC9:
    esi = (uint32_t)((int32_t)esi * (int32_t)7);
    esi = esi + eax;
    eax = MEM32(esi * 4 + 0x39AE88);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
