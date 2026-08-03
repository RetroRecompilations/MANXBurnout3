#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002F260
 * Original: 0x0002F260 - 0x0002F325 (197 bytes, 55 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F260(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F260:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEM32(ebp + 0x7C) = ebx;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAEA8);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F27D:
    MEM32(ebp + 0x38) = eax;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAE98);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F290:
    MEM32(ebp + 0x3C) = eax;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAE88);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F2A3:
    MEM32(ebp + 0x40) = eax;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAE74);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F2B6:
    edi = ebp + 0x1D0;
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, 0); sub_0002EBE0(); /* call 0x0002EBE0 */

loc_0002F2C4:
    edi = ebp + 0x270;
    PUSH32(esp, 0); sub_0002EBE0(); /* call 0x0002EBE0 */

loc_0002F2CF:
    eax = 0x4D6C90;
    PUSH32(esp, 0); sub_00030150(); /* call 0x00030150 */

loc_0002F2D9:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x48) = LO8(ebx);
    MEM32(ebp + 0x4C) = ebx;
    MEM8(ebp + 0x5C) = LO8(ebx);
    MEM8(ebp + 0x55) = LO8(eax);
    MEM8(ebp + 0x56) = LO8(eax);
    MEM8(ebp + 0x57) = LO8(eax);
    MEM8(ebp + 0x58) = LO8(eax);
    MEM8(ebp + 0x59) = LO8(eax);
    MEM8(ebp + 0x5A) = LO8(eax);
    MEM8(ebp + 0x5B) = LO8(eax);
    MEM8(ebp + 0x5D) = LO8(eax);
    MEM8(ebp + 0x5E) = LO8(eax);
    MEM8(ebp + 0x5F) = LO8(eax);
    MEM8(ebp + 0x60) = LO8(eax);
    MEM8(ebp + 0x61) = LO8(eax);
    MEM8(ebp + 0x62) = LO8(eax);
    MEM8(ebp + 0x63) = LO8(eax);
    MEM8(ebp + 0x64) = LO8(eax);
    MEM8(ebp + 0x54) = LO8(eax);
    MEM32(ebp + 0x80) = 0x17;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
