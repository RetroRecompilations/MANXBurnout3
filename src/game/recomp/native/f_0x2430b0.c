#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002430B0
 * Original: 0x002430B0 - 0x00243145 (149 bytes, 56 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002430B0:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_002430C1:
    esi = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00243142; /* je: equal / zero */

loc_002430CC:
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0xFE);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 2);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 2);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0); sub_00339339(); /* call 0x00339339 */

loc_002430EA:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00243120; /* je: equal / zero */

loc_002430F1:
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edx);
    MEM16(edi) = 2;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0); sub_0033A271(); /* call 0x0033A271 */

loc_0024310B:
    PUSH32(esp, 0x10);
    MEM16(esi + 6) = LO16(eax);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033938A(); /* call 0x0033938A */

loc_0024311A:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0024312E; /* jne: not equal / not zero */

loc_00243120:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00243126:
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024312E:
    edx = MEM32(esi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0033935A(); /* call 0x0033935A */

loc_00243140:
    eax = esi;

loc_00243142:
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
