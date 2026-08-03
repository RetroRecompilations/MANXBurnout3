#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002151D0
 * Original: 0x002151D0 - 0x0021529C (204 bytes, 69 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002151D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002151D0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x41CD54);
    if (TEST_NZ(ebp, ebp)) goto loc_002151E5; /* jne: not equal / not zero */

loc_002151E0:
    ebp = 0x3830E0;

loc_002151E5:
    PUSH32(esp, 0x370008);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00243BD0(); /* call 0x00243BD0 */

loc_002151F0:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002151FC; /* je: equal / zero */

loc_002151F7:
    ebp = 0x36FFFC;

loc_002151FC:
    if (TEST_Z(esi, esi)) goto loc_00215206; /* je: equal / zero */

loc_00215200:
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00215206:
    PUSH32(esp, 0x7AC);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00215210:
    esi = eax;
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_00215221; /* jne: not equal / not zero */

loc_00215219:
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00215221:
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x1EB;
    edi = esi;
    PUSH32(esp, 2);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_002208D0(); /* call 0x002208D0 */

loc_00215234:
    PUSH32(esp, 0x36FFFC);
    PUSH32(esp, ebp);
    MEM8(esi + 0x7A4) = 1;
    PUSH32(esp, 0); sub_00243BD0(); /* call 0x00243BD0 */

loc_00215246:
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00214CD0(); /* call 0x00214CD0 */

loc_00215254:
    esp = esp + 0x10;
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00215264; /* je: equal / zero */

loc_0021525C:
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00215264:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031AF83(); /* call 0x0031AF83 */

loc_0021526B:
    PUSH32(esp, esi);
    PUSH32(esp, 0x214FC0);
    MEM32(esi + 0x770) = 1;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0); sub_00215910(); /* call 0x00215910 */

loc_0021528E:
    esp = esp + 8;
    MEM32(0x41CD54) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
