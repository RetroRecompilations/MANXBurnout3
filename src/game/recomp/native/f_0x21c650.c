#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C650
 * Original: 0x0021C650 - 0x0021C67F (47 bytes, 18 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C650:
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    if (CMP_NE(eax, edx)) goto loc_0021C65F; /* jne: not equal / not zero */

loc_0021C65A:
    eax = 0x41CE70;

loc_0021C65F:
    ecx = MEM32(eax + 4);
    if (CMP_BE(ecx, 1)) goto loc_0021C66C; /* jbe: below or equal (unsigned <=) */

loc_0021C667:
    ecx--;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_0021C66C:
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    eax = eax + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0021C67E:
    esp += 4; return; /* ret */

}
