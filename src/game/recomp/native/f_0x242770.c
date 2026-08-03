#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242770
 * Original: 0x00242770 - 0x002427B6 (70 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242770:
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, 0x706F7274)) goto loc_00242788; /* jne: not equal / not zero */

loc_0024277B:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_002422C0(); return; /* tail jmp 0x002422C0 */

loc_00242788:
    if (CMP_NE(eax, 0x73706B72)) goto loc_002427A1; /* jne: not equal / not zero */

loc_0024278F:
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00242060(); /* call 0x00242060 */

loc_0024279D:
    POP32(esp, edi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_002427A1:
    if (CMP_NE(eax, 0x74696D65)) goto loc_002427B3; /* jne: not equal / not zero */

loc_002427A8:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;

loc_002427B3:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
