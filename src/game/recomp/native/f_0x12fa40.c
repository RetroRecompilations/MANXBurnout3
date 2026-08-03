#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012FA40
 * Original: 0x0012FA40 - 0x0012FED7 (1175 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0012FA40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_0012FECE; /* je: equal / zero */

loc_0012FA62:
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esi + 0x10) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0012FECE; /* je: equal / zero */

loc_0012FA6D:
    eax = MEM32(ebx + 0x40);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_0012FECE; /* je: equal / zero */

loc_0012FA7B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(ebp + 0x2C) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(ebp + 0x2C))) goto loc_0012FECE; /* jae: above or equal (unsigned >=) */

loc_0012FA88:
    SET_LO8(eax, MEM8(esi + 0x46));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012FA99; /* je: equal / zero */

loc_0012FA8F:
    if (CMP_EQ(MEM32(ebp + 0x20), 2)) goto loc_0012FECE; /* je: equal / zero */

loc_0012FA99:
    eax = MEM32(ebp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012FAAD:
    xmm1.f[0] = MEMF(0x3A35E0); /* movss */
    xmm0.f[0] = MEMF(ebp + 0x2C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012FB0D; /* jbe: below or equal (unsigned <=) */

loc_0012FABF:
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3A69C0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3A69C0))) goto loc_0012FB0D; /* jbe: below or equal (unsigned <=) */

loc_0012FACE:
    eax = esp + 0x30;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0012FADB:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012FAED:
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00019FB0(); /* call 0x00019FB0 */

loc_0012FAF7:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012FECE; /* jne: not equal / not zero */

loc_0012FAFF:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012FB08:
    xmm0.f[0] = MEMF(ebp + 0x2C); /* movss */

loc_0012FB0D:
    /* cmp edi, 6 - flags set for next jcc */
    eax = MEM32(ebx + 0x40);
    xmm1.f[0] = MEMF(eax + 0xE88); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xE98); /* subss */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    if (CMP_L(edi, 6)) goto loc_0012FB3C; /* jl: less (signed <) */

loc_0012FB2B:
    if (CMP_G(edi, 0xA)) goto loc_0012FB3C; /* jg: greater (signed >) */

loc_0012FB30:
    MEM32(esi + 0x38) = 3;
    goto loc_0012FBBC;

loc_0012FB3C:
    /* comiss xmm1.f[0], MEMF(0x3B1D34) - sets EFLAGS */
    edx = 1;
    if ((xmm1.f[0] <= MEMF(0x3B1D34))) goto loc_0012FB4F; /* jbe: below or equal (unsigned <=) */

loc_0012FB4A:
    MEM32(esi + 0x38) = edx;
    goto loc_0012FB56;

loc_0012FB4F:
    MEM32(esi + 0x38) = 0;

loc_0012FB56:
    if (CMP_NE(ecx, 0x67D5A000)) goto loc_0012FB65; /* jne: not equal / not zero */

loc_0012FB5E:
    if (CMP_EQ(eax, 0x77042838)) goto loc_0012FBB9; /* je: equal / zero */

loc_0012FB65:
    if (CMP_NE(ecx, 0x67FCB000)) goto loc_0012FB74; /* jne: not equal / not zero */

loc_0012FB6D:
    if (CMP_EQ(eax, 0x77042838)) goto loc_0012FBB9; /* je: equal / zero */

loc_0012FB74:
    if (CMP_NE(ecx, 0x6823C000)) goto loc_0012FB83; /* jne: not equal / not zero */

loc_0012FB7C:
    if (CMP_EQ(eax, 0x77042838)) goto loc_0012FBB9; /* je: equal / zero */

loc_0012FB83:
    if (CMP_NE(ecx, 0x66EE2E00)) goto loc_0012FB92; /* jne: not equal / not zero */

loc_0012FB8B:
    if (CMP_EQ(eax, 0x77042838)) goto loc_0012FBB9; /* je: equal / zero */

loc_0012FB92:
    if (CMP_NE(ecx, 0xA1422A00u)) goto loc_0012FBA1; /* jne: not equal / not zero */

loc_0012FB9A:
    if (CMP_EQ(eax, 0x790798FB)) goto loc_0012FBB9; /* je: equal / zero */

loc_0012FBA1:
    if (CMP_NE(ecx, 0x671E0800)) goto loc_0012FBBC; /* jne: not equal / not zero */

loc_0012FBA9:
    if (CMP_NE(eax, 0x77042838)) goto loc_0012FBBC; /* jne: not equal / not zero */

loc_0012FBB0:
    MEM32(esi + 0x38) = 2;
    goto loc_0012FBBC;

loc_0012FBB9:
    MEM32(esi + 0x38) = edx;

loc_0012FBBC:
    edx = MEM32(ebp + 0x1C);
    edi = MEM32(ebp + 0x20);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x38);
    eax = eax - 0;
    MEM32(esi + 0x3C) = edx;
    edx = MEM32(ebp + 0xC);
    MEM32(esi + 0x40) = edi;
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x188) = 0;
    if ((eax == 0)) goto loc_0012FC08; /* je: equal / zero */

