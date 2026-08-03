#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6860
 * Original: 0x001A6860 - 0x001A68C7 (103 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6860(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A6860:
    SET_LO8(edx, MEM8(esp + 4));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A6871; /* je: equal / zero */

loc_001A686B:
    eax = eax - ecx;
    ecx = eax;
    goto loc_001A6873;

loc_001A6871:
    ecx = ecx + eax;

loc_001A6873:
    edx = MEM32(esi + ecx * 4 + 0x20);
    eax = MEM32(edx + 0x10);
    if (CMP_G(eax & eax, 0)) goto loc_001A6886; /* jg: greater (signed >) */

loc_001A687E:
    MEM8(edi) = 0xFF;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001A6886:
    SET_LO8(eax, MEM8(ecx + esi + 0x10C));
    MEM8(edi) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + esi + 0x10C));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(eax, LO8(edx));
    eax = ZX8(LO8(eax));
    MEM8(ecx + esi + 0x10C) = LO8(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + ecx * 4 + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + 0x10))); }
    POP32(esp, ebx);
    MEM8(ecx + esi + 0x10C) = LO8(edx);
    eax = MEM32(esi + ecx * 4 + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_001A68C0; /* jne: not equal / not zero */

loc_001A68BD:
    MEM8(edi) = 0xFF;

loc_001A68C0:
    eax = MEM32(esi + ecx * 4 + 0x20);
    esp += 8; return; /* ret 4 */

}
