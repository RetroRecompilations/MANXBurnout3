#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00110420
 * Original: 0x00110420 - 0x00110ACA (1706 bytes, 449 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00110420:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    ecx = MEM32(0x3EBDCC);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ecx, eax)) goto loc_00110440; /* jne: not equal / not zero */

loc_0011043A:
    MEM32(0x3EBDCC) = edx;

loc_00110440:
    if (CMP_NE(MEM32(0x3EBDD4), eax)) goto loc_0011044E; /* jne: not equal / not zero */

loc_00110448:
    MEM32(0x3EBDD4) = edx;

loc_0011044E:
    if (CMP_NE(MEM32(0x3EBDD0), eax)) goto loc_0011045C; /* jne: not equal / not zero */

loc_00110456:
    MEM32(0x3EBDD0) = edx;

loc_0011045C:
    if (CMP_NE(MEM32(0x3EBDD8), eax)) goto loc_0011046A; /* jne: not equal / not zero */

loc_00110464:
    MEM32(0x3EBDD8) = edx;

loc_0011046A:
    if (CMP_NE(MEM32(0x3EBDDC), eax)) goto loc_00110478; /* jne: not equal / not zero */

loc_00110472:
    MEM32(0x3EBDDC) = edx;

loc_00110478:
    if (CMP_NE(MEM32(0x3EBE38), eax)) goto loc_00110486; /* jne: not equal / not zero */

loc_00110480:
    MEM32(0x3EBE38) = edx;

loc_00110486:
    if (CMP_NE(MEM32(0x3EBE08), eax)) goto loc_00110494; /* jne: not equal / not zero */

loc_0011048E:
    MEM32(0x3EBE08) = edx;

loc_00110494:
    if (CMP_NE(MEM32(0x3EBE10), eax)) goto loc_001104A2; /* jne: not equal / not zero */

loc_0011049C:
    MEM32(0x3EBE10) = edx;

loc_001104A2:
    if (CMP_NE(MEM32(0x3EBDE0), eax)) goto loc_001104B0; /* jne: not equal / not zero */

loc_001104AA:
    MEM32(0x3EBDE0) = edx;

loc_001104B0:
    if (CMP_NE(MEM32(0x3EBE0C), eax)) goto loc_001104BE; /* jne: not equal / not zero */

loc_001104B8:
    MEM32(0x3EBE0C) = edx;

loc_001104BE:
    if (CMP_NE(MEM32(0x3EBE14), eax)) goto loc_001104CC; /* jne: not equal / not zero */

loc_001104C6:
    MEM32(0x3EBE14) = edx;

loc_001104CC:
    if (CMP_NE(MEM32(0x3EBDE4), eax)) goto loc_001104DA; /* jne: not equal / not zero */

loc_001104D4:
    MEM32(0x3EBDE4) = edx;

loc_001104DA:
    if (CMP_NE(MEM32(0x3EBDF4), eax)) goto loc_001104E8; /* jne: not equal / not zero */

loc_001104E2:
    MEM32(0x3EBDF4) = edx;

loc_001104E8:
    if (CMP_NE(MEM32(0x3EBDF8), eax)) goto loc_001104F6; /* jne: not equal / not zero */

loc_001104F0:
    MEM32(0x3EBDF8) = edx;

loc_001104F6:
    if (CMP_NE(MEM32(0x3EBDFC), eax)) goto loc_00110504; /* jne: not equal / not zero */

loc_001104FE:
    MEM32(0x3EBDFC) = edx;

loc_00110504:
    if (CMP_NE(MEM32(0x3EBE04), eax)) goto loc_00110512; /* jne: not equal / not zero */

loc_0011050C:
    MEM32(0x3EBE04) = edx;

loc_00110512:
    if (CMP_NE(MEM32(0x3EBE00), eax)) goto loc_00110520; /* jne: not equal / not zero */

loc_0011051A:
    MEM32(0x3EBE00) = edx;

loc_00110520:
    if (CMP_NE(MEM32(0x3EBDE8), eax)) goto loc_0011052E; /* jne: not equal / not zero */

loc_00110528:
    MEM32(0x3EBDE8) = edx;

loc_0011052E:
    if (CMP_NE(MEM32(0x3EBDEC), eax)) goto loc_0011053C; /* jne: not equal / not zero */

loc_00110536:
    MEM32(0x3EBDEC) = edx;

loc_0011053C:
    if (CMP_NE(MEM32(0x3EBDF0), eax)) goto loc_0011054A; /* jne: not equal / not zero */

