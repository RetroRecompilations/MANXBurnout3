#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9ED0
 * Original: 0x001C9ED0 - 0x001C9F01 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C9ED0:
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001C9F00; /* jle: less or equal (signed <=) */

loc_001C9ED9:
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    ecx = esi;
    PUSH32(esp, ebx);

loc_001C9EE0:
    if (CMP_NE(MEM32(ecx), edi)) goto loc_001C9EEB; /* jne: not equal / not zero */

loc_001C9EE4:
    SET_LO8(ebx, MEM8(ecx + 8));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001C9EF6; /* jne: not equal / not zero */

loc_001C9EEB:
    eax++;
    ecx = ecx + 0xC;
    if (CMP_L(eax, edx)) goto loc_001C9EE0; /* jl: less (signed <) */

loc_001C9EF3:
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C9EF6:
    eax = eax + eax * 2;
    POP32(esp, ebx);
    MEM8(esi + eax * 4 + 8) = 0;
    POP32(esp, esi);

loc_001C9F00:
    esp += 4; return; /* ret */

}
