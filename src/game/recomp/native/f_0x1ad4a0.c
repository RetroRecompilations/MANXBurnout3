#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AD4A0
 * Original: 0x001AD4A0 - 0x001AD50B (107 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD4A0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AD4B5; /* jne: not equal / not zero */

loc_001AD4AC:
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001AD4B5:
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x4C);
    edi = edi - 4;
    if (((int32_t)edi >= 0)) goto loc_001AD4C1; /* jns: not sign (positive) */

loc_001AD4BE:
    edi = edi + MEM32(ebx + 0xC);

loc_001AD4C1:
    eax = edi + 9;
    /* cmp edi, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(edi, eax)) goto loc_001AD4F8; /* jge: greater or equal (signed >=) */

loc_001AD4CE:
    ebp = MEM32(ebx + 0xC);

loc_001AD4D1:
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ecx = MEM32(esp + 0x18);
    esi = edx;
    eax = MEM32(ebx + esi * 4 + 0x17C);
    eax = eax + 0x70;
    PUSH32(esp, 0); sub_0019D7F0(); /* call 0x0019D7F0 */

loc_001AD4EB:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AD502; /* jne: not equal / not zero */

loc_001AD4EF:
    eax = MEM32(esp + 0x14);
    edi++;
    if (CMP_L(edi, eax)) goto loc_001AD4D1; /* jl: less (signed <) */

loc_001AD4F8:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001AD502:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
