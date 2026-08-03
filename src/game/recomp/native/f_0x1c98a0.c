#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C98A0
 * Original: 0x001C98A0 - 0x001C98FE (94 bytes, 29 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C98A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C98A0:
    eax = MEM32(esi + 0x398);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001C98EC; /* je: equal / zero */

loc_001C98AD:
    SET_LO8(eax, MEM8(esi + 0x3A9));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_001C98D7; /* jle: less or equal (signed <=) */

loc_001C98B9:
    eax = esi;
    goto loc_001C98C0;

    /* nop */

loc_001C98C0:
    MEM32(eax + 8) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x3A9);
    ecx++;
    eax = eax + 0x10;
    if (CMP_L(ecx, edx)) goto loc_001C98C0; /* jl: less (signed <) */

loc_001C98D7:
    eax = MEM32(esi + 0x398);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F6720(); /* call 0x001F6720 */

loc_001C98E3:
    esp = esp + 4;
    MEM32(esi + 0x398) = ebx;

loc_001C98EC:
    MEM32(esi + 0x39C) = ebx;
    MEM32(esi + 0x3A4) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
