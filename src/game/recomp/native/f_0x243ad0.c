#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243AD0
 * Original: 0x00243AD0 - 0x00243B93 (195 bytes, 88 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243AD0:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    ebx = eax;
    eax = eax << 8;
    edx = MEM32(esp + 8);
    if (TEST_Z(edx, 3)) goto loc_00243AFD; /* je: equal / zero */

loc_00243AE8:
    SET_LO8(ecx, MEM8(edx));
    edx = edx + 1;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) { sub_00243AC0(); return; } /* je: equal / zero */

loc_00243AF1:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00243B46; /* je: equal / zero */

loc_00243AF5:
    if (TEST_NZ(edx, 3)) goto loc_00243AE8; /* jne: not equal / not zero */

loc_00243AFD:
    ebx = ebx | eax;
    PUSH32(esp, edi);
    eax = ebx;
    ebx = ebx << 0x10;
    PUSH32(esp, esi);
    ebx = ebx | eax;

loc_00243B08:
    ecx = MEM32(edx);
    edi = 0x7EFEFEFF;
    eax = ecx;
    esi = edi;
    ecx = ecx ^ ebx;
    esi = esi + eax;
    edi = edi + ecx;
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx ^ edi;
    eax = eax ^ esi;
    edx = edx + 4;
    ecx = ecx & 0x81010100u;
    if ((ecx != 0)) goto loc_00243B4A; /* jne: not equal / not zero */

loc_00243B2E:
    eax = eax & 0x81010100u;
    if ((eax == 0)) goto loc_00243B08; /* je: equal / zero */

loc_00243B35:
    eax = eax & 0x1010100;
    if ((eax != 0)) goto loc_00243B44; /* jne: not equal / not zero */

loc_00243B3C:
    esi = esi & 0x80000000u;
    if ((esi != 0)) goto loc_00243B08; /* jne: not equal / not zero */

loc_00243B44:
    POP32(esp, esi);
    POP32(esp, edi);

loc_00243B46:
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00243B4A:
    eax = MEM32(edx + -4);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00243B87; /* je: equal / zero */

loc_00243B51:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243B44; /* je: equal / zero */

loc_00243B55:
    if (CMP_EQ(HI8(eax), LO8(ebx))) goto loc_00243B80; /* je: equal / zero */

loc_00243B59:
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_00243B44; /* je: equal / zero */

loc_00243B5D:
    eax = eax >> 0x10;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00243B79; /* je: equal / zero */

loc_00243B64:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243B44; /* je: equal / zero */

loc_00243B68:
    if (CMP_EQ(HI8(eax), LO8(ebx))) goto loc_00243B72; /* je: equal / zero */

loc_00243B6C:
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_00243B44; /* je: equal / zero */

loc_00243B70:
    goto loc_00243B08;

loc_00243B72:
    POP32(esp, esi);
    POP32(esp, edi);
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00243B79:
    eax = edx + -2;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00243B80:
    eax = edx + -3;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00243B87:
    eax = edx + -4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
