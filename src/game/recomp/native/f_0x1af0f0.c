#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AF0F0
 * Original: 0x001AF0F0 - 0x001AF174 (132 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0F0:
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE534);
    eax = esi + 0xE530;
    edx = eax + 0x14;
    MEM32(esi + 0xE524) = edx;
    MEM32(esi + 0xE520) = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    MEM32(esi + 0xE528) = ecx;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    ebx = 0; /* xor self */
    edx = edx + eax;
    /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esi + 0xE52C) = edx;
    MEM32(esp + 8) = ebx;
    if (CMP_LE(ebp, ebx)) goto loc_001AF170; /* jle: less or equal (signed <=) */

loc_001AF12F:
    PUSH32(esp, edi);
    edi = esi + 0xC3E;

loc_001AF136:
    if (CMP_GE(ebx, MEM32(esi + 0x10))) goto loc_001AF16F; /* jge: greater or equal (signed >=) */

loc_001AF13B:
    if (CMP_EQ(MEM8(edi), 0)) goto loc_001AF163; /* je: equal / zero */

loc_001AF140:
    eax = MEM32(esi);
    ecx = edi + -30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001AF14B:
    eax = MEM32(edi + -10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001AF156:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AF15F; /* jne: not equal / not zero */

loc_001AF15A:
    MEM8(edi) = LO8(eax);
    MEM32(esi + 8) = MEM32(esi + 8) - 1;

loc_001AF15F:
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;

loc_001AF163:
    eax = MEM32(esp + 0xC);
    ebx++;
    edi = edi + 0x20;
    if (CMP_L(eax, ebp)) goto loc_001AF136; /* jl: less (signed <) */

loc_001AF16F:
    POP32(esp, edi);

loc_001AF170:
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
