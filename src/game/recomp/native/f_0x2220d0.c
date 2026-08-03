#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002220D0
 * Original: 0x002220D0 - 0x0022212D (93 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002220D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002220D0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0); sub_00221F80(); /* call 0x00221F80 */

loc_002220E4:
    ecx = MEM32(ebx + 0x14);
    edi = MEM32(ecx + eax * 4);
    esi = ecx + eax * 4;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_0022210D; /* je: equal / zero */

loc_002220F4:
    edx = MEM32(esi);
    eax = MEM32(edx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x20), _icall_esp); /* indirect call */
    }

loc_002220FE:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00222114; /* je: equal / zero */

loc_00222105:
    esi = MEM32(esi);
    edi = MEM32(esi);
    if (TEST_NZ(edi, edi)) goto loc_002220F4; /* jne: not equal / not zero */

loc_0022210D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00222114:
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    edx = MEM32(ebx + 0x1C);
    MEM32(edi) = edx;
    eax = MEM32(ebx);
    eax--;
    MEM32(ebx + 0x1C) = edi;
    MEM32(ebx) = eax;
    eax = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
