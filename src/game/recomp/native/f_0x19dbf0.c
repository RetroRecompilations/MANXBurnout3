#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DBF0
 * Original: 0x0019DBF0 - 0x0019DC5B (107 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019DBF0:
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10C);
    if (TEST_Z(esi, esi)) goto loc_0019DC00; /* je: equal / zero */

loc_0019DBFB:
    SET_LO8(edx, MEM8(esi + 0x5E));
    goto loc_0019DC09;

loc_0019DC00:
    edx = MEM32(ecx + 0x114);
    SET_LO8(edx, MEM8(edx + 0x41));

loc_0019DC09:
    MEM8(eax + 0x2E) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x177));
    MEM8(eax + 0x2F) = LO8(edx);
    ecx = MEM32(ecx + 0x120);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x2E));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_0019DC3C; /* jne: not equal / not zero */

loc_0019DC27:
    ecx = 0; /* xor self */
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM16(eax + 0x2C) = 0xFFFF;
    g_seh_ebp = ebp; sub_0019DC60(); return; /* tail jmp 0x0019DC60 */

loc_0019DC3C:
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM16(eax + 0x2C) = 0xFFFF;
    g_seh_ebp = ebp; sub_0019DC60(); return; /* tail jmp 0x0019DC60 */

}
