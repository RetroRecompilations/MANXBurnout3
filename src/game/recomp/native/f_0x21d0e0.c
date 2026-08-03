#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D0E0
 * Original: 0x0021D0E0 - 0x0021D22A (330 bytes, 94 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D0E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021D0E0:
    eax = MEM32(esi + 0x4D8);
    esp = esp - 0x208;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x370474);
    edi = esi + 0x2D4;
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00213630(); /* call 0x00213630 */

loc_0021D104:
    eax = MEM32(esi + 0x1B0);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0021D125; /* je: equal / zero */

loc_0021D111:
    PUSH32(esp, eax);
    PUSH32(esp, 0x35BEA0);
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002138E0(); /* call 0x002138E0 */

loc_0021D122:
    esp = esp + 0x10;

loc_0021D125:
    ecx = esi + 0x454;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021D13B:
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021D15C; /* je: equal / zero */

loc_0021D144:
    PUSH32(esp, edi);
    PUSH32(esp, 0x370478);
    eax = esp + 0x14;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021D159:
    esp = esp + 0x10;

loc_0021D15C:
    SET_LO8(ecx, MEM8(esi + 0x1D4));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x1D4;
    POP32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0021D185; /* je: equal / zero */

loc_0021D16D:
    PUSH32(esp, eax);
    PUSH32(esp, 0x370488);
    ecx = esp + 0x10;
    PUSH32(esp, 0x200);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021D182:
    esp = esp + 0x10;

loc_0021D185:
    SET_LO8(ecx, MEM8(esi + 0x3D4));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x3D4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0021D1AD; /* je: equal / zero */

loc_0021D195:
    PUSH32(esp, eax);
    PUSH32(esp, 0x370480);
    edx = esp + 0x10;
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021D1AA:
    esp = esp + 0x10;

loc_0021D1AD:
    PUSH32(esp, 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x786B6964);
    PUSH32(esp, 0); sub_002155A0(); /* call 0x002155A0 */

loc_0021D1BE:
    PUSH32(esp, 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x370064);
    edx = esp + 0x20;
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00213AB0(); /* call 0x00213AB0 */

loc_0021D1D9:
    eax = MEM32(esi + 0x4D4);
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0021D202; /* je: equal / zero */

loc_0021D1E6:
    PUSH32(esp, 0x3704C0);
    PUSH32(esp, 0x3B1444);
    eax = esp + 0x10;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021D1FF:
    esp = esp + 0x10;

loc_0021D202:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50534554);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00221B40(); /* call 0x00221B40 */

loc_0021D219:
    MEM32(esi + 0x4DC) = 0;
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

}
