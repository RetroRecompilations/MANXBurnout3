#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024516A
 * Original: 0x0024516A - 0x00245199 (47 bytes, 17 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024516A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024516A:
    eax = MEM32(esp + 4);
    ecx = 0x3C6130;
    if (CMP_B(eax, ecx)) goto loc_0024518E; /* jb: below (unsigned <) */

loc_00245177:
    if (CMP_A(eax, 0x3C6390)) goto loc_0024518E; /* ja: above (unsigned >) */

loc_0024517E:
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_0024518C:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024518E:
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_00245198:
    esp += 4; return; /* ret */

}
