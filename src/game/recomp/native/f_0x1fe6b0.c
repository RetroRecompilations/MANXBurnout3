#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE6B0
 * Original: 0x001FE6B0 - 0x001FE705 (85 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE6B0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    esi = edi + 0xC;
    if (CMP_EQ(eax, esi)) goto loc_001FE6DE; /* je: equal / zero */

loc_001FE6C0:
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FE6D5:
    eax = MEM32(esi);
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_001FE6C0; /* jne: not equal / not zero */

loc_001FE6DE:
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(edi + 0x18);
    edx = MEM32(edi + 0x14);
    MEM32(edx + 4) = eax;
    if (TEST_NZ(MEM8(edi), 1)) goto loc_001FE702; /* jne: not equal / not zero */

loc_001FE6F4:
    PUSH32(esp, edi);
    PUSH32(esp, 0x41C560);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FE6FF:
    esp = esp + 8;

loc_001FE702:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
