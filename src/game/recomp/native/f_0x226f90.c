#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226F90
 * Original: 0x00226F90 - 0x00226FD8 (72 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226F90:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    eax = ebx + ebx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edx + eax;
    esi = esi + eax;
    edi = edi + eax;
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00226FD4; /* jle: less or equal (signed <=) */

loc_00226FAA:
    PUSH32(esp, ebp);
    goto loc_00226FB0;

    /* nop */

loc_00226FB0:
    ecx = ZX16(MEM16(edx + -2));
    ebp = ZX16(MEM16(esi + -2));
    edx = edx - 2;
    esi = esi - 2;
    ecx = ecx - ebp;
    ecx = ecx - eax;
    edi = edi - 2;
    MEM16(edi) = LO16(ecx);
    ecx = ecx >> 0x10;
    ecx = ecx & 1;
    ebx--;
    eax = ecx;
    if ((ebx != 0)) goto loc_00226FB0; /* jne: not equal / not zero */

loc_00226FD3:
    POP32(esp, ebp);

loc_00226FD4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
