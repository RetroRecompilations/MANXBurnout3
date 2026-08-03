#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB900
 * Original: 0x001CB900 - 0x001CB970 (112 bytes, 38 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB900:
    eax = MEM32(esi + 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001CB933; /* jle: less or equal (signed <=) */

loc_001CB910:
    PUSH32(esp, ebp);
    ebp = esi + 0x154;

loc_001CB917:
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020C2D0(); /* call 0x0020C2D0 */

loc_001CB921:
    eax = MEM32(esi + 0x140);
    esp = esp + 8;
    edi++;
    ebp = ebp + 4;
    if (CMP_L(edi, eax)) goto loc_001CB917; /* jl: less (signed <) */

loc_001CB932:
    POP32(esp, ebp);

loc_001CB933:
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esi + 0x140) = ebx;
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CB947:
    edx = MEM32(esi + 0x16C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F9350(); /* call 0x001F9350 */

loc_001CB954:
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0x194) = LO8(ebx);
    MEM32(esi + 0x170) = ebx;
    MEM8(esi + 0x196) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
