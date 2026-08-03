#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D16B2
 * Original: 0x001D16B2 - 0x001D1706 (84 bytes, 31 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16B2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D16B2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x36B888));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B858), _icall_esp); /* indirect call */
    }

loc_001D16C8:
    if (TEST_S(eax, eax)) goto loc_001D16F7; /* jl: less (signed <) */

loc_001D16CC:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B88C), _icall_esp); /* indirect call */
    }

loc_001D16D6:
    esi = eax;
    if (CMP_NE(esi, 0x10)) goto loc_001D16E1; /* jne: not equal / not zero */

loc_001D16DD:
    PUSH32(esp, 0xF);
    goto loc_001D16E8;

loc_001D16E1:
    if (CMP_NE(esi, 0xFFFFFFF0u)) goto loc_001D16E9; /* jne: not equal / not zero */

loc_001D16E6:
    PUSH32(esp, 0xFFFFFFF1u);

loc_001D16E8:
    POP32(esp, esi);

loc_001D16E9:
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B854), _icall_esp); /* indirect call */
    }

loc_001D16F2:
    eax = esi;
    POP32(esp, esi);
    goto loc_001D1702;

loc_001D16F7:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D16FD:
    eax = 0x7FFFFFFF;

loc_001D1702:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
