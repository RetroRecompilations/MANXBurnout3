#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3D65
 * Original: 0x001D3D65 - 0x001D3DF3 (142 bytes, 51 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3D65(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D3D65:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D3D78:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x110000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E8), _icall_esp); /* indirect call */
    }

loc_001D3DAA:
    if (CMP_GE(eax & eax, 0)) goto loc_001D3DB8; /* jge: greater or equal (signed >=) */

loc_001D3DAE:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D3DB4:
    eax = 0; /* xor self */
    goto loc_001D3DEF;

loc_001D3DB8:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xB) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B840), _icall_esp); /* indirect call */
    }

loc_001D3DD2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D3DDD:
    if (TEST_S(esi, esi)) goto loc_001D3DE6; /* jl: less (signed <) */

loc_001D3DE1:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D3DEE;

loc_001D3DE6:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D3DEC:
    eax = 0; /* xor self */

loc_001D3DEE:
    POP32(esp, esi);

loc_001D3DEF:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
