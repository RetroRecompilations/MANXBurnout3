#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD160
 * Original: 0x001DD160 - 0x001DD190 (48 bytes, 18 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD160(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD160:
    eax = MEM32(0x41AB04);
    ecx = MEM32(eax + 0x7592A0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3000E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E4), _icall_esp); /* indirect call */
    }

loc_001DD178:
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001DD183; /* jne: not equal / not zero */

loc_001DD181:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD183:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DD080(); /* call 0x001DD080 */

loc_001DD189:
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
