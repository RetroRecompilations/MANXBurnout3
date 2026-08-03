#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE0B0
 * Original: 0x001CE0B0 - 0x001CE0F9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE0B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE0B0:
    eax = MEM32(ebx + 0x4D8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001CE0F7; /* jle: less or equal (signed <=) */

loc_001CE0BD:
    PUSH32(esp, esi);
    esi = ebx;

loc_001CE0C0:
    eax = MEM32(esi + 0x24);
    if (CMP_L(eax, 0xA)) goto loc_001CE0E5; /* jl: less (signed <) */

loc_001CE0C8:
    if (CMP_G(eax, 0xB)) goto loc_001CE0E5; /* jg: greater (signed >) */

loc_001CE0CD:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001CE0DB; /* je: equal / zero */

loc_001CE0D4:
    eax = esi;
    PUSH32(esp, 0); sub_001CEB10(); /* call 0x001CEB10 */

loc_001CE0DB:
    PUSH32(esp, 0); sub_001CEFC0(); /* call 0x001CEFC0 */

loc_001CE0E0:
    PUSH32(esp, 0); sub_001CEF10(); /* call 0x001CEF10 */

loc_001CE0E5:
    eax = MEM32(ebx + 0x4D8);
    edi++;
    esi = esi + 0x26C;
    if (CMP_L(edi, eax)) goto loc_001CE0C0; /* jl: less (signed <) */

loc_001CE0F6:
    POP32(esp, esi);

loc_001CE0F7:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
