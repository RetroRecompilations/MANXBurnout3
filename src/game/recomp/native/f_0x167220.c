#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167220
 * Original: 0x00167220 - 0x001673D9 (441 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00167220:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    eax = MEM32(0x47A134);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0016729B; /* jne: not equal / not zero */

loc_00167237:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9D14;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00167247:
    edx = eax;
    /* cmp edx, ebx - flags set for next jcc */
    MEM32(0x47A134) = edx;
    if (CMP_EQ(edx, ebx)) goto loc_001673D0; /* je: equal / zero */

loc_00167257:
    eax = 0; /* xor self */
    edi = edx + 0x980;
    ecx = 0x7D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = edx + 0x330;
    ecx = 0x190;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx + 0x2C30;
    MEM32(edx + 0x2970) = ebx;
    MEM32(edx + 0x2974) = ebx;
    MEM32(edx + 0x2B20) = ebx;
    MEM32(edx + 0x2B24) = ebx;
    PUSH32(esp, 0); sub_00160B90(); /* call 0x00160B90 */

loc_00167296:
    eax = MEM32(0x47A134);

loc_0016729B:
    ecx = MEM32(0x47A12C);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0016738E; /* je: equal / zero */

loc_001672A9:
    ecx--;
    if ((ecx == 0)) goto loc_001672CC; /* je: equal / zero */

loc_001672AC:
    ecx--;
    SET_LO8(eax, 1);
    if ((ecx != 0)) goto loc_001673D2; /* jne: not equal / not zero */

loc_001672B5:
    MEM32(0x47A12C) = 3;
    MEM8(0x47A131) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001672CC:
    eax = eax + 0x980;
    PUSH32(esp, eax);
    PUSH32(esp, 0x47A0D0);
    eax = 3;
    PUSH32(esp, 0); sub_00161DE0(); /* call 0x00161DE0 */

loc_001672E1:
    if (CMP_NE(eax, ebx)) goto loc_001672FE; /* jne: not equal / not zero */

loc_001672E5:
    MEM8(0x47A130) = LO8(ebx);
    MEM32(0x47A12C) = 2;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001672FE:
    if (CMP_NE(eax, 2)) goto loc_001673D0; /* jne: not equal / not zero */

loc_00167307:
    edx = MEM32(0x47A134);
    eax = MEM32(edx + 0x984);
    esi = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edx) = eax;
    if (CMP_LE(eax, ebx)) goto loc_00167365; /* jle: less or equal (signed <=) */

loc_0016731B:
    ecx = edx + 0x10;
    eax = edx + 0x998;
    goto loc_00167330;

    /* nop */
    /* nop */

loc_00167330:
    xmm0.f[0] = MEMF(eax + -4); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    edi = MEM32(edx);
    esi++;
    eax = eax + 0x20;
    ecx = ecx + 0x10;
    if (CMP_L(esi, edi)) goto loc_00167330; /* jl: less (signed <) */

loc_00167365:
    eax = 0; /* xor self */
    ecx = 0x7D0;
    edi = edx + 0x980;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(0x47A130) = 1;
    MEM32(0x47A12C) = 2;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0016738E:
    eax = eax + 0x330;
    PUSH32(esp, eax);
    esi = 1;
    PUSH32(esp, 0x47A0D0);
    eax = esi;
    PUSH32(esp, 0); sub_00161DE0(); /* call 0x00161DE0 */

loc_001673A5:
    if (CMP_NE(eax, ebx)) goto loc_001673BE; /* jne: not equal / not zero */

loc_001673A9:
    MEM8(0x47A132) = LO8(ebx);
    MEM32(0x47A12C) = esi;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001673BE:
    if (CMP_NE(eax, 2)) goto loc_001673D0; /* jne: not equal / not zero */

loc_001673C3:
    MEM8(0x47A132) = 1;
    MEM32(0x47A12C) = esi;

loc_001673D0:
    SET_LO8(eax, 0); /* xor self */

loc_001673D2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
