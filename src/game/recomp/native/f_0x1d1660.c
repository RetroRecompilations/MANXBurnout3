#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1660
 * Original: 0x001D1660 - 0x001D16B2 (82 bytes, 31 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1660:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x36B888));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B858), _icall_esp); /* indirect call */
    }

loc_001D1676:
    if (TEST_S(eax, eax)) goto loc_001D16A6; /* jl: less (signed <) */

loc_001D167A:
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(eax, 0xF)) goto loc_001D1686; /* jne: not equal / not zero */

loc_001D1682:
    PUSH32(esp, 0x10);
    goto loc_001D168D;

loc_001D1686:
    if (CMP_NE(eax, 0xFFFFFFF1u)) goto loc_001D168E; /* jne: not equal / not zero */

loc_001D168B:
    PUSH32(esp, 0xFFFFFFF0u);

loc_001D168D:
    POP32(esp, eax);

loc_001D168E:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B884), _icall_esp); /* indirect call */
    }

loc_001D1698:
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B854), _icall_esp); /* indirect call */
    }

loc_001D16A1:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D16AE;

loc_001D16A6:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D16AC:
    eax = 0; /* xor self */

loc_001D16AE:
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