loc_0012FBEE:
    eax--;
    if ((eax == 0)) goto loc_0012FBF4; /* je: equal / zero */

loc_0012FBF1:
    eax--;
    if ((eax == 0)) goto loc_0012FBFE; /* je: equal / zero */

loc_0012FBF4:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E78); /* mulss */
    goto loc_0012FC10;

loc_0012FBFE:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E74); /* mulss */
    goto loc_0012FC10;

loc_0012FC08:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E70); /* mulss */

loc_0012FC10:
    SET_LO8(eax, MEM8(esi + 0x46));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012FC2F; /* je: equal / zero */

loc_0012FC1F:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1870); /* mulss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */

loc_0012FC2F:
    eax = MEM32(esi + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0012FC62:
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    ebx = esi + 0x140;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0012FC7A:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    ecx = ebx;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012FC89:
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    eax = esp + 0x48;
    ebx = esi + 0x150;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012FCA2:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = ebx;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012FCB1:
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x40);
    SET_LO8(edx, MEM8(eax + 0xC));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0012FCEF; /* jle: less or equal (signed <=) */

loc_0012FCC0:
    eax = 0xF90;
    goto loc_0012FCD0;

    /* nop */
    edi = edi;

loc_0012FCD0:
    edx = MEM32(esi + 0x14);
    edx = MEM32(eax + edx);
    MEM32(esi + eax + -3632) = edx;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x40);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    ecx++;
    eax = eax + 4;
    if (CMP_L(ecx, edx)) goto loc_0012FCD0; /* jl: less (signed <) */

loc_0012FCEF:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1694) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1694))) goto loc_0012FD0E; /* jbe: below or equal (unsigned <=) */

loc_0012FD00:
    eax = MEM32(esi + 0x17C);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0012C670(); /* call 0x0012C670 */

loc_0012FD0E:
    PUSH32(esp, 0); sub_0012E450(); /* call 0x0012E450 */

loc_0012FD13:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012FD31; /* je: equal / zero */

loc_0012FD17:
    xmm0.f[0] = MEMF(esi + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x17C); /* mulss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    goto loc_0012FE15;

loc_0012FD31:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    SET_LO8(eax, MEM8(esi + 0x46));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = ebx;
    eax = esp + 0x40;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012FD68; /* je: equal / zero */

loc_0012FD61:
    PUSH32(esp, 0x40AF50);
    goto loc_0012FD6D;

loc_0012FD68:
    PUSH32(esp, 0x40AF40);

loc_0012FD6D:
    PUSH32(esp, 0); sub_000328B0(); /* call 0x000328B0 */

loc_0012FD72:
    if (CMP_EQ(edi, 2)) goto loc_0012FDA0; /* je: equal / zero */

loc_0012FD77:
    eax = ebx;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012FD7E:
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x24); /* mulss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x154); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x24); /* divss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */

loc_0012FDA0:
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x17C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0x17C))) goto loc_0012FECE; /* ja: above (unsigned >) */

loc_0012FDB5:
    eax = ebx;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0012FDBC:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012FECE; /* jne: not equal / not zero */

loc_0012FDC4:
    eax = ebx;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012FDCB:
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0xAC0);
    if (TEST_Z(eax, eax)) goto loc_0012FE15; /* je: equal / zero */

loc_0012FDD8:
    edx = esi + 0x178;
    PUSH32(esp, edx);
    eax = esi + 0x185;
    PUSH32(esp, eax);
    ecx = esi + 0x184;
    PUSH32(esp, ecx);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_00128A20(); /* call 0x00128A20 */

loc_0012FDFB:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x184);
    ecx = esi;
    PUSH32(esp, 0); sub_0012F8E0(); /* call 0x0012F8E0 */

loc_0012FE09:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x185);
    PUSH32(esp, 0); sub_0012F8E0(); /* call 0x0012F8E0 */

loc_0012FE15:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], MEMF(esi + 0x24) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(esi + 0x24))) goto loc_0012FE30; /* jb: below (unsigned <) */

loc_0012FE23:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */

loc_0012FE30:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39B6EC); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x30));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012FEC7; /* jne: not equal / not zero */

loc_0012FE92:
    xmm2.f[0] = MEMF(0x60EA1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A7950); /* mulss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0012FEC7; /* jbe: below or equal (unsigned <=) */

loc_0012FEA7:
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = esi + 0x140;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0012F9B0(); /* call 0x0012F9B0 */

loc_0012FEBF:
    MEMF(esi + 0x17C) = xmm2.f[0]; /* movss */

loc_0012FEC7:
    eax = esi;
    PUSH32(esp, 0); sub_0012E4D0(); /* call 0x0012E4D0 */

loc_0012FECE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}
