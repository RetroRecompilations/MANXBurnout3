#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002451EB
 * Original: 0x002451EB - 0x0024520E (35 bytes, 13 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002451EB(void)
{
    int _flags = 0; /* fallback flag var */

loc_002451EB:
    eax = MEM32(esp + 4);
    if (CMP_GE(eax, 0x14)) goto loc_002451FF; /* jge: greater or equal (signed >=) */

loc_002451F4:
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_002451FD:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002451FF:
    eax = MEM32(esp + 8);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0024520D:
    esp += 4; return; /* ret */

}
