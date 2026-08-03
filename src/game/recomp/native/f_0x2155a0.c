#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002155A0
 * Original: 0x002155A0 - 0x00215783 (483 bytes, 135 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002155A0:
    eax = MEM32(esp + 4);
    if (CMP_NE(eax, 0x6F70656E)) goto loc_002155B9; /* jne: not equal / not zero */

loc_002155AB:
    ecx = MEM32(0x41CD54);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_002155B9:
    ecx = MEM32(0x41CD54);
    if (TEST_Z(ecx, ecx)) goto loc_00215778; /* je: equal / zero */

loc_002155C7:
    if (CMP_NE(eax, 0x6F6E6C6E)) goto loc_002155DD; /* jne: not equal / not zero */

loc_002155CE:
    SET_LO8(edx, MEM8(ecx + 0x7A6));
    eax = 0; /* xor self */
    /* cmp LO8(edx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(edx), 1)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_002155DD:
    if (CMP_EQ(eax, 0x73746172)) goto loc_0021577C; /* je: equal / zero */

loc_002155E8:
    if (CMP_EQ(eax, 0x636F6E6E)) goto loc_0021577C; /* je: equal / zero */

loc_002155F3:
    if (CMP_NE(eax, 0x61646472)) goto loc_002155FF; /* jne: not equal / not zero */

loc_002155FA:
    g_seh_ebp = ebp; sub_00221290(); return; /* tail jmp 0x00221290 */

loc_002155FF:
    if (CMP_NE(eax, 0x686F7374)) goto loc_0021562E; /* jne: not equal / not zero */

loc_00215606:
    SET_LO8(eax, MEM8(ecx + 0x7A6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00215694; /* je: equal / zero */

loc_00215614:
    SET_LO8(eax, MEM8(ecx + 0x7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00215694; /* je: equal / zero */

loc_0021561E:
    eax = MEM32(ecx + 0x718);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214C20(); /* call 0x00214C20 */

loc_0021562A:
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0021562E:
    if (CMP_NE(eax, 0x78756964)) goto loc_00215665; /* jne: not equal / not zero */

loc_00215635:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00215778; /* je: equal / zero */

loc_00215641:
    if (CMP_B(MEM32(esp + 0xC), 0xC)) goto loc_00215778; /* jb: below (unsigned <) */

loc_0021564C:
    ecx = ecx + 0x74C;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00215665:
    if (CMP_NE(eax, 0x786B6964)) goto loc_00215697; /* jne: not equal / not zero */

loc_0021566C:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00215778; /* je: equal / zero */

loc_00215678:
    if (CMP_B(MEM32(esp + 0xC), 8)) goto loc_00215778; /* jb: below (unsigned <) */

loc_00215683:
    edx = MEM32(ecx + 0x758);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x75C);
    MEM32(eax + 4) = ecx;

loc_00215694:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00215697:
    if (CMP_NE(eax, 0x6D616378)) goto loc_002156CE; /* jne: not equal / not zero */

loc_0021569E:
    if (CMP_NE(MEM8(ecx + 0x7A5), 1)) goto loc_00215694; /* jne: not equal / not zero */

loc_002156A7:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00215694; /* je: equal / zero */

loc_002156AF:
    if (CMP_B(MEM32(esp + 0xC), 6)) goto loc_00215694; /* jb: below (unsigned <) */

loc_002156B6:
    ecx = ecx + 0x732;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    SET_LO16(ecx, MEM16(ecx + 4));
    MEM16(eax + 4) = LO16(ecx);

loc_002156C8:
    eax = 1;
    esp += 4; return; /* ret */

loc_002156CE:
    if (CMP_EQ(eax, 0x62626E64)) goto loc_002156C8; /* je: equal / zero */

loc_002156D5:
    if (CMP_NE(eax, 0x62707364)) goto loc_002156E3; /* jne: not equal / not zero */

loc_002156DC:
    eax = MEM32(ecx + 0x784);
    esp += 4; return; /* ret */

loc_002156E3:
    if (CMP_NE(eax, 0x62707375)) goto loc_002156F1; /* jne: not equal / not zero */

loc_002156EA:
    eax = MEM32(ecx + 0x780);
    esp += 4; return; /* ret */

loc_002156F1:
    if (CMP_NE(eax, 0x6D727474)) goto loc_002156FF; /* jne: not equal / not zero */

loc_002156F8:
    eax = MEM32(ecx + 0x788);
    esp += 4; return; /* ret */

loc_002156FF:
    if (CMP_NE(eax, 0x73656375)) goto loc_0021570E; /* jne: not equal / not zero */

loc_00215706:
    eax = ZX8(MEM8(ecx + 0x7A4));
    esp += 4; return; /* ret */

loc_0021570E:
    if (CMP_NE(eax, 0x73657276)) goto loc_00215738; /* jne: not equal / not zero */

loc_00215715:
    SET_LO8(eax, MEM8(ecx + 0x7A6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00215694; /* je: equal / zero */

loc_00215723:
    SET_LO8(eax, MEM8(ecx + 0x7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00215694; /* je: equal / zero */

loc_00215731:
    eax = MEM32(ecx + 0x714);
    esp += 4; return; /* ret */

loc_00215738:
    if (CMP_NE(eax, 0x74797065)) goto loc_00215768; /* jne: not equal / not zero */

loc_0021573F:
    SET_LO8(edx, MEM8(ecx + 0x7A5));
    eax = eax | 0xFFFFFFFFu;
    if (CMP_NE(LO8(edx), 1)) goto loc_00215782; /* jne: not equal / not zero */

loc_0021574D:
    ecx = MEM32(ecx + 0x774);
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), 2)) goto loc_0021575F; /* je: equal / zero */

loc_0021575A:
    eax = 4;

loc_0021575F:
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00215782; /* je: equal / zero */

loc_00215764:
    eax = eax | 0x10;
    esp += 4; return; /* ret */

loc_00215768:
    if (CMP_NE(eax, 0x706C7567)) goto loc_00215778; /* jne: not equal / not zero */

loc_0021576F:
    PUSH32(esp, 0); sub_0020F9AE(); /* call 0x0020F9AE */

loc_00215774:
    eax = eax & 1;
    esp += 4; return; /* ret */

loc_00215778:
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0021577C:
    eax = MEM32(ecx + 0x778);

loc_00215782:
    esp += 4; return; /* ret */

}
