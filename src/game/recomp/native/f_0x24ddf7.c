#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DDF7
 * Original: 0x0024DDF7 - 0x0024DE67 (112 bytes, 39 insns)
 * Category: rw_core
 * Source: src/babintex.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DDF7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DDF7:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B8), _icall_esp); /* indirect call */
    }

loc_0024DE03:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x420630);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8E4), _icall_esp); /* indirect call */
    }

loc_0024DE10:
    PUSH32(esp, 4);
    edi = esi + 0x28;
    POP32(esp, ebp);

loc_0024DE16:
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_0024DE2A; /* je: equal / zero */

loc_0024DE1C:
    PUSH32(esp, MEM32(0x374E58));
    PUSH32(esp, 0); sub_0024F298(); /* call 0x0024F298 */

loc_0024DE27:
    MEM32(edi) = MEM32(edi) & 0;

loc_0024DE2A:
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0024DE16; /* jne: not equal / not zero */

loc_0024DE30:
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B4), _icall_esp); /* indirect call */
    }

loc_0024DE38:
    ecx = esi;
    PUSH32(esp, 0); sub_0024DD51(); /* call 0x0024DD51 */

loc_0024DE3F:
    ecx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_0024DE52; /* je: equal / zero */

loc_0024DE48:
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0024DDA4(); /* call 0x0024DDA4 */

loc_0024DE4F:
    MEM32(esi + 0x38) = edi;

loc_0024DE52:
    MEM32(0x42068C) = edi;
    MEM32(0x420674) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0024FAAF(); return; /* tail jmp 0x0024FAAF */

}
