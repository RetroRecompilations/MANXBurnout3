#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3378
 * Original: 0x001D3378 - 0x001D33B2 (58 bytes, 19 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3378(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3378:
    PUSH32(esp, 8);
    PUSH32(esp, 0x36BED8);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D3384:
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_001D33A8; /* je: equal / zero */

loc_001D338A:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001D3396:
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_001D33AA;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_001D33A8:
    eax = 0; /* xor self */

loc_001D33AA:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D33AF:
    esp += 8; return; /* ret 4 */

}
