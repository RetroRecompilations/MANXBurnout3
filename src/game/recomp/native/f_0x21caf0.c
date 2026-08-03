#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021CAF0
 * Original: 0x0021CAF0 - 0x0021CB68 (120 bytes, 43 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CAF0:
    esp = esp - 0x100;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFE);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021CB0F:
    edx = esp + 0x14;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CB1B:
    esp = esp + 0x14;
    esi = eax;
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_NZ(esi, esi)) goto loc_0021CB3F; /* jne: not equal / not zero */

loc_0021CB25:
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021CB30:
    esp = esp + 0xC;
    POP32(esp, esi);
    MEM8(edi) = 0;
    POP32(esp, ebp);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

loc_0021CB3F:
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM8(esi) = 0;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021CB4D:
    edx = MEM32(esp + 0x11C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021CB5C:
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}
