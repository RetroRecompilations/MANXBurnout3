#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001526A0
 * Original: 0x001526A0 - 0x00152711 (113 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001526A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001526A0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = eax;
    ebp = esi + 0xB8;
    MEM32(esi + 0x1A0) = ebx;
    PUSH32(esp, 0x11);
    edi = 0x11;
    eax = 1;
    ecx = ebp;
    MEM32(0x47A064) = 0xE;
    PUSH32(esp, 0); sub_00152800(); /* call 0x00152800 */

loc_001526CE:
    MEM32(0x47A068) = eax;
    ecx = esi + 0x12C;
    PUSH32(esp, 0x12);
    edi = 0x12;
    eax = 2;
    MEM32(0x47A06C) = 0xF;
    PUSH32(esp, 0); sub_00152800(); /* call 0x00152800 */

loc_001526F4:
    MEM32(0x47A070) = eax;
    POP32(esp, edi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    MEM32(esi + 0x12C) = 0;
    MEM8(esi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
