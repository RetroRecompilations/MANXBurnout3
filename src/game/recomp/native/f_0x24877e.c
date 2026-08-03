#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024877E
 * Original: 0x0024877E - 0x00248F22 (1956 bytes, 603 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024877E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0024877E:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x454;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(edx));
    ecx = 0; /* xor self */
    /* cmp LO16(ebx), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_00248F1C; /* je: equal / zero */

loc_002487A4:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_002487AB;

loc_002487A8:
    ecx = MEM32(ebp + -60);

loc_002487AB:
    PUSH32(esp, 2);
    POP32(esp, edi);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    if (CMP_L(MEM32(ebp + -20), 0)) goto loc_00248F1A; /* jl: less (signed <) */

loc_002487BB:
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    if (CMP_B(LO16(ebx), LO16(esi))) goto loc_002487D8; /* jb: below (unsigned <) */

loc_002487C3:
    if (CMP_A(LO16(ebx), 0x78)) goto loc_002487D8; /* ja: above (unsigned >) */

loc_002487C9:
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x3740C8);
    eax = eax & 0xF;
    goto loc_002487DA;

loc_002487D8:
    eax = 0; /* xor self */

loc_002487DA:
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x3740E8);
    PUSH32(esp, 7);
    eax = (uint32_t)((int32_t)eax >> 4);
    POP32(esp, ecx);
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -60) = eax;
    if (CMP_A(eax, ecx)) goto loc_00248F0B; /* ja: above (unsigned >) */

loc_002487F3:
    { uint32_t _jt = MEM32(eax * 4 + 0x248F22); /* switch: 8 entries, 8 targets */
    if (_jt == 0x002487FAu) goto loc_002487FA;
    if (_jt == 0x00248817u) goto loc_00248817;
    if (_jt == 0x00248861u) goto loc_00248861;
    if (_jt == 0x0024889Du) goto loc_0024889D;
    if (_jt == 0x002488A6u) goto loc_002488A6;
    if (_jt == 0x002488DFu) goto loc_002488DF;
    if (_jt == 0x00248994u) goto loc_00248994;
    if (_jt == 0x002489ACu) goto loc_002489AC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002487FA:
    eax = 0; /* xor self */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;
    goto loc_00248F0B;

loc_00248817:
    eax = ZX16(LO16(ebx));
    eax = eax - esi;
    if ((eax == 0)) goto loc_00248859; /* je: equal / zero */

loc_0024881E:
    eax = eax - 3;
    if ((eax == 0)) goto loc_00248850; /* je: equal / zero */

loc_00248823:
    eax = eax - 8;
    if ((eax == 0)) goto loc_00248847; /* je: equal / zero */

loc_00248828:
    eax = eax - edi;
    if ((eax == 0)) goto loc_0024883E; /* je: equal / zero */

loc_0024882C:
    eax = eax - 3;
    if ((eax != 0)) goto loc_00248F0B; /* jne: not equal / not zero */

loc_00248835:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_00248F0B;

loc_0024883E:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_00248F0B;

loc_00248847:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_00248F0B;

loc_00248850:
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_00248F0B;

loc_00248859:
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    goto loc_00248F0B;

loc_00248861:
    if (CMP_NE(LO16(ebx), 0x2A)) goto loc_00248888; /* jne: not equal / not zero */

loc_00248867:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00248F0B; /* jge: greater or equal (signed >=) */

loc_0024887C:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_00248F0B;

loc_00248888:
    eax = MEM32(ebp + -32);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_00248F0B;

loc_0024889D:
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_00248F0B;

loc_002488A6:
    if (CMP_NE(LO16(ebx), 0x2A)) goto loc_002488CA; /* jne: not equal / not zero */

loc_002488AC:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00248F0B; /* jge: greater or equal (signed >=) */

loc_002488C1:
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_00248F0B;

loc_002488CA:
    eax = MEM32(ebp + -8);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_00248F0B;

loc_002488DF:
    eax = ZX16(LO16(ebx));
    if (CMP_EQ(eax, 0x49)) goto loc_00248914; /* je: equal / zero */

loc_002488E7:
    if (CMP_EQ(eax, 0x68)) goto loc_0024890C; /* je: equal / zero */

loc_002488EC:
    if (CMP_EQ(eax, 0x6C)) goto loc_00248903; /* je: equal / zero */

loc_002488F1:
    if (CMP_NE(eax, 0x77)) goto loc_00248F0B; /* jne: not equal / not zero */

loc_002488FA:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_00248F0B;

loc_00248903:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_00248F0B;

loc_0024890C:
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    goto loc_00248F0B;

loc_00248914:
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    if (CMP_NE(LO16(eax), 0x36)) goto loc_00248937; /* jne: not equal / not zero */

loc_00248920:
    ecx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(ecx + 2), 0x34)) goto loc_00248937; /* jne: not equal / not zero */

