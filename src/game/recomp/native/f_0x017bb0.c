#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017BB0
 * Original: 0x00017BB0 - 0x00017C48 (152 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017BB0:
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) goto loc_00017BCF; /* jge: greater or equal (signed >=) */

loc_00017BB4:
    eax = edx + 0x518;
    ecx = edi;
    edx = 4;

loc_00017BC1:
    MEM32(ecx) = eax;
    eax = eax + 0x188;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00017BC1; /* jne: not equal / not zero */

loc_00017BCE:
    esp += 4; return; /* ret */

loc_00017BCF:
    eax = SX8(LO8(eax));
    SET_LO8(ecx, MEM8(eax + edx + 0xB3B));
    eax = eax + edx;
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00017C0A; /* je: equal / zero */

loc_00017BE0:
    ecx = 0; /* xor self */
    esi = edi;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xB39);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x188);
    edx = ecx + edx + 0x518;
    MEM32(edi + eax * 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00017C0A:
    ecx = edi;
    eax = edx + 0x518;
    esi = 4;
    goto loc_00017C20;

    /* nop */

loc_00017C20:
    MEM32(ecx) = eax;
    eax = eax + 0x188;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_00017C20; /* jne: not equal / not zero */

loc_00017C2D:
    eax = edx + 0xB39;
    ecx = 2;
    SET_LO8(edx, MEM8(eax + 2));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00017C49(); return; } /* je: equal / zero */

loc_00017C3F:
    edx = (uint32_t)(int32_t)SMEM8(eax);

}
