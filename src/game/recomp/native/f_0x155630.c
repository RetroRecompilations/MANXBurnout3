#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155630
 * Original: 0x00155630 - 0x001556BC (140 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155630:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0x54FFA0;
    PUSH32(esp, 0); sub_000E2780(); /* call 0x000E2780 */

loc_00155643:
    SET_LO8(ecx, MEM8(0x550886));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001556A8; /* jne: not equal / not zero */

loc_0015564D:
    ebx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    ecx = MEM32(0x4A1BE0);
    ecx = ecx << 0x10;
    ecx = ecx + ebx;
    ebx = MEM32(0x4A1BE4);
    ecx = ecx + ebx;
    ebx = ebx + ecx;
    /* test LO8(ecx), 7 - flags set for next jcc */
    MEM32(0x4A1BE0) = ecx;
    MEM32(0x4A1BE4) = ebx;
    if (TEST_NZ(LO8(ecx), 7)) goto loc_00155694; /* jne: not equal / not zero */

loc_0015567A:
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00155060(); /* call 0x00155060 */

loc_00155682:
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00155694:
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ebx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001550B0(); /* call 0x001550B0 */

loc_001556A2:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001556A8:
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ebx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001550B0(); /* call 0x001550B0 */

loc_001556B6:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
