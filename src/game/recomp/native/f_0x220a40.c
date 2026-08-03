#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220A40
 * Original: 0x00220A40 - 0x00220AC2 (130 bytes, 45 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220A40:
    eax = MEM32(esp + 0xC);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    esi = esp + 0xC;
    MEM8(edi + 0x14) = 0;
    PUSH32(esp, 0); sub_00220760(); /* call 0x00220760 */

loc_00220A5F:
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00339395(); /* call 0x00339395 */

loc_00220A69:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(eax & eax, 0)) goto loc_00220ABE; /* jge: greater or equal (signed >=) */

loc_00220A6F:
    PUSH32(esp, 0); sub_003398C4(); /* call 0x003398C4 */

loc_00220A74:
    if (CMP_EQ(eax, 0x2733)) goto loc_00220ABC; /* je: equal / zero */

loc_00220A7B:
    if (CMP_EQ(eax, 0x2746)) goto loc_00220ABC; /* je: equal / zero */

loc_00220A82:
    if (CMP_EQ(eax, 0x2743)) goto loc_00220AB3; /* je: equal / zero */

loc_00220A89:
    if (CMP_EQ(eax, 0x2751)) goto loc_00220AB3; /* je: equal / zero */

loc_00220A90:
    if (CMP_NE(eax, 0x2749)) goto loc_00220AA0; /* jne: not equal / not zero */

loc_00220A97:
    eax = 0xFFFFFFFEu;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00220AA0:
    edx = 0; /* xor self */
    /* cmp eax, 0x274D - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 0x274D)) ? 1 : 0); /* sete */
    edx = edx + 0xFFFFFFF9u;
    eax = edx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00220AB3:
    eax = 0xFFFFFFFBu;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00220ABC:
    eax = 0; /* xor self */

loc_00220ABE:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
