#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00110AF0
 * Original: 0x00110AF0 - 0x00111121 (1585 bytes, 456 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110AF0:
    esp = esp - 0x224;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x230);
    ecx = MEM32(ebp + 0x1CB70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    eax = ebp + 0x70;
    if (CMP_LE(ecx, edi)) goto loc_00110B2E; /* jle: less or equal (signed <=) */

loc_00110B16:
    if (CMP_EQ(MEM8(eax), 5)) goto loc_00110B20; /* je: equal / zero */

loc_00110B1B:
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_00110B20:
    ecx = MEM32(ebp + 0x1CB70);
    eax = eax + 0x30;
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00110B16; /* jl: less (signed <) */

loc_00110B2E:
    eax = MEM32(ebp + 0x1CB74);
    edx = 0; /* xor self */
    if (CMP_LE(eax, edi)) goto loc_00110B6D; /* jle: less or equal (signed <=) */

loc_00110B3A:
    eax = ebp + 0xE5F0;

loc_00110B40:
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    SET_LO8(ebx, MEM8(eax + 6));
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = ecx + ebp + 0x70;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00110B5A; /* je: equal / zero */

loc_00110B55:
    ecx = MEM32(ecx + 0x10);
    goto loc_00110B5D;

loc_00110B5A:
    ecx = MEM32(ecx + 0x20);

loc_00110B5D:
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x1CB74);
    edx++;
    eax = eax + 8;
    if (CMP_L(edx, ecx)) goto loc_00110B40; /* jl: less (signed <) */

loc_00110B6D:
    edx = MEM32(ebp + 0x1CB74);
    PUSH32(esp, 0x110AD0);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    eax = ebp + 0xE5F0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002434C0(); /* call 0x002434C0 */

loc_00110B87:
    eax = MEM32(ebp + 0x1CB74);
    esp = esp + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0xE9C90) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(eax, edi)) goto loc_00110D7D; /* jle: less or equal (signed <=) */

loc_00110BA2:
    ecx = ebp + 0xE5F4;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM32(esp + 0x24) = ecx;

loc_00110BB4:
    edx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(edx + 2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00110D19; /* je: equal / zero */

loc_00110BC3:
    eax = MEM32(esp + 0x1C);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00110CFD; /* jle: less or equal (signed <=) */

loc_00110BD7:
    goto loc_00110BE0;

    /* nop */

loc_00110BE0:
    edx = MEM32(esp + 0x24);
    SET_LO16(eax, MEM16(edx));
    ecx = MEM32(esp + 0x18);
    SET_LO16(ecx, MEM16(esp + ecx * 2 + 0x34));
    ebx = SX16(LO16(eax));
    eax = SX16(LO16(ecx));
    MEM32(esp + 0x2C) = eax;
    edx = ebx + ebx * 2;
    eax = eax + eax * 2;
    edx = edx << 4;
    xmm0.f[0] = MEMF(edx + ebp + 0x98); /* movss */
    edx = edx + ebp;
    eax = eax << 4;
    eax = eax + ebp;
    /* comiss xmm0.f[0], MEMF(eax + 0x88) - sets EFLAGS */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x28) = eax;
    if ((xmm0.f[0] <= MEMF(eax + 0x88))) goto loc_00110CE8; /* jbe: below or equal (unsigned <=) */

loc_00110C28:
    ecx = eax;
    xmm0.f[0] = MEMF(ecx + 0x98); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + 0x88) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x88))) goto loc_00110CE8; /* jbe: below or equal (unsigned <=) */

loc_00110C3F:
    esi = eax;
    edi = edx;
    esi = esi + 0x70;
    edi = edi + 0x70;
    PUSH32(esp, 0); sub_00114610(); /* call 0x00114610 */

loc_00110C4E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00110CE8; /* je: equal / zero */

loc_00110C56:
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(eax + 0x94); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x84) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x84))) goto loc_00110CE8; /* jbe: below or equal (unsigned <=) */

loc_00110C6F:
    xmm0.f[0] = MEMF(ecx + 0x94); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x84) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x84))) goto loc_00110CE8; /* jbe: below or equal (unsigned <=) */

