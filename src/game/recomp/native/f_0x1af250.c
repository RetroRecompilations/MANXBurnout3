#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AF250
 * Original: 0x001AF250 - 0x001AF280 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF250(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AF250:
    eax = eax | 0xFFFFFFFFu;
    if (CMP_LE(edx & edx, 0)) goto loc_001AF27F; /* jle: less or equal (signed <=) */

loc_001AF257:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001AF260:
    edi = (uint32_t)(int32_t)SMEM8(ecx);
    esi = eax;
    esi = esi & 0xFF;
    esi = esi ^ edi;
    edi = MEM32(esi * 4 + 0x3F7700);
    eax = (uint32_t)((int32_t)eax >> 8);
    eax = eax ^ edi;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_001AF260; /* jne: not equal / not zero */

loc_001AF27D:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AF27F:
    esp += 4; return; /* ret */

}
