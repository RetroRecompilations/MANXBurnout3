#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00199350
 * Original: 0x00199350 - 0x00199452 (258 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199350:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00199364:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019937F; /* je: equal / zero */

loc_00199368:
    if (CMP_L(edi, 0xC8)) goto loc_00199378; /* jl: less (signed <) */

loc_00199370:
    if (CMP_LE(edi, 0xD0)) goto loc_001993BC; /* jle: less or equal (signed <=) */

loc_00199378:
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0019937F:
    if (CMP_GE(edi, MEM32(esi + 0x130))) goto loc_001993BC; /* jge: greater or equal (signed >=) */

loc_00199387:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00199397:
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(ecx, eax)) goto loc_001993B5; /* je: equal / zero */

loc_0019939F:
    edx = MEM32(esi + 0x134);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_001993AC:
    esp = esp + 8;
    MEM32(esi + 0x134) = eax;

loc_001993B5:
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001993BC:
    if (CMP_EQ(edi, 0x80)) goto loc_001993EF; /* je: equal / zero */

loc_001993C4:
    if (CMP_EQ(edi, 0x81)) goto loc_001993EF; /* je: equal / zero */

loc_001993CC:
    if (CMP_EQ(edi, 0x7F)) goto loc_001993EF; /* je: equal / zero */

loc_001993D1:
    eax = MEM32(esi + 0x148);
    MEM8(esi + 0x11) = LO8(ebx);
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001993FF; /* je: equal / zero */

loc_001993E4:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001993FF; /* jne: not equal / not zero */

loc_001993E8:
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001993EF:
    ecx = MEM32(esi + 0x148);
    SET_LO8(eax, MEM8(ecx + 0x18FA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001993B5; /* je: equal / zero */

loc_001993FF:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_00199410:
    ecx = MEM32(esp + 0x10);
    if (TEST_NZ(ecx, eax)) goto loc_0019941A; /* jne: not equal / not zero */

loc_00199418:
    ebp = 0; /* xor self */

loc_0019941A:
    edx = MEM32(esi + 0x134);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x130) = edi;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0019942D:
    MEM32(esi + 0x134) = eax;
    eax = MEM32(esi + 0x148);
    ecx = MEM32(eax + 0x10DC);
    esp = esp + 8;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM32(esi + 0x138) = ecx;
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
