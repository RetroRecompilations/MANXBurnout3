#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018440
 * Original: 0x00018440 - 0x0001850C (204 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018440:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xEA00);
    PUSH32(esp, ebx);
    ebx = MEM32(0x44CFBC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + ebp;
    esi = eax + 0x20;
    ecx = 0x38CC;
    edi = 0x44D680;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax + 0xE350;
    ecx = 0x10;
    edi = 0x4AE1A0;
    MEM32(esp + 0x14) = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0001B5C0(); /* call 0x0001B5C0 */

loc_00018480:
    esi = MEM32(esp + 0x14);
    ecx = 0x127;
    esi = esi + 0xE390;
    edi = ebx;
    eax = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0001BE60(); /* call 0x0001BE60 */

loc_0001849A:
    ecx = 0x58;
    esi = 0x44CFC8;
    edi = 0x44D4B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + 0x14) = eax;
    SET_LO8(edx, MEM8(ebp + 0xE82B));
    ecx = MEM32(ebp + 0xE390);
    MEM32(ebp + 4) = ecx;
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x10) = LO8(edx);
    SET_LO8(ecx, MEM8(ebp + 0x1D22B));
    eax = MEM32(ebp + 0x1CD90);
    MEM32(ebp + 8) = eax;
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x11) = LO8(ecx);
    SET_LO8(eax, MEM8(ebp + 0x2BC2B));
    edx = MEM32(ebp + 0x2B790);
    ecx = MEM32(esp + 0x14);
    MEM32(ebp + 0xC) = edx;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x12) = LO8(eax);
    edx = MEM32(ecx + 0xE82C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
