#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002DDF0
 * Original: 0x0002DDF0 - 0x0002DE37 (71 bytes, 34 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DDF0:
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0002DE27; /* jle: less or equal (signed <=) */

loc_0002DDFC:
    edi = 0; /* xor self */
    edi = edi;

loc_0002DE00:
    eax = MEM32(esi + 0xC);
    ebx = MEM32(eax + edi + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = ebx + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0002DE15:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0002DE2F; /* je: equal / zero */

loc_0002DE1C:
    eax = MEM32(esi + 8);
    ebp++;
    edi = edi + 0x10;
    if (CMP_L(ebp, eax)) goto loc_0002DE00; /* jl: less (signed <) */

loc_0002DE27:
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002DE2F:
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
