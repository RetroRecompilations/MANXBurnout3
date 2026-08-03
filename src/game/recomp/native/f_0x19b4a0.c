#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B4A0
 * Original: 0x0019B4A0 - 0x0019B4DE (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019B4A0:
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ecx = ecx + esi;
    ebx = 0; /* xor self */
    /* cmp MEM16(esi), LO16(ebx) - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(MEM16(esi), LO16(ebx))) goto loc_0019B4DC; /* jle: less or equal (signed <=) */

loc_0019B4B0:
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0019B4B3:
    eax = MEM32(esi + 4);
    ecx = edi + eax + 0x40;
    PUSH32(esp, 0); sub_0019B440(); /* call 0x0019B440 */

loc_0019B4BF:
    ecx = MEM32(esi + 4);
    eax = edi + ecx + 0x54;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0019B4D0; /* je: equal / zero */

loc_0019B4CC:
    ecx = ecx + esi;
    MEM32(eax) = ecx;

loc_0019B4D0:
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ebx++;
    edi = edi + 0x60;
    if (CMP_L(ebx, edx)) goto loc_0019B4B3; /* jl: less (signed <) */

loc_0019B4DB:
    POP32(esp, edi);

loc_0019B4DC:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
