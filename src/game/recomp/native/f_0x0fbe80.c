#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FBE80
 * Original: 0x000FBE80 - 0x000FBEC2 (66 bytes, 25 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBE80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FBE80:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(edx + 0x24), eax)) goto loc_000FBEBF; /* je: equal / zero */

loc_000FBE89:
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xA));
    PUSH32(esp, edi);
    MEM32(edx + 0x24) = eax;
    ecx = eax;
    edi = ZX8(HI8(eax));
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ecx >> 0x18;
    PUSH32(esp, esi);
    ecx = ecx & 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3AC804);
    edx = edx + 0x14;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_000FBEBA:
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000FBEBF:
    esp += 8; return; /* ret 4 */

}