loc_00110C80:
    if (CMP_GE(MEM32(ebp + 0xE9C90), 0x100)) goto loc_00110CE8; /* jge: greater or equal (signed >=) */

loc_00110C8C:
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_00110C97:
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = eax + ebp + 0x70;
    eax = MEM32(ebp + 0xE9C90);
    edx = eax + eax * 2;
    edx = edx << 4;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(edx + ebp + 0xE6CB8) = ecx;
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_00110CBB:
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = eax + ebp + 0x70;
    eax = MEM32(ebp + 0xE9C90);
    edx = eax + eax * 2;
    edx = edx << 4;
    MEM32(edx + ebp + 0xE6CB4) = ecx;
    eax = MEM32(ebp + 0xE9C90);
    esp = esp + 0x10;
    eax++;
    MEM32(ebp + 0xE9C90) = eax;

loc_00110CE8:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00110BE0; /* jl: less (signed <) */

loc_00110CFD:
    eax = MEM32(esp + 0x24);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(esp + 0x1C);
    MEM16(esp + eax * 2 + 0x34) = LO16(ecx);
    eax++;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    eax++;
    goto loc_00110D57;

loc_00110D19:
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00110D32; /* jle: less or equal (signed <=) */

loc_00110D23:
    SET_LO16(edx, MEM16(edx));

loc_00110D26:
    if (CMP_EQ(MEM16(esp + eax * 2 + 0x34), LO16(edx))) goto loc_00110D32; /* je: equal / zero */

loc_00110D2D:
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00110D26; /* jl: less (signed <) */

loc_00110D32:
    edx = MEM32(esp + 0x20);
    if (CMP_GE(eax, edx)) goto loc_00110D4D; /* jge: greater or equal (signed >=) */

loc_00110D3A:
    ecx = edx;
    ecx = ecx - eax;
    edi = esp + eax * 2 + 0x34;
    esi = esp + eax * 2 + 0x36;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 2);
    esi += ecx * 2; edi += ecx * 2; ecx = 0; /* rep movsw */
    ecx = MEM32(esp + 0x1C);

loc_00110D4D:
    eax = MEM32(esp + 0x20);
    ecx--;
    MEM32(esp + 0x1C) = ecx;
    eax--;

loc_00110D57:
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 0x1CB74);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    eax++;
    edx = edx + 8;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = edx;
    if (CMP_L(eax, ecx)) goto loc_00110BB4; /* jl: less (signed <) */

loc_00110D7D:
    eax = MEM32(ebp + 0x1CB70);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110DDF; /* jle: less or equal (signed <=) */

loc_00110D89:
    esi = ebp + 0x70;
    /* nop */

