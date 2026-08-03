#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221D20
 * Original: 0x00221D20 - 0x00221D82 (98 bytes, 41 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221D20:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00221C60(); /* call 0x00221C60 */

loc_00221D38:
    ebx = eax;
    esp = esp + 0x10;
    if (TEST_S(ebx, ebx)) goto loc_00221D7D; /* jl: less (signed <) */

loc_00221D41:
    ecx = MEM32(esp + 0x1C);
    /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_G(ecx, ebx)) ecx = ebx; /* cmovg */
    if (TEST_Z(edi, edi)) goto loc_00221D69; /* je: equal / zero */

loc_00221D53:
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    edx = ecx;
    esi = esi + 0xC;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, esi);

loc_00221D69:
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221D72:
    esp = esp + 4;
    MEM32(ebp + 0x7C) = 0;
    POP32(esp, edi);

loc_00221D7D:
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
