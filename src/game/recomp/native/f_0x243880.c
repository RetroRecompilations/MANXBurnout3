#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243880
 * Original: 0x00243880 - 0x002439A4 (292 bytes, 109 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243880(void)
{
    int _flags = 0; /* fallback flag var */

loc_00243880:
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0024391F; /* je: equal / zero */

loc_0024388D:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebx = ecx;
    esi = MEM32(esp + 0x14);
    /* test esi, 3 - flags set for next jcc */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(esi, 3)) goto loc_002438AC; /* jne: not equal / not zero */

loc_002438A1:
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0024392F; /* jne: not equal / not zero */

loc_002438AA:
    goto loc_002438D3;

loc_002438AC:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_002438E6; /* je: equal / zero */

loc_002438BB:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002438EE; /* je: equal / zero */

loc_002438BF:
    if (TEST_NZ(esi, 3)) goto loc_002438AC; /* jne: not equal / not zero */

loc_002438C7:
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0024392F; /* jne: not equal / not zero */

loc_002438CE:
    ebx = ebx & 3;
    if ((ebx == 0)) goto loc_002438E6; /* je: equal / zero */

loc_002438D3:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243918; /* je: equal / zero */

loc_002438E1:
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_002438D3; /* jne: not equal / not zero */

loc_002438E6:
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002438EE:
    if (TEST_Z(edi, 3)) goto loc_0024390C; /* je: equal / zero */

loc_002438F6:
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0024399C; /* je: equal / zero */

loc_00243904:
    if (TEST_NZ(edi, 3)) goto loc_002438F6; /* jne: not equal / not zero */

loc_0024390C:
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00243987; /* jne: not equal / not zero */

loc_00243913:
    MEM8(edi) = LO8(eax);
    edi = edi + 1;

loc_00243918:
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_00243913; /* jne: not equal / not zero */

loc_0024391D:
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0024391F:
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00243925:
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_002438CE; /* je: equal / zero */

loc_0024392F:
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_00243925; /* je: equal / zero */

loc_00243949:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00243979; /* je: equal / zero */

loc_0024394D:
    if (TEST_Z(HI8(edx), HI8(edx))) goto loc_0024396F; /* je: equal / zero */

loc_00243951:
    if (TEST_Z(edx, 0xFF0000)) goto loc_00243965; /* je: equal / zero */

loc_00243959:
    if (TEST_NZ(edx, 0xFF000000u)) goto loc_00243925; /* jne: not equal / not zero */

loc_00243961:
    MEM32(edi) = edx;
    goto loc_0024397D;

loc_00243965:
    edx = edx & 0xFFFF;
    MEM32(edi) = edx;
    goto loc_0024397D;

loc_0024396F:
    edx = edx & 0xFF;
    MEM32(edi) = edx;
    goto loc_0024397D;

loc_00243979:
    edx = 0; /* xor self */
    MEM32(edi) = edx;

loc_0024397D:
    edi = edi + 4;
    eax = 0; /* xor self */
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00243993; /* je: equal / zero */

loc_00243987:
    eax = 0; /* xor self */

loc_00243989:
    MEM32(edi) = eax;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00243989; /* jne: not equal / not zero */

loc_00243993:
    ebx = ebx & 3;
    if ((ebx != 0)) goto loc_00243913; /* jne: not equal / not zero */

loc_0024399C:
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
