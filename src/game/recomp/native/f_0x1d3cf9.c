#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3CF9
 * Original: 0x001D3CF9 - 0x001D3D65 (108 bytes, 36 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3CF9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D3CF9:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D3D0C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B83C), _icall_esp); /* indirect call */
    }

loc_001D3D47:
    if (TEST_S(eax, eax)) goto loc_001D3D59; /* jl: less (signed <) */

loc_001D3D4B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D3D54:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D3D61;

loc_001D3D59:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D3D5F:
    eax = 0; /* xor self */

loc_001D3D61:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
