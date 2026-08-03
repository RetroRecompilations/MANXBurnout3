#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018BF50
 * Original: 0x0018BF50 - 0x0018BF64 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BF50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018BF50:
    ecx = MEM32(eax + 0x578);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0018BF5B:
    eax--;
    if ((eax == 0)) goto loc_0018BF61; /* je: equal / zero */

loc_0018BF5E:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0018BF61:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
