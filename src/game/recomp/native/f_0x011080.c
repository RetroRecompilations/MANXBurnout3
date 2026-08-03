#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011080
 * Original: 0x00011080 - 0x000110D1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011080:
    ecx = MEM32(esi + 0x780);
    if (TEST_Z(ecx, ecx)) goto loc_000110D0; /* je: equal / zero */

loc_0001108A:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001108F:
    if (CMP_NE(eax, 2)) goto loc_000110AC; /* jne: not equal / not zero */

loc_00011094:
    ecx = MEM32(esi + 0x780);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0001109F:
    ecx = MEM32(esi + 0x780);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000110AC:
    ecx = MEM32(esi + 0x780);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000110B7:
    if (TEST_Z(eax, eax)) goto loc_000110C6; /* je: equal / zero */

loc_000110BB:
    ecx = MEM32(esi + 0x780);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000110C6:
    MEM32(esi + 0x780) = 0;

loc_000110D0:
    esp += 4; return; /* ret */

}
