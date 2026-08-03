#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002241B0
 * Original: 0x002241B0 - 0x00224235 (133 bytes, 55 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002241B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002241B0:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002241BB; /* je: equal / zero */

loc_002241B8:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_002241BB:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220AD0(); /* call 0x00220AD0 */

loc_002241D4:
    ebx = eax;
    esp = esp + 0xC;
    if (TEST_Z(ebx, ebx)) goto loc_0022422F; /* je: equal / zero */

loc_002241DD:
    PUSH32(esp, 0x124);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_002241E7:
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) goto loc_00224226; /* je: equal / zero */

loc_002241F0:
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x49;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx) = ebx;
    ecx = MEM32(ebp);
    eax = ecx;
    ecx = ecx >> 2;
    edi = edx + 0x108;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x118) = 0x14;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00224226:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002209B0(); /* call 0x002209B0 */

loc_0022422C:
    esp = esp + 4;

loc_0022422F:
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
