#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8470
 * Original: 0x001C8470 - 0x001C8504 (148 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8470(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C8470:
    if (CMP_EQ(esi, MEM32(0x4A1B20))) goto loc_001C8503; /* je: equal / zero */

loc_001C847C:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C848A; /* jbe: below or equal (unsigned <=) */

loc_001C8485:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C848A:
    edx = MEM32(0x75D960);
    /* test edx, edx - flags set for next jcc */
    eax = MEM32(esi * 4 + 0x4A1B24);
    PUSH32(esp, edi);
    ecx = 1;
    if (TEST_NZ(edx, edx)) goto loc_001C84C3; /* jne: not equal / not zero */

loc_001C84A1:
    edx = MEM32(0x75D940);
    edi = edx;
    edi = edi << 4;
    edx++;
    MEM32(0x75D960) = ecx;
    MEM32(edi + 0x75D2A0) = 0;
    MEM32(0x75D940) = edx;

loc_001C84C3:
    edx = MEM32(0x75D970);
    /* test edx, edx - flags set for next jcc */
    MEM32(0x75D740) = eax;
    eax = MEM32(esi * 4 + 0x4A1B68);
    if (TEST_NZ(edx, edx)) goto loc_001C84F7; /* jne: not equal / not zero */

loc_001C84D9:
    edx = MEM32(0x75D940);
    edi = edx;
    edi = edi << 4;
    edx++;
    MEM32(0x75D970) = ecx;
    MEM32(edi + 0x75D2A0) = ecx;
    MEM32(0x75D940) = edx;

loc_001C84F7:
    MEM32(0x75D750) = eax;
    MEM32(0x4A1B20) = esi;
    POP32(esp, edi);

loc_001C8503:
    esp += 4; return; /* ret */

}
