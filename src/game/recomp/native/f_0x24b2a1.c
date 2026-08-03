#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B2A1
 * Original: 0x0024B2A1 - 0x0024B2C3 (34 bytes, 11 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B2A1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B2A1:
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_0024B275(); /* call 0x0024B275 */

loc_0024B2AB:
    eax = MEM32(0x41D5A0);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0024B2B7; /* je: equal / zero */

loc_0024B2B5:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0024B2B7:
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0024B275(); /* call 0x0024B275 */

loc_0024B2C1:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
