#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242230
 * Original: 0x00242230 - 0x00242271 (65 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242230:
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0024226F; /* jle: less or equal (signed <=) */

loc_0024223A:
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_00242240:
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi + 0x20);
    eax = eax + edi;
    if (CMP_NE(ecx, 2)) goto loc_00242260; /* jne: not equal / not zero */

loc_0024224E:
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = eax + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242160(); /* call 0x00242160 */

loc_0024225D:
    esp = esp + 0xC;

loc_00242260:
    eax = MEM32(esi + 0x14);
    ebx++;
    edi = edi + 0x8C;
    if (CMP_L(ebx, eax)) goto loc_00242240; /* jl: less (signed <) */

loc_0024226E:
    POP32(esp, edi);

loc_0024226F:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
