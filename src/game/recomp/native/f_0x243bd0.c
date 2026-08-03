#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243BD0
 * Original: 0x00243BD0 - 0x00243C56 (134 bytes, 66 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243BD0:
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(edx, MEM8(ecx));
    edi = MEM32(esp + 0x10);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00243C50; /* je: equal / zero */

loc_00243BE1:
    SET_HI8(edx, MEM8(ecx + 1));
    if (TEST_Z(HI8(edx), HI8(edx))) goto loc_00243C3D; /* je: equal / zero */

loc_00243BE8:
    esi = edi;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi));
    esi = esi + 1;
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_00243C0E; /* je: equal / zero */

loc_00243BF7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243C08; /* je: equal / zero */

loc_00243BFB:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;

loc_00243C00:
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_00243C0E; /* je: equal / zero */

loc_00243C04:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00243BFB; /* jne: not equal / not zero */

loc_00243C08:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00243C0E:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    if (CMP_NE(LO8(eax), HI8(edx))) goto loc_00243C00; /* jne: not equal / not zero */

loc_00243C17:
    edi = esi + -1;

loc_00243C1A:
    SET_HI8(eax, MEM8(ecx + 2));
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_00243C49; /* je: equal / zero */

loc_00243C21:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 2;
    if (CMP_NE(LO8(eax), HI8(eax))) goto loc_00243BE8; /* jne: not equal / not zero */

loc_00243C2A:
    SET_LO8(eax, MEM8(ecx + 3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243C49; /* je: equal / zero */

loc_00243C31:
    SET_HI8(eax, MEM8(esi + -1));
    ecx = ecx + 2;
    if (CMP_EQ(LO8(eax), HI8(eax))) goto loc_00243C1A; /* je: equal / zero */

loc_00243C3B:
    goto loc_00243BE8;

loc_00243C3D:
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, LO8(edx));
    g_seh_ebp = ebp; sub_00243AD6(); return; /* tail jmp 0x00243AD6 */

loc_00243C49:
    eax = edi + -1;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243C50:
    eax = edi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
