#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AEEB0
 * Original: 0x001AEEB0 - 0x001AEF7B (203 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEEB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AEEB0:
    edx = esp + -512;
    esp = esp - 0x200;
    edx = edx - eax;
    /* nop */

loc_001AEEC0:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEEC0; /* jne: not equal / not zero */

loc_001AEECA:
    eax = MEM32(esp + 0x204);
    edx = eax;

loc_001AEED3:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEED3; /* jne: not equal / not zero */

loc_001AEEDA:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 8;
    eax = eax - edx;
    edi--;

loc_001AEEE3:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEEE3; /* jne: not equal / not zero */

loc_001AEEEB:
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    eax = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = eax + 1;

loc_001AEF02:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEF02; /* jne: not equal / not zero */

loc_001AEF09:
    eax = eax - edx;
    if (CMP_EQ(MEM8(esp + eax + 7), 0x2F)) goto loc_001AEF28; /* je: equal / zero */

loc_001AEF12:
    edi = esp + 8;
    edi--;

loc_001AEF17:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AEF17; /* jne: not equal / not zero */

loc_001AEF1F:
    SET_LO16(eax, MEM16(0x3AF294));
    MEM16(edi) = LO16(eax);

loc_001AEF28:
    eax = MEM32(esp + 0x210);
    edx = eax;

loc_001AEF31:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEF31; /* jne: not equal / not zero */

loc_001AEF38:
    edi = esp + 8;
    eax = eax - edx;
    edi--;
    /* nop */

loc_001AEF40:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEF40; /* jne: not equal / not zero */

loc_001AEF48:
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = esp + 8;
    POP32(esp, edi);
    edx = eax + 1;
    POP32(esp, esi);

loc_001AEF61:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AEF61; /* jne: not equal / not zero */

loc_001AEF68:
    eax = eax - edx;
    edx = eax;
    ecx = esp;
    PUSH32(esp, 0); sub_001AF250(); /* call 0x001AF250 */

loc_001AEF74:
    esp = esp + 0x200;
    esp += 4; return; /* ret */

}
