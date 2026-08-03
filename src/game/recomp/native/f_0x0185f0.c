#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000185F0
 * Original: 0x000185F0 - 0x00018649 (89 bytes, 32 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000185F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000185F0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xEA00);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = eax + ecx + 0x1C;
    PUSH32(esp, 0); sub_001CF843(); /* call 0x001CF843 */

loc_00018606:
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00018624; /* je: equal / zero */

loc_0001860D:
    PUSH32(esp, 0xE9EC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CF857(); /* call 0x001CF857 */

loc_00018619:
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CF8A5(); /* call 0x001CF8A5 */

loc_00018624:
    edi = edi + 0xE9EC;
    ecx = 0x14;
    esi = esp + 8;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    if (1 /* strings matched (repe cmpsb) */) goto loc_00018640; /* je: equal / zero */

loc_0001863B:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00018640:
    /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
