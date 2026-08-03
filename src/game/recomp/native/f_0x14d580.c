#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014D580
 * Original: 0x0014D580 - 0x0014D5EB (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D580(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014D580:
    SET_LO8(eax, MEM8(ecx + 0x8C6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D5EA; /* jne: not equal / not zero */

loc_0014D58A:
    eax = MEM32(ecx + 0x520);
    edx = MEM32(ecx + 0x524);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax << 0x10;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    edi = edi + edx;
    eax = eax + edi;
    MEM32(ecx + 0x520) = eax;
    eax = eax + edx;
    MEM32(ecx + 0x524) = eax;
    eax = MEM32(ecx + 0x520);
    edx = 0; /* xor self */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = MEM32(ecx + 0x5A8);
    POP32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ecx;
    /* cmp edx, 5 - flags set for next jcc */
    edx = MEM32(esi + 0x204);
    if (CMP_AE(edx, 5)) goto loc_0014D5E1; /* jae: above or equal (unsigned >=) */

loc_0014D5D7:
    edx = edx + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0014DB50(); /* call 0x0014DB50 */

loc_0014D5E0:
    esp += 4; return; /* ret */

loc_0014D5E1:
    edx = edx + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0014D8A0(); /* call 0x0014D8A0 */

loc_0014D5EA:
    esp += 4; return; /* ret */

}
