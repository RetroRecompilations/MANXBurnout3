#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220760
 * Original: 0x00220760 - 0x002207DD (125 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220760:
    PUSH32(esp, edi);
    edi = MEM32(0x41CFEC);
    /* test edi, edi - flags set for next jcc */
    ecx = edi;
    if (TEST_Z(edi, edi)) goto loc_002207DB; /* je: equal / zero */

loc_0022076D:
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 4));
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 6));
    SET_LO8(edx, MEM8(eax + 5));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(eax + 7));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = MEM32(edi + 8);
    if (TEST_Z(ebx, ebx)) goto loc_002207DA; /* je: equal / zero */

loc_0022078F:
    /* nop */

loc_00220790:
    edi = MEM32(ecx + 4);
    ebx = MEM32(ecx);
    edi = edi & edx;
    if (CMP_EQ(ebx, edi)) goto loc_002207A8; /* je: equal / zero */

loc_0022079B:
    edi = MEM32(ecx + 0x14);
    ecx = ecx + 0xC;
    if (TEST_NZ(edi, edi)) goto loc_00220790; /* jne: not equal / not zero */

loc_002207A5:
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002207A8:
    edi = MEM32(eax);
    edx = esi;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(ecx + 8);
    MEM8(esi + 7) = LO8(ecx);
    ecx = ecx >> 8;
    MEM8(esi + 6) = LO8(ecx);
    ecx = ecx >> 8;
    MEM8(esi + 5) = LO8(ecx);
    ecx = ecx >> 8;
    MEM8(esi + 4) = LO8(ecx);
    eax = esi;

loc_002207DA:
    POP32(esp, ebx);

loc_002207DB:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
