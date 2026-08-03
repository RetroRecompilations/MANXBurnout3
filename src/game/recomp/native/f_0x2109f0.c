#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002109F0
 * Original: 0x002109F0 - 0x00210A7E (142 bytes, 45 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002109F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002109F0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    /* cmp ebx, MEM32(edi + 0x17A8) - flags set for next jcc */
    esi = edi + 0x1700;
    MEM8(esi) = 0;
    if (CMP_NE(ebx, MEM32(edi + 0x17A8))) goto loc_00210A78; /* jne: not equal / not zero */

loc_00210A0C:
    if (CMP_EQ(ebx, 3)) goto loc_00210A16; /* je: equal / zero */

loc_00210A11:
    if (CMP_NE(ebx, 4)) goto loc_00210A41; /* jne: not equal / not zero */

loc_00210A16:
    eax = MEM32(edi + 0x17B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3B1338);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00213630(); /* call 0x00213630 */

loc_00210A2D:
    PUSH32(esp, edi);
    PUSH32(esp, 0x3B1330);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00213630(); /* call 0x00213630 */

loc_00210A3E:
    esp = esp + 0x20;

loc_00210A41:
    if (CMP_NE(ebx, 5)) goto loc_00210A78; /* jne: not equal / not zero */

loc_00210A46:
    ecx = ZX8(MEM8(edi + 0x17C1));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36F808);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00213630(); /* call 0x00213630 */

loc_00210A5E:
    edi = edi + 0x1780;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3B1324);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_00210A75:
    esp = esp + 0x20;

loc_00210A78:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
