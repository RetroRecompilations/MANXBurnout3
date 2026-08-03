#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BD970
 * Original: 0x001BD970 - 0x001BD9C9 (89 bytes, 33 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD970(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BD970:
    eax = MEM32(edi + 0x3F0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C310(); /* call 0x0021C310 */

loc_001BD97D:
    ecx = MEM32(edi + 0x3F0);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0021C230(); /* call 0x0021C230 */

loc_001BD98B:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_001BD9BE; /* jle: less or equal (signed <=) */

loc_001BD992:
    edx = MEM32(edi + 0x3F0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C240(); /* call 0x0021C240 */

loc_001BD99F:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001BD9AA; /* je: equal / zero */

loc_001BD9A6:
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_001BD9C2; /* je: equal / zero */

loc_001BD9AA:
    eax = MEM32(edi + 0x3F0);
    PUSH32(esp, eax);
    esi++;
    PUSH32(esp, 0); sub_0021C230(); /* call 0x0021C230 */

loc_001BD9B7:
    esp = esp + 4;
    if (CMP_L(esi, eax)) goto loc_001BD992; /* jl: less (signed <) */

loc_001BD9BE:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BD9C2:
    eax = eax + 0x198;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
