#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000511C0
 * Original: 0x000511C0 - 0x0005122F (111 bytes, 38 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000511C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000511C0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_000511D8:
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x28) = ebx;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AB2E0);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_000511F1:
    MEM32(edi + 0x2C) = eax;
    MEM8(edi + 0x30) = LO8(ebx);
    eax = MEM32(0x4D5370);
    if (CMP_EQ(eax, ebx)) goto loc_00051228; /* je: equal / zero */

loc_00051200:
    if (CMP_NE(MEM32(eax + 0x1BC), 0x4D5210)) goto loc_00051228; /* jne: not equal / not zero */

loc_0005120C:
    eax = MEM32(0x4D521C);
    if (CMP_EQ(eax, ebx)) goto loc_00051228; /* je: equal / zero */

loc_00051215:
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001585A0(); /* call 0x001585A0 */

loc_00051222:
    esp = esp + 8;
    MEM8(edi + 0x30) = LO8(eax);

loc_00051228:
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
