#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBBF0
 * Original: 0x001FBBF0 - 0x001FBC31 (65 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBF0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001FBBF0:
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    eax = ecx + edx * 8;
    ecx = ZX16(MEM16(eax + 4));
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001FBC11:
    ecx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_001FBC2C; /* je: equal / zero */

loc_001FBC23:
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM32(ecx) = edx;

loc_001FBC2C:
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}
