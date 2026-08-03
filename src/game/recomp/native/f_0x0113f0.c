#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000113F0
 * Original: 0x000113F0 - 0x000114D9 (233 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000113F0:
    eax = MEM32(esi + 0x788);
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi + 0x4C);
    if (CMP_NE(ecx, edi)) goto loc_00011443; /* jne: not equal / not zero */

loc_00011404:
    ecx = MEM32(esi + 0x780);
    if (TEST_Z(ecx, ecx)) goto loc_00011433; /* je: equal / zero */

loc_0001140E:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00011413:
    if (CMP_EQ(eax, 2)) goto loc_00011428; /* je: equal / zero */

loc_00011418:
    ecx = MEM32(esi + 0x780);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00011423:
    if (CMP_NE(eax, 3)) goto loc_00011433; /* jne: not equal / not zero */

loc_00011428:
    ecx = MEM32(esi + 0x780);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_00011433:
    SET_LO8(eax, 1);
    MEM8(esi + 0x784) = LO8(eax);
    MEM8(esi + 0x785) = 0;
    esp += 4; return; /* ret */

loc_00011443:
    edx = MEM32(esi + 0x78C);
    if (CMP_NE(eax, edx)) goto loc_00011454; /* jne: not equal / not zero */

loc_0001144D:
    if (TEST_NZ(ecx, ecx)) goto loc_00011454; /* jne: not equal / not zero */

loc_00011451:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00011454:
    PUSH32(esp, ebp);

loc_00011455:
    eax++;
    if (CMP_NE(eax, 0x18)) goto loc_0001145D; /* jne: not equal / not zero */

loc_0001145B:
    eax = 0; /* xor self */

loc_0001145D:
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    if (CMP_EQ(MEM32(ecx + esi + 0x4C), edi)) goto loc_00011471; /* je: equal / zero */

loc_00011469:
    if (CMP_NE(eax, edx)) goto loc_00011455; /* jne: not equal / not zero */

loc_0001146D:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00011471:
    edx = eax + eax * 4;
    edx = edx << 4;
    MEM32(edx + esi + 0x4C) = 0;
    ecx = MEM32(esi + 0x78C);
    if (CMP_NE(eax, ecx)) goto loc_000114D5; /* jne: not equal / not zero */

loc_00011489:
    eax = ecx + ecx * 4;
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0x4C);
    if (TEST_NZ(ecx, ecx)) goto loc_000114D5; /* jne: not equal / not zero */

loc_00011497:
    ecx = MEM32(esi + 0x788);
    /* nop */

loc_000114A0:
    eax = MEM32(esi + 0x78C);
    if (CMP_EQ(eax, ecx)) goto loc_000114D5; /* je: equal / zero */

loc_000114AA:
    if (TEST_NZ(eax, eax)) goto loc_000114B8; /* jne: not equal / not zero */

loc_000114AE:
    MEM32(esi + 0x78C) = 0x18;

loc_000114B8:
    ebp = MEM32(esi + 0x78C);
    ebp--;
    eax = ebp;
    edx = eax + eax * 4;
    edx = edx << 4;
    MEM32(esi + 0x78C) = ebp;
    eax = MEM32(edx + esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_000114A0; /* je: equal / zero */

loc_000114D5:
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
