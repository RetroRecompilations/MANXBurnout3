#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243170
 * Original: 0x00243170 - 0x002431A3 (51 bytes, 20 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243170:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_002431A0; /* je: equal / zero */

loc_0024317B:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00339417(); /* call 0x00339417 */

loc_00243196:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002431A0; /* jne: not equal / not zero */

loc_0024319B:
    g_seh_ebp = ebp; sub_003398C4(); return; /* tail jmp 0x003398C4 */

loc_002431A0:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
