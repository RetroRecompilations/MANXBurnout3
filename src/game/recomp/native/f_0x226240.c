#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226240
 * Original: 0x00226240 - 0x002262D5 (149 bytes, 54 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226240:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_002262D3; /* je: equal / zero */

loc_0022624D:
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x219C);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = eax + esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00225760(); /* call 0x00225760 */

loc_0022626C:
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_002262AB; /* jne: not equal / not zero */

loc_00226273:
    eax = MEM32(esi + 0x18);
    eax++;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00226283; /* jns: not sign (positive) */

loc_0022627E:
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00226283:
    MEM32(esi + 0x18) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x219C);
    ecx = esi + 0x4354;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = eax + esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00225FD0(); /* call 0x00225FD0 */

loc_0022629F:
    esp = esp + 0x10;
    MEM32(esi + 8) = 1;
    goto loc_002262B9;

loc_002262AB:
    if (CMP_NE(eax, 0xFFFFFFFEu)) goto loc_002262B9; /* jne: not equal / not zero */

loc_002262B0:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00225980(); /* call 0x00225980 */

loc_002262B6:
    esp = esp + 4;

loc_002262B9:
    eax = MEM32(esi + 0x55F8);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002262CA; /* je: equal / zero */

loc_002262C4:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_002262CA:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002258E0(); /* call 0x002258E0 */

loc_002262D0:
    esp = esp + 4;

loc_002262D3:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
