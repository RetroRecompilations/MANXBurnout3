#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226F40
 * Original: 0x00226F40 - 0x00226F84 (68 bytes, 30 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226F40:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + edi;
    ecx = ecx + eax;
    edx = edx + eax;
    esi = esi + eax;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00226F81; /* jle: less or equal (signed <=) */

loc_00226F57:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_00226F60:
    ebp = ZX16(MEM16(edx + -2));
    ebx = ZX16(MEM16(ecx + -2));
    edx = edx - 2;
    ecx = ecx - 2;
    ebp = ebp + eax;
    eax = ebx + ebp;
    esi = esi - 2;
    MEM16(esi) = LO16(eax);
    eax = eax >> 0x10;
    edi--;
    if ((edi != 0)) goto loc_00226F60; /* jne: not equal / not zero */

loc_00226F7F:
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00226F81:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
