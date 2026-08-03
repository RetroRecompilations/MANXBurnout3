#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001550B0
 * Original: 0x001550B0 - 0x001551D7 (295 bytes, 93 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001550B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001550B0:
    esp = esp - 0x30;
    eax = MEM32(0x3AE170);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(0x3AE174);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0xC;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_001550DA:
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_001550E9:
    edi = esp + 0x28;
    esp = esp + 0x14;
    edi--;

loc_001550F1:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001550F1; /* jne: not equal / not zero */

loc_001550F9:
    SET_LO16(eax, MEM16(0x3AE16C));
    PUSH32(esp, 2);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00155113:
    edi = esp + 0x20;
    esp = esp + 0xC;
    edi--;
    goto loc_00155120;

    /* nop */

loc_00155120:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00155120; /* jne: not equal / not zero */

loc_00155128:
    SET_LO16(eax, MEM16(0x3AE168));
    PUSH32(esp, 2);
    ecx = esp + 0xE;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM16(edi) = LO16(eax);
    MEM8(esp + 0x17) = 0x31;
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00155147:
    edi = esp + 0x20;
    esp = esp + 0xC;
    edi--;
    /* nop */

loc_00155150:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00155150; /* jne: not equal / not zero */

loc_00155158:
    SET_LO16(eax, MEM16(0x3AE16C));
    ecx = MEM32(0x3EC8E8);
    edx = MEM32(0x3EC8E4);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(eax);
    eax = MEM32(0x45B9BC);
    ecx = MEM32(eax * 4 + 0x3EC8F8);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00155190:
    SET_LO8(eax, MEM8(esp + 0x5C));
    esp = esp + 0x18;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001551C8; /* je: equal / zero */

loc_0015519C:
    SET_LO8(eax, MEM8(esp + 0x44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001551B6; /* je: equal / zero */

loc_001551A4:
    MEM32(ebx) = 0x16;
    MEM32(esi) = 0x1E;
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_001551B6:
    MEM32(ebx) = 0x1E;
    MEM32(esi) = 0x26;
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_001551C8:
    MEM32(ebx) = 0;
    MEM32(esi) = 0x16;
    esp = esp + 0x30;

}
