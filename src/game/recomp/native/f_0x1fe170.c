#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE170
 * Original: 0x001FE170 - 0x001FE1B2 (66 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE170(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE170:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, esi)) goto loc_001FE1B0; /* je: equal / zero */

loc_001FE17C:
    /* nop */

loc_001FE180:
    ecx = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001FE191; /* je: equal / zero */

loc_001FE186:
    if (CMP_EQ(ecx, esi)) goto loc_001FE191; /* je: equal / zero */

loc_001FE18A:
    ecx = MEM32(ecx + 4);
    if (CMP_NE(ecx, eax)) goto loc_001FE186; /* jne: not equal / not zero */

loc_001FE191:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FE1A6:
    eax = MEM32(esi + 4);
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_001FE180; /* jne: not equal / not zero */

loc_001FE1B0:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
