#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017310
 * Original: 0x00017310 - 0x0001736C (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017310:
    eax = MEM32(eax + 0x2E1D0);
    if (TEST_NZ(eax, eax)) goto loc_0001731D; /* jne: not equal / not zero */

loc_0001731A:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0001731D:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1B8);
    if (TEST_NZ(esi, esi)) goto loc_0001732C; /* jne: not equal / not zero */

loc_00017328:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001732C:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_00017336:
    if (CMP_EQ(eax, 6)) goto loc_00017368; /* je: equal / zero */

loc_0001733B:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00017345:
    if (CMP_EQ(eax, 3)) goto loc_00017368; /* je: equal / zero */

loc_0001734A:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_00017354:
    if (CMP_EQ(eax, 4)) goto loc_00017368; /* je: equal / zero */

loc_00017359:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00017363:
    if (CMP_NE(eax, 5)) goto loc_00017328; /* jne: not equal / not zero */

loc_00017368:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
