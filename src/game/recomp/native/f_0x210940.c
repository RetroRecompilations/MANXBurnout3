#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210940
 * Original: 0x00210940 - 0x002109A8 (104 bytes, 29 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00210940:
    PUSH32(esp, esi);
    PUSH32(esp, 0x17C4);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_0021094B:
    esi = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_002109A6; /* je: equal / zero */

loc_00210956:
    PUSH32(esp, edi);
    ecx = 0x5F1;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x17A0) = eax;
    eax = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2107B0);
    MEM32(esi + 0x17A8) = eax;
    MEM32(esi + 0x17AC) = 0;
    MEM32(esi + 0x17A4) = eax;
    PUSH32(esp, 0); sub_00215910(); /* call 0x00215910 */

loc_00210990:
    esp = esp + 8;
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00210998:
    eax = eax + 0x3A98;
    MEM32(esi + 0x17BC) = eax;
    eax = esi;
    POP32(esp, edi);

loc_002109A6:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
