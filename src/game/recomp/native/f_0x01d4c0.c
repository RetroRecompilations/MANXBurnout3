#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001D4C0
 * Original: 0x0001D4C0 - 0x0001DBA2 (1762 bytes, 454 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D4C0:
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(0x4D1FE8);
    ebx = 0; /* xor self */
    MEM32(0x44D16C) = ebx;
    MEM32(0x44D180) = ebx;
    MEM32(0x44D194) = ebx;
    MEM32(0x44D1A8) = ebx;
    MEM32(0x44D1C4) = ebx;
    MEM32(0x44D1D8) = ebx;
    MEM32(0x44D1EC) = ebx;
    MEM32(0x44D200) = ebx;
    MEM32(0x44D214) = ebx;
    MEM32(0x44D228) = ebx;
    MEM32(0x44D170) = ebx;
    MEM32(0x44D184) = ebx;
    MEM32(0x44D198) = ebx;
    MEM32(0x44D1AC) = ebx;
    MEM32(0x44D1C8) = ebx;
    MEM32(0x44D1DC) = ebx;
    MEM32(0x44D1F0) = ebx;
    MEM32(0x44D204) = ebx;
    MEM32(0x44D218) = ebx;
    MEM32(0x44D22C) = ebx;
    MEM32(0x44D174) = ebx;
    MEM32(0x44D188) = ebx;
    MEM32(0x44D19C) = ebx;
    MEM32(0x44D1B0) = ebx;
    MEM32(0x44D1CC) = ebx;
    MEM32(0x44D1E0) = ebx;
    MEM32(0x44D1F4) = ebx;
    MEM32(0x44D208) = ebx;
    MEM32(0x44D21C) = ebx;
    MEM32(0x44D230) = ebx;
    MEM32(0x44D178) = ebx;
    MEM32(0x44D18C) = ebx;
    MEM32(0x44D1A0) = ebx;
    MEM32(0x44D1B4) = ebx;
    MEM32(0x44D1D0) = ebx;
    MEM32(0x44D1E4) = ebx;
    MEM32(0x44D1F8) = ebx;
    MEM32(0x44D20C) = ebx;
    MEM32(0x44D220) = ebx;
    MEM32(0x44D234) = ebx;
    MEM32(0x44D17C) = ebx;
    MEM32(0x44D190) = ebx;
    MEM32(0x44D1A4) = ebx;
    MEM32(0x44D1B8) = ebx;
    MEM32(0x44D1C0) = ebx;
    MEM32(0x44D168) = ebx;
    MEM32(0x44D1D4) = ebx;
    MEM32(0x44D1E8) = ebx;
    MEM32(0x44D1FC) = ebx;
    MEM32(0x44D210) = ebx;
    MEM32(0x44D224) = ebx;
    MEM32(0x44D238) = ebx;
    /* cmp MEM32(eax + 8), ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(MEM32(eax + 8), ebx)) goto loc_0001D901; /* jle: less or equal (signed <=) */

loc_0001D613:
    ecx = MEM32(0x4D1FE8);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edx + eax * 8 + 4);
    /* cmp ecx, ebx - flags set for next jcc */
    eax = edx + eax * 8;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(ecx, ebx)) goto loc_0001D8E7; /* jle: less or equal (signed <=) */

loc_0001D637:
    MEM32(esp + 0x24) = ebx;
    goto loc_0001D640;

    /* nop */

loc_0001D640:
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(eax + edx + 0x14);
    eax = eax + edx;
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(ecx, ebx)) goto loc_0001D8C4; /* jle: less or equal (signed <=) */

loc_0001D660:
    MEM32(esp + 0x20) = ebx;

loc_0001D664:
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 0x10);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(eax + ebp + 0x34);
    ecx = MEM32(esi + 8);
    eax = eax + ebp;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001D682:
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0001D8A1; /* je: equal / zero */

loc_0001D690:
    ecx = MEM32(esi);
    esi = MEM32(esi + 4);
    eax = 0; /* xor self */
    goto loc_0001D6A0;

    /* nop */

loc_0001D6A0:
    edx = MEM32(eax * 8 + 0x39EBC0);
    if (CMP_NE(edx, ecx)) goto loc_0001D6B6; /* jne: not equal / not zero */

