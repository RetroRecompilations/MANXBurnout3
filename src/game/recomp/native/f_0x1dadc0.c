#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DADC0
 * Original: 0x001DADC0 - 0x001DAE1B (91 bytes, 30 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DADC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DADC0:
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7592B4), _icall_esp); /* indirect call */
    }

loc_001DADD2:
    esi = eax;
    esp = esp + 0x10;
    if (TEST_NZ(esi, esi)) goto loc_001DAE04; /* jne: not equal / not zero */

loc_001DADDB:
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DADEC:
    MEM32(esp + 0x10) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DADFA:
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DAE04:
    MEM32(0x41AACC) = MEM32(0x41AACC) - 1;
    eax = esi;
    MEM32(0x7593F0) = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
