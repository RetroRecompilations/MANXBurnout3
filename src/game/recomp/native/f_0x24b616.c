#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B616
 * Original: 0x0024B616 - 0x0024B626 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B616(void)
{

loc_0024B616:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B910), _icall_esp); /* indirect call */
    }

loc_0024B620:
    eax = 0; /* xor self */
    eax++;
    esp += 12; return; /* ret 8 */

}
