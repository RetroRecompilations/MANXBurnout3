#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214CD0
 * Original: 0x00214CD0 - 0x00214D3A (106 bytes, 29 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214CD0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00214CD0:
    esp = esp - 0x19C;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = 1;
    /* cmp ecx, eax - flags set for next jcc */
    MEM8(esp) = 0xC;
    if (CMP_NE(ecx, eax)) goto loc_00214D02; /* jne: not equal / not zero */

loc_00214CF0:
    ecx = MEM32(esp + 0x1A0);
    MEM8(esp + 1) = LO8(eax);
    MEM8(ecx + 0x7A4) = 0;

loc_00214D02:
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00339722(); /* call 0x00339722 */

loc_00214D0B:
    if (TEST_Z(eax, eax)) goto loc_00214D1B; /* je: equal / zero */

loc_00214D0F:
    eax = 0x80004005u;
    esp = esp + 0x19C;
    esp += 4; return; /* ret */

loc_00214D1B:
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x202);
    PUSH32(esp, 0); sub_00339739(); /* call 0x00339739 */

loc_00214D2A:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x80004005u;
    esp = esp + 0x19C;
    esp += 4; return; /* ret */

}
