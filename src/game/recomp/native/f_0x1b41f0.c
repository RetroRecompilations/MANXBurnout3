#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B41F0
 * Original: 0x001B41F0 - 0x001B4224 (52 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B41F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B41F0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi);
    eax = eax | MEM32(esi + 4);
    if ((eax == 0)) goto loc_001B4221; /* je: equal / zero */

loc_001B41FE:
    edi = edi;

loc_001B4200:
    ecx = MEM32(esi + 8);
    eax = MEM32(edi + 8);
    edx = MEM32(ecx + edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001B4214:
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    esi = esi + 0x10;
    ecx = ecx | eax;
    if ((ecx != 0)) goto loc_001B4200; /* jne: not equal / not zero */

loc_001B4221:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
