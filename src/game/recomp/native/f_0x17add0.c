#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017ADD0
 * Original: 0x0017ADD0 - 0x0017AE4C (124 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017ADD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017ADD0:
    edx = MEM32(ecx + 0x108);
    eax = edx;
    eax = eax << 4;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x100);
    eax = eax + ecx;
    esi++;
    edx++;
    edx = edx & 0x8000000Fu;
    MEM32(ecx + 0x100) = esi;
    if (((int32_t)edx >= 0)) goto loc_0017ADF9; /* jns: not sign (positive) */

loc_0017ADF4:
    edx--;
    edx = edx | 0xFFFFFFF0u;
    edx++;

loc_0017ADF9:
    esi = MEM32(ecx + 0x104);
    /* cmp edx, esi - flags set for next jcc */
    MEM32(ecx + 0x108) = edx;
    if (CMP_NE(edx, esi)) goto loc_0017AE1D; /* jne: not equal / not zero */

loc_0017AE09:
    esi++;
    esi = esi & 0x8000000Fu;
    if (((int32_t)esi >= 0)) goto loc_0017AE17; /* jns: not sign (positive) */

loc_0017AE12:
    esi--;
    esi = esi | 0xFFFFFFF0u;
    esi++;

loc_0017AE17:
    MEM32(ecx + 0x104) = esi;

loc_0017AE1D:
    esi = MEM32(ecx + 0x110);
    edx = 0; /* xor self */
    if (CMP_NE(esi, eax)) goto loc_0017AE2F; /* jne: not equal / not zero */

loc_0017AE29:
    MEM32(ecx + 0x110) = edx;

loc_0017AE2F:
    /* cmp MEM32(ecx + 0x114), eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM32(ecx + 0x114), eax)) goto loc_0017AE3E; /* jne: not equal / not zero */

loc_0017AE38:
    MEM32(ecx + 0x114) = edx;

loc_0017AE3E:
    MEM8(ecx + 0x118) = 1;
    MEM32(ecx + 0x10C) = eax;
    esp += 4; return; /* ret */

}
