#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DE3C0
 * Original: 0x001DE3C0 - 0x001DE5B2 (498 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE3C0:
    eax = MEM32(esp + 4);
    esp = esp - 0x1C;
    /* cmp eax, 0x16 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(eax, 0x16)) goto loc_001DE5AB; /* ja: above (unsigned >) */

loc_001DE3D1:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1DE658)); return; /* indirect tail jmp */

    esi = MEM32(esp + 0x30);
    if (TEST_S(esi, esi)) goto loc_001DE5AB; /* jl: less (signed <) */

loc_001DE3E4:
    if (CMP_GE(esi, MEM32(0x759218))) goto loc_001DE5AB; /* jge: greater or equal (signed >=) */

loc_001DE3F0:
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035BBD0(); /* call 0x0035BBD0 */

loc_001DE3FD:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    MEM32(0x7591F0) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x7591F4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x7591F8) = eax;
    MEM32(0x75920C) = ecx;
    MEM32(0x759210) = edx;
    PUSH32(esp, 0); sub_001DD3D0(); /* call 0x001DD3D0 */

loc_001DE433:
    MEM32(0x75921C) = eax;
    MEM32(0x759224) = esi;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    if (CMP_GE(eax, MEM32(0x759218))) goto loc_001DE5AB; /* jge: greater or equal (signed >=) */

loc_001DE476:
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035BBD0(); /* call 0x0035BBD0 */

loc_001DE483:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = edx;
    PUSH32(esp, 0); sub_001DD3D0(); /* call 0x001DD3D0 */

loc_001DE49F:
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x10) = eax;
    eax = edx;
    MEM32(ecx + 0xC) = 1;
    PUSH32(esp, 0); sub_001DD420(); /* call 0x001DD420 */

loc_001DE4B7:
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001DE4C9; /* je: equal / zero */

loc_001DE4C2:
    MEM32(ecx + 0xC) = 3;

loc_001DE4C9:
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001DE4D4; /* je: equal / zero */

loc_001DE4CD:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x200;

loc_001DE4D4:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_001DE4DF; /* je: equal / zero */

loc_001DE4D8:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x100;

loc_001DE4DF:
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_001DE4EA; /* jns: not sign (positive) */

loc_001DE4E3:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x400;

loc_001DE4EA:
    if (TEST_Z(HI8(eax), 1)) { sub_001DE64E(); return; } /* je: equal / zero */

loc_001DE4F3:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x800;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    edx = MEM32(esp + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75922C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x759398), _icall_esp); /* indirect call */
    }

loc_001DE579:
    esp = esp + 8;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001DE586:
    PUSH32(esp, 0x36C7FC);
    PUSH32(esp, 2);
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DE59A:
    MEM32(esp + 0x10) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DE5A8:
    esp = esp + 0xC;

loc_001DE5AB:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}
