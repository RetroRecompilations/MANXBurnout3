#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC070
 * Original: 0x001FC070 - 0x001FC12A (186 bytes, 60 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC070(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FC070:
    if (TEST_Z(MEM8(esi + 0x62), 1)) goto loc_001FC129; /* je: equal / zero */

loc_001FC07A:
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    edi = MEM32(esi + 0x38);
    if (TEST_Z(edi, edi)) goto loc_001FC0D5; /* je: equal / zero */

loc_001FC091:
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBBB0(); /* call 0x001FBBB0 */

loc_001FC09D:
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001FC0B3; /* je: equal / zero */

loc_001FC0A4:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC0B0:
    esp = esp + 0x10;

loc_001FC0B3:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC0BF:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC0CB:
    esp = esp + 0x20;
    MEM32(esi + 0x38) = 0;

loc_001FC0D5:
    ecx = MEM32(0x41B858);
    MEM32(esi) = ecx;
    ecx = MEM32(0x41B87C);
    MEM32(esi + 4) = 0x41B858;
    edx = MEM32(0x41B858);
    MEM32(edx + 4) = esi;
    edx = MEM32(0x41B878);
    MEM32(0x41B858) = esi;
    eax = ZX8(MEM8(esi + 0x61));
    ecx = ecx - eax;
    SET_LO8(eax, MEM8(esi + 0x62));
    edx--;
    MEM32(0x41B87C) = ecx;
    ecx = MEM32(esi + 0x48);
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM32(0x41B878) = edx;
    MEM32(esi + 0x44) = ecx;
    MEM8(esi + 0x62) = LO8(eax);
    MEM8(esi + 0x60) = 0;
    MEM8(esi + 0x61) = 0;
    POP32(esp, edi);

loc_001FC129:
    esp += 4; return; /* ret */

}
