#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B33A0
 * Original: 0x001B33A0 - 0x001B340B (107 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B33A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B33A0:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(eax & eax, 0)) goto loc_001B33CD; /* jbe: below or equal (unsigned <=) */

loc_001B33AE:
    edi = edi;

loc_001B33B0:
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001B33B8:
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_001B33C1:
    if (TEST_Z(eax, eax)) goto loc_001B33DC; /* je: equal / zero */

loc_001B33C5:
    eax = MEM32(esi + 0xC);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_001B33B0; /* jb: below (unsigned <) */

loc_001B33CD:
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(esi + 8) = 3;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001B33DC:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001B33ED:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_001B33FC; /* je: equal / zero */

loc_001B33F4:
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001B33FC:
    MEM32(edi + 0x2C) = 2;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
