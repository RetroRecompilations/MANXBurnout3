#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111850
 * Original: 0x00111850 - 0x00111AB7 (615 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00111850:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(esi + 0x1CB70);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00111A7F; /* jle: less or equal (signed <=) */

loc_00111871:
    edi = esi + 0x7C;
    MEM32(esp + 0x14) = edi;
    goto loc_00111880;

    /* nop */

loc_00111880:
    /* cmp MEM8(edi + -11), 1 - flags set for next jcc */
    ebx = edi + -12;
    if (CMP_NE(MEM8(edi + -11), 1)) goto loc_00111AAB; /* jne: not equal / not zero */

loc_0011188D:
    MEM32(esi + 0x1CB70) = MEM32(esi + 0x1CB70) - 1;
    SET_LO8(eax, MEM8(ebx));
    if (CMP_NE(LO8(eax), 4)) goto loc_00111902; /* jne: not equal / not zero */

loc_00111899:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001118BB; /* je: equal / zero */

loc_001118A2:
    eax = MEM32(edi);
    eax = ZX8(MEM8(eax + 0x2429));
    ecx = eax + eax * 2;
    ecx = ecx << 7;
    MEM32(ecx + 0x62611C) = 0;

loc_001118BB:
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001118C2:
    edx = MEM32(esi + 0xE6C8C);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001118E6; /* jle: less or equal (signed <=) */

loc_001118CE:
    edi = MEM32(edi);
    ecx = esi + 0xE6B80;

loc_001118D6:
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_001118E6; /* je: equal / zero */

loc_001118DA:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, MEM32(esi + 0xE6C8C))) goto loc_001118D6; /* jl: less (signed <) */

loc_001118E6:
    ecx = edx + -1;
    MEM32(esi + 0xE6C8C) = ecx;
    ecx = MEM32(esi + ecx * 4 + 0xE6B80);
    MEM32(esi + eax * 4 + 0xE6B80) = ecx;
    goto loc_00111A07;

loc_00111902:
    if (CMP_NE(LO8(eax), 6)) goto loc_001119CA; /* jne: not equal / not zero */

loc_0011190A:
    edi = MEM32(edi);
    eax = MEM32(0x737680);
    edx = MEM32(edi + 0x220);
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_0011193E; /* jle: less or equal (signed <=) */

loc_00111925:
    edx = 0x737690;
    /* nop */

loc_00111930:
    if (CMP_EQ(MEM32(esp + 0x18), edx)) goto loc_0011193E; /* je: equal / zero */

loc_00111936:
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, eax)) goto loc_00111930; /* jl: less (signed <) */

loc_0011193E:
    eax--;
    MEM32(0x737680) = eax;
    eax = MEM32(eax * 4 + 0x737690);
    ecx = ecx * 4 + 0x737690;
    MEM32(ecx) = eax;
    edi = MEM32(0x737680);
    eax = 0; /* xor self */
    edi = edi * 4 + 0x737690;
    edx = esi + 0xC45A0;
    /* nop */

loc_00111970:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_00111982; /* je: equal / zero */

loc_00111974:
    eax++;
    edx = edx + 0x780;
    if (CMP_L(eax, 0x20)) goto loc_00111970; /* jl: less (signed <) */

loc_00111980:
    goto loc_0011198F;

loc_00111982:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x780);
    MEM32(eax + esi + 0xC45A0) = ecx;

loc_0011198F:
    ecx = ZX8(MEM8(ebx + 2));
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_0011199F:
    ecx = MEM32(esi + 0xE9CA0);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(esi + 0xE9CA4);
    edx = ~edx;
    MEM32(esi + 0xE9CA0) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = eax & edx;
    MEM32(esi + 0xE9CA4) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001119C8:
    goto loc_00111A07;

loc_001119CA:
    if (CMP_NE(LO8(eax), 7)) goto loc_00111A07; /* jne: not equal / not zero */

loc_001119CE:
    ecx = ZX8(MEM8(edi + -10));
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_001119DE:
    ecx = MEM32(esi + 0xE9C98);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(esi + 0xE9C9C);
    edx = ~edx;
    eax = eax & edx;
    MEM32(esi + 0xE9C98) = ecx;
    MEM32(esi + 0xE9C9C) = eax;
    edi = MEM32(edi);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00111A07:
    edi = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0); sub_00111BD0(); /* call 0x00111BD0 */

loc_00111A12:
    eax = MEM32(esi + 0x1CB70);
    ecx = edi;
    if (CMP_EQ(ecx, eax)) goto loc_00111A6B; /* je: equal / zero */

loc_00111A1E:
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    SET_LO8(edx, MEM8(ecx + esi + 0x70));
    eax = ecx + esi + 0x70;
    MEM8(ebx) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebx + 1) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ebx + 2) = LO8(edx);
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(ebx + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x20), xmm0.b, 16); /* movaps */
    SET_LO8(eax, MEM8(ebx));
    if (CMP_NE(LO8(eax), 3)) goto loc_00111A85; /* jne: not equal / not zero */

loc_00111A62:
    edx = MEM32(ebx + 0xC);
    MEM32(edx + 0x16C) = ebx;

loc_00111A6B:
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    if (CMP_L(edx, MEM32(esi + 0x1CB70))) goto loc_00111880; /* jl: less (signed <) */

loc_00111A7F:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00111A85:
    SET_LO8(ecx, MEM8(0x5A3759));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00111A6B; /* je: equal / zero */

loc_00111A8F:
    if (CMP_NE(LO8(eax), 4)) goto loc_00111A6B; /* jne: not equal / not zero */

loc_00111A93:
    eax = MEM32(ebx + 0xC);
    eax = ZX8(MEM8(eax + 0x2429));
    ecx = eax + eax * 2;
    ecx = ecx << 7;
    MEM32(ecx + 0x62611C) = ebx;
    goto loc_00111A6B;

loc_00111AAB:
    ecx = MEM32(esp + 0x10);
    ecx++;
    edi = edi + 0x30;
    MEM32(esp + 0x10) = ecx;

}
