#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00222080
 * Original: 0x00222080 - 0x002220C2 (66 bytes, 33 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222080:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = ebx;
    PUSH32(esp, 0); sub_00221F80(); /* call 0x00221F80 */

loc_00222093:
    ecx = MEM32(edi + 0x14);
    esi = MEM32(ecx + eax * 4);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_002220B5; /* je: equal / zero */

loc_002220A0:
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x20), _icall_esp); /* indirect call */
    }

loc_002220A8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002220BB; /* je: equal / zero */

loc_002220AF:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_002220A0; /* jne: not equal / not zero */

loc_002220B5:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002220BB:
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
