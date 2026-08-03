#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA710
 * Original: 0x001CA710 - 0x001CA77D (109 bytes, 35 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA710(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA710:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x534;
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_001CDB70(); /* call 0x001CDB70 */

loc_001CA723:
    esi = MEM32(edi + 0x2DDC);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001CA769; /* je: equal / zero */

loc_001CA72F:
    /* nop */

loc_001CA730:
    if (CMP_LE(MEM32(esi + 0x178), 2)) goto loc_001CA763; /* jle: less or equal (signed <=) */

loc_001CA739:
    if (CMP_NE(MEM8(esi + 0x19E), 1)) goto loc_001CA763; /* jne: not equal / not zero */

loc_001CA742:
    ecx = MEM32(esi + 0x174);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CA750:
    esp = esp + 8;
    MEM32(esi + 0x178) = 6;
    MEM8(esi + 0x19D) = LO8(ebx);

loc_001CA763:
    esi = MEM32(esi);
    if (CMP_NE(esi, ebx)) goto loc_001CA730; /* jne: not equal / not zero */

loc_001CA769:
    PUSH32(esp, ebx);
    ebx = edi + 8;
    PUSH32(esp, 0); sub_001CE1B0(); /* call 0x001CE1B0 */

loc_001CA772:
    MEM8(edi + 0x2E05) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
