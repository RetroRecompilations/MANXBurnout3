#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FC990
 * Original: 0x000FC990 - 0x000FC9E2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC990(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FC990:
    if (CMP_NE(MEM32(esi + 0x30A84), 0x17)) goto loc_000FC9E1; /* jne: not equal / not zero */

loc_000FC999:
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_000FC9BF; /* jle: less or equal (signed <=) */

loc_000FC9A3:
    PUSH32(esp, edi);
    edi = esi + 8;

loc_000FC9A7:
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_000FC9B3; /* je: equal / zero */

loc_000FC9AD:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001020A0(); /* call 0x001020A0 */

loc_000FC9B3:
    eax = MEM32(esi + 0x28);
    ebx++;
    edi = edi + 4;
    if (CMP_L(ebx, eax)) goto loc_000FC9A7; /* jl: less (signed <) */

loc_000FC9BE:
    POP32(esp, edi);

loc_000FC9BF:
    eax = MEM32(0x4A1D84);
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_000FC9CD; /* jne: not equal / not zero */

loc_000FC9CB:
    eax = 0; /* xor self */

loc_000FC9CD:
    if (CMP_NE(MEM32(esi), 0x17)) goto loc_000FC9E1; /* jne: not equal / not zero */

loc_000FC9D2:
    eax = ZX16(LO16(eax));
    PUSH32(esp, esi);
    MEM32(esi + 0x88) = eax;
    PUSH32(esp, 0); sub_001B7EB0(); /* call 0x001B7EB0 */

loc_000FC9E1:
    esp += 4; return; /* ret */

}
