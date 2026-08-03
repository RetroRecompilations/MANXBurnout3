#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5C40
 * Original: 0x001F5C40 - 0x001F5CA5 (101 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5C40:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi;
    if (TEST_NZ(eax, eax)) goto loc_001F5C6E; /* jne: not equal / not zero */

loc_001F5C51:
    eax = MEM32(esi);
    eax = MEM32(eax + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_001F5C62; /* je: equal / zero */

loc_001F5C5A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F5C5D:
    esp = esp + 4;
    goto loc_001F5C66;

loc_001F5C62:
    eax = MEM32(esp + 0x10);

loc_001F5C66:
    if (TEST_NZ(eax, eax)) goto loc_001F5C72; /* jne: not equal / not zero */

loc_001F5C6A:
    ebx = 0; /* xor self */
    goto loc_001F5C72;

loc_001F5C6E:
    eax = MEM32(esp + 0x10);

loc_001F5C72:
    edi = esi + 0xC;
    esi = MEM32(edi);
    if (CMP_EQ(esi, edi)) goto loc_001F5C9F; /* je: equal / zero */

loc_001F5C7B:
    goto loc_001F5C80;

    /* nop */

loc_001F5C80:
    edx = MEM32(esi + -20);
    edx = MEM32(edx + 0x2C);
    /* test edx, edx - flags set for next jcc */
    ecx = esi + -20;
    esi = MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_001F5C95; /* je: equal / zero */

loc_001F5C8F:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_001F5C92:
    esp = esp + 4;

loc_001F5C95:
    if (TEST_NZ(eax, eax)) goto loc_001F5C9B; /* jne: not equal / not zero */

loc_001F5C99:
    ebx = 0; /* xor self */

loc_001F5C9B:
    if (CMP_NE(esi, edi)) goto loc_001F5C80; /* jne: not equal / not zero */

loc_001F5C9F:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
