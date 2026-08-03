#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9840
 * Original: 0x001C9840 - 0x001C989C (92 bytes, 36 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9840:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x398);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F65A0(); /* call 0x001F65A0 */

loc_001C9853:
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001C988A; /* jbe: below or equal (unsigned <=) */

loc_001C985E:
    PUSH32(esp, esi);
    esi = ebp;

loc_001C9861:
    ecx = MEM32(ebp + 0x398);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F6590(); /* call 0x001F6590 */

loc_001C986E:
    MEM32(esi + 8) = eax;
    eax = MEM32(eax + 4);
    esp = esp + 8;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_001C987C:
    MEM32(esi) = eax;
    MEM32(esi + 4) = edx;
    edi++;
    esi = esi + 0x10;
    if (CMP_B(edi, ebx)) goto loc_001C9861; /* jb: below (unsigned <) */

loc_001C9889:
    POP32(esp, esi);

loc_001C988A:
    PUSH32(esp, ebp);
    MEM8(ebp + 0x3A9) = LO8(ebx);
    PUSH32(esp, 0); sub_001C9900(); /* call 0x001C9900 */

loc_001C9896:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
