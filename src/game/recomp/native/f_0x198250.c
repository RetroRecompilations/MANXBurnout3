#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00198250
 * Original: 0x00198250 - 0x0019838F (319 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198250(void)
{
    int _flags = 0; /* fallback flag var */

loc_00198250:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA0), _icall_esp); /* indirect call */
    }

loc_00198263:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019826A; /* jne: not equal / not zero */

loc_00198267:
    esp += 12; return; /* ret 8 */

loc_0019826A:
    ecx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx + 0x19BC));
    eax = 0; /* xor self */
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x73A1A8);
    eax = MEM32(ecx);
    esi = esi + 0x16D0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0019829D:
    if (CMP_NE(eax, 4)) goto loc_001982C1; /* jne: not equal / not zero */

loc_001982A2:
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001982C1; /* jne: not equal / not zero */

loc_001982AA:
    ecx = MEM32(0x4D5370);
    edx = MEM32(ecx + 0x1B8);
    SET_LO8(eax, MEM8(edx + 0x73));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00198389; /* je: equal / zero */

loc_001982C1:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_00198389; /* je: equal / zero */

loc_001982CC:
    SET_LO8(eax, MEM8(edi + 0x95));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001982E4; /* jne: not equal / not zero */

loc_001982D6:
    SET_LO8(eax, MEM8(esi + 0x95));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00198389; /* je: equal / zero */

loc_001982E4:
    ecx = MEM32(esi + 0x84);
    eax = MEM32(edi + 0x84);
    MEM32(edi + 0x84) = ecx;
    edx = MEM32(esi + 0x90);
    MEM32(esi + 0x84) = eax;
    eax = MEM32(edi + 0x90);
    MEM32(edi + 0x90) = edx;
    SET_LO8(ecx, MEM8(esi + 0x94));
    MEM32(esi + 0x90) = eax;
    eax = ZX8(MEM8(edi + 0x94));
    MEM8(edi + 0x94) = LO8(ecx);
    edx = MEM32(esi + 0x8C);
    MEM8(esi + 0x94) = LO8(eax);
    eax = MEM32(edi + 0x8C);
    MEM32(edi + 0x8C) = edx;
    ecx = MEM32(esi + 0x98);
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(edi + 0x98);
    MEM32(edi + 0x98) = ecx;
    SET_LO8(edx, MEM8(esi + 0x95));
    MEM32(esi + 0x98) = eax;
    SET_LO8(eax, MEM8(edi + 0x95));
    MEM8(edi + 0x95) = LO8(edx);
    MEM8(esi + 0x95) = LO8(eax);
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    SET_LO8(eax, 1);
    MEM8(ecx + 6) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00198389:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