loc_00110D90:
    SET_LO8(eax, MEM8(esi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00110DAA; /* je: equal / zero */

loc_00110D96:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00110DAA; /* je: equal / zero */

loc_00110D9A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00110DAA; /* je: equal / zero */

loc_00110D9E:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00110DAA; /* je: equal / zero */

loc_00110DA2:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00110DAA; /* je: equal / zero */

loc_00110DA6:
    if (CMP_NE(LO8(eax), 7)) goto loc_00110DD1; /* jne: not equal / not zero */

loc_00110DAA:
    ecx = MEM32(esi + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x20E));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00110DBB; /* je: equal / zero */

loc_00110DB7:
    if (CMP_NE(LO8(eax), 7)) goto loc_00110DC7; /* jne: not equal / not zero */

loc_00110DBB:
    SET_LO8(eax, MEM8(esi + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00110DC7; /* jne: not equal / not zero */

loc_00110DC2:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00110DC7:
    eax = MEM32(esi + 0xC);
    MEM8(eax + 0x211) = 0;

loc_00110DD1:
    eax = MEM32(ebp + 0x1CB70);
    edi++;
    esi = esi + 0x30;
    if (CMP_L(edi, eax)) goto loc_00110D90; /* jl: less (signed <) */

loc_00110DDF:
    eax = MEM32(ebp + 0xE9C90);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110E07; /* jle: less or equal (signed <=) */

loc_00110DEB:
    edi = ebp + 0xE6C90;

loc_00110DF1:
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0); sub_00111CD0(); /* call 0x00111CD0 */

loc_00110DF9:
    eax = MEM32(ebp + 0xE9C90);
    esi++;
    edi = edi + 0x30;
    if (CMP_L(esi, eax)) goto loc_00110DF1; /* jl: less (signed <) */

loc_00110E07:
    ecx = MEM32(ebp + 0xE6C80);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00110E34; /* jle: less or equal (signed <=) */

loc_00110E13:
    ecx = ebp + 0x1DED3;
    /* nop */

loc_00110E20:
    MEM8(ecx) = 0;
    edx = MEM32(ebp + 0xE6C80);
    eax++;
    ecx = ecx + 0x4AD0;
    if (CMP_L(eax, edx)) goto loc_00110E20; /* jl: less (signed <) */

loc_00110E34:
    ecx = MEM32(ebp + 0xE6C84);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00110E5A; /* jle: less or equal (signed <=) */

loc_00110E40:
    ecx = ebp + 0x27473;

loc_00110E46:
    MEM8(ecx) = 0;
    edx = MEM32(ebp + 0xE6C84);
    eax++;
    ecx = ecx + 0x1580;
    if (CMP_L(eax, edx)) goto loc_00110E46; /* jl: less (signed <) */

loc_00110E5A:
    ecx = MEM32(ebp + 0xE6C88);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00110E84; /* jle: less or equal (signed <=) */

loc_00110E66:
    ecx = ebp + 0x2DFF3;
    /* nop */

loc_00110E70:
    MEM8(ecx) = 0;
    edx = MEM32(ebp + 0xE6C88);
    eax++;
    ecx = ecx + 0x1560;
    if (CMP_L(eax, edx)) goto loc_00110E70; /* jl: less (signed <) */

loc_00110E84:
    ecx = MEM32(ebp + 0xE6C8C);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00110EB7; /* jle: less or equal (signed <=) */

loc_00110E90:
    ecx = ebp + 0xE6B80;
    goto loc_00110EA0;

    /* nop */
    /* nop */

loc_00110EA0:
    edx = MEM32(ecx);
    MEM8(edx + 0x1353) = 0;
    edx = MEM32(ebp + 0xE6C8C);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00110EA0; /* jl: less (signed <) */

loc_00110EB7:
    esi = ebp;
    PUSH32(esp, 0); sub_00114E60(); /* call 0x00114E60 */

loc_00110EBE:
    ebx = MEM32(esp + 0x23C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64ACE8);
    PUSH32(esp, 0); sub_0010D1C0(); /* call 0x0010D1C0 */

loc_00110ED0:
    eax = MEM32(ebp + 0xE6C80);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110EFA; /* jle: less or equal (signed <=) */

loc_00110EDC:
    esi = ebp + 0x1CB80;

loc_00110EE2:
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00110EE9:
    eax = MEM32(ebp + 0xE6C80);
    edi++;
    esi = esi + 0x4AD0;
    if (CMP_L(edi, eax)) goto loc_00110EE2; /* jl: less (signed <) */

loc_00110EFA:
    eax = MEM32(ebp + 0xE6C84);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110F28; /* jle: less or equal (signed <=) */

loc_00110F06:
    esi = ebp + 0x26120;
    /* nop */

loc_00110F10:
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00110F17:
    eax = MEM32(ebp + 0xE6C84);
    edi++;
    esi = esi + 0x1580;
    if (CMP_L(edi, eax)) goto loc_00110F10; /* jl: less (signed <) */

loc_00110F28:
    eax = MEM32(ebp + 0xE6C88);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110F58; /* jle: less or equal (signed <=) */

loc_00110F34:
    esi = ebp + 0x2CCA0;
    /* nop */

loc_00110F40:
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00110F47:
    eax = MEM32(ebp + 0xE6C88);
    edi++;
    esi = esi + 0x1560;
    if (CMP_L(edi, eax)) goto loc_00110F40; /* jl: less (signed <) */

loc_00110F58:
    eax = MEM32(ebp + 0xE6C8C);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110F85; /* jle: less or equal (signed <=) */

loc_00110F64:
    edi = ebp + 0xE6B80;
    /* nop */

loc_00110F70:
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00110F77:
    eax = MEM32(ebp + 0xE6C8C);
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, eax)) goto loc_00110F70; /* jl: less (signed <) */

