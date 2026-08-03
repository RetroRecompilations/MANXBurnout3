#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE660
 * Original: 0x001FE660 - 0x001FE6AC (76 bytes, 31 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE660(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE660:
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, 0x30800);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FE66F:
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_001FE6A8; /* je: equal / zero */

loc_001FE678:
    ecx = eax + 0x10;
    MEM32(eax + 8) = ecx;
    esi = esi + eax;
    MEM32(eax + 0xC) = esi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    MEM32(edx) = ecx;
    edx = MEM32(edi + 0xC);
    ecx = edi + 0xC;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(edx + 4) = eax;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE6A8:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