loc_0024892A:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    goto loc_00248F0B;

loc_00248937:
    if (CMP_NE(LO16(eax), 0x33)) goto loc_00248954; /* jne: not equal / not zero */

loc_0024893D:
    ecx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(ecx + 2), 0x32)) goto loc_00248954; /* jne: not equal / not zero */

loc_00248947:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    goto loc_00248F0B;

loc_00248954:
    if (CMP_EQ(LO16(eax), 0x64)) goto loc_00248F0B; /* je: equal / zero */

loc_0024895E:
    if (CMP_EQ(LO16(eax), 0x69)) goto loc_00248F0B; /* je: equal / zero */

loc_00248968:
    if (CMP_EQ(LO16(eax), 0x6F)) goto loc_00248F0B; /* je: equal / zero */

loc_00248972:
    if (CMP_EQ(LO16(eax), 0x75)) goto loc_00248F0B; /* je: equal / zero */

loc_0024897C:
    if (CMP_EQ(LO16(eax), 0x78)) goto loc_00248F0B; /* je: equal / zero */

loc_00248986:
    if (CMP_EQ(LO16(eax), 0x58)) goto loc_00248F0B; /* je: equal / zero */

loc_00248990:
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_00248994:
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    esi = ebp + -20;
    MEM32(ebp + -28) = 1;
    PUSH32(esp, 0); sub_002486F7(); /* call 0x002486F7 */

loc_002489A7:
    goto loc_00248F0A;

loc_002489AC:
    eax = ZX16(LO16(ebx));
    if (CMP_G(eax, 0x67)) goto loc_00248C3E; /* jg: greater (signed >) */

loc_002489B8:
    if (CMP_GE(eax, 0x65)) goto loc_00248A65; /* jge: greater or equal (signed >=) */

loc_002489C1:
    if (CMP_G(eax, 0x58)) goto loc_00248AD6; /* jg: greater (signed >) */

loc_002489CA:
    if (CMP_EQ(eax, 0x58)) goto loc_00248CB2; /* je: equal / zero */

loc_002489D0:
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00248A88; /* je: equal / zero */

loc_002489D9:
    eax = eax - edi;
    if ((eax == 0)) goto loc_00248A5C; /* je: equal / zero */

loc_002489DD:
    eax = eax - edi;
    if ((eax == 0)) goto loc_00248A5C; /* je: equal / zero */

loc_002489E1:
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00248E00; /* jne: not equal / not zero */

loc_002489EA:
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_002489F5; /* jne: not equal / not zero */

loc_002489F2:
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_002489F5:
    edx = MEM32(ebp + -8);
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_00248A02; /* jne: not equal / not zero */

loc_002489FD:
    edx = 0x7FFFFFFF;

loc_00248A02:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00248C7D; /* je: equal / zero */

loc_00248A19:
    if (TEST_NZ(eax, eax)) goto loc_00248A24; /* jne: not equal / not zero */

