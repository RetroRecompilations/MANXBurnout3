#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019F3B0
 * Original: 0x0019F3B0 - 0x0019F552 (418 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F3B0:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x41));
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x649B7C);
    PUSH32(esp, edi);
    edi = (int32_t)MEMF(ebp + 0x30); /* cvttss2si */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019F3D3; /* jne: not equal / not zero */

loc_0019F3CF:
    ebx = 0; /* xor self */
    goto loc_0019F3DF;

loc_0019F3D3:
    ebx = ZX8(LO8(eax));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4C);
    ebx = ebx + 0x60EC2C;

loc_0019F3DF:
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    if (CMP_L(edi, eax)) goto loc_0019F3EB; /* jl: less (signed <) */

loc_0019F3E8:
    edi = eax + -1;

loc_0019F3EB:
    ecx = ZX16(MEM16(ebx + 4));
    SET_LO8(eax, MEM8(ebp + 0x49));
    ecx = ecx + esi;
    SET_LO8(edx, MEM8(ecx + edi));
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_0019F548; /* je: equal / zero */

loc_0019F3FF:
    if (CMP_NE(LO8(edx), 0xFF)) goto loc_0019F437; /* jne: not equal / not zero */

loc_0019F404:
    if (TEST_S(edi, edi)) goto loc_0019F548; /* jl: less (signed <) */

loc_0019F40C:
    /* nop */

loc_0019F410:
    edx = ZX16(MEM16(ebx + 4));
    edx = edx + esi;
    SET_LO8(ecx, MEM8(edx + edi));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    eax = edx + edi;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_0019F548; /* jne: not equal / not zero */

loc_0019F425:
    edi--;
    SET_LO8(ecx, MEM8(ebp + 0x49));
    MEM8(eax) = LO8(ecx);
    if (((int32_t)edi >= 0)) goto loc_0019F410; /* jns: not sign (positive) */

loc_0019F42D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0019F437:
    ecx = ZX8(LO8(edx));
    esi = ecx + ecx * 4;
    esi = esi << 4;
    esi = esi + 0x63DCB0;
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019F50C; /* je: equal / zero */

loc_0019F453:
    ecx = ZX8(LO8(eax));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_0019F46B; /* jne: not equal / not zero */

loc_0019F466:
    MEM8(esp + 0x13) = 1;

loc_0019F46B:
    SET_LO8(eax, MEM8(ecx + 0x44));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019F453; /* jne: not equal / not zero */

loc_0019F472:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019F50C; /* je: equal / zero */

loc_0019F47E:
    xmm0.f[0] = MEMF(ebp + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 0x30))) goto loc_0019F4E0; /* jbe: below or equal (unsigned <=) */

loc_0019F489:
    xmm0.f[0] = MEMF(esi + 0x2C); /* movss */
    eax = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_0019F49B:
    ecx = ebp;
    PUSH32(esp, 0); sub_0019F3B0(); /* call 0x0019F3B0 */

loc_0019F4A2:
    SET_LO8(eax, MEM8(esi + 0x41));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019F4AD; /* jne: not equal / not zero */

loc_0019F4A9:
    ecx = 0; /* xor self */
    goto loc_0019F4B9;

loc_0019F4AD:
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;

loc_0019F4B9:
    edx = MEM32(esi + 0x34);
    eax = ZX8(MEM8(esi + 0x46));
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A03F0(); /* call 0x001A03F0 */

loc_0019F4CB:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0019F4E0:
    if (TEST_S(edi, edi)) goto loc_0019F548; /* jl: less (signed <) */

loc_0019F4E4:
    eax = ZX16(MEM16(ebx + 4));
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esi + 0x49));
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(eax + edi));
    eax = eax + edi;
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_0019F548; /* jne: not equal / not zero */

loc_0019F4FA:
    edi--;
    SET_LO8(edx, MEM8(ebp + 0x49));
    MEM8(eax) = LO8(edx);
    if (((int32_t)edi >= 0)) goto loc_0019F4E4; /* jns: not sign (positive) */

loc_0019F502:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0019F50C:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(ebp + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + 0x30))) goto loc_0019F548; /* jbe: below or equal (unsigned <=) */

loc_0019F517:
    xmm0.f[0] = MEMF(ebp + 0x2C); /* movss */
    eax = ebp;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_0019F529:
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ebp + 0x30);
    eax = ZX8(MEM8(ebp + 0x46));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0); sub_001A03F0(); /* call 0x001A03F0 */

loc_0019F53D:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */

loc_0019F548:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