loc_0001D6AB:
    edx = MEM32(eax * 8 + 0x39EBC4);
    if (CMP_EQ(edx, esi)) goto loc_0001D6C1; /* je: equal / zero */

loc_0001D6B6:
    eax++;
    if (CMP_L(eax, 0x24)) goto loc_0001D6A0; /* jl: less (signed <) */

loc_0001D6BC:
    goto loc_0001D8A1;

loc_0001D6C1:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001D8A1; /* je: equal / zero */

loc_0001D6CA:
    ecx = MEM32(eax * 8 + 0x39EBC4);
    edx = MEM32(eax * 8 + 0x39EBC0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0001D6E3:
    SET_LO8(eax, MEM8(esp + 0x34));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_0001D708; /* je: equal / zero */

loc_0001D6EE:
    if (CMP_EQ(LO8(eax), 0x45)) goto loc_0001D701; /* je: equal / zero */

loc_0001D6F2:
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0x55 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 0x55)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 3;
    edi = ecx;
    goto loc_0001D70D;

loc_0001D701:
    edi = 1;
    goto loc_0001D70D;

loc_0001D708:
    edi = 2;

loc_0001D70D:
    eax = edi;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_0001D74D; /* je: equal / zero */

loc_0001D713:
    eax--;
    if ((eax == 0)) goto loc_0001D733; /* je: equal / zero */

loc_0001D716:
    eax--;
    if ((eax != 0)) goto loc_0001D765; /* jne: not equal / not zero */

loc_0001D719:
    ecx = MEM32(0x44D224);
    eax = MEM32(0x44D1A4);
    ecx++;
    eax++;
    MEM32(0x44D224) = ecx;
    MEM32(0x44D1A4) = eax;
    goto loc_0001D765;

loc_0001D733:
    ecx = MEM32(0x44D1FC);
    eax = MEM32(0x44D190);
    ecx++;
    eax++;
    MEM32(0x44D1FC) = ecx;
    MEM32(0x44D190) = eax;
    goto loc_0001D765;

loc_0001D74D:
    ecx = MEM32(0x44D1D4);
    eax = MEM32(0x44D17C);
    ecx++;
    eax++;
    MEM32(0x44D1D4) = ecx;
    MEM32(0x44D17C) = eax;

loc_0001D765:
    SET_LO8(eax, MEM8(ebp + 0x44D01F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001D8A1; /* je: equal / zero */

loc_0001D773:
    esi = 0; /* xor self */
    goto loc_0001D780;

    /* nop */
    edi = edi;

loc_0001D780:
    edx = MEM32(esi * 8 + 0x39E884);
    eax = MEM32(esi * 8 + 0x39E880);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001D795:
    esp = esp + 8;
    if (CMP_EQ(ebp, eax)) goto loc_0001D7A4; /* je: equal / zero */

loc_0001D79C:
    esi++;
    if (CMP_L(esi, 0xA)) goto loc_0001D780; /* jl: less (signed <) */

loc_0001D7A2:
    goto loc_0001D7AB;

loc_0001D7A4:
    MEM8(esi + 0x44D0F0) = 1;

loc_0001D7AB:
    ecx = MEM32(esp + 0x40);
    eax = (uint32_t)(int32_t)SMEM8(ecx + ebp + 0x386);
    if (CMP_LE(eax, ebx)) goto loc_0001D8A1; /* jle: less or equal (signed <=) */

loc_0001D7BF:
    ecx = edi;
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001D831; /* je: equal / zero */

loc_0001D7C5:
    ecx--;
    if ((ecx == 0)) goto loc_0001D800; /* je: equal / zero */

loc_0001D7C8:
    ecx--;
    if ((ecx != 0)) goto loc_0001D8A1; /* jne: not equal / not zero */

loc_0001D7CF:
    MEM32(eax * 4 + 0x44D194) = MEM32(eax * 4 + 0x44D194) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D214) = MEM32(eax * 4 + 0x44D214) + 1;
    goto loc_0001D860;

loc_0001D800:
    MEM32(eax * 4 + 0x44D180) = MEM32(eax * 4 + 0x44D180) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D1EC) = MEM32(eax * 4 + 0x44D1EC) + 1;
    goto loc_0001D860;

