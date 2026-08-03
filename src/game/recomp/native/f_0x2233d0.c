#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002233D0
 * Original: 0x002233D0 - 0x0022343D (109 bytes, 40 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002233D0(void)
{

loc_002233D0:
    esp = esp - 0x518;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 4);
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    esi = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002275A0(); /* call 0x002275A0 */

loc_002233F4:
    edx = MEM32(esp + 0x538);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002276A0(); /* call 0x002276A0 */

loc_00223407:
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002276C0(); /* call 0x002276C0 */

loc_00223411:
    esi = esi & 0xFFFFFFFEu;
    ecx = edi;
    esi = esi - edi;
    edi = MEM32(esp + 0x54C);
    edx = ecx;
    ecx = ecx >> 2;
    esi = esp + esi + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 0x24;
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x518;
    esp += 4; return; /* ret */

}
