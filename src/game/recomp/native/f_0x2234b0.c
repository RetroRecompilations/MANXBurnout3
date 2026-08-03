#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002234B0
 * Original: 0x002234B0 - 0x002234F4 (68 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002234B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002234B0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edx = 0x370B7C;
    /* nop */

loc_002234C0:
    ecx = MEM32(edx);
    if (CMP_L(ebp, ecx)) goto loc_002234D3; /* jl: less (signed <) */

loc_002234C6:
    esi = MEM32(esp + 0x14);
    edi = edx + 4;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_002234E5; /* je: equal / zero */

loc_002234D3:
    eax = MEM32(edx + 0x14);
    edx = edx + 0x18;
    ebx++;
    if (TEST_NZ(eax, eax)) goto loc_002234C0; /* jne: not equal / not zero */

loc_002234DE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002234E5:
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx + ebx * 2;
    eax = MEM32(ecx * 8 + 0x370B78);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
