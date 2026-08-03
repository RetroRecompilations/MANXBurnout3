#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B626
 * Original: 0x0024B626 - 0x0024B664 (62 bytes, 16 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B626(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B626:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x374C58);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024B632:
    if (CMP_NE(MEM32(0x41D5A8), 0)) goto loc_0024B645; /* jne: not equal / not zero */

loc_0024B63B:
    MEM32(0x41D5A8) = 0x24B616;

loc_0024B645:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41D5A8), _icall_esp); /* indirect call */
    }

loc_0024B655:
    MEM32(ebp + -32) = eax;
    g_seh_ebp = ebp; sub_0024B67D(); return; /* tail jmp 0x0024B67D */

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;

}
