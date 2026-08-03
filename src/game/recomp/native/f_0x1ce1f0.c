#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE1F0
 * Original: 0x001CE1F0 - 0x001CE25E (110 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE1F0:
    eax = MEM32(ebx + 0x4D8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001CE25C; /* jle: less or equal (signed <=) */

loc_001CE1FD:
    PUSH32(esp, esi);
    esi = ebx + 0x28;

loc_001CE201:
    eax = MEM32(esi + -4);
    if (CMP_EQ(eax, 0xB)) goto loc_001CE20E; /* je: equal / zero */

loc_001CE209:
    if (CMP_NE(eax, 0xA)) goto loc_001CE24A; /* jne: not equal / not zero */

loc_001CE20E:
    if (TEST_NZ(MEM8(esi), 1)) goto loc_001CE228; /* jne: not equal / not zero */

loc_001CE213:
    eax = MEM32(esi + 0x220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F5760(); /* call 0x002F5760 */

loc_001CE225:
    MEM32(esi) = MEM32(esi) | 1;

loc_001CE228:
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    eax = eax & 0xFFFFFFEDu;
    /* cmp ecx, 1 - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_L(ecx, 1)) goto loc_001CE243; /* jl: less (signed <) */

loc_001CE237:
    if (CMP_G(ecx, 7)) goto loc_001CE243; /* jg: greater (signed >) */

loc_001CE23C:
    eax = eax | 8;
    MEM32(esi) = eax;
    goto loc_001CE24A;

loc_001CE243:
    MEM32(esi + -4) = 0xE;

loc_001CE24A:
    eax = MEM32(ebx + 0x4D8);
    edi++;
    esi = esi + 0x26C;
    if (CMP_L(edi, eax)) goto loc_001CE201; /* jl: less (signed <) */

loc_001CE25B:
    POP32(esp, esi);

loc_001CE25C:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
