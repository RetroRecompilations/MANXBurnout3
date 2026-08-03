#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CFF0A
 * Original: 0x001CFF0A - 0x001CFF4D (67 bytes, 28 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF0A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CFF0A:
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001CFF24; /* je: equal / zero */

loc_001CFF18:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    edx = eax;
    eax = ecx + eax + -1;
    goto loc_001CFF29;

loc_001CFF24:
    edx = 0; /* xor self */
    eax = eax | 0xFFFFFFFFu;

loc_001CFF29:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B814), _icall_esp); /* indirect call */
    }

loc_001CFF39:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001CFF46; /* jne: not equal / not zero */

loc_001CFF3F:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CFF46:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
