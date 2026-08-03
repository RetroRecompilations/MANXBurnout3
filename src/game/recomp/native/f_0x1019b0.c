#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001019B0
 * Original: 0x001019B0 - 0x00101C87 (727 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001019B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001019B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx + 0x4D78));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00101B29; /* je: equal / zero */

loc_001019D0:
    eax = MEM32(edx + 0x4D70);
    /* test eax, eax - flags set for next jcc */
    MEM8(edx + 0x4D78) = 0;
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00101B29; /* jle: less or equal (signed <=) */

loc_001019ED:
    edi = edx + 0x3B90;
    goto loc_00101A00;

    /* nop */
    /* nop */

loc_00101A00:
    eax = ZX8(MEM8(edi + 0x90));
    ecx = eax;
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_00101A16; /* jns: not sign (positive) */

loc_00101A11:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00101A16:
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 5;
    if (TEST_Z(MEM32(ecx * 4 + 0x649AC0), esi)) goto loc_00101B0C; /* je: equal / zero */

loc_00101A2F:
    eax = eax + eax * 2;
    eax = eax << 7;
    eax = MEM32(eax + 0x62611C);
    if (TEST_Z(eax, eax)) goto loc_00101B0C; /* je: equal / zero */

loc_00101A43:
    if (CMP_NE(MEM8(eax), 4)) goto loc_00101B0C; /* jne: not equal / not zero */

loc_00101A4C:
    esi = MEM32(eax + 0xC);
    if (TEST_Z(esi, esi)) goto loc_00101B0C; /* je: equal / zero */

loc_00101A57:
    ecx = MEM32(esi + 0x2424);
    if (TEST_Z(ecx, ecx)) goto loc_00101A9B; /* je: equal / zero */

loc_00101A61:
    ebx = MEM32(edx + 0x4D70);
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00101A93; /* jle: less or equal (signed <=) */

loc_00101A6D:
    SET_LO8(ebx, MEM8(ecx + 0x2429));
    ecx = edx + 0x3C20;
    /* nop */

loc_00101A80:
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) goto loc_00101A93; /* je: equal / zero */

loc_00101A84:
    eax++;
    ecx = ecx + 0xC0;
    if (CMP_L(eax, MEM32(edx + 0x4D70))) goto loc_00101A80; /* jl: less (signed <) */

loc_00101A93:
    if (CMP_GE(eax, MEM32(edx + 0x4D70))) goto loc_00101B0C; /* jge: greater or equal (signed >=) */

loc_00101A9B:
    eax = edi + 0x60;
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_00101AA3:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0xD0), xmm0.b, 16); /* movaps */
    SET_LO8(eax, MEM8(edi + 0x91));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00101B09; /* jne: not equal / not zero */

loc_00101AB8:
    eax = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + -32), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax = esi + 0x70;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00101B09:
    edx = MEM32(ebp + 8);

loc_00101B0C:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x4D70);
    eax++;
    edi = edi + 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_00101A00; /* jl: less (signed <) */

loc_00101B29:
    eax = MEM32(edx + 0x4D74);
    if (CMP_LE(eax & eax, 0)) goto loc_00101C7E; /* jle: less or equal (signed <=) */

loc_00101B37:
    eax = MEM32(edx + 0x4D70);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00101C78; /* jle: less or equal (signed <=) */

loc_00101B4D:
    ebx = edx + 0x3C20;

loc_00101B53:
    SET_LO8(eax, MEM8(ebx + 1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00101C5B; /* je: equal / zero */

loc_00101B5E:
    eax = ZX8(MEM8(ebx));
    ecx = eax;
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_00101B70; /* jns: not sign (positive) */

loc_00101B6B:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00101B70:
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 5;
    if (TEST_Z(MEM32(ecx * 4 + 0x649AC0), esi)) goto loc_00101C5B; /* je: equal / zero */

loc_00101B89:
    eax = eax + eax * 2;
    eax = eax << 7;
    eax = MEM32(eax + 0x62611C);
    if (TEST_Z(eax, eax)) goto loc_00101C5B; /* je: equal / zero */

loc_00101B9D:
    if (CMP_NE(MEM8(eax), 4)) goto loc_00101C5B; /* jne: not equal / not zero */

loc_00101BA6:
    edi = MEM32(eax + 0xC);
    if (TEST_Z(edi, edi)) goto loc_00101C5B; /* je: equal / zero */

loc_00101BB1:
    ecx = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    edx = ebx + -112;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00101BCE:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    esi = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF270(); /* call 0x000FF270 */

loc_00101C02:
    eax = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax = edi + 0x70;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00101C58:
    edx = MEM32(ebp + 8);

loc_00101C5B:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x4D70);
    eax++;
    ebx = ebx + 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_00101B53; /* jl: less (signed <) */

loc_00101C78:
    MEM32(edx + 0x4D74) = MEM32(edx + 0x4D74) - 1;

loc_00101C7E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
