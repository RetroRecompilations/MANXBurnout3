#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AF200
 * Original: 0x001AF200 - 0x001AF247 (71 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF200(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AF200:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_001AF20C:
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001AF217; /* jne: not equal / not zero */

loc_001AF212:
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001AF217:
    eax = MEM32(edi + 0x10);
    edx = MEM32(edi);
    eax = eax + 0x7FF;
    eax = eax & 0xFFFFF800u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx + 0xE540;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001AF233:
    esi = ebx + 0x10;
    PUSH32(esp, 0); sub_001AF0F0(); /* call 0x001AF0F0 */

loc_001AF23B:
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001AF242:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
