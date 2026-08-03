#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6610
 * Original: 0x001A6610 - 0x001A6674 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6610(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001A6610:
    eax = MEM32(edx + 0x40);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(eax + esi * 4);
    if (CMP_NE(eax, 0xFF)) goto loc_001A6628; /* jne: not equal / not zero */

loc_001A6624:
    eax = 0; /* xor self */
    goto loc_001A6630;

loc_001A6628:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_001A6630:
    esi = MEM32(eax);
    /* cmp ecx, MEM32(esi + 0x10) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(ecx, MEM32(esi + 0x10))) goto loc_001A663D; /* jl: less (signed <) */

loc_001A6638:
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_001A663D:
    if (TEST_NZ(ecx, ecx)) goto loc_001A6652; /* jne: not equal / not zero */

loc_001A6641:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x114));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001A6652; /* je: equal / zero */

loc_001A664D:
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_001A6652:
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    eax = MEM32(esp + 8);
    SET_LO16(edx, LO16(edx) + LO16(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x6137E0;
    PUSH32(esp, 0); sub_001A4150(); /* call 0x001A4150 */

loc_001A666B:
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    esp += 12; return; /* ret 8 */

}
