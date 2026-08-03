#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157210
 * Original: 0x00157210 - 0x001572B4 (164 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00157210:
    ecx = MEM32(0x3AF298);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = eax;
    MEM32(eax) = ecx;
    SET_LO16(edx, MEM16(0x3AF29C));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(eax + 4) = LO16(edx);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0015723E:
    esp = esp + 8;
    eax = 4;
    SET_LO8(ecx, 0x20);

loc_00157248:
    if (CMP_EQ(MEM8(esp + eax + 0xC), LO8(ecx))) goto loc_00157256; /* je: equal / zero */

loc_0015724E:
    eax++;
    if (CMP_L(eax, 0xC)) goto loc_00157248; /* jl: less (signed <) */

loc_00157254:
    goto loc_0015725B;

loc_00157256:
    MEM8(esp + eax + 0xC) = 0;

loc_0015725B:
    PUSH32(esp, 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00157268:
    edi = ebx;
    esp = esp + 0xC;
    edi--;
    edi = edi;

loc_00157270:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00157270; /* jne: not equal / not zero */

loc_00157278:
    SET_LO16(eax, MEM16(0x3AF294));
    MEM16(edi) = LO16(eax);
    eax = esp + 0x10;
    edx = eax;

loc_00157287:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00157287; /* jne: not equal / not zero */

loc_0015728E:
    eax = eax - edx;
    ebx--;
    edi = ebx;

loc_00157293:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00157293; /* jne: not equal / not zero */

loc_0015729B:
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}
