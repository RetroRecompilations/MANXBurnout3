#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018B90
 * Original: 0x00018B90 - 0x00018BAE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018B90:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_00018BAD; /* je: equal / zero */

loc_00018B9A:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(0x567178);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00018BAD:
    esp += 4; return; /* ret */

}
