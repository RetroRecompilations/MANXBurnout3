#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BEBE
 * Original: 0x0024BEBE - 0x0024BEE0 (34 bytes, 10 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BEBE(void)
{

loc_0024BEBE:
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0024BEDF:
    esp += 4; return; /* ret */

}
