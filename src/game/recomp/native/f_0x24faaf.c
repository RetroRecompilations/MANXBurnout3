#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024FAAF
 * Original: 0x0024FAAF - 0x0024FADC (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FAAF(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024FAAF:
    if (CMP_EQ(MEM32(0x420690), 0)) goto loc_0024FADB; /* je: equal / zero */

loc_0024FAB8:
    edx = 0;
    ecx = 0x420690;
    eax = MEM32(ecx);

loc_0024FAC4:
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if ((MEM32(ecx) != eax)) goto loc_0024FAC4; /* jne: not equal / not zero */

loc_0024FAC9:
    if (TEST_Z(eax, eax)) goto loc_0024FADB; /* je: equal / zero */

loc_0024FACD:
    ecx = eax + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B9D8), _icall_esp); /* indirect call */
    }

loc_0024FADB:
    esp += 4; return; /* ret */

}
