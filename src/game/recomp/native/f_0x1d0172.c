#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0172
 * Original: 0x001D0172 - 0x001D01D8 (102 bytes, 38 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0172(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0172:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x36BBC8;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B83C), _icall_esp); /* indirect call */
    }

loc_001D01AD:
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_001D01D0; /* jl: less (signed <) */

loc_001D01B3:
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_001D0134(); /* call 0x001D0134 */

loc_001D01BF:
    if (TEST_NZ(eax, eax)) goto loc_001D01D0; /* jne: not equal / not zero */

loc_001D01C3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ebx = 0xC00000E4u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D01D0:
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
