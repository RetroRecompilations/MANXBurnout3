#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B80C0
 * Original: 0x001B80C0 - 0x001B81AB (235 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B80C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B80C0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    goto loc_001B80D0;

    /* nop */

loc_001B80D0:
    ecx = MEM32(eax + 0x320);
    edx = ecx + ecx * 4;
    /* cmp MEM8(eax + edx * 4 + 0xB0), 0 - flags set for next jcc */
    edx = eax + edx * 4;
    if (CMP_EQ(MEM8(eax + edx * 4 + 0xB0), 0)) goto loc_001B80F1; /* je: equal / zero */

loc_001B80E6:
    edx = MEM32(edx + 0xAC);
    if (TEST_Z(MEM8(edx), 1)) goto loc_001B810F; /* je: equal / zero */

loc_001B80F1:
    ecx++;
    /* cmp ecx, 0x20 - flags set for next jcc */
    MEM32(eax + 0x320) = ecx;
    if (CMP_L(ecx, 0x20)) goto loc_001B8103; /* jl: less (signed <) */

loc_001B80FD:
    MEM32(eax + 0x320) = esi;

loc_001B8103:
    edi++;
    if (CMP_L(edi, 0x20)) goto loc_001B80D0; /* jl: less (signed <) */

loc_001B8109:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001B810F:
    ecx = MEM32(eax + 0x320);
    ecx = ecx + 8;
    ecx = ecx + ecx * 4;
    edx = eax + ecx * 4;
    if (CMP_EQ(edx, esi)) goto loc_001B81A8; /* je: equal / zero */

loc_001B8126:
    PUSH32(esp, ebp);
    ebp = eax + 0xAC;
    /* nop */

loc_001B8130:
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8173; /* jne: not equal / not zero */

loc_001B8137:
    eax = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ebp + -12), eax)) goto loc_001B8173; /* jne: not equal / not zero */

loc_001B8140:
    edi = MEM32(ebp);
    SET_LO8(ecx, MEM8(edi + 3));
    eax = MEM32(esp + 0x18);
    if (CMP_NE(LO8(ecx), MEM8(eax + 3))) goto loc_001B8173; /* jne: not equal / not zero */

loc_001B814F:
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001B81A7; /* jle: less or equal (signed <=) */

loc_001B8155:
    edi = edi - eax;

loc_001B8157:
    SET_LO8(ebx, MEM8(eax));
    if (CMP_NE(LO8(ebx), MEM8(edi + eax))) goto loc_001B816F; /* jne: not equal / not zero */

loc_001B815E:
    ebx = MEM32(esp + 0x1C);
    ecx++;
    eax++;
    if (CMP_L(ecx, ebx)) goto loc_001B8157; /* jl: less (signed <) */

loc_001B8168:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001B816F:
    ebx = MEM32(esp + 0x1C);

loc_001B8173:
    esi++;
    ebp = ebp + 0x14;
    if (CMP_L(esi, 0x20)) goto loc_001B8130; /* jl: less (signed <) */

loc_001B817C:
    edi = MEM32(edx + 0xC);
    esi = MEM32(esp + 0x18);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = 0xFFFFFFFFu;
    MEM8(edx + 0x10) = 0;

loc_001B81A7:
    POP32(esp, ebp);

loc_001B81A8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

}
