#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DB30
 * Original: 0x0019DB30 - 0x0019DB88 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DB30:
    ecx = MEM32(edi + 0xEC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0019DB4D; /* jle: less or equal (signed <=) */

loc_0019DB3D:
    eax = edi + 0x5C;

loc_0019DB40:
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0019DB51; /* je: equal / zero */

loc_0019DB45:
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, ecx)) goto loc_0019DB40; /* jl: less (signed <) */

loc_0019DB4D:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019DB51:
    edx = MEM32(0x3FA644);
    ecx = esi;
    ecx = ecx << 4;
    if (CMP_NE(edx, 2)) goto loc_0019DB69; /* jne: not equal / not zero */

loc_0019DB61:
    ecx = ecx + 0x3FA294;
    goto loc_0019DB6F;

loc_0019DB69:
    ecx = ecx + 0x3F9EE4;

loc_0019DB6F:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0019DB74:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + esi * 4 + 0x5C) = eax;
    if (TEST_Z(eax, eax)) goto loc_0019DB4D; /* je: equal / zero */

loc_0019DB7C:
    MEM32(eax) = 0;
    eax = MEM32(edi + esi * 4 + 0x5C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
