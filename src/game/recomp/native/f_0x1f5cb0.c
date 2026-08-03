#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5CB0
 * Original: 0x001F5CB0 - 0x001F5D15 (101 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5CB0:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi;
    if (TEST_NZ(eax, eax)) goto loc_001F5CDE; /* jne: not equal / not zero */

loc_001F5CC1:
    eax = MEM32(esi);
    eax = MEM32(eax + 0x30);
    if (TEST_Z(eax, eax)) goto loc_001F5CD2; /* je: equal / zero */

loc_001F5CCA:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F5CCD:
    esp = esp + 4;
    goto loc_001F5CD6;

loc_001F5CD2:
    eax = MEM32(esp + 0x10);

loc_001F5CD6:
    if (TEST_NZ(eax, eax)) goto loc_001F5CE2; /* jne: not equal / not zero */

loc_001F5CDA:
    ebx = 0; /* xor self */
    goto loc_001F5CE2;

loc_001F5CDE:
    eax = MEM32(esp + 0x10);

loc_001F5CE2:
    edi = esi + 0xC;
    esi = MEM32(edi);
    if (CMP_EQ(esi, edi)) goto loc_001F5D0F; /* je: equal / zero */

loc_001F5CEB:
    goto loc_001F5CF0;

    /* nop */

loc_001F5CF0:
    edx = MEM32(esi + -20);
    edx = MEM32(edx + 0x30);
    /* test edx, edx - flags set for next jcc */
    ecx = esi + -20;
    esi = MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_001F5D05; /* je: equal / zero */

loc_001F5CFF:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_001F5D02:
    esp = esp + 4;

loc_001F5D05:
    if (TEST_NZ(eax, eax)) goto loc_001F5D0B; /* jne: not equal / not zero */

loc_001F5D09:
    ebx = 0; /* xor self */

loc_001F5D0B:
    if (CMP_NE(esi, edi)) goto loc_001F5CF0; /* jne: not equal / not zero */

loc_001F5D0F:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
