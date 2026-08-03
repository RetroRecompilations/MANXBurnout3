#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B8270
 * Original: 0x001B8270 - 0x001B82F8 (136 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8270(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B8270:
    if (TEST_Z(MEM8(ecx + 2), 1)) goto loc_001B82F5; /* je: equal / zero */

loc_001B8276:
    eax = 0; /* xor self */
    edx = ebx + 0x3A0;
    edi = edi;

loc_001B8280:
    if (TEST_Z(MEM8(edx), 1)) goto loc_001B8291; /* je: equal / zero */

loc_001B8285:
    eax++;
    edx = edx + 0x10;
    if (CMP_L(eax, 0xA)) goto loc_001B8280; /* jl: less (signed <) */

loc_001B828E:
    esp += 12; return; /* ret 8 */

loc_001B8291:
    eax = eax + 0x3A;
    eax = eax << 4;
    eax = eax + ebx;
    if ((eax == 0)) goto loc_001B82F5; /* je: equal / zero */

loc_001B829B:
    edx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    SET_LO16(ecx, MEM16(ecx + 0xC));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax + 3) = LO8(edx);
    MEM8(eax) = 3;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = esi;
    MEM8(eax + 2) = 2;
    MEM8(eax + 1) = 0;
    MEM8(eax) = LO8(ecx);
    edx = 0; /* xor self */
    /* nop */

loc_001B82D0:
    SET_LO8(ecx, LO8(ecx) ^ MEM8(edx + eax));
    edx++;
    if (CMP_L(edx, 0x10)) goto loc_001B82D0; /* jl: less (signed <) */

loc_001B82D9:
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(ecx, LO8(ecx) | 3);
    PUSH32(esp, esi);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(ebx + 0x7C);
    edx = MEM32(ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001B82F3:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B82F5:
    esp += 12; return; /* ret 8 */

}
