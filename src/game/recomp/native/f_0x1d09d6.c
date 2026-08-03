#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D09D6
 * Original: 0x001D09D6 - 0x001D0A32 (92 bytes, 38 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D09D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D09D6:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D0E3C(); /* call 0x001D0E3C */

loc_001D09F7:
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_001D0A2D; /* je: equal / zero */

loc_001D09FE:
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7DC), _icall_esp); /* indirect call */
    }

loc_001D0A13:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B840), _icall_esp); /* indirect call */
    }

loc_001D0A26:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0A2C:
    POP32(esp, edi);

loc_001D0A2D:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
