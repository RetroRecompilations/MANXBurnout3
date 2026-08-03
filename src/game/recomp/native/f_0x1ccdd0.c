#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CCDD0
 * Original: 0x001CCDD0 - 0x001CCE34 (100 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCDD0:
    SET_LO8(edx, MEM8(eax + 0x34));
    ecx = ZX8(LO8(edx));
    if (CMP_A(ecx, 3)) goto loc_001CCE31; /* ja: above (unsigned >) */

loc_001CCDDB:
    { uint32_t _jt = MEM32(ecx * 4 + 0x1CCE34); /* switch: 4 entries, 2 targets */
    if (_jt == 0x001CCDE2u) goto loc_001CCDE2;
    if (_jt == 0x001CCE22u) goto loc_001CCE22;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CCDE2:
    SET_LO8(ecx, MEM8(eax + 0x37));
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001CCE11; /* je: equal / zero */

loc_001CCDEA:
    SET_LO8(ecx, LO8(ecx) & 0x80);
    if ((LO8(ecx) == 0)) goto loc_001CCE08; /* je: equal / zero */

loc_001CCDEF:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    SET_LO8(ebx, MEM8(esi + 0x8A));
    POP32(esp, esi);
    /* test LO8(ebx), 2 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), 2)) goto loc_001CCE08; /* jne: not equal / not zero */

loc_001CCE01:
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001CCE08; /* jne: not equal / not zero */

loc_001CCE05:
    MEM8(eax) = 1;

loc_001CCE08:
    SET_LO8(eax, 0); /* xor self */
    /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

loc_001CCE11:
    ecx = MEM32(eax + 0xC);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x8A));
    eax = eax >> 1;
    eax = eax & 1;
    esp += 4; return; /* ret */

loc_001CCE22:
    SET_LO8(edx, MEM8(eax + 0x37));
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, LO8(edx) & 8);
    /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

loc_001CCE31:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
