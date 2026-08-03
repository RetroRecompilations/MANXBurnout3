#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D15B6
 * Original: 0x001D15B6 - 0x001D1608 (82 bytes, 32 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D15B6:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D3E1B(); /* call 0x001D3E1B */

loc_001D15C8:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001D15DB; /* jne: not equal / not zero */

loc_001D15CE:
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    MEM32(ebp + -4) = 0x80000000u;
    esi = ebp + -8;

loc_001D15DB:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B878), _icall_esp); /* indirect call */
    }

loc_001D15E7:
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_001D15F4; /* je: equal / zero */

loc_001D15ED:
    if (CMP_EQ(eax, 0x101)) goto loc_001D15DB; /* je: equal / zero */

loc_001D15F4:
    ecx = 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, ecx)) goto loc_001D1602; /* jne: not equal / not zero */

loc_001D15FE:
    eax = ecx;
    goto loc_001D1604;

loc_001D1602:
    eax = 0; /* xor self */

loc_001D1604:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
