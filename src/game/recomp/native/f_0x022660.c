#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022660
 * Original: 0x00022660 - 0x000226C6 (102 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022660(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022660:
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_001B4170(); /* call 0x001B4170 */

loc_0002267A:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x889D607Fu);
    PUSH32(esp, 0); sub_001B4260(); /* call 0x001B4260 */

loc_00022689:
    esi = eax;
    if (CMP_EQ(MEM32(ebx + 4), esi)) goto loc_000226C1; /* je: equal / zero */

loc_00022690:
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0002269A:
    eax = MEM32(ebx + 0x10);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx + 4);
    MEM32(ebx + 4) = esi;
    if (TEST_Z(eax, eax)) goto loc_000226B7; /* je: equal / zero */

loc_000226A7:
    /* test esi, esi - flags set for next jcc */
    edx = MEM32(eax + 0x20);
    MEM32(ebx + 0x14) = edx;
    if (TEST_Z(esi, esi)) goto loc_000226B7; /* je: equal / zero */

loc_000226B1:
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x10) = eax;

loc_000226B7:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_000226C1:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
