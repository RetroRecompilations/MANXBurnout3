#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CFF4D
 * Original: 0x001CFF4D - 0x001CFF7A (45 bytes, 18 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF4D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CFF4D:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B814), _icall_esp); /* indirect call */
    }

loc_001CFF66:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001CFF73; /* jne: not equal / not zero */

loc_001CFF6C:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CFF73:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
