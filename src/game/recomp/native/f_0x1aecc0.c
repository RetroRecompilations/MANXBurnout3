#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AECC0
 * Original: 0x001AECC0 - 0x001AED2D (109 bytes, 45 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AECC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AECC0:
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xB;

loc_001AECD2:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B1E0(); /* call 0x0024B1E0 */

loc_001AECDD:
    /* cmp LO8(ecx), 0x27 - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_NE(LO8(ecx), 0x27)) goto loc_001AECEA; /* jne: not equal / not zero */

loc_001AECE6:
    SET_LO8(ecx, 0x5F);
    goto loc_001AED1A;

loc_001AECEA:
    if (CMP_L(LO8(ecx), 0xD)) goto loc_001AECF4; /* jl: less (signed <) */

loc_001AECEF:
    SET_LO8(ecx, LO8(ecx) + 0x34);
    goto loc_001AED1A;

loc_001AECF4:
    if (CMP_L(LO8(ecx), 3)) goto loc_001AECFE; /* jl: less (signed <) */

loc_001AECF9:
    SET_LO8(ecx, LO8(ecx) + 0x2D);
    goto loc_001AED1A;

loc_001AECFE:
    if (CMP_NE(LO8(ecx), 2)) goto loc_001AED07; /* jne: not equal / not zero */

loc_001AED03:
    SET_LO8(ecx, 0x2F);
    goto loc_001AED1A;

loc_001AED07:
    if (CMP_NE(LO8(ecx), 1)) goto loc_001AED10; /* jne: not equal / not zero */

loc_001AED0C:
    SET_LO8(ecx, 0x2D);
    goto loc_001AED1A;

loc_001AED10:
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    ecx = ecx & 0x20;

loc_001AED1A:
    esi--;
    MEM8(esi + edi + 1) = LO8(ecx);
    ecx = edx;
    if (((int32_t)esi >= 0)) goto loc_001AECD2; /* jns: not sign (positive) */

loc_001AED23:
    POP32(esp, esi);
    MEM8(edi + 0xC) = 0;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