loc_00248A1D:
    MEM32(ebp + -12) = 0x374144;

loc_00248A24:
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    /* test edx, edx - flags set for next jcc */
    eax = MEM32(ebp + -12);
    if (CMP_LE(edx & edx, 0)) goto loc_00248E00; /* jle: less or equal (signed <=) */

loc_00248A33:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00248E00; /* je: equal / zero */

loc_00248A3D:
    esi = MEM32(0x3C64E8);
    ecx = ZX8(LO8(ecx));
    if (TEST_Z(MEM8(esi + ecx * 2 + 1), 0x80)) goto loc_00248A4E; /* je: equal / zero */

loc_00248A4D:
    eax++;

loc_00248A4E:
    eax++;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    if (CMP_L(MEM32(ebp + -16), edx)) goto loc_00248A33; /* jl: less (signed <) */

loc_00248A57:
    goto loc_00248E00;

loc_00248A5C:
    MEM32(ebp + -64) = 1;
    ebx = ebx + esi;

loc_00248A65:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    edi = ebp + -1108;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_00248B7F; /* jge: greater or equal (signed >=) */

loc_00248A7C:
    MEM32(ebp + -8) = 6;
    goto loc_00248BC7;

loc_00248A88:
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_00248A93; /* jne: not equal / not zero */

loc_00248A90:
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_00248A93:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax + -4));
    esi = 0; /* xor self */
    esi++;
    /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -68) = eax;
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00248B15; /* je: equal / zero */

loc_00248AAD:
    PUSH32(esp, MEM32(0x3C64F0));
    MEM8(ebp + -40) = LO8(eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -1108;
    PUSH32(esp, eax);
    MEM8(ebp + -39) = 0;
    PUSH32(esp, 0); sub_0024B332(); /* call 0x0024B332 */

loc_00248ACA:
    esp = esp + 0xC;
    if (CMP_GE(eax & eax, 0)) goto loc_00248B1C; /* jge: greater or equal (signed >=) */

loc_00248AD1:
    MEM32(ebp + -52) = esi;
    goto loc_00248B1C;

loc_00248AD6:
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_00248B2D; /* je: equal / zero */

loc_00248ADB:
    eax = eax - 9;
    if ((eax == 0)) goto loc_00248A93; /* je: equal / zero */

loc_00248AE0:
    eax--;
    if ((eax != 0)) goto loc_00248E00; /* jne: not equal / not zero */

loc_00248AE7:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_00248AEB:
    MEM32(ebp + -16) = 0xA;

loc_00248AF2:
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    if (TEST_Z(esi, ebx)) goto loc_00248D22; /* je: equal / zero */

loc_00248B02:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00248D4A;

loc_00248B15:
    MEM16(ebp + -1108) = LO16(eax);

loc_00248B1C:
    eax = ebp + -1108;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = esi;
    goto loc_00248E00;

loc_00248B2D:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(eax, eax)) goto loc_00248B68; /* je: equal / zero */

loc_00248B3B:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00248B68; /* je: equal / zero */

loc_00248B42:
    /* test MEM8(ebp + -3), 8 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(MEM8(ebp + -3), 8)) goto loc_00248B5F; /* je: equal / zero */

loc_00248B4E:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -28) = 1;
    goto loc_00248DFD;

loc_00248B5F:
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    goto loc_00248DFD;

loc_00248B68:
    eax = 0x374144;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_00248B73:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00248B73; /* jne: not equal / not zero */

loc_00248B7A:
    goto loc_00248C37;

loc_00248B7F:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00248B90; /* jne: not equal / not zero */

loc_00248B81:
    if (CMP_NE(LO16(ebx), 0x67)) goto loc_00248BC7; /* jne: not equal / not zero */

loc_00248B87:
    MEM32(ebp + -8) = 1;
    goto loc_00248BC7;

loc_00248B90:
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00248B9D; /* jle: less or equal (signed <=) */

