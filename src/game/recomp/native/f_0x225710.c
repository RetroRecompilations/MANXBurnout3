#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225710
 * Original: 0x00225710 - 0x00225752 (66 bytes, 35 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225710:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0022573F; /* jle: less or equal (signed <=) */

loc_00225720:
    ebp = MEM32(esp + 0x18);
    edi = ebx + 0x10;

loc_00225727:
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0022572E:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00225746; /* je: equal / zero */

loc_00225735:
    eax = MEM32(ebx);
    esi++;
    edi = edi + 0x56;
    if (CMP_L(esi, eax)) goto loc_00225727; /* jl: less (signed <) */

loc_0022573F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00225746:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x56);
    POP32(esp, edi);
    eax = esi + ebx + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
