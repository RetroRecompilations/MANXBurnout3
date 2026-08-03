#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245199
 * Original: 0x00245199 - 0x002451BC (35 bytes, 13 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245199(void)
{
    int _flags = 0; /* fallback flag var */

loc_00245199:
    eax = MEM32(esp + 4);
    if (CMP_GE(eax, 0x14)) goto loc_002451AD; /* jge: greater or equal (signed >=) */

loc_002451A2:
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_002451AB:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002451AD:
    eax = MEM32(esp + 8);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_002451BB:
    esp += 4; return; /* ret */

}