loc_00248B9A:
    MEM32(ebp + -8) = eax;

loc_00248B9D:
    esi = 0xA3;
    if (CMP_LE(MEM32(ebp + -8), esi)) goto loc_00248BC7; /* jle: less or equal (signed <=) */

loc_00248BA7:
    eax = MEM32(ebp + -8);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_00248BB5:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(ebp + -44) = eax;
    if (TEST_Z(eax, eax)) goto loc_00248BC4; /* je: equal / zero */

loc_00248BBD:
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_00248BC7;

loc_00248BC4:
    MEM32(ebp + -8) = esi;

loc_00248BC7:
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -64));
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -80) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -84) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C6630), _icall_esp); /* indirect call */
    }

loc_00248BF0:
    esi = MEM32(ebp + -4);
    esp = esp + 0x14;
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00248C0C; /* je: equal / zero */

loc_00248BFE:
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00248C0C; /* jne: not equal / not zero */

loc_00248C04:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C663C), _icall_esp); /* indirect call */
    }

loc_00248C0B:
    POP32(esp, ecx);

loc_00248C0C:
    if (CMP_NE(LO16(ebx), 0x67)) goto loc_00248C1E; /* jne: not equal / not zero */

loc_00248C12:
    if (TEST_NZ(esi, esi)) goto loc_00248C1E; /* jne: not equal / not zero */

loc_00248C16:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C6634), _icall_esp); /* indirect call */
    }

loc_00248C1D:
    POP32(esp, ecx);

loc_00248C1E:
    if (CMP_NE(MEM8(edi), 0x2D)) goto loc_00248C2B; /* jne: not equal / not zero */

loc_00248C23:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    MEM32(ebp + -12) = edi;

loc_00248C2B:
    eax = edi;
    edx = eax + 1;

loc_00248C30:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00248C30; /* jne: not equal / not zero */

loc_00248C37:
    eax = eax - edx;
    goto loc_00248DFD;

loc_00248C3E:
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_00248AE7; /* je: equal / zero */

loc_00248C47:
    eax = eax - 5;
    if ((eax == 0)) goto loc_00248CF8; /* je: equal / zero */

loc_00248C50:
    eax--;
    if ((eax == 0)) goto loc_00248CDE; /* je: equal / zero */

loc_00248C57:
    eax--;
    if ((eax == 0)) goto loc_00248CAB; /* je: equal / zero */

loc_00248C5A:
    eax = eax - 3;
    if ((eax == 0)) goto loc_002489F5; /* je: equal / zero */

loc_00248C63:
    eax = eax - edi;
    if ((eax == 0)) goto loc_00248AEB; /* je: equal / zero */

loc_00248C6B:
    eax = eax - 3;
    if ((eax != 0)) goto loc_00248E00; /* jne: not equal / not zero */

loc_00248C74:
    MEM32(ebp + -48) = 0x27;
    goto loc_00248CB5;

loc_00248C7D:
    if (TEST_NZ(eax, eax)) goto loc_00248C88; /* jne: not equal / not zero */

loc_00248C81:
    MEM32(ebp + -12) = 0x37414C;

loc_00248C88:
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = 1;
    goto loc_00248C9D;

loc_00248C94:
    edx--;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_00248CA1; /* je: equal / zero */

loc_00248C9B:
    eax = eax + edi;

loc_00248C9D:
    if (TEST_NZ(edx, edx)) goto loc_00248C94; /* jne: not equal / not zero */

loc_00248CA1:
    eax = eax - MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    goto loc_00248DFD;

loc_00248CAB:
    MEM32(ebp + -8) = 8;

loc_00248CB2:
    MEM32(ebp + -48) = ecx;

loc_00248CB5:
    /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_00248AF2; /* je: equal / zero */

loc_00248CC6:
    eax = MEM32(ebp + -48);
    eax = eax + 0x51;
    MEM16(ebp + -36) = 0x30;
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -24) = edi;
    goto loc_00248AF2;

