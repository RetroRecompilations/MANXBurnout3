#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CED10
 * Original: 0x001CED10 - 0x001CED64 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CED10:
    eax = MEM32(esi + 0x260);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001CED29; /* je: equal / zero */

loc_001CED1D:
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_001CED23:
    MEM32(esi + 0x260) = ebx;

loc_001CED29:
    ecx = MEM32(esi + 0x244);
    if (CMP_EQ(ecx, ebx)) goto loc_001CED3E; /* je: equal / zero */

loc_001CED33:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001CED38:
    MEM32(esi + 0x244) = ebx;

loc_001CED3E:
    eax = MEM32(esi + 0x28);
    eax = eax & 0xFFFFFFF7u;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = ebx;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x25C) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
