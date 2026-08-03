#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DA70
 * Original: 0x0019DA70 - 0x0019DAC8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DA70:
    ecx = MEM32(edi + 0xE8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0019DA8D; /* jle: less or equal (signed <=) */

loc_0019DA7D:
    eax = edi + 0x10;

loc_0019DA80:
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0019DA91; /* je: equal / zero */

loc_0019DA85:
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, ecx)) goto loc_0019DA80; /* jl: less (signed <) */

loc_0019DA8D:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019DA91:
    edx = MEM32(0x3FA644);
    ecx = esi;
    ecx = ecx << 4;
    if (CMP_NE(edx, 2)) goto loc_0019DAA9; /* jne: not equal / not zero */

loc_0019DAA1:
    ecx = ecx + 0x3FA164;
    goto loc_0019DAAF;

loc_0019DAA9:
    ecx = ecx + 0x3F9E44;

loc_0019DAAF:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0019DAB4:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + esi * 4 + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0019DA8D; /* je: equal / zero */

loc_0019DABC:
    MEM32(eax) = 0;
    eax = MEM32(edi + esi * 4 + 0x10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
