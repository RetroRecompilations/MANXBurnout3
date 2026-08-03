#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00222EB0
 * Original: 0x00222EB0 - 0x00222F33 (131 bytes, 42 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222EB0:
    PUSH32(esp, ecx);
    eax = MEM32(0x41D150);
    if (TEST_NZ(eax, eax)) goto loc_00222EC4; /* jne: not equal / not zero */

loc_00222EBA:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00222EBF:
    MEM32(0x41D150) = eax;

loc_00222EC4:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00222EC9:
    ecx = MEM32(0x41D154);
    ecx = ecx + eax;
    MEM32(0x41D158) = MEM32(0x41D158) + 1;
    eax = 0; /* xor self */
    MEM32(0x41D154) = ecx;
    ecx = MEM32(0x41D15C);
    MEM32(esp) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00222EF0:
    ecx = ecx + MEM32(esp + eax * 4 + 4);
    eax++;
    /* cmp eax, 0x20 - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_L(eax, 0x20)) goto loc_00222EF0; /* jl: less (signed <) */

loc_00222EFE:
    edi = MEM32(esp + 0xC);
    /* test edi, edi - flags set for next jcc */
    MEM32(0x41D15C) = ecx;
    if (TEST_Z(edi, edi)) goto loc_00222F30; /* je: equal / zero */

loc_00222F0C:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 3);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x41D150);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226970(); /* call 0x00226970 */

loc_00222F20:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226AD0(); /* call 0x00226AD0 */

loc_00222F2C:
    esp = esp + 0x1C;
    POP32(esp, esi);

loc_00222F30:
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
