#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243C60
 * Original: 0x00243C60 - 0x00243D95 (309 bytes, 123 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00243C60:
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00243D24; /* je: equal / zero */

loc_00243C6D:
    edi = MEM32(esp + 8);
    PUSH32(esp, esi);
    /* test edi, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(edi, 3)) goto loc_00243C8C; /* je: equal / zero */

loc_00243C7B:
    SET_LO8(eax, MEM8(edi));
    edi = edi + 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243CBD; /* je: equal / zero */

loc_00243C84:
    if (TEST_NZ(edi, 3)) goto loc_00243C7B; /* jne: not equal / not zero */

loc_00243C8C:
    eax = MEM32(edi);
    edx = 0x7EFEFEFF;
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edi = edi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_00243C8C; /* je: equal / zero */

loc_00243CA4:
    eax = MEM32(edi + -4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243CCC; /* je: equal / zero */

loc_00243CAB:
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_00243CC7; /* je: equal / zero */

loc_00243CAF:
    if (TEST_Z(eax, 0xFF0000)) goto loc_00243CC2; /* je: equal / zero */

loc_00243CB6:
    if (TEST_NZ(eax, 0xFF000000u)) goto loc_00243C8C; /* jne: not equal / not zero */

loc_00243CBD:
    edi = edi - 1;
    goto loc_00243CCF;

loc_00243CC2:
    edi = edi - 2;
    goto loc_00243CCF;

loc_00243CC7:
    edi = edi - 3;
    goto loc_00243CCF;

loc_00243CCC:
    edi = edi - 4;

loc_00243CCF:
    esi = MEM32(esp + 0x14);
    if (TEST_NZ(esi, 3)) goto loc_00243CE4; /* jne: not equal / not zero */

loc_00243CDB:
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00243D3E; /* jne: not equal / not zero */

loc_00243CE2:
    goto loc_00243D06;

loc_00243CE4:
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00243D2A; /* je: equal / zero */

loc_00243CED:
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00243D20; /* je: equal / zero */

loc_00243CF7:
    if (TEST_NZ(esi, 3)) goto loc_00243CE4; /* jne: not equal / not zero */

loc_00243CFF:
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00243D3E; /* jne: not equal / not zero */

loc_00243D06:
    ecx = ebx;
    ecx = ecx & 3;
    if ((ecx == 0)) goto loc_00243D20; /* je: equal / zero */

loc_00243D0D:
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00243D22; /* je: equal / zero */

loc_00243D1B:
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00243D0D; /* jne: not equal / not zero */

loc_00243D20:
    MEM8(edi) = LO8(ecx);

loc_00243D22:
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00243D24:
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243D2A:
    MEM8(edi) = LO8(edx);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243D34:
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00243D06; /* je: equal / zero */

loc_00243D3E:
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_00243D34; /* je: equal / zero */

loc_00243D58:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00243D2A; /* je: equal / zero */

loc_00243D5C:
    if (TEST_Z(HI8(edx), HI8(edx))) goto loc_00243D8A; /* je: equal / zero */

loc_00243D60:
    if (TEST_Z(edx, 0xFF0000)) goto loc_00243D7A; /* je: equal / zero */

loc_00243D68:
    if (TEST_NZ(edx, 0xFF000000u)) goto loc_00243D34; /* jne: not equal / not zero */

loc_00243D70:
    MEM32(edi) = edx;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243D7A:
    MEM16(edi) = LO16(edx);
    edx = 0; /* xor self */
    eax = MEM32(esp + 0x10);
    MEM8(edi + 2) = LO8(edx);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243D8A:
    MEM16(edi) = LO16(edx);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
