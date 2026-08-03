#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F9650
 * Original: 0x000F9650 - 0x000F9697 (71 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9650:
    eax = MEM32(0x4A1B78);
    PUSH32(esp, esi);
    esi = MEM32(0x464658);
    if (CMP_EQ(esi, eax)) goto loc_000F9689; /* je: equal / zero */

loc_000F9660:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_000F966E; /* jbe: below or equal (unsigned <=) */

loc_000F9669:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_000F966E:
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000F967D; /* je: equal / zero */

loc_000F9675:
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034DE60(); /* call 0x0034DE60 */

loc_000F967D:
    MEM32(0x75DB70) = esi;
    MEM32(0x4A1B78) = esi;

loc_000F9689:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000F96F0(); return; /* tail jmp 0x000F96F0 */

}
