#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D205B
 * Original: 0x001D205B - 0x001D20AC (81 bytes, 33 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D205B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D205B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x150;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -336;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8A8), _icall_esp); /* indirect call */
    }

loc_001D2087:
    /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_GE(eax, esi)) goto loc_001D2096; /* jge: greater or equal (signed >=) */

loc_001D208C:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D2092:
    eax = 0; /* xor self */
    goto loc_001D20A8;

loc_001D2096:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -336;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1EE2(); /* call 0x001D1EE2 */

loc_001D20A5:
    eax = 0; /* xor self */
    eax++;

loc_001D20A8:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