loc_0001D831:
    MEM32(eax * 4 + 0x44D16C) = MEM32(eax * 4 + 0x44D16C) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D1C4) = MEM32(eax * 4 + 0x44D1C4) + 1;

loc_0001D860:
    if (CMP_NE(eax, 3)) goto loc_0001D8A1; /* jne: not equal / not zero */

loc_0001D865:
    MEM32(0x44D1BC) = MEM32(0x44D1BC) + 1;
    esi = 0; /* xor self */
    /* nop */

loc_0001D870:
    edx = MEM32(esi * 8 + 0x39E884);
    eax = MEM32(esi * 8 + 0x39E880);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001D885:
    esp = esp + 8;
    if (CMP_EQ(ebp, eax)) goto loc_0001D894; /* je: equal / zero */

loc_0001D88C:
    esi++;
    if (CMP_L(esi, 0xA)) goto loc_0001D870; /* jl: less (signed <) */

loc_0001D892:
    goto loc_0001D8A1;

loc_0001D894:
    MEM8(esi + 0x44D0FA) = 1;
    MEM32(0x44D168) = MEM32(0x44D168) + 1;

loc_0001D8A1:
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x14);
    eax++;
    esi = esi + 0x40;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = esi;
    if (CMP_L(eax, edx)) goto loc_0001D664; /* jl: less (signed <) */

loc_0001D8C4:
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x18);
    edx = edx + 0x18;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 4);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0001D640; /* jl: less (signed <) */

loc_0001D8E7:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x4D1FE8);
    edx = MEM32(ecx + 8);
    eax++;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0001D613; /* jl: less (signed <) */

loc_0001D901:
    edx = MEM32(0x4D1FE8);
    /* cmp MEM32(edx + 8), ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(MEM32(edx + 8), ebx)) goto loc_0001DB98; /* jle: less or equal (signed <=) */

loc_0001D914:
    goto loc_0001D920;

loc_0001D916:
    ebx = 0; /* xor self */
    goto loc_0001D920;

    /* nop */

loc_0001D920:
    eax = MEM32(0x4D1FE8);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    eax = ecx + edx * 8;
    /* cmp MEM32(eax + 4), ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(MEM32(eax + 4), ebx)) goto loc_0001DB7E; /* jle: less or equal (signed <=) */

loc_0001D940:
    MEM32(esp + 0x24) = 0;
    goto loc_0001D950;

    /* nop */

loc_0001D950:
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(eax);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ebp + ecx + 0x14);
    ebp = ebp + ecx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0001DB5B; /* jle: less or equal (signed <=) */

loc_0001D970:
    ebx = 0; /* xor self */

loc_0001D972:
    eax = MEM32(ebp + 0x10);
    eax = eax + ebx;
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    esi = 0; /* xor self */

loc_0001D982:
    edi = MEM32(esi * 8 + 0x39D870);
    if (CMP_NE(edi, ecx)) goto loc_0001D998; /* jne: not equal / not zero */

loc_0001D98D:
    edi = MEM32(esi * 8 + 0x39D874);
    if (CMP_EQ(edi, edx)) goto loc_0001D9A3; /* je: equal / zero */

loc_0001D998:
    esi++;
    if (CMP_L(esi, 0x64)) goto loc_0001D982; /* jl: less (signed <) */

loc_0001D99E:
    goto loc_0001DB44;

loc_0001D9A3:
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0001DB44; /* je: equal / zero */

loc_0001D9AC:
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    ecx = 0; /* xor self */

loc_0001D9B3:
    edi = MEM32(ecx * 8 + 0x39EBC0);
    if (CMP_NE(edi, edx)) goto loc_0001D9C9; /* jne: not equal / not zero */

loc_0001D9BE:
    edi = MEM32(ecx * 8 + 0x39EBC4);
    if (CMP_EQ(edi, eax)) goto loc_0001D9D4; /* je: equal / zero */

loc_0001D9C9:
    ecx++;
    if (CMP_L(ecx, 0x24)) goto loc_0001D9B3; /* jl: less (signed <) */

loc_0001D9CF:
    goto loc_0001DB44;

loc_0001D9D4:
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0001DB44; /* je: equal / zero */

