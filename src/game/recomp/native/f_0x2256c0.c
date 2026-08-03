#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002256C0
 * Original: 0x002256C0 - 0x00225708 (72 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002256C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002256C0:
    eax = 0x1000;
    PUSH32(esp, 0); sub_00244C10(); /* call 0x00244C10 */

loc_002256CA:
    ecx = MEM32(esp + 0x1004);
    eax = esp + 0x1008;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002446F8(); /* call 0x002446F8 */

loc_002256E4:
    eax = MEM32(esi + 0x4638);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00225701; /* je: equal / zero */

loc_002256F1:
    edx = MEM32(esi + 0x4634);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002256FE:
    esp = esp + 8;

loc_00225701:
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

}
