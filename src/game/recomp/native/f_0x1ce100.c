#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE100
 * Original: 0x001CE100 - 0x001CE13E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE100(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE100:
    eax = MEM32(ebx + 0x4D8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001CE132; /* jle: less or equal (signed <=) */

loc_001CE10D:
    PUSH32(esp, esi);
    esi = ebx + 0x248;

loc_001CE114:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001CE120; /* je: equal / zero */

loc_001CE11A:
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_001CE120:
    eax = MEM32(ebx + 0x4D8);
    edi++;
    esi = esi + 0x26C;
    if (CMP_L(edi, eax)) goto loc_001CE114; /* jl: less (signed <) */

loc_001CE131:
    POP32(esp, esi);

loc_001CE132:
    MEM32(ebx + 0x4D8) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
