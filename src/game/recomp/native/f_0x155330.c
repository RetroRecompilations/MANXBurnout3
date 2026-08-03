#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155330
 * Original: 0x00155330 - 0x001553C1 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155330:
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = eax;
    MEM32(ebx + 0x600) = ecx;
    MEM32(ebx + 0x604) = ecx;
    ecx = MEM32(ebx + 0x618);
    eax = 0; /* xor self */
    ecx = ecx & 0x30;
    MEM32(ebx + 0x5FC) = eax;
    MEM32(ebx + 0x608) = eax;
    MEM32(ebx + 0x60C) = eax;
    MEM32(ebx + 0x618) = ecx;
    MEM8(ebx + 0x62D) = LO8(eax);
    MEM32(ebx + 0x5F4) = 0xD;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_0015537A:
    ecx = MEM32(ebx + 0x5EC);
    if (TEST_Z(ecx, ecx)) goto loc_0015539A; /* je: equal / zero */

loc_00155384:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_00155389:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015539A; /* je: equal / zero */

loc_0015538D:
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x5EC);
    PUSH32(esp, 0); sub_001CB1C0(); /* call 0x001CB1C0 */

loc_00155399:
    POP32(esp, esi);

loc_0015539A:
    ecx = MEM32(ebx + 0x618);
    ecx = ecx & 0xFFFFFFFBu;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x5EC) = 0;
    MEM32(ebx + 0x618) = ecx;
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_001553B9:
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001553D0(); return; /* tail jmp 0x001553D0 */

}
