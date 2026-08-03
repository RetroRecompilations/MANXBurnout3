#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E17F0
 * Original: 0x001E17F0 - 0x001E18AB (187 bytes, 65 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E17F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E17F0:
    eax = MEM32(0x41AC90);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001E18A4; /* je: equal / zero */

loc_001E1800:
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E17B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E0C80(); /* call 0x001E0C80 */

loc_001E180C:
    eax = MEM32(0x7593E4);
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0x1E0A10)) goto loc_001E1890; /* je: equal / zero */

loc_001E181B:
    eax = MEM32(0x41AC98);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_001E1876; /* jbe: below or equal (unsigned <=) */

loc_001E1827:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001E1830:
    eax = MEM32(0x41AC94);
    ecx = MEM32(eax + ebp * 4);
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_001E186A; /* je: equal / zero */

loc_001E183F:
    esi = MEM32(eax + 0x38);

loc_001E1842:
    edi = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001E184D:
    esp = esp + 8;
    /* cmp edi, ebx - flags set for next jcc */
    eax = edi;
    if (CMP_NE(edi, ebx)) goto loc_001E1842; /* jne: not equal / not zero */

loc_001E1856:
    if (CMP_EQ(esi, ebx)) goto loc_001E186A; /* je: equal / zero */

loc_001E185A:
    if (CMP_EQ(MEM32(esi + 0x10), ebx)) goto loc_001E186A; /* je: equal / zero */

loc_001E185F:
    edx = MEM32(esi + 4);
    MEM32(esi) = edx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;

loc_001E186A:
    eax = MEM32(0x41AC98);
    ebp++;
    if (CMP_B(ebp, eax)) goto loc_001E1830; /* jb: below (unsigned <) */

loc_001E1874:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E1876:
    eax = MEM32(0x41AC94);
    /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_001E1890; /* je: equal / zero */

loc_001E1880:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001E1887:
    esp = esp + 4;
    MEM32(0x41AC94) = ebx;

loc_001E1890:
    eax = MEM32(0x41AC90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E09E0(); /* call 0x001E09E0 */

loc_001E189B:
    esp = esp + 4;
    MEM32(0x41AC90) = ebx;

loc_001E18A4:
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