loc_00110F85:
    eax = ebp + 0xC4380;
    esi = 1;
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = 0x20;
    edi = edi;

loc_00110FA0:
    eax = MEM32(ebp + 0xE9CA0);
    ecx = MEM32(ebp + 0xE9CA4);
    eax = eax & esi;
    ecx = ecx & edi;
    eax = eax | ecx;
    if ((eax == 0)) goto loc_00110FBD; /* je: equal / zero */

loc_00110FB4:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00110FBD:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edi = (edi << 1) | (esi >> (32 - 1)); /* shld */
    ecx = ecx + 0x780;
    esi = esi << 1;
    eax--;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00110FA0; /* jne: not equal / not zero */

loc_00110FDC:
    esi = 1;
    edi = 0; /* xor self */
    ebx = ebp + 0xD3380;
    MEM32(esp + 0x14) = 0x40;

loc_00110FF1:
    eax = MEM32(ebp + 0xE9C98);
    ecx = MEM32(ebp + 0xE9C9C);
    eax = eax & esi;
    ecx = ecx & edi;
    eax = eax | ecx;
    if ((eax == 0)) goto loc_00111013; /* je: equal / zero */

loc_00111005:
    ecx = MEM32(esp + 0x23C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00111013:
    eax = MEM32(esp + 0x14);
    edi = (edi << 1) | (esi >> (32 - 1)); /* shld */
    esi = esi << 1;
    ebx = ebx + 0x4E0;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00110FF1; /* jne: not equal / not zero */

loc_0011102A:
    eax = MEM32(0x73A19C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00111114; /* jle: less or equal (signed <=) */

loc_00111039:
    ebp = ebp + 0x7C;
    /* nop */

loc_00111040:
    esi = MEM32(ebp);
    SET_LO8(eax, MEM8(esi + 0x212));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001110F6; /* je: equal / zero */

loc_00111051:
    if (CMP_NE(MEM32(esi + 0x198), 1)) goto loc_001110F6; /* jne: not equal / not zero */

loc_0011105E:
    SET_LO8(eax, MEM8(esi + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001110F6; /* je: equal / zero */

loc_0011106C:
    ecx = MEM32(esi + 0x13F4);
    eax = MEM32(ecx + 0x1920);
    /* cmp eax, 3 - flags set for next jcc */
    xmm0.f[0] = MEMF(esi + 0x194); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_A(eax, 3)) goto loc_001110A0; /* ja: above (unsigned >) */

loc_0011108B:
    { uint32_t _jt = MEM32(eax * 4 + 0x111124); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00111092u) goto loc_00111092;
    if (_jt == 0x00111099u) goto loc_00111099;
    if (_jt == 0x001110A0u) goto loc_001110A0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00111092:
    edx = 2;
    goto loc_001110A2;

loc_00111099:
    edx = 1;
    goto loc_001110A2;

loc_001110A0:
    edx = 0; /* xor self */

loc_001110A2:
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0xCC4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebx = esi + 0x170;
    PUSH32(esp, ebx);
    ebx = esi + 0x160;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1974);
    ecx = MEM32(ecx + 0x1970);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xCC0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 0x300;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0xC;
    PUSH32(esp, 0); sub_0012FA40(); /* call 0x0012FA40 */

loc_001110E7:
    edx = MEM32(esi + 0xCC4);
    MEM8(edx + 0x344) = 1;
    goto loc_00111103;

loc_001110F6:
    eax = MEM32(esi + 0xCC4);
    MEM8(eax + 0x344) = 0;

loc_00111103:
    eax = MEM32(0x73A19C);
    edi++;
    ebp = ebp + 0x30;
    if (CMP_L(edi, eax)) goto loc_00111040; /* jl: less (signed <) */

loc_00111114:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x224;
    esp += 12; return; /* ret 8 */

}
