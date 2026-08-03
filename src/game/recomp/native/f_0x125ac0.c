#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00125AC0
 * Original: 0x00125AC0 - 0x00125B23 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00125AC0:
    eax = MEM32(edi + 0xCC4);
    SET_LO8(ecx, MEM8(eax + 0x1023));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00125B22; /* jne: not equal / not zero */

loc_00125AD0:
    ecx = MEM32(eax + 0x1024);
    if (TEST_Z(ecx, ecx)) goto loc_00125B22; /* je: equal / zero */

loc_00125ADA:
    MEM8(eax + 0x1023) = 1;
    eax = MEM32(edi + 0xCC4);
    ecx = MEM32(eax + 0x1024);
    SET_LO8(eax, MEM8(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00125B21; /* jle: less or equal (signed <=) */

loc_00125AF6:
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64B310);
    PUSH32(esp, 0); sub_00111340(); /* call 0x00111340 */

loc_00125B04:
    if (TEST_Z(eax, eax)) goto loc_00125B21; /* je: equal / zero */

loc_00125B08:
    PUSH32(esp, 0); sub_00106F20(); /* call 0x00106F20 */

loc_00125B0D:
    edx = MEM32(edi + 0xCC4);
    eax = MEM32(edx + 0x1024);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00125AF6; /* jl: less (signed <) */

loc_00125B21:
    POP32(esp, esi);

loc_00125B22:
    esp += 4; return; /* ret */

}
