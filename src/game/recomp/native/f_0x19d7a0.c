#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D7A0
 * Original: 0x0019D7A0 - 0x0019D7E4 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019D7A0:
    ecx = esi + 0x50;
    PUSH32(esp, 0); sub_0019B440(); /* call 0x0019B440 */

loc_0019D7A8:
    eax = MEM32(esi + 0xA4);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x64) = 1;
    if (TEST_Z(eax, eax)) goto loc_0019D7C1; /* je: equal / zero */

loc_0019D7B9:
    eax = eax + esi;
    MEM32(esi + 0xA4) = eax;

loc_0019D7C1:
    eax = MEM32(esi + 0xA0);
    if (TEST_Z(eax, eax)) goto loc_0019D7D9; /* je: equal / zero */

loc_0019D7CB:
    ecx = eax + esi;
    MEM32(esi + 0xA0) = ecx;
    PUSH32(esp, 0); sub_001B02B0(); /* call 0x001B02B0 */

loc_0019D7D9:
    edx = esi + 0xA8;
    g_seh_ebp = ebp; sub_0019D760(); return; /* tail jmp 0x0019D760 */

}
