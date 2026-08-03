#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1B50
 * Original: 0x001E1B50 - 0x001E1B7D (45 bytes, 23 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1B50:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    if (TEST_Z(esi, esi)) goto loc_001E1B78; /* je: equal / zero */

loc_001E1B5D:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_001E1B62:
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x24), _icall_esp); /* indirect call */
    }

loc_001E1B6D:
    esi = MEM32(esi + 0x34);
    esp = esp + 0xC;
    if (TEST_NZ(esi, esi)) goto loc_001E1B62; /* jne: not equal / not zero */

loc_001E1B77:
    POP32(esp, edi);

loc_001E1B78:
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
