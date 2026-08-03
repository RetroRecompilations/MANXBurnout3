#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188880
 * Original: 0x00188880 - 0x001888E1 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188880:
    eax = MEM32(esi + 0x98);
    if (TEST_Z(eax, eax)) goto loc_00188898; /* je: equal / zero */

loc_0018888A:
    ecx = eax + esi;
    MEM32(esi + 0x98) = ecx;
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_00188898:
    eax = MEM32(esi + 0x9C);
    if (TEST_Z(eax, eax)) goto loc_001888B0; /* je: equal / zero */

loc_001888A2:
    ecx = eax + esi;
    MEM32(esi + 0x9C) = ecx;
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_001888B0:
    eax = MEM32(esi + 0xA0);
    if (TEST_Z(eax, eax)) goto loc_001888C8; /* je: equal / zero */

loc_001888BA:
    ecx = eax + esi;
    MEM32(esi + 0xA0) = ecx;
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_001888C8:
    eax = MEM32(esi + 0xA4);
    if (TEST_Z(eax, eax)) goto loc_001888E0; /* je: equal / zero */

loc_001888D2:
    ecx = eax + esi;
    MEM32(esi + 0xA4) = ecx;
    g_seh_ebp = ebp; sub_001C8E20(); return; /* tail jmp 0x001C8E20 */

loc_001888E0:
    esp += 4; return; /* ret */

}
