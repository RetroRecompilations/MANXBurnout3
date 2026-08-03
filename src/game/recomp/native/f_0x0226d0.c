#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000226D0
 * Original: 0x000226D0 - 0x00022784 (180 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000226D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000226D0:
    eax = MEM32(esp + 4);
    eax = eax - 4;
    if ((eax == 0)) goto loc_00022754; /* je: equal / zero */

loc_000226D9:
    eax--;
    if ((eax != 0)) { sub_00022784(); return; } /* jne: not equal / not zero */

loc_000226E0:
    eax = MEM32(esp + 0xC);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00022724; /* je: equal / zero */

loc_000226E9:
    eax--;
    if ((eax != 0)) { sub_00022784(); return; } /* jne: not equal / not zero */

loc_000226F0:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) { sub_00022784(); return; } /* je: equal / zero */

loc_000226FE:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0x31;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00022724:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) { sub_00022784(); return; } /* je: equal / zero */

loc_0002272E:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0x30;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00022754:
    ecx = MEM32(0x3F9A34);
    if (TEST_Z(ecx, ecx)) { sub_00022784(); return; } /* je: equal / zero */

loc_0002275E:
    edx = MEM32(0x3F9A38);
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}
