#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1706
 * Original: 0x001D1706 - 0x001D175C (86 bytes, 34 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1706(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1706:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x50;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax & 1;
    /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -68) = 0x1D1706;
    if (TEST_Z(esi, esi)) goto loc_001D1749; /* je: equal / zero */

loc_001D172E:
    ecx = MEM32(ebp + 0x10);
    if (CMP_BE(ecx, 0xF)) goto loc_001D1739; /* jbe: below or equal (unsigned <=) */

loc_001D1736:
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_001D1739:
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -64) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001D174D; /* je: equal / zero */

loc_001D1740:
    PUSH32(esp, edi);
    edi = ebp + -60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    goto loc_001D174D;

loc_001D1749:
    MEM32(ebp + -64) = MEM32(ebp + -64) & 0;

loc_001D174D:
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B890), _icall_esp); /* indirect call */
    }

loc_001D1757:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