loc_00110544:
    MEM32(0x3EBDF0) = edx;

loc_0011054A:
    if (CMP_NE(MEM32(0x3EBE24), eax)) goto loc_00110558; /* jne: not equal / not zero */

loc_00110552:
    MEM32(0x3EBE24) = edx;

loc_00110558:
    if (CMP_NE(MEM32(0x3EBE18), eax)) goto loc_00110566; /* jne: not equal / not zero */

loc_00110560:
    MEM32(0x3EBE18) = edx;

loc_00110566:
    if (CMP_NE(MEM32(0x3EBE1C), eax)) goto loc_00110574; /* jne: not equal / not zero */

loc_0011056E:
    MEM32(0x3EBE1C) = edx;

loc_00110574:
    if (CMP_NE(MEM32(0x3EBE20), eax)) goto loc_00110582; /* jne: not equal / not zero */

loc_0011057C:
    MEM32(0x3EBE20) = edx;

loc_00110582:
    if (CMP_NE(MEM32(0x3EBE28), eax)) goto loc_00110590; /* jne: not equal / not zero */

loc_0011058A:
    MEM32(0x3EBE28) = edx;

loc_00110590:
    if (CMP_NE(MEM32(0x3EBE34), eax)) goto loc_0011059E; /* jne: not equal / not zero */

loc_00110598:
    MEM32(0x3EBE34) = edx;

loc_0011059E:
    if (CMP_NE(MEM32(0x3EBE2C), eax)) goto loc_001105AC; /* jne: not equal / not zero */

loc_001105A6:
    MEM32(0x3EBE2C) = edx;

loc_001105AC:
    if (CMP_NE(MEM32(0x3EBE30), eax)) goto loc_001105BA; /* jne: not equal / not zero */

loc_001105B4:
    MEM32(0x3EBE30) = edx;

loc_001105BA:
    eax = ebx + 0x1D848;
    ecx = 2;

loc_001105C5:
    esi = 0; /* xor self */
    edi = eax;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    eax = eax + 0x4AD0;
    ecx--;
    MEM32(edi + 0x14) = esi;
    if ((ecx != 0)) goto loc_001105C5; /* jne: not equal / not zero */

loc_001105E2:
    eax = ebx + 0x26DE8;
    ecx = 5;
    /* nop */

loc_001105F0:
    esi = 0; /* xor self */
    edi = eax;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    eax = eax + 0x1580;
    ecx--;
    MEM32(edi + 0x14) = esi;
    if ((ecx != 0)) goto loc_001105F0; /* jne: not equal / not zero */

loc_0011060D:
    eax = ebx + 0x2D968;
    ecx = 5;

loc_00110618:
    esi = 0; /* xor self */
    edi = eax;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    eax = eax + 0x1560;
    ecx--;
    MEM32(edi + 0x14) = esi;
    if ((ecx != 0)) goto loc_00110618; /* jne: not equal / not zero */

loc_00110635:
    eax = ebx + 0x34448;
    ecx = 0x40;

loc_00110640:
    esi = 0; /* xor self */
    edi = eax;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    eax = eax + 0x2430;
    ecx--;
    MEM32(edi + 0x14) = esi;
    if ((ecx != 0)) goto loc_00110640; /* jne: not equal / not zero */

loc_0011065D:
    MEM32(ebx + 0xE9CA8) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    MEM32(ebx + 0x1CB70) = edx;
    MEM32(ebx + 0x1CB74) = edx;
    MEM32(ebx + 0xE9C90) = edx;
    MEM32(ebx + 0xE6C80) = edx;
    MEM32(ebx + 0xE6C84) = edx;
    MEM32(ebx + 0xE6C88) = edx;
    MEM32(ebx + 0xE6C8C) = edx;
    ecx = 0x3960;
    edi = ebx + 0x70;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x3960;
    edi = ebx + 0xE5F0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0xC00;
    edi = ebx + 0xE6C90;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebx + 0x34B60;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x40;
    /* nop */

loc_001106D0:
    edi = MEM32(esp + 8);
    esi = edi + -5088;
    PUSH32(esp, 0); sub_00122710(); /* call 0x00122710 */

loc_001106DF:
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    edi = edi + 0xFFFFFF80u;
    ecx = 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = edx;
    ecx = 0x410;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x1040) = eax;
    MEM32(edx + 0x1044) = eax;
    MEM8(edx + 0x1048) = LO8(eax);
    MEM8(edx + 0x1049) = LO8(eax);
    MEM8(edx + 0x104B) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM8(edx + 0x104C) = 1;
    edx = edx + 0x2430;
    eax--;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_001106D0; /* jne: not equal / not zero */

