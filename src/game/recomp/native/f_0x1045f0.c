#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001045F0
 * Original: 0x001045F0 - 0x00104663 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001045F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001045F0:
    eax = 0; /* xor self */
    ecx = ebx + 0x8228;
    PUSH32(esp, esi);
    /* nop */

loc_00104600:
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00104611; /* je: equal / zero */

loc_00104604:
    eax++;
    ecx = ecx + 0x1C;
    if (CMP_L(eax, 8)) goto loc_00104600; /* jl: less (signed <) */

loc_0010460D:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00104611:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = eax + ebx;
    edx = esi + 0x8218;
    MEM8(esi + 0x822C) = 1;
    eax = edi;
    edx = edx - edi;

loc_00104628:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00104628; /* jne: not equal / not zero */

loc_00104632:
    PUSH32(esp, 0x1770);
    PUSH32(esp, 0x1770);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00214C90(); /* call 0x00214C90 */

loc_00104642:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x820C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242640(); /* call 0x00242640 */

loc_00104656:
    esp = esp + 0x18;
    MEM32(esi + 0x8214) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
