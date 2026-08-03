#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB970
 * Original: 0x001CB970 - 0x001CB9D3 (99 bytes, 33 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB970:
    eax = MEM32(edi + 0x16C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5F30(); /* call 0x001F5F30 */

loc_001CB983:
    esp = esp + 0xC;
    esi = edi + 0x14C;
    ebp = 2;

loc_001CB991:
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F5A30(); /* call 0x001F5A30 */

loc_001CB999:
    MEM32(esi) = ebx;
    MEM32(esi + -8) = ebx;
    esp = esp + 4;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_001CB991; /* jne: not equal / not zero */

loc_001CB9A7:
    edx = MEM32(edi + 0x130);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(edi + 0x134) = ebx;
    MEM32(edi + 0x16C) = ebx;
    MEM8(edi + 0x194) = LO8(ebx);
    MEM32(edi + 0x170) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001CB9CC:
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
