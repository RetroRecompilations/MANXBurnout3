#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE220
 * Original: 0x001FE220 - 0x001FE26E (78 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE220(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE220:
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 4);
    eax = ecx;
    if (CMP_EQ(edx, MEM32(eax + 8))) goto loc_001FE23F; /* je: equal / zero */

loc_001FE233:
    if (CMP_EQ(eax, esi)) goto loc_001FE26A; /* je: equal / zero */

loc_001FE237:
    eax = MEM32(eax + 4);
    if (CMP_NE(edx, MEM32(eax + 8))) goto loc_001FE233; /* jne: not equal / not zero */

loc_001FE23F:
    if (CMP_EQ(ecx, eax)) goto loc_001FE24E; /* je: equal / zero */

loc_001FE243:
    if (CMP_EQ(ecx, esi)) goto loc_001FE24E; /* je: equal / zero */

loc_001FE247:
    ecx = MEM32(ecx + 4);
    if (CMP_NE(ecx, eax)) goto loc_001FE243; /* jne: not equal / not zero */

loc_001FE24E:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FE263:
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE26A:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
