#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002486AE
 * Original: 0x002486AE - 0x002486DC (46 bytes, 17 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486AE(void)
{
    int _flags = 0; /* fallback flag var */

loc_002486AE:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax * 8 + 0x3C6500;
    if (CMP_NE(MEM32(esi), 0)) goto loc_002486D2; /* jne: not equal / not zero */

loc_002486BF:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024860E(); /* call 0x0024860E */

loc_002486C5:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_002486D2; /* jne: not equal / not zero */

loc_002486CA:
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_00246EE4(); /* call 0x00246EE4 */

loc_002486D1:
    POP32(esp, ecx);

loc_002486D2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_002486DA:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
