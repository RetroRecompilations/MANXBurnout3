#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155420
 * Original: 0x00155420 - 0x0015549C (124 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155420:
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    ebx = ebp;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00155431:
    esi = MEM32(ebp + 0x568);
    if (CMP_GE(esi, 1)) goto loc_00155450; /* jge: greater or equal (signed >=) */

loc_0015543C:
    PUSH32(esp, edi);
    ecx = 0x16;
    esi = 0x3EC870;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    goto loc_00155461;

loc_00155450:
    eax = esi + -1;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00155CB0(); /* call 0x00155CB0 */

loc_0015545D:
    MEM32(esp + 0x5C) = esi;

loc_00155461:
    SET_LO8(ebx, MEM8(0x4AE1DA));
    ecx = 0; /* xor self */
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    eax = ebp;
    ecx++;
    esi = ecx;
    MEM32(ebp + 0x548) = esi;
    PUSH32(esp, 0); sub_00153660(); /* call 0x00153660 */

loc_0015547E:
    ebx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    eax = ebp;
    PUSH32(esp, 0); sub_001535C0(); /* call 0x001535C0 */

loc_0015548D:
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x4AE1D7) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

}
