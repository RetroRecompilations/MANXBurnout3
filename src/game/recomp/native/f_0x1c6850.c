#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6850
 * Original: 0x001C6850 - 0x001C68B6 (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6850(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6850:
    edx = MEM32(ecx + 0x2C);
    eax = eax << 4;
    ecx = MEM32(eax + edx + 4);
    edx = eax + edx + 4;
    eax = MEM32(ecx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001C6874; /* jne: not equal / not zero */

loc_001C6865:
    ecx = MEM32(esp + 4);
    eax = 8;
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

loc_001C6874:
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(ecx + 0x10) = esi;
    ecx = MEM32(eax);
    /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_001C6888; /* je: equal / zero */

loc_001C6881:
    MEM32(ecx + 4) = 0;

loc_001C6888:
    ecx = MEM32(edx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_001C68A1; /* jne: not equal / not zero */

loc_001C688F:
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = eax;
    eax = eax + 8;
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

loc_001C68A1:
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = eax;
    eax = eax + 8;
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

}
