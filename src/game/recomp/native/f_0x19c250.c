#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C250
 * Original: 0x0019C250 - 0x0019C2C2 (114 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C250(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019C250:
    PUSH32(esp, edi);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0); sub_0019C1F0(); /* call 0x0019C1F0 */

loc_0019C25A:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C2BE; /* jne: not equal / not zero */

loc_0019C25E:
    ecx = MEM32(edi);
    eax = MEM32(ecx + esi * 4);
    edx = MEM32(ecx + esi * 4 + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    edi = ZX16(MEM16(eax + 4));
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + esi * 4 + 0x28);
    ecx = MEM32(0x649B7C);
    edi = edi + ebx;
    SET_LO8(ecx, MEM8(edi + ecx));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019C29C; /* je: equal / zero */

loc_0019C289:
    eax = ZX8(LO8(ecx));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    SET_LO8(eax, MEM8(eax + 0x45));
    goto loc_0019C29F;

loc_0019C29C:
    SET_LO8(eax, MEM8(eax + 0x46));

loc_0019C29F:
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C2BE; /* je: equal / zero */

loc_0019C2A3:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (TEST_Z(eax, eax)) goto loc_0019C2BE; /* je: equal / zero */

loc_0019C2B5:
    ecx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_GE(ecx, edx)) goto loc_0019C2C0; /* jge: greater or equal (signed >=) */

loc_0019C2BE:
    eax = 0; /* xor self */

loc_0019C2C0:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