loc_0001D9DD:
    edx = MEM32(ecx * 8 + 0x39EBC4);
    eax = MEM32(ecx * 8 + 0x39EBC0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0001D9F6:
    SET_LO8(eax, MEM8(esp + 0x34));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_0001DA19; /* je: equal / zero */

loc_0001DA01:
    if (CMP_EQ(LO8(eax), 0x45)) goto loc_0001DA12; /* je: equal / zero */

loc_0001DA05:
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0x55 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 0x55)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 3;
    goto loc_0001DA1E;

loc_0001DA12:
    ecx = 1;
    goto loc_0001DA1E;

loc_0001DA19:
    ecx = 2;

loc_0001DA1E:
    eax = ecx;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0001DA5F; /* je: equal / zero */

loc_0001DA25:
    eax--;
    if ((eax == 0)) goto loc_0001DA45; /* je: equal / zero */

loc_0001DA28:
    eax--;
    if ((eax != 0)) goto loc_0001DA77; /* jne: not equal / not zero */

loc_0001DA2B:
    edx = MEM32(0x44D238);
    eax = MEM32(0x44D1A4);
    edx++;
    eax++;
    MEM32(0x44D238) = edx;
    MEM32(0x44D1A4) = eax;
    goto loc_0001DA77;

loc_0001DA45:
    edx = MEM32(0x44D210);
    eax = MEM32(0x44D190);
    edx++;
    eax++;
    MEM32(0x44D210) = edx;
    MEM32(0x44D190) = eax;
    goto loc_0001DA77;

loc_0001DA5F:
    edx = MEM32(0x44D1E8);
    eax = MEM32(0x44D17C);
    edx++;
    eax++;
    MEM32(0x44D1E8) = edx;
    MEM32(0x44D17C) = eax;

loc_0001DA77:
    SET_LO8(eax, MEM8(esi + 0x44D068));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001DB44; /* je: equal / zero */

loc_0001DA85:
    edx = MEM32(esp + 0x40);
    eax = (uint32_t)(int32_t)SMEM8(esi + edx + 0x3CF);
    if (CMP_LE(eax & eax, 0)) goto loc_0001DB44; /* jle: less or equal (signed <=) */

loc_0001DA99:
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0001DB0A; /* je: equal / zero */

loc_0001DA9E:
    ecx--;
    if ((ecx == 0)) goto loc_0001DAD9; /* je: equal / zero */

loc_0001DAA1:
    ecx--;
    if ((ecx != 0)) goto loc_0001DB44; /* jne: not equal / not zero */

loc_0001DAA8:
    MEM32(eax * 4 + 0x44D194) = MEM32(eax * 4 + 0x44D194) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D228) = MEM32(eax * 4 + 0x44D228) + 1;
    goto loc_0001DB39;

loc_0001DAD9:
    MEM32(eax * 4 + 0x44D180) = MEM32(eax * 4 + 0x44D180) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D200) = MEM32(eax * 4 + 0x44D200) + 1;
    goto loc_0001DB39;

loc_0001DB0A:
    MEM32(eax * 4 + 0x44D16C) = MEM32(eax * 4 + 0x44D16C) + 1;
    MEM32(eax * 4 + 0x44D1A8) = MEM32(eax * 4 + 0x44D1A8) + 1;
    esi = MEM32(0x44D1B8);
    edx = MEM32(0x44D1C0);
    esi++;
    edx++;
    MEM32(0x44D1B8) = esi;
    MEM32(0x44D1C0) = edx;
    MEM32(eax * 4 + 0x44D1D8) = MEM32(eax * 4 + 0x44D1D8) + 1;

loc_0001DB39:
    if (CMP_NE(eax, 3)) goto loc_0001DB44; /* jne: not equal / not zero */

loc_0001DB3E:
    MEM32(0x44D1BC) = MEM32(0x44D1BC) + 1;

loc_0001DB44:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x14);
    eax++;
    ebx = ebx + 0x40;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0001D972; /* jl: less (signed <) */

loc_0001DB5B:
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 4);
    eax++;
    esi = esi + 0x18;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = esi;
    if (CMP_L(eax, edx)) goto loc_0001D950; /* jl: less (signed <) */

loc_0001DB7E:
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x4D1FE8);
    ecx = MEM32(edx + 8);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_0001D916; /* jl: less (signed <) */

loc_0001DB98:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}
