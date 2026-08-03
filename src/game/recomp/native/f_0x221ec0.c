#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221EC0
 * Original: 0x00221EC0 - 0x00221F15 (85 bytes, 37 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221EC0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_GE(edi, 1)) goto loc_00221ED0; /* jge: greater or equal (signed >=) */

loc_00221ECB:
    edi = 1;

loc_00221ED0:
    edi++;
    esi = edi + edi * 2;
    esi = esi << 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00221EDD:
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00221EEA; /* jne: not equal / not zero */

loc_00221EE4:
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00221EEA:
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x18);
    MEM32(eax) = ecx;
    ecx = eax + 0xC;
    MEM32(edx + 0x18) = eax;
    eax = eax + esi;
    if (CMP_EQ(ecx, eax)) goto loc_00221F0F; /* je: equal / zero */

loc_00221EFF:
    /* nop */

loc_00221F00:
    esi = MEM32(edx + 0x1C);
    MEM32(ecx) = esi;
    MEM32(edx + 0x1C) = ecx;
    ecx = ecx + 0xC;
    if (CMP_NE(ecx, eax)) goto loc_00221F00; /* jne: not equal / not zero */

loc_00221F0F:
    eax = edi + -1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
