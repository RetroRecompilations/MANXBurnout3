#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BD30
 * Original: 0x0020BD30 - 0x0020BDA8 (120 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020BD30:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x36DC18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_0020BD49:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0020BD6E; /* jne: not equal / not zero */

loc_0020BD50:
    edx = MEM32(esi + 0xA4);
    eax = ZX8(MEM8(edx + 0x1D));
    ecx = MEM32(esp + 0xC);
    edx = ecx;
    edx = edx >> 6;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + eax * 8;
    eax = eax << 2;
    goto loc_0020BD89;

loc_0020BD6E:
    ecx = MEM32(esi + 0xA4);
    eax = ZX8(MEM8(ecx + 0x38));
    ecx = ZX8(MEM8(ecx + 0x39));
    eax = eax >> 3;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);

loc_0020BD89:
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(esi + 0x28);
    eax = eax | 0x1000;
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
