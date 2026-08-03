#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6930
 * Original: 0x001F6930 - 0x001F6A1A (234 bytes, 84 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6930(void)
{

loc_001F6930:
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    PUSH32(esp, 4);
    ecx = esp + 0xC;
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F694E:
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(edi + 4));
    MEM8(eax) = LO8(edx);
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(edi + 5));
    eax++;
    MEM32(esp + 0x14) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(edi + 6));
    eax++;
    MEM32(esp + 0x14) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(edi + 7));
    eax++;
    MEM32(esp + 0x14) = eax;
    MEM8(eax) = LO8(ecx);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    PUSH32(esp, 4);
    edx = edi + 8;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F6995:
    PUSH32(esp, 4);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F69A5:
    PUSH32(esp, 4);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F69B5:
    PUSH32(esp, 4);
    edx = edi + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F69C5:
    esi = edi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE2A0(); /* call 0x001FE2A0 */

loc_001F69CE:
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x48);
    esp = esp + 0x40;
    PUSH32(esp, 4);
    ecx = edi + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    eax = eax + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001F6A06:
    ecx = 0xB;
    esi = esp + 0x18;
    esp = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}
