#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D360
 * Original: 0x0019D360 - 0x0019D3AF (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D360(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0019D360:
    eax = MEM32(ecx + 0x24);
    if (CMP_EQ(eax, MEM32(ecx + 0x2C))) goto loc_0019D370; /* je: equal / zero */

loc_0019D368:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0xC))); }
    if (CMP_EQ(esi, edx)) goto loc_0019D389; /* je: equal / zero */

loc_0019D370:
    if (TEST_S(esi, esi)) goto loc_0019D389; /* jl: less (signed <) */

loc_0019D374:
    if (CMP_GE(esi, MEM32(ecx + 0xC))) goto loc_0019D389; /* jge: greater or equal (signed >=) */

loc_0019D379:
    ecx = MEM32(ecx + esi * 4 + 0x17C);
    if (CMP_NE(MEM32(ecx), 2)) goto loc_0019D389; /* jne: not equal / not zero */

loc_0019D385:
    if (TEST_NZ(ecx, ecx)) goto loc_0019D38E; /* jne: not equal / not zero */

loc_0019D389:
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_0019D38E:
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001AF980(); /* call 0x001AF980 */

loc_0019D3A4:
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}
