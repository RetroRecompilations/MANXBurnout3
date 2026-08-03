#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE1B0
 * Original: 0x001CE1B0 - 0x001CE1E2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE1B0:
    eax = MEM32(ebx + 0x4D8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001CE1DD; /* jle: less or equal (signed <=) */

loc_001CE1C2:
    PUSH32(esp, esi);
    esi = ebx;

loc_001CE1C5:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001CE980(); /* call 0x001CE980 */

loc_001CE1CB:
    eax = MEM32(ebx + 0x4D8);
    edi++;
    esi = esi + 0x26C;
    if (CMP_L(edi, eax)) goto loc_001CE1C5; /* jl: less (signed <) */

loc_001CE1DC:
    POP32(esp, esi);

loc_001CE1DD:
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