loc_00110732:
    eax = 0; /* xor self */
    edi = ebx + 0xE6B80;
    ecx = 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebx + 0xE9C98) = eax;
    MEM32(ebx + 0xE9C9C) = eax;
    MEM32(ebx + 0xE9CA0) = eax;
    MEM32(ebx + 0xE9CA4) = eax;
    esi = ebx + 0xC4380;
    edi = 0x20;

loc_00110764:
    PUSH32(esp, 0); sub_00119F40(); /* call 0x00119F40 */

loc_00110769:
    esi = esi + 0x780;
    edi--;
    if ((edi != 0)) goto loc_00110764; /* jne: not equal / not zero */

loc_00110772:
    esi = ebx + 0xD3380;
    edi = 0x40;
    /* nop */

loc_00110780:
    PUSH32(esp, 0); sub_001068A0(); /* call 0x001068A0 */

loc_00110785:
    esi = esi + 0x4E0;
    edi--;
    if ((edi != 0)) goto loc_00110780; /* jne: not equal / not zero */

loc_0011078E:
    eax = 0; /* xor self */
    ecx = ebx;

loc_00110792:
    MEM8(ebx + eax + 0x60) = 0;
    edx = 0; /* xor self */
    esi = ecx;
    eax++;
    MEM32(esi) = edx;
    ecx = ecx + 0x10;
    /* cmp eax, 6 - flags set for next jcc */
    MEM16(esi + 4) = LO16(edx);
    if (CMP_L(eax, 6)) goto loc_00110792; /* jl: less (signed <) */

loc_001107AA:
    eax = MEM32(0x73A1C0);
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xE6C80) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0011080A; /* jle: less or equal (signed <=) */

loc_001107BB:
    ecx = ebx + 0x1CB80;
    esi = 0x73A1D0;
    MEM32(esp + 0xC) = ecx;
    /* nop */

loc_001107D0:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00111230(); /* call 0x00111230 */

loc_001107D9:
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x2440) = eax;
    edx = MEM32(ebx + 0x1CB70);
    edx++;
    eax = eax + 0x4AD0;
    MEM32(ebx + 0x1CB70) = edx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0xE6C80);
    edi++;
    esi = esi + 0x27E0;
    if (CMP_L(edi, eax)) goto loc_001107D0; /* jl: less (signed <) */

loc_0011080A:
    edx = MEM32(0x73A1C4);
    eax = edx;
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xE6C84) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_0011086A; /* jle: less or equal (signed <=) */

loc_0011081E:
    eax = ebx + 0x26120;
    esi = 0x73F190;
    MEM32(esp + 0xC) = eax;
    /* nop */

loc_00110830:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00111230(); /* call 0x00111230 */

loc_00110839:
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x2440) = eax;
    edx = MEM32(ebx + 0x1CB70);
    edx++;
    eax = eax + 0x1580;
    MEM32(ebx + 0x1CB70) = edx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0xE6C84);
    edi++;
    esi = esi + 0x2470;
    if (CMP_L(edi, eax)) goto loc_00110830; /* jl: less (signed <) */

loc_0011086A:
    ecx = MEM32(0x73A1C8);
    eax = ecx;
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xE6C88) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_001108D8; /* jle: less or equal (signed <=) */

loc_0011087E:
    edx = ebx + 0x2CCA0;
    esi = 0x74A7C0;
    MEM32(esp + 0xC) = edx;
    /* nop */

loc_00110890:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00111230(); /* call 0x00111230 */

loc_00110899:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x19BC);
    ecx = MEM32(eax * 4 + 0x572988);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x6F4) = eax;
    edx = MEM32(ebx + 0x1CB70);
    edx++;
    eax = eax + 0x1560;
    MEM32(ebx + 0x1CB70) = edx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0xE6C88);
    edi++;
    esi = esi + 0x1AB0;
    if (CMP_L(edi, eax)) goto loc_00110890; /* jl: less (signed <) */

loc_001108D8:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xB0), _icall_esp); /* indirect call */
    }

loc_001108EC:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00110A9D; /* jne: not equal / not zero */

loc_001108F4:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_001109B3; /* je: equal / zero */

loc_00110901:
    esi = MEM32(eax + 0x1B8);
    if (TEST_Z(esi, esi)) goto loc_001109B3; /* je: equal / zero */

loc_0011090F:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_00110919:
    if (CMP_EQ(eax, 6)) goto loc_0011094B; /* je: equal / zero */

