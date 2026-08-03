#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D700
 * Original: 0x0021D700 - 0x0021D774 (116 bytes, 36 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D700(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021D700:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = edi + edi * 4;
    esi = ebx + eax * 4;
    eax = MEM32(esi + 0x914);
    if (TEST_Z(eax, eax)) goto loc_0021D770; /* je: equal / zero */

loc_0021D71B:
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021D72C:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021D735:
    ecx = MEM32(esi + 0x908);
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) goto loc_0021D770; /* jne: not equal / not zero */

loc_0021D742:
    edx = edi + edi * 4 + 0x244;
    eax = MEM32(ebx + edx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x914), _icall_esp); /* indirect call */
    }

loc_0021D759:
    esp = esp + 0xC;
    MEM32(esi + 0x914) = 0;
    MEM32(esi + 0x90C) = 0;

loc_0021D770:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