loc_00248CDE:
    /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_00248AF2; /* je: equal / zero */

loc_00248CEF:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_00248AF2;

loc_00248CF8:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00248D11; /* je: equal / zero */

loc_00248D08:
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_00248D16;

loc_00248D11:
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_00248D16:
    MEM32(ebp + -52) = 1;
    goto loc_00248EF8;

loc_00248D22:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test LO8(ebx), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_00248D40; /* je: equal / zero */

loc_00248D2E:
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00248D3A; /* je: equal / zero */

loc_00248D33:
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_00248D37:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00248D4A;

loc_00248D3A:
    eax = ZX16(MEM16(eax + -4));
    goto loc_00248D37;

loc_00248D40:
    /* test LO8(ebx), 0x40 - flags set for next jcc */
    eax = MEM32(eax + -4);
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00248D37; /* jne: not equal / not zero */

loc_00248D48:
    edx = 0; /* xor self */

loc_00248D4A:
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00248D64; /* je: equal / zero */

loc_00248D4F:
    if (CMP_G(edx & edx, 0)) goto loc_00248D64; /* jg: greater (signed >) */

loc_00248D53:
    if (TEST_S(edx, edx)) goto loc_00248D59; /* jl: less (signed <) */

loc_00248D55:
    if (CMP_AE(eax & eax, 0)) goto loc_00248D64; /* jae: above or equal (unsigned >=) */

loc_00248D59:
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx + 0 + _cf; /* adc */
    edx = (uint32_t)(-(int32_t)edx);
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_00248D64:
    /* test MEM32(ebp + -4), esi - flags set for next jcc */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(MEM32(ebp + -4), esi)) goto loc_00248D6F; /* jne: not equal / not zero */

loc_00248D6D:
    edi = 0; /* xor self */

loc_00248D6F:
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_00248D7E; /* jge: greater or equal (signed >=) */

loc_00248D75:
    MEM32(ebp + -8) = 1;
    goto loc_00248D8F;

loc_00248D7E:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00248D8F; /* jle: less or equal (signed <=) */

loc_00248D8C:
    MEM32(ebp + -8) = eax;

loc_00248D8F:
    eax = ebx;
    eax = eax | edi;
    if ((eax != 0)) goto loc_00248D99; /* jne: not equal / not zero */

loc_00248D95:
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;

loc_00248D99:
    esi = ebp + -597;

loc_00248D9F:
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if (CMP_G(eax & eax, 0)) goto loc_00248DAF; /* jg: greater (signed >) */

loc_00248DA9:
    eax = ebx;
    eax = eax | edi;
    if ((eax == 0)) goto loc_00248DD3; /* je: equal / zero */

loc_00248DAF:
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024B1E0(); /* call 0x0024B1E0 */

loc_00248DBC:
    ecx = ecx + 0x30;
    /* cmp ecx, 0x39 - flags set for next jcc */
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(ecx, 0x39)) goto loc_00248DCE; /* jle: less or equal (signed <=) */

loc_00248DCB:
    ecx = ecx + MEM32(ebp + -48);

loc_00248DCE:
    MEM8(esi) = LO8(ecx);
    esi--;
    goto loc_00248D9F;

loc_00248DD3:
    eax = ebp + -597;
    eax = eax - esi;
    esi++;
    /* test MEM8(ebp + -3), 2 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(MEM8(ebp + -3), 2)) goto loc_00248E00; /* je: equal / zero */

loc_00248DE8:
    ecx = esi;
    if (CMP_NE(MEM8(ecx), 0x30)) goto loc_00248DF3; /* jne: not equal / not zero */

loc_00248DEF:
    if (TEST_NZ(eax, eax)) goto loc_00248E00; /* jne: not equal / not zero */

loc_00248DF3:
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;

loc_00248DFD:
    MEM32(ebp + -16) = eax;

