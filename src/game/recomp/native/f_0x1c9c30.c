#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9C30
 * Original: 0x001C9C30 - 0x001C9C77 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9C30:
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) goto loc_001C9C3E; /* jne: not equal / not zero */

loc_001C9C37:
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;

loc_001C9C3E:
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001C9C70; /* jle: less or equal (signed <=) */

loc_001C9C4C:
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);

loc_001C9C52:
    MEM8(eax + edx + 8) = 0;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + edx) = esi;
    edx = MEM32(ecx + 0xC);
    esi = esi + MEM32(eax + edx + 4);
    ebp = MEM32(ecx + 0x14);
    edi++;
    eax = eax + 0xC;
    if (CMP_L(edi, ebp)) goto loc_001C9C52; /* jl: less (signed <) */

loc_001C9C6F:
    POP32(esp, ebp);

loc_001C9C70:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
