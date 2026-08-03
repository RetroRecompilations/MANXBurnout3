#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DC5D
 * Original: 0x0024DC5D - 0x0024DC89 (44 bytes, 19 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC5D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024DC5D:
    eax = MEM32(esp + 4);
    /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) goto loc_0024DC7F; /* je: equal / zero */

loc_0024DC69:
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0024DC7D:
    goto loc_0024DC84;

loc_0024DC7F:
    eax = 0x80004005u;

loc_0024DC84:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
