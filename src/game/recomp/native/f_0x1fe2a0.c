#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE2A0
 * Original: 0x001FE2A0 - 0x001FE313 (115 bytes, 40 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE2A0(void)
{

loc_001FE2A0:
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 4);
    ecx = esp + 8;
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE2BD:
    PUSH32(esp, 2);
    edx = esi + 4;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE2CD:
    PUSH32(esp, 2);
    ecx = esi + 6;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FE2DD:
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    esp = esp + 0x24;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
