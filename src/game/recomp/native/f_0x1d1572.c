#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1572
 * Original: 0x001D1572 - 0x001D15B6 (68 bytes, 28 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1572(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1572:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D3E1B(); /* call 0x001D3E1B */

loc_001D1584:
    esi = eax;

loc_001D1586:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B874), _icall_esp); /* indirect call */
    }

loc_001D1595:
    if (TEST_S(eax, eax)) goto loc_001D15A8; /* jl: less (signed <) */

loc_001D1599:
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_001D15B1; /* je: equal / zero */

loc_001D159F:
    if (CMP_EQ(eax, 0x101)) goto loc_001D1586; /* je: equal / zero */

loc_001D15A6:
    goto loc_001D15B1;

loc_001D15A8:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D15AE:
    eax = eax | 0xFFFFFFFFu;

loc_001D15B1:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
