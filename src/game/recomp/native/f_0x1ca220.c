#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA220
 * Original: 0x001CA220 - 0x001CA26D (77 bytes, 29 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA220(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA220:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_001CA224:
    esi = MEM32(ebx + edi * 4);
    if (TEST_Z(esi, esi)) goto loc_001CA24D; /* je: equal / zero */

loc_001CA22B:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_001CA246; /* je: equal / zero */

loc_001CA232:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5F30(); /* call 0x001F5F30 */

loc_001CA23C:
    esp = esp + 0xC;
    MEM32(esi + 8) = 0;

loc_001CA246:
    MEM32(ebx + edi * 4) = 0;

loc_001CA24D:
    edi++;
    if (CMP_B(edi, 2)) goto loc_001CA224; /* jb: below (unsigned <) */

loc_001CA253:
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5F30(); /* call 0x001F5F30 */

loc_001CA260:
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
