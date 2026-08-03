#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213630
 * Original: 0x00213630 - 0x002136E0 (176 bytes, 71 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00213630:
    edx = MEM32(esp + 0xC);
    esp = esp - 0x120;
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x12C);
    ecx = esp + 8;
    if (TEST_NZ(edx, edx)) goto loc_00213650; /* jne: not equal / not zero */

loc_0021364B:
    MEM8(edi) = 0;
    goto loc_0021366F;

loc_00213650:
    SET_LO8(eax, MEM8(edx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021366B; /* je: equal / zero */

loc_00213656:
    esi = esp + 8;
    edx = edx - esi;
    /* nop */

loc_00213660:
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(edx + ecx + 1));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00213660; /* jne: not equal / not zero */

loc_0021366B:
    MEM8(ecx) = 0x3D;
    ecx++;

loc_0021366F:
    eax = MEM32(esp + 0x138);
    /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00213684; /* jge: greater or equal (signed >=) */

loc_0021367C:
    MEM8(ecx) = 0x2D;
    esi = ecx + 1;
    eax = (uint32_t)(-(int32_t)eax);

loc_00213684:
    /* test eax, eax - flags set for next jcc */
    ecx = esi + 0x1F;
    MEM8(ecx) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_002136A3; /* jle: less or equal (signed <=) */

loc_0021368E:
    PUSH32(esp, ebx);
    /* nop */

loc_00213690:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx--;
    SET_LO8(edx, LO8(edx) + 0x30);
    /* test eax, eax - flags set for next jcc */
    MEM8(ecx) = LO8(edx);
    if (CMP_G(eax & eax, 0)) goto loc_00213690; /* jg: greater (signed >) */

loc_002136A2:
    POP32(esp, ebx);

loc_002136A3:
    SET_LO8(eax, MEM8(ecx));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002136B3; /* jne: not equal / not zero */

loc_002136A9:
    ecx--;
    MEM8(ecx) = 0x30;
    SET_LO8(eax, MEM8(ecx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002136BE; /* je: equal / zero */

loc_002136B3:
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 1));
    esi++;
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002136B3; /* jne: not equal / not zero */

loc_002136BE:
    ecx = MEM32(esp + 0x130);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(esi) = 0;
    PUSH32(esp, 0); sub_00213280(); /* call 0x00213280 */

loc_002136D4:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}
