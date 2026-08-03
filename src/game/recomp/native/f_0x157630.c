#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157630
 * Original: 0x00157630 - 0x00157680 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00157630:
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_00157647:
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 8;
    /* cmp LO8(eax), 0x41 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_00157675; /* je: equal / zero */

loc_00157653:
    if (CMP_EQ(LO8(eax), 0x45)) goto loc_0015766A; /* je: equal / zero */

loc_00157657:
    edx = 0; /* xor self */
    /* cmp LO8(eax), 0x55 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(eax), 0x55)) ? 1 : 0); /* sete */
    edx--;
    edx = edx & 3;
    eax = edx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0015766A:
    eax = 1;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00157675:
    eax = 2;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}
