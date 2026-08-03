#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002147A0
 * Original: 0x002147A0 - 0x00214815 (117 bytes, 40 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002147A0:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_002147AE:
    ebx = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (TEST_Z(ebx, ebx)) goto loc_00214810; /* je: equal / zero */

loc_002147B9:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x31;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esp + 0xC) = eax;
    ecx = 2;
    edi = esp + 0xC;
    esi = 0x41CD38;
    edx = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    if (1 /* strings matched (repe cmpsb) */) goto loc_002147F8; /* je: equal / zero */

loc_002147E2:
    PUSH32(esp, 0x41CD38);
    PUSH32(esp, 0); sub_003392B4(); /* call 0x003392B4 */

loc_002147EC:
    eax = 0; /* xor self */
    MEM32(0x41CD38) = eax;
    MEM32(0x41CD3C) = eax;

loc_002147F8:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = ebx + 0x80;
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002206A0(); /* call 0x002206A0 */

loc_0021480B:
    esp = esp + 0xC;
    eax = ebx;

loc_00214810:
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
