#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00031010
 * Original: 0x00031010 - 0x000310EA (218 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031010:
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_00031020; /* je: equal / zero */

loc_00031016:
    ecx = eax + ebx;
    MEM32(ebx) = ecx;
    PUSH32(esp, 0); sub_00030120(); /* call 0x00030120 */

loc_00031020:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 4;
    ebp = 6;
    goto loc_00031030;

    /* nop */

loc_00031030:
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00031063; /* je: equal / zero */

loc_00031036:
    ecx = eax + ebx;
    MEM32(edi) = ecx;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00031063; /* jle: less or equal (signed <=) */

loc_0003104B:
    esi = 0; /* xor self */
    /* nop */

loc_00031050:
    eax = MEM32(ecx + 4);
    eax = eax + esi;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    esi = esi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_00031050; /* jl: less (signed <) */

loc_00031063:
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00031030; /* jne: not equal / not zero */

loc_00031069:
    edi = ebx + 0x1C;
    ebp = 3;

loc_00031071:
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_000310A3; /* je: equal / zero */

loc_00031077:
    ecx = eax + ebx;
    MEM32(edi) = ecx;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000310A3; /* jle: less or equal (signed <=) */

loc_0003108C:
    esi = 0; /* xor self */
    edi = edi;

loc_00031090:
    eax = MEM32(ecx + 4);
    eax = eax + esi;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    esi = esi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_00031090; /* jl: less (signed <) */

loc_000310A3:
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00031071; /* jne: not equal / not zero */

loc_000310A9:
    edi = ebx + 0x28;
    ebp = 8;

loc_000310B1:
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_000310E3; /* je: equal / zero */

loc_000310B7:
    ecx = eax + ebx;
    MEM32(edi) = ecx;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000310E3; /* jle: less or equal (signed <=) */

loc_000310CC:
    esi = 0; /* xor self */
    edi = edi;

loc_000310D0:
    eax = MEM32(ecx + 4);
    eax = eax + esi;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    esi = esi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_000310D0; /* jl: less (signed <) */

loc_000310E3:
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_000310B1; /* jne: not equal / not zero */

loc_000310E9:
    POP32(esp, edi);

}