loc_0011091E:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00110928:
    if (CMP_EQ(eax, 3)) goto loc_0011094B; /* je: equal / zero */

loc_0011092D:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_00110937:
    if (CMP_EQ(eax, 4)) goto loc_0011094B; /* je: equal / zero */

loc_0011093C:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00110946:
    if (CMP_NE(eax, 5)) goto loc_001109B3; /* jne: not equal / not zero */

loc_0011094B:
    esi = MEM32(0x731F90);
    eax = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(esi & esi, 0)) ? 1 : 0); /* setle */
    edi = 0x13;
    eax--;
    eax = eax & 0x667E90;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    if (TEST_S(ecx, ecx)) goto loc_001109A6; /* jl: less (signed <) */

loc_0011096E:
    eax = MEM32(0x7397EC);
    /* cmp eax, MEM32(0x7397F4) - flags set for next jcc */
    esi = MEM32(0x7397D4);
    if (CMP_EQ(eax, MEM32(0x7397F4))) goto loc_00110988; /* je: equal / zero */

loc_00110981:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    if (CMP_EQ(ecx, edx)) goto loc_001109A6; /* je: equal / zero */

loc_00110988:
    if (CMP_GE(ecx, esi)) goto loc_001109A6; /* jge: greater or equal (signed >=) */

loc_0011098C:
    ecx = MEM32(ecx * 4 + 0x739944);
    if (CMP_NE(MEM32(ecx), 2)) goto loc_001109A6; /* jne: not equal / not zero */

loc_00110998:
    if (TEST_Z(ecx, ecx)) goto loc_001109A6; /* je: equal / zero */

loc_0011099C:
    eax = MEM32(ecx + 4);
    if (CMP_LE(eax & eax, 0)) goto loc_001109A6; /* jle: less or equal (signed <=) */

loc_001109A3:
    eax--;
    goto loc_001109BF;

loc_001109A6:
    ecx = MEM32(0x7397B4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x54);
    eax--;
    goto loc_001109BF;

loc_001109B3:
    edx = MEM32(0x7397B4);
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x54);
    eax = 0; /* xor self */

loc_001109BF:
    /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_00110A9D; /* jle: less or equal (signed <=) */

loc_001109CB:
    ecx = MEM32(0x737688);
    MEM32(esp + 0xC) = edi;

loc_001109D5:
    SET_LO8(eax, MEM8(0x737686));
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00110A7E; /* jbe: below or equal (unsigned <=) */

loc_001109E4:
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(edi + edx));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00110A6E; /* jbe: below or equal (unsigned <=) */

loc_001109F4:
    eax = MEM32(0x73768C);
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx + edi * 4);
    ecx = eax + esi * 4;
    eax = MEM32(ebx + 0x1CB70);
    edx = eax + eax * 2;
    edx = edx << 4;
    eax = edx + ebx + 0x70;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax) = 5;
    edx = ZX16(MEM16(ecx));
    edx = edx << 6;
    edx = edx + MEM32(0x737678);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 2));
    edx = MEM32(0x7397B4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = ecx + MEM32(edx + 0x3C);
    MEM8(eax + 1) = 0;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 2) = 0;
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_00110A4B:
    ecx = MEM32(ebx + 0x1CB70);
    eax = MEM32(esp + 8);
    ecx++;
    MEM32(ebx + 0x1CB70) = ecx;
    ecx = MEM32(0x737688);
    edx = MEM32(ecx + eax * 4);
    eax = ZX8(MEM8(edx + edi));
    esi++;
    if (CMP_L(esi, eax)) goto loc_001109F4; /* jl: less (signed <) */

loc_00110A6E:
    edx = ZX8(MEM8(0x737686));
    edi++;
    if (CMP_L(edi, edx)) goto loc_001109E4; /* jl: less (signed <) */

loc_00110A7E:
    eax = MEM32(0x7397B4);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x54);
    eax = MEM32(esp + 8);
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    MEM32(esp + 8) = edx;
    if ((MEM32(esp + 0xC) != 0)) goto loc_001109D5; /* jne: not equal / not zero */

loc_00110A9D:
    eax = MEM32(ebx + 0x1CB70);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00110AC2; /* jle: less or equal (signed <=) */

loc_00110AA9:
    /* nop */

loc_00110AB0:
    eax = ebx;
    PUSH32(esp, 0); sub_00111AC0(); /* call 0x00111AC0 */

loc_00110AB7:
    eax = MEM32(ebx + 0x1CB70);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_00110AB0; /* jl: less (signed <) */

loc_00110AC2:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
