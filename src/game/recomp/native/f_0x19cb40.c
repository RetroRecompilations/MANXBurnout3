#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CB40
 * Original: 0x0019CB40 - 0x0019CBA7 (103 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CB40:
    ecx = MEM32(esi + 0x2C);
    if (CMP_NE(MEM32(esi + 0x24), ecx)) goto loc_0019CBA4; /* jne: not equal / not zero */

loc_0019CB48:
    eax = MEM32(esi + 0x28);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0x739B60;
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0xC))); }
    ebp = edx;
    PUSH32(esp, 0); sub_0019DA70(); /* call 0x0019DA70 */

loc_0019CB66:
    MEM32(esi + ebx * 4 + 0x154) = eax;
    PUSH32(esp, 0); sub_0019DB30(); /* call 0x0019DB30 */

loc_0019CB72:
    MEM32(esi + ebp * 4 + 0x17C) = eax;
    ecx = MEM32(esi + ebx * 4 + 0x154);
    /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0019CBA4; /* je: equal / zero */

loc_0019CB87:
    if (TEST_Z(eax, eax)) goto loc_0019CBA4; /* je: equal / zero */

loc_0019CB8B:
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    ecx++;
    eax++;
    MEM32(esi + 0x28) = eax;
    SET_LO8(eax, 1);
    MEM32(esi + 0x2C) = ecx;
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(0x739B64) = LO8(eax);
    esp += 4; return; /* ret */

loc_0019CBA4:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
