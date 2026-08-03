#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114D10
 * Original: 0x00114D10 - 0x00114E5C (332 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114D10:
    eax = MEM32(0x4D5370);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x1B8);
    eax = MEM32(0x73A19C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00114D61; /* jle: less or equal (signed <=) */

loc_00114D2C:
    edi = MEM32(esp + 0x18);
    edi = edi + 0x7C;

loc_00114D33:
    eax = MEM32(edi);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x218);
    /* cmp ecx, MEM32(esp + 0x1C) - flags set for next jcc */
    MEM8(esp + esi + 0xC) = 0;
    if (CMP_NE(ecx, MEM32(esp + 0x1C))) goto loc_00114D54; /* jne: not equal / not zero */

loc_00114D47:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x4C), _icall_esp); /* indirect call */
    }

loc_00114D4F:
    MEM8(esp + esi + 0xC) = 1;

loc_00114D54:
    eax = MEM32(0x73A19C);
    esi++;
    edi = edi + 0x30;
    if (CMP_L(esi, eax)) goto loc_00114D33; /* jl: less (signed <) */

loc_00114D61:
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x84), _icall_esp); /* indirect call */
    }

loc_00114D70:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114E22; /* je: equal / zero */

loc_00114D78:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x1CB70);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00114E21; /* jle: less or equal (signed <=) */

loc_00114D8D:
    edi = edx;
    edi = edi + 0x70;

loc_00114D92:
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00114DAC; /* je: equal / zero */

loc_00114D98:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114DAC; /* je: equal / zero */

loc_00114D9C:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00114DAC; /* je: equal / zero */

loc_00114DA0:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00114DAC; /* je: equal / zero */

loc_00114DA4:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00114DAC; /* je: equal / zero */

loc_00114DA8:
    if (CMP_NE(LO8(eax), 7)) goto loc_00114E0B; /* jne: not equal / not zero */

loc_00114DAC:
    esi = MEM32(edi + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x218);
    if (CMP_NE(eax, MEM32(esp + 0x20))) goto loc_00114E0B; /* jne: not equal / not zero */

loc_00114DBC:
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 4)) goto loc_00114E00; /* je: equal / zero */

loc_00114DC2:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00114E00; /* je: equal / zero */

loc_00114DC6:
    if (CMP_EQ(LO8(eax), 7)) goto loc_00114E00; /* je: equal / zero */

loc_00114DCA:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00114DD7; /* je: equal / zero */

loc_00114DCE:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00114DD5:
    goto loc_00114E0B;

loc_00114DD7:
    eax = MEM32(esi + 0x204);
    xmm0.f[0] = MEMF(0x3B1D90); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x204);
    edx = esi;
    PUSH32(esp, 0); sub_0010A440(); /* call 0x0010A440 */

loc_00114DF7:
    MEM8(esi + 0x1554) = 1;
    goto loc_00114E0B;

loc_00114E00:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00114E07:
    MEM8(edi + 1) = 1;

loc_00114E0B:
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x1CB70);
    ebp++;
    edi = edi + 0x30;
    if (CMP_L(ebp, ecx)) goto loc_00114D92; /* jl: less (signed <) */

loc_00114E21:
    POP32(esp, ebp);

loc_00114E22:
    eax = MEM32(0x73A19C);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00114E53; /* jle: less or equal (signed <=) */

loc_00114E2D:
    edi = MEM32(esp + 0x18);
    edi = edi + 0x7C;

loc_00114E34:
    SET_LO8(eax, MEM8(esp + esi + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114E46; /* je: equal / zero */

loc_00114E3C:
    eax = MEM32(edi);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x50), _icall_esp); /* indirect call */
    }

loc_00114E46:
    eax = MEM32(0x73A19C);
    esi++;
    edi = edi + 0x30;
    if (CMP_L(esi, eax)) goto loc_00114E34; /* jl: less (signed <) */

loc_00114E53:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}
