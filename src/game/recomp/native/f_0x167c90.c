#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167C90
 * Original: 0x00167C90 - 0x00167CD7 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00167C90:
    SET_LO8(eax, MEM8(esi + 0xC44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167CA8; /* je: equal / zero */

loc_00167C9A:
    ecx = MEM32(esi + edi * 4 + 0x2A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00167CA8:
    eax = 1;
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00167CB6:
    ecx = MEM32(esi + 0xC20);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(esi + 0xC24);
    edx = ~edx;
    eax = eax & edx;
    MEM32(esi + 0xC20) = ecx;
    MEM32(esi + 0xC24) = eax;
    esp += 4; return; /* ret */

}
