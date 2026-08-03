#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024F2D3
 * Original: 0x0024F2D3 - 0x0024F30D (58 bytes, 23 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F2D3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024F2D3:
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0024F2E7; /* je: equal / zero */

loc_0024F2DD:
    MEM32(eax + 0x90) = 1;

loc_0024F2E7:
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0024F2F8; /* je: equal / zero */

loc_0024F2EE:
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_0024F2F4:
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_0024F2F8:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_0024F309; /* je: equal / zero */

loc_0024F2FF:
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_0024F305:
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_0024F309:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
