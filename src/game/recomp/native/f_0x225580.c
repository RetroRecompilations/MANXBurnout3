#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225580
 * Original: 0x00225580 - 0x002255D5 (85 bytes, 41 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00225580:
    ecx = MEM32(esp + 0xC);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_GE(ecx & ecx, 0)) goto loc_002255A1; /* jge: greater or equal (signed >=) */

loc_00225590:
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002255A1; /* je: equal / zero */

loc_00225598:
    SET_LO8(edx, MEM8(eax + ecx + 1));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00225598; /* jne: not equal / not zero */

loc_002255A1:
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    eax = eax & 0x3F;
    if (CMP_LE(ecx & ecx, 0)) goto loc_002255D2; /* jle: less or equal (signed <=) */

loc_002255AE:
    PUSH32(esp, ebx);
    ebx = ecx;

loc_002255B1:
    SET_LO8(ecx, MEM8(edi));
    MEM8(esi + eax + 0x14) = LO8(ecx);
    edx = MEM32(esi);
    eax++;
    edi++;
    edx++;
    /* cmp eax, 0x40 - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_NE(eax, 0x40)) goto loc_002255CE; /* jne: not equal / not zero */

loc_002255C3:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00224CA0(); /* call 0x00224CA0 */

loc_002255C9:
    esp = esp + 4;
    eax = 0; /* xor self */

loc_002255CE:
    ebx--;
    if ((ebx != 0)) goto loc_002255B1; /* jne: not equal / not zero */

loc_002255D1:
    POP32(esp, ebx);

loc_002255D2:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
