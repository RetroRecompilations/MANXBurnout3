#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FEB10
 * Original: 0x001FEB10 - 0x001FEB65 (85 bytes, 36 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FEB10:
    eax = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_001FEB3E; /* je: equal / zero */

loc_001FEB1B:
    goto loc_001FEB20;

    /* nop */

loc_001FEB20:
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FEB35:
    eax = MEM32(esi);
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_001FEB20; /* jne: not equal / not zero */

loc_001FEB3E:
    /* test MEM8(edi + 0x18), 1 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(MEM8(edi + 0x18), 1)) goto loc_001FEB64; /* jne: not equal / not zero */

loc_001FEB45:
    eax = MEM32(0x41C5B8);
    if (CMP_EQ(eax, edi)) goto loc_001FEB5D; /* je: equal / zero */

loc_001FEB4E:
    if (TEST_Z(eax, eax)) goto loc_001FEB5D; /* je: equal / zero */

loc_001FEB52:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FEB59:
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001FEB5D:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FEB63:
    POP32(esp, ecx);

loc_001FEB64:
    esp += 4; return; /* ret */

}
