#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020A200
 * Original: 0x0020A200 - 0x0020A220 (32 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A200(void)
{

loc_0020A200:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax + 0x34;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x68);
    ecx = ecx | 2;
    POP32(esp, edi);
    MEM32(eax + 0x68) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
