#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DF71
 * Original: 0x0024DF71 - 0x0024DFA1 (48 bytes, 17 insns)
 * Category: rw_core
 * Source: src/babintex.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF71(void)
{

loc_0024DF71:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x374E58));
    edi = ecx;
    esi = edi + eax * 4 + 0x28;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_0024F298(); /* call 0x0024F298 */

loc_0024DF8A:
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_0024F7F6(); /* call 0x0024F7F6 */

loc_0024DF91:
    eax = MEM32(esi);
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
