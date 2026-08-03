#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00186BB0
 * Original: 0x00186BB0 - 0x00186C1A (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00186BB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(edi + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi + 0x194);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x40F270);
    eax = esp + 0xC;
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_0014E510(); /* call 0x0014E510 */

loc_00186BF5:
    if (CMP_EQ(esi, 3)) goto loc_00186C04; /* je: equal / zero */

loc_00186BFA:
    if (CMP_LE(esi, 4)) goto loc_00186C14; /* jle: less or equal (signed <=) */

loc_00186BFF:
    if (CMP_G(esi, 6)) goto loc_00186C14; /* jg: greater (signed >) */

loc_00186C04:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x60DFD0);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00187E40(); /* call 0x00187E40 */

loc_00186C14:
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
