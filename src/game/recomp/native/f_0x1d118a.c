#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D118A
 * Original: 0x001D118A - 0x001D120E (132 bytes, 56 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D118A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D118A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B844), _icall_esp); /* indirect call */
    }

loc_001D11A5:
    if (CMP_GE(eax & eax, 0)) goto loc_001D11B3; /* jge: greater or equal (signed >=) */

loc_001D11A9:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D11AF:
    eax = 0; /* xor self */
    goto loc_001D120A;

loc_001D11B3:
    eax = MEM32(ebp + -8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x36B840);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0x14);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001D11D7:
    if (TEST_S(eax, eax)) goto loc_001D1201; /* jl: less (signed <) */

loc_001D11DB:
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001D11F8:
    if (TEST_S(eax, eax)) goto loc_001D1201; /* jl: less (signed <) */

loc_001D11FC:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D1209;

loc_001D1201:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D1207:
    eax = 0; /* xor self */

loc_001D1209:
    POP32(esp, esi);

loc_001D120A:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
