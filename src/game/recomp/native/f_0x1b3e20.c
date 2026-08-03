#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B3E20
 * Original: 0x001B3E20 - 0x001B3EBE (158 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3E20:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_BE(eax, ebx)) goto loc_001B3E4D; /* jbe: below or equal (unsigned <=) */

loc_001B3E2E:
    edi = edi;

loc_001B3E30:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001B3E38:
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_001B3E41:
    if (TEST_Z(eax, eax)) goto loc_001B3E5C; /* je: equal / zero */

loc_001B3E45:
    eax = MEM32(edi + 0xC);
    ebp++;
    if (CMP_B(ebp, eax)) goto loc_001B3E30; /* jb: below (unsigned <) */

loc_001B3E4D:
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = 3;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001B3E5C:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x148);
    ebp = 2;
    MEM32(esi + 0x20) = ebp;
    MEM8(esi + 0x144) = LO8(ebx);
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x14C) = eax;
    MEM32(esi + 0x150) = ecx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x140) = 4;
    eax = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D14D1(); /* call 0x001D14D1 */

loc_001B3EB0:
    MEM32(edi + 8) = ebx;
    MEM32(esi + 0x2C) = ebp;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
