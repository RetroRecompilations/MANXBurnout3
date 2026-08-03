#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DD1D
 * Original: 0x0024DD1D - 0x0024DD51 (52 bytes, 21 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD1D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024DD1D:
    eax = MEM32(esp + 4);
    /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) goto loc_0024DD47; /* je: equal / zero */

loc_0024DD29:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x58), _icall_esp); /* indirect call */
    }

loc_0024DD45:
    goto loc_0024DD4C;

loc_0024DD47:
    eax = 0x80004005u;

loc_0024DD4C:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}
