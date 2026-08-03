#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D620
 * Original: 0x0003D620 - 0x0003D68E (110 bytes, 41 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D620(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D620:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0); sub_0003D4A0(); /* call 0x0003D4A0 */

loc_0003D62E:
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    esi = esi >> 3;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_0003D651:
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ebx = ebx & 0x7FFFFFFF;
    PUSH32(esp, 0); sub_00360A7F(); /* call 0x00360A7F */

loc_0003D679:
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM32(edi + 4) = ebx;
    MEM32(edi) = 0x50001;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0x14) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
