#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6C40
 * Original: 0x001F6C40 - 0x001F6C96 (86 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6C40:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(eax, esi)) goto loc_001F6C63; /* jne: not equal / not zero */

loc_001F6C4B:
    PUSH32(esp, 0x30808);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001F6C57:
    esp = esp + 8;
    MEM32(eax + 0x30) = 2;
    goto loc_001F6C6A;

loc_001F6C63:
    MEM32(eax + 0x30) = 1;

loc_001F6C6A:
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x40) = esi;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x2C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
