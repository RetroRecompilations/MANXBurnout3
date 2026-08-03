#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00063670
 * Original: 0x00063670 - 0x000636CD (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063670:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x1F0);
    MEM32(edi + 0x1E4) = 6;
    eax = MEM32(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00063689:
    esi = MEM32(edi + 0x1D8);
    /* test esi, esi - flags set for next jcc */
    MEM32(edi + 0x1F0) = 0;
    if (TEST_Z(esi, esi)) goto loc_000636B5; /* je: equal / zero */

loc_0006369D:
    /* nop */

loc_000636A0:
    SET_LO8(eax, MEM8(esi + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000636AE; /* je: equal / zero */

loc_000636A7:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000636AE:
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_000636A0; /* jne: not equal / not zero */

loc_000636B5:
    edi = edi + 0x1F8;
    MEM32(edi + 0x1800) = edi;
    ecx = 0x600;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
