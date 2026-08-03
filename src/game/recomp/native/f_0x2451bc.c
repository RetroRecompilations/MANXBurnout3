#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002451BC
 * Original: 0x002451BC - 0x002451EB (47 bytes, 17 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002451BC(void)
{
    int _flags = 0; /* fallback flag var */

loc_002451BC:
    eax = MEM32(esp + 4);
    ecx = 0x3C6130;
    if (CMP_B(eax, ecx)) goto loc_002451E0; /* jb: below (unsigned <) */

loc_002451C9:
    if (CMP_A(eax, 0x3C6390)) goto loc_002451E0; /* ja: above (unsigned >) */

loc_002451D0:
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_002451DE:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002451E0:
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_002451EA:
    esp += 4; return; /* ret */

}
