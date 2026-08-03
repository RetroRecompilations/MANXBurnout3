#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8690
 * Original: 0x001F8690 - 0x001F8716 (134 bytes, 61 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8690(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F8690:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    /* test LO8(eax), 8 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = esi;
    if (TEST_Z(LO8(eax), 8)) goto loc_001F86A6; /* je: equal / zero */

loc_001F86A1:
    ecx = MEM32(esi + -4);
    goto loc_001F86BF;

loc_001F86A6:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_001F86BF; /* je: equal / zero */

loc_001F86AA:
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = eax & 7;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F5E40(); /* call 0x001F5E40 */

loc_001F86B9:
    ecx = MEM32(eax + esi);
    esp = esp + 0xC;

loc_001F86BF:
    eax = MEM32(edi + 0x48);
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F8704; /* je: equal / zero */

loc_001F86CA:
    if (TEST_Z(edx, edx)) goto loc_001F86D4; /* je: equal / zero */

loc_001F86CE:
    if (TEST_NZ(MEM8(esi + 0x1C), 0x20)) goto loc_001F8704; /* jne: not equal / not zero */

loc_001F86D4:
    edx = MEM32(edi + 0xC);
    /* test LO8(edx), 0x40 - flags set for next jcc */
    PUSH32(esp, ecx);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_001F86E9; /* je: equal / zero */

loc_001F86DD:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001F86E3:
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F86E9:
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_001F86F9; /* jns: not sign (positive) */

loc_001F86ED:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE770(); /* call 0x001FE770 */

loc_001F86F3:
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F86F9:
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F86FE:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F8704:
    if (TEST_Z(edx, edx)) goto loc_001F8713; /* je: equal / zero */

loc_001F8708:
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_001F8710:
    esp = esp + 8;

loc_001F8713:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
