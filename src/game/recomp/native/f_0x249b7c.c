#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249B7C
 * Original: 0x00249B7C - 0x00249B93 (23 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249B7C(void)
{
    uint32_t ebp;

loc_00249B7C:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_00249B9C(); return; /* tail jmp 0x00249B9C */

}
