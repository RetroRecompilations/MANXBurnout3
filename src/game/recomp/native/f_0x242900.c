#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242900
 * Original: 0x00242900 - 0x00242941 (65 bytes, 26 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242900:
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0024293F; /* je: equal / zero */

loc_0024290A:
    eax = MEM32(edi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3C60D4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243170(); /* call 0x00243170 */

loc_0024291A:
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 8), _icall_esp); /* indirect call */
    }

loc_00242927:
    esp = esp + 0x1C;
    eax = 0; /* xor self */
    ecx = 0x23;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x1C) = 0x80;
    MEM32(esi + 0x20) = eax;

loc_0024293F:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
