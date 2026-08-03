#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DE810
 * Original: 0x001DE810 - 0x001DE86B (91 bytes, 38 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE810(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DE810:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x21));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_001DE820; /* js: sign (negative) */

loc_001DE81C:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DE820:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = edx;
    SET_LO16(ecx, MEM16(edi + 0x1C));
    SET_LO16(ecx, LO16(ecx) + MEM16(eax));
    PUSH32(esp, 0);
    MEM16(esi + 0x1C) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0x1E));
    SET_LO16(edx, LO16(edx) + MEM16(eax + 4));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM16(esi + 0x1E) = LO16(edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x759318), _icall_esp); /* indirect call */
    }

loc_001DE856:
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001DE866; /* je: equal / zero */

loc_001DE85D:
    eax = MEM32(edi);
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DE866:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
