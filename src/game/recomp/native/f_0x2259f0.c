#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002259F0
 * Original: 0x002259F0 - 0x00225A71 (129 bytes, 48 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002259F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002259F0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00225A32; /* je: equal / zero */

loc_002259F9:
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031AB43(); /* call 0x0031AB43 */

loc_00225A04:
    if (TEST_S(eax, eax)) goto loc_00225A20; /* jl: less (signed <) */

loc_00225A08:
    ecx = MEM32(esi + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_00225A32; /* jne: not equal / not zero */

loc_00225A12:
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031AB4E(); /* call 0x0031AB4E */

loc_00225A1C:
    if (CMP_GE(eax & eax, 0)) goto loc_00225A32; /* jge: greater or equal (signed >=) */

loc_00225A20:
    PUSH32(esp, 0x370FEC);
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_00225A2A:
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00225A32:
    PUSH32(esp, edi);
    eax = esi + 0x55F4;
    PUSH32(esp, eax);
    ecx = esi + 0x4654;
    PUSH32(esp, ecx);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0);
    MEM32(eax) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0031ABFE(); /* call 0x0031ABFE */

loc_00225A59:
    if (CMP_GE(eax & eax, 0)) goto loc_00225A63; /* jge: greater or equal (signed >=) */

loc_00225A5D:
    MEM32(edi) = 0;

loc_00225A63:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002258E0(); /* call 0x002258E0 */

loc_00225A69:
    esp = esp + 4;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
