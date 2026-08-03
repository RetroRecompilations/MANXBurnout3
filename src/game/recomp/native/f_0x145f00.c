#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00145F00
 * Original: 0x00145F00 - 0x00145F55 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145F00:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x13F0;
    esi = ebp + 0xF0;
    ebx = 0x10;
    /* nop */

loc_00145F20:
    PUSH32(esp, 0); sub_00146DD0(); /* call 0x00146DD0 */

loc_00145F25:
    eax = edi;
    PUSH32(esp, 0); sub_00142550(); /* call 0x00142550 */

loc_00145F2C:
    esi = esi + 0x130;
    edi = edi + 0x5C;
    ebx--;
    if ((ebx != 0)) goto loc_00145F20; /* jne: not equal / not zero */

loc_00145F38:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0xD1) = LO8(eax);
    MEM8(ebp + 0xD2) = LO8(eax);
    MEM8(ebp + 0xD0) = LO8(eax);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
