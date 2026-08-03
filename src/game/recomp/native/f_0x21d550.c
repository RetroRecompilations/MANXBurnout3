#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D550
 * Original: 0x0021D550 - 0x0021D6F9 (425 bytes, 144 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0021D550:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x134;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x20);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021D579:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021D582:
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D58E:
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0021D598; /* je: equal / zero */

loc_0021D595:
    MEM8(eax) = 0;

loc_0021D598:
    eax = esp + 0x18;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D5A4:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D5AE; /* je: equal / zero */

loc_0021D5AB:
    MEM8(eax) = 0;

loc_0021D5AE:
    ecx = esp + 0x18;
    PUSH32(esp, 0x2E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D5BA:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D5C4; /* je: equal / zero */

loc_0021D5C1:
    MEM8(eax) = 0;

loc_0021D5C4:
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x8C4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021D5D8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D6F2; /* je: equal / zero */

loc_0021D5E3:
    ecx = MEM32(ebx + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021D5F0:
    PUSH32(esp, eax);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    esi = eax;
    ecx = 0x42;
    edi = esp + 0x48;
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0021CCF0(); /* call 0x0021CCF0 */

loc_0021D60C:
    esp = esp + 0x14;
    if (CMP_NE(eax, 1)) goto loc_0021D61E; /* jne: not equal / not zero */

loc_0021D614:
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    goto loc_0021D62A;

loc_0021D61E:
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x12F);
    MEM32(esp + 0x10) = eax;

loc_0021D62A:
    edx = MEM32(esp + 0x14);
    ecx = 0x42;
    edi = edx;
    esi = esp + 0x38;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0021D67A; /* je: equal / zero */

loc_0021D63F:
    ecx = MEM32(ebx + 0x8C8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C2F0(); /* call 0x0021C2F0 */

loc_0021D64D:
    eax = MEM32(ebx + 0x8E8);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D676; /* je: equal / zero */

loc_0021D65A:
    edx = MEM32(ebx + 0x8EC);
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x70676574);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021D673:
    esp = esp + 0x14;

loc_0021D676:
    edx = MEM32(esp + 0x14);

loc_0021D67A:
    SET_LO8(eax, MEM8(ebx + 0x8F0));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebx + 0x8F0;
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021D6F2; /* je: equal / zero */

loc_0021D68E:
    edi = esp + 0x18;

loc_0021D692:
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(eax, LO8(ecx));
    if (CMP_NE(LO8(ecx), MEM8(edi))) goto loc_0021D6B6; /* jne: not equal / not zero */

loc_0021D69A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021D6B2; /* je: equal / zero */

loc_0021D69E:
    SET_LO8(ecx, MEM8(esi + 1));
    SET_LO8(eax, LO8(ecx));
    if (CMP_NE(LO8(ecx), MEM8(edi + 1))) goto loc_0021D6B6; /* jne: not equal / not zero */

loc_0021D6A8:
    esi = esi + 2;
    edi = edi + 2;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0021D692; /* jne: not equal / not zero */

loc_0021D6B2:
    eax = 0; /* xor self */
    goto loc_0021D6BB;

loc_0021D6B6:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_0021D6BB:
    if (TEST_NZ(eax, eax)) goto loc_0021D6F2; /* jne: not equal / not zero */

loc_0021D6BF:
    MEM32(edx + 0xF8) = MEM32(edx + 0xF8) | 0x8000;
    eax = MEM32(ebx + 0x8E8);
    if (TEST_Z(eax, eax)) goto loc_0021D6EB; /* je: equal / zero */

loc_0021D6D3:
    ecx = MEM32(ebx + 0x8EC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x67696E76);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021D6E8:
    esp = esp + 0x14;

loc_0021D6EB:
    edx = MEM32(esp + 0x10);
    MEM8(edx) = 0;

loc_0021D6F2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
