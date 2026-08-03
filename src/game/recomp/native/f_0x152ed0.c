#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152ED0
 * Original: 0x00152ED0 - 0x00152F20 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00152ED0:
    PUSH32(esp, ebx);
    ebx = eax;
    /* cmp MEM32(ebx + 0x544), 6 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebx + 0x544), 6)) goto loc_00152EE2; /* je: equal / zero */

loc_00152EDD:
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00152EE2:
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    goto loc_00152EF0;

    /* nop */
    /* nop */

loc_00152EF0:
    edx = ZX8(MEM8(ecx + 0x4AE1A0));
    MEM32(eax + 0x3EC464) = edx;
    eax = eax + 0x18;
    ecx++;
    if (CMP_B(eax, 0x420)) goto loc_00152EF0; /* jb: below (unsigned <) */

loc_00152F08:
    eax = MEM32(ebx + 0xC8);
    /* cmp eax, 6 - flags set for next jcc */
    esi = ebx + 8;
    if (CMP_EQ(eax, 6)) { sub_00152F22(); return; } /* je: equal / zero */

loc_00152F16:
    PUSH32(esp, 0); sub_00155C00(); /* call 0x00155C00 */

}
