#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE710
 * Original: 0x001FE710 - 0x001FE769 (89 bytes, 44 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE710:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0xC);
    ebp = edi + 0xC;
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebp)) goto loc_001FE742; /* je: equal / zero */

loc_001FE724:
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE590(); /* call 0x001FE590 */

loc_001FE733:
    esi = MEM32(esi);
    ebx = eax;
    esp = esp + 0xC;
    if (TEST_NZ(ebx, ebx)) goto loc_001FE762; /* jne: not equal / not zero */

loc_001FE73E:
    if (CMP_NE(esi, ebp)) goto loc_001FE724; /* jne: not equal / not zero */

loc_001FE742:
    PUSH32(esp, 0); sub_001FE660(); /* call 0x001FE660 */

loc_001FE747:
    if (TEST_Z(eax, eax)) goto loc_001FE762; /* je: equal / zero */

loc_001FE74B:
    edx = MEM32(edi + 8);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE590(); /* call 0x001FE590 */

loc_001FE75A:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FE762:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
