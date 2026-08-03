#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CFDD0
 * Original: 0x001CFDD0 - 0x001CFE6F (159 bytes, 55 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFDD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CFDD0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001CFDE3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E8), _icall_esp); /* indirect call */
    }

loc_001CFE15:
    if (CMP_GE(eax & eax, 0)) goto loc_001CFE34; /* jge: greater or equal (signed >=) */

loc_001CFE19:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001CFE1F:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001CFE24:
    if (CMP_NE(eax, 2)) goto loc_001CFE30; /* jne: not equal / not zero */

loc_001CFE29:
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CFE30:
    eax = 0; /* xor self */
    goto loc_001CFE6B;

loc_001CFE34:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E4), _icall_esp); /* indirect call */
    }

loc_001CFE4A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001CFE55:
    if (CMP_GE(esi & esi, 0)) goto loc_001CFE63; /* jge: greater or equal (signed >=) */

loc_001CFE59:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001CFE5F:
    eax = 0; /* xor self */
    goto loc_001CFE6A;

loc_001CFE63:
    eax = MEM32(ebp + -36);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));

loc_001CFE6A:
    POP32(esp, esi);

loc_001CFE6B:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
