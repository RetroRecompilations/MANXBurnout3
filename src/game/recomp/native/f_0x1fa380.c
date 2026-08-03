#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FA380
 * Original: 0x001FA380 - 0x001FA43A (186 bytes, 69 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA380(void)
{

loc_001FA380:
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ecx = esp + 0x10;
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FA39F:
    PUSH32(esp, 4);
    edx = ebx + 4;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FA3AF:
    PUSH32(esp, 4);
    ecx = ebx + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FA3BF:
    ecx = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(ebx + 0xC));
    MEM8(ecx) = LO8(eax);
    eax = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(ebx + 0xD));
    eax++;
    MEM32(esp + 0x30) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(esp + 0x30);
    SET_LO8(ecx, MEM8(ebx + 0xE));
    eax++;
    MEM32(esp + 0x30) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(ebx + 0xF));
    eax++;
    MEM32(esp + 0x30) = eax;
    MEM8(eax) = LO8(edx);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 1;
    PUSH32(esp, 4);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FA406:
    PUSH32(esp, 4);
    edx = ebx + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FFD80(); /* call 0x001FFD80 */

loc_001FA416:
    SET_LO8(ecx, MEM8(ebx + 0x18));
    edx = MEM32(esp + 0x48);
    MEM8(edx) = LO8(ecx);
    esp = esp + 0x3C;
    edi = ebx;
    ecx = 7;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x19) = 0;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
