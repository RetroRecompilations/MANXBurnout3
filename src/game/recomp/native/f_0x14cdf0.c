#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014CDF0
 * Original: 0x0014CDF0 - 0x0014CEB1 (193 bytes, 50 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014CDF0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x884);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0014CE51; /* je: equal / zero */

loc_0014CDFE:
    eax = MEM32(esi + 0x170);
    if (CMP_EQ(eax, 5)) goto loc_0014CE29; /* je: equal / zero */

loc_0014CE09:
    if (CMP_EQ(eax, 4)) goto loc_0014CE29; /* je: equal / zero */

loc_0014CE0E:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x170) = 5;
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_0014CE26:
    esp = esp + 8;

loc_0014CE29:
    MEM8(esi + 0x196) = LO8(ebx);
    esi = MEM32(edi + 0x884);
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_0014CE3A:
    ecx = MEM32(edi + 0x884);
    PUSH32(esp, ecx);
    eax = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC010(); /* call 0x001CC010 */

loc_0014CE4B:
    MEM32(edi + 0x884) = ebx;

loc_0014CE51:
    esi = MEM32(edi + 0x888);
    if (CMP_EQ(esi, ebx)) goto loc_0014CEAE; /* je: equal / zero */

loc_0014CE5B:
    eax = MEM32(esi + 0x170);
    if (CMP_EQ(eax, 5)) goto loc_0014CE86; /* je: equal / zero */

loc_0014CE66:
    if (CMP_EQ(eax, 4)) goto loc_0014CE86; /* je: equal / zero */

loc_0014CE6B:
    edx = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esi + 0x170) = 5;
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_0014CE83:
    esp = esp + 8;

loc_0014CE86:
    MEM8(esi + 0x196) = LO8(ebx);
    esi = MEM32(edi + 0x888);
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_0014CE97:
    eax = MEM32(edi + 0x888);
    PUSH32(esp, eax);
    eax = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC010(); /* call 0x001CC010 */

loc_0014CEA8:
    MEM32(edi + 0x888) = ebx;

loc_0014CEAE:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
