#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001356A0
 * Original: 0x001356A0 - 0x001356D6 (54 bytes, 13 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001356A0:
    PUSH32(esp, ebx);
    ebx = esi + 0x62D8;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 1356A0 after 153310 state=%u esi=%08X ebx=%08X\n",
                MEM32(0x7397B8), esi, ebx);

loc_001356AC:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 1356A0 after 1F5810 state=%u esi=%08X ebx=%08X\n",
                MEM32(0x7397B8), esi, ebx);

loc_001356B1:
    eax = esi + 0x534;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CD760(); /* call 0x001CD760 */
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 1356A0 after 1CD760 state=%u esi=%08X ebx=%08X\n",
                MEM32(0x7397B8), esi, ebx);

loc_001356BD:
    eax = esi + 0x2DC4;
    PUSH32(esp, 0); sub_001CC0C0(); /* call 0x001CC0C0 */
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 1356A0 after 1CC0C0 state=%u esi=%08X ebx=%08X\n",
                MEM32(0x7397B8), esi, ebx);

loc_001356C8:
    ebx = esi + 8;
    PUSH32(esp, 0); sub_001CE1F0(); /* call 0x001CE1F0 */
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 1356A0 after 1CE1F0 state=%u esi=%08X ebx=%08X\n",
                MEM32(0x7397B8), esi, ebx);

loc_001356D0:
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F5840(); return; /* tail jmp 0x001F5840 */

}
