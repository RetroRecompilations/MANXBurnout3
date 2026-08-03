#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C3260
 * Original: 0x000C3260 - 0x000C329F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3260(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C3260:
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 8);
    ebx = ZX8(LO8(ebx));
    eax = MEM32(esi + ebx * 4 + 0x18);
    edi++;
    if (TEST_Z(eax, eax)) goto loc_000C329D; /* je: equal / zero */

loc_000C3271:
    PUSH32(esp, 0x557A20);
    ecx = edi;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000C327D:
    eax = MEM32(esi + ebx * 4 + 0x10);
    PUSH32(esp, 0x557A20);
    ecx = edi;
    MEM32(esi + ebx * 4 + 0x18) = 0;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000C3295:
    MEM32(esi + ebx * 4 + 0x10) = 0;

loc_000C329D:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