loc_00248E00:
    if (CMP_NE(MEM32(ebp + -52), 0)) goto loc_00248EF8; /* jne: not equal / not zero */

loc_00248E0A:
    eax = MEM32(ebp + -4);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00248E3B; /* je: equal / zero */

loc_00248E11:
    if (TEST_Z(HI8(eax), 1)) goto loc_00248E1E; /* je: equal / zero */

loc_00248E16:
    MEM16(ebp + -36) = 0x2D;
    goto loc_00248E34;

loc_00248E1E:
    if (TEST_Z(LO8(eax), 1)) goto loc_00248E2A; /* je: equal / zero */

loc_00248E22:
    MEM16(ebp + -36) = 0x2B;
    goto loc_00248E34;

loc_00248E2A:
    if (TEST_Z(LO8(eax), 2)) goto loc_00248E3B; /* je: equal / zero */

loc_00248E2E:
    MEM16(ebp + -36) = 0x20;

loc_00248E34:
    MEM32(ebp + -24) = 1;

loc_00248E3B:
    ebx = MEM32(ebp + -32);
    ebx = ebx - MEM32(ebp + -24);
    ebx = ebx - MEM32(ebp + -16);
    if (TEST_NZ(MEM8(ebp + -4), 0xC)) goto loc_00248E5B; /* jne: not equal / not zero */

loc_00248E4A:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0024871C(); /* call 0x0024871C */

loc_00248E58:
    esp = esp + 0xC;

loc_00248E5B:
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    PUSH32(esp, 0); sub_00248741(); /* call 0x00248741 */

loc_00248E6C:
    /* test MEM8(ebp + -4), 8 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(MEM8(ebp + -4), 8)) goto loc_00248E88; /* je: equal / zero */

loc_00248E73:
    if (TEST_NZ(MEM8(ebp + -4), 4)) goto loc_00248E88; /* jne: not equal / not zero */

loc_00248E79:
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_0024871C(); /* call 0x0024871C */

loc_00248E85:
    esp = esp + 0xC;

loc_00248E88:
    if (CMP_NE(MEM32(ebp + -28), 0)) goto loc_00248ED2; /* jne: not equal / not zero */

loc_00248E8E:
    eax = MEM32(ebp + -16);
    if (CMP_LE(eax & eax, 0)) goto loc_00248ED2; /* jle: less or equal (signed <=) */

loc_00248E95:
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_00248E9B:
    PUSH32(esp, MEM32(0x3C64F0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B332(); /* call 0x0024B332 */

loc_00248EAE:
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00248EE1; /* jle: less or equal (signed <=) */

loc_00248EB8:
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    PUSH32(esp, 0); sub_002486F7(); /* call 0x002486F7 */

loc_00248EC6:
    edi = edi + MEM32(ebp + -72);
    /* cmp MEM32(ebp + -56), 0 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_G(MEM32(ebp + -56), 0)) goto loc_00248E9B; /* jg: greater (signed >) */

loc_00248ED0:
    goto loc_00248EE1;

loc_00248ED2:
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_00248741(); /* call 0x00248741 */

loc_00248EE0:
    POP32(esp, ecx);

loc_00248EE1:
    if (TEST_Z(MEM8(ebp + -4), 4)) goto loc_00248EF8; /* je: equal / zero */

loc_00248EE7:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0024871C(); /* call 0x0024871C */

loc_00248EF5:
    esp = esp + 0xC;

loc_00248EF8:
    if (CMP_EQ(MEM32(ebp + -44), 0)) goto loc_00248F0B; /* je: equal / zero */

loc_00248EFE:
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00248F06:
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;

loc_00248F0A:
    POP32(esp, ecx);

loc_00248F0B:
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_002487A8; /* jne: not equal / not zero */

loc_00248F1A:
    POP32(esp, edi);
    POP32(esp, esi);

loc_00248F1C:
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
