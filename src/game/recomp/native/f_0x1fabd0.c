#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FABD0
 * Original: 0x001FABD0 - 0x001FACAB (219 bytes, 76 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FABD0(void)
{

loc_001FABD0:
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001FE320(); /* call 0x001FE320 */

loc_001FABE8:
    edx = MEM32(esp + 0x10);
    ecx = ebx;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebx + 0xC);
    eax = eax + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + 4;
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_001FA380(); /* call 0x001FA380 */

loc_001FAC22:
    edi = MEM32(esp + 0x14);
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x1C;
    esi = ebx + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FA380(); /* call 0x001FA380 */

loc_001FAC3B:
    edi = MEM32(esp + 0x18);
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x1C;
    PUSH32(esp, 4);
    eax = ebx + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FAC5B:
    PUSH32(esp, 4);
    edx = ebx + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FAC6B:
    PUSH32(esp, 4);
    ecx = ebx + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FAC7B:
    PUSH32(esp, 4);
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FAC8B:
    edx = MEM32(ebx + 0x58);
    eax = MEM32(esp + 0x48);
    esp = esp + 0x3C;
    edi = ebx;
    ecx = 0x17;
    esi = esp + 0x10;
    MEM32(eax) = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}
