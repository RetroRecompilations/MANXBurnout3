#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155590
 * Original: 0x00155590 - 0x00155627 (151 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155590:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x73A194);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(0x73A190);
    eax = 0x4A71A0;
    ebx = ecx;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001555AE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001555C9; /* je: equal / zero */

loc_001555B2:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001550B0(); /* call 0x001550B0 */

loc_001555C2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001555C9:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x4A1BE0) = eax;
    MEM32(0x4A1BE4) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_00155610; /* je: equal / zero */

loc_001555F3:
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001551E0(); /* call 0x001551E0 */

loc_001555FD:
    POP32(esp, edi);
    MEM32(ebx) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00155610:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001550B0(); /* call 0x001550B0 */

loc_00155620:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
