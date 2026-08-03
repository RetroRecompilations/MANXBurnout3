#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246622
 * Original: 0x00246622 - 0x00246D89 (1895 bytes, 607 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246622(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00246622:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x250;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -40) = ecx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00246D83; /* je: equal / zero */

loc_00246644:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_0024664D;

loc_0024664A:
    ecx = MEM32(ebp + -52);

loc_0024664D:
    edi++;
    /* cmp MEM32(ebp + -20), 0 - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (CMP_L(MEM32(ebp + -20), 0)) goto loc_00246D81; /* jl: less (signed <) */

loc_0024665B:
    if (CMP_L(LO8(ebx), 0x20)) goto loc_00246674; /* jl: less (signed <) */

loc_00246660:
    if (CMP_G(LO8(ebx), 0x78)) goto loc_00246674; /* jg: greater (signed >) */

loc_00246665:
    eax = SX8(LO8(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x3740C8);
    eax = eax & 0xF;
    goto loc_00246676;

loc_00246674:
    eax = 0; /* xor self */

loc_00246676:
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x3740E8);
    PUSH32(esp, 7);
    eax = (uint32_t)((int32_t)eax >> 4);
    POP32(esp, ecx);
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -52) = eax;
    if (CMP_A(eax, ecx)) goto loc_00246D74; /* ja: above (unsigned >) */

loc_0024668F:
    { uint32_t _jt = MEM32(eax * 4 + 0x246D89); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00246696u) goto loc_00246696;
    if (_jt == 0x002466B3u) goto loc_002466B3;
    if (_jt == 0x002466FFu) goto loc_002466FF;
    if (_jt == 0x0024673Au) goto loc_0024673A;
    if (_jt == 0x00246743u) goto loc_00246743;
    if (_jt == 0x0024677Bu) goto loc_0024677B;
    if (_jt == 0x00246814u) goto loc_00246814;
    if (_jt == 0x0024684Du) goto loc_0024684D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00246696:
    eax = 0; /* xor self */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = eax;
    goto loc_00246D74;

loc_002466B3:
    eax = SX8(LO8(ebx));
    eax = eax - 0x20;
    if ((eax == 0)) goto loc_002466F6; /* je: equal / zero */

loc_002466BB:
    eax = eax - 3;
    if ((eax == 0)) goto loc_002466ED; /* je: equal / zero */

loc_002466C0:
    eax = eax - 8;
    if ((eax == 0)) goto loc_002466E4; /* je: equal / zero */

loc_002466C5:
    eax--;
    eax--;
    if ((eax == 0)) goto loc_002466DB; /* je: equal / zero */

loc_002466C9:
    eax = eax - 3;
    if ((eax != 0)) goto loc_00246D74; /* jne: not equal / not zero */

loc_002466D2:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_00246D74;

loc_002466DB:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_00246D74;

loc_002466E4:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_00246D74;

loc_002466ED:
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_00246D74;

loc_002466F6:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    goto loc_00246D74;

loc_002466FF:
    if (CMP_NE(LO8(ebx), 0x2A)) goto loc_00246725; /* jne: not equal / not zero */

loc_00246704:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00246D74; /* jge: greater or equal (signed >=) */

loc_00246719:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_00246D74;

loc_00246725:
    eax = MEM32(ebp + -32);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_00246D74;

loc_0024673A:
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_00246D74;

loc_00246743:
    if (CMP_NE(LO8(ebx), 0x2A)) goto loc_00246766; /* jne: not equal / not zero */

loc_00246748:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00246D74; /* jge: greater or equal (signed >=) */

loc_0024675D:
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_00246D74;

loc_00246766:
    eax = MEM32(ebp + -8);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_00246D74;

loc_0024677B:
    if (CMP_EQ(LO8(ebx), 0x49)) goto loc_002467AE; /* je: equal / zero */

loc_00246780:
    if (CMP_EQ(LO8(ebx), 0x68)) goto loc_002467A5; /* je: equal / zero */

loc_00246785:
    if (CMP_EQ(LO8(ebx), 0x6C)) goto loc_0024679C; /* je: equal / zero */

loc_0024678A:
    if (CMP_NE(LO8(ebx), 0x77)) goto loc_00246D74; /* jne: not equal / not zero */

loc_00246793:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_00246D74;

loc_0024679C:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_00246D74;

loc_002467A5:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x20;
    goto loc_00246D74;

loc_002467AE:
    SET_LO8(eax, MEM8(edi));
    if (CMP_NE(LO8(eax), 0x36)) goto loc_002467C8; /* jne: not equal / not zero */

loc_002467B4:
    if (CMP_NE(MEM8(edi + 1), 0x34)) goto loc_002467C8; /* jne: not equal / not zero */

loc_002467BA:
    edi++;
    edi++;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    MEM32(ebp + 0xC) = edi;
    goto loc_00246D74;

loc_002467C8:
    if (CMP_NE(LO8(eax), 0x33)) goto loc_002467E0; /* jne: not equal / not zero */

loc_002467CC:
    if (CMP_NE(MEM8(edi + 1), 0x32)) goto loc_002467E0; /* jne: not equal / not zero */

loc_002467D2:
    edi++;
    edi++;
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    MEM32(ebp + 0xC) = edi;
    goto loc_00246D74;

loc_002467E0:
    if (CMP_EQ(LO8(eax), 0x64)) goto loc_00246D74; /* je: equal / zero */

loc_002467E8:
    if (CMP_EQ(LO8(eax), 0x69)) goto loc_00246D74; /* je: equal / zero */

loc_002467F0:
    if (CMP_EQ(LO8(eax), 0x6F)) goto loc_00246D74; /* je: equal / zero */

loc_002467F8:
    if (CMP_EQ(LO8(eax), 0x75)) goto loc_00246D74; /* je: equal / zero */

loc_00246800:
    if (CMP_EQ(LO8(eax), 0x78)) goto loc_00246D74; /* je: equal / zero */

loc_00246808:
    if (CMP_EQ(LO8(eax), 0x58)) goto loc_00246D74; /* je: equal / zero */

loc_00246810:
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;

loc_00246814:
    ecx = MEM32(0x3C64E8);
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    eax = ZX8(LO8(ebx));
    if (TEST_Z(MEM8(ecx + eax * 2 + 1), 0x80)) goto loc_0024683B; /* je: equal / zero */

loc_00246828:
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00246594(); /* call 0x00246594 */

loc_00246835:
    SET_LO8(ebx, MEM8(edi));
    edi++;
    MEM32(ebp + 0xC) = edi;

loc_0024683B:
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00246594(); /* call 0x00246594 */

loc_00246848:
    goto loc_00246D74;

loc_0024684D:
    eax = SX8(LO8(ebx));
    if (CMP_G(eax, 0x67)) goto loc_00246AAA; /* jg: greater (signed >) */

loc_00246859:
    if (CMP_GE(eax, 0x65)) goto loc_002468DD; /* jge: greater or equal (signed >=) */

loc_0024685E:
    if (CMP_G(eax, 0x58)) goto loc_0024693E; /* jg: greater (signed >) */

loc_00246867:
    if (CMP_EQ(eax, 0x58)) goto loc_00246B2A; /* je: equal / zero */

loc_0024686D:
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00246900; /* je: equal / zero */

loc_00246876:
    eax--;
    eax--;
    if ((eax == 0)) goto loc_002468D3; /* je: equal / zero */

loc_0024687A:
    eax--;
    eax--;
    if ((eax == 0)) goto loc_002468D3; /* je: equal / zero */

loc_0024687E:
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00246C72; /* jne: not equal / not zero */

loc_00246887:
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_00246893; /* jne: not equal / not zero */

loc_0024688F:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_00246893:
    ecx = MEM32(ebp + -8);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_002468A0; /* jne: not equal / not zero */

loc_0024689B:
    ecx = 0x7FFFFFFF;

loc_002468A0:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test MEM16(ebp + -4), 0x810 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(MEM16(ebp + -4), 0x810)) goto loc_00246B00; /* je: equal / zero */

loc_002468B9:
    if (TEST_NZ(eax, eax)) goto loc_002468C4; /* jne: not equal / not zero */

loc_002468BD:
    MEM32(ebp + -12) = 0x37414C;

loc_002468C4:
    eax = MEM32(ebp + -12);
    MEM32(ebp + -36) = 1;
    goto loc_00246AF2;

loc_002468D3:
    MEM32(ebp + -56) = 1;
    SET_LO8(ebx, LO8(ebx) + 0x20);

loc_002468DD:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    edi = ebp + -592;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_002469ED; /* jge: greater or equal (signed >=) */

loc_002468F4:
    MEM32(ebp + -8) = 6;
    goto loc_00246A34;

loc_00246900:
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_0024690C; /* jne: not equal / not zero */

loc_00246908:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_0024690C:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test MEM16(ebp + -4), 0x810 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(MEM16(ebp + -4), 0x810)) goto loc_0024697D; /* je: equal / zero */

loc_0024691B:
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    PUSH32(esp, eax);
    eax = ebp + -592;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B1B3(); /* call 0x0024B1B3 */

loc_0024692C:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0024698D; /* jge: greater or equal (signed >=) */

loc_00246935:
    MEM32(ebp + -48) = 1;
    goto loc_0024698D;

loc_0024693E:
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_0024699B; /* je: equal / zero */

loc_00246943:
    eax = eax - 9;
    if ((eax == 0)) goto loc_0024690C; /* je: equal / zero */

loc_00246948:
    eax--;
    if ((eax != 0)) goto loc_00246C72; /* jne: not equal / not zero */

loc_0024694F:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_00246953:
    MEM32(ebp + -16) = 0xA;

loc_0024695A:
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    if (TEST_Z(esi, ebx)) goto loc_00246B9A; /* je: equal / zero */

loc_0024696A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00246BC2;

loc_0024697D:
    SET_LO8(eax, MEM8(eax + -4));
    MEM8(ebp + -592) = LO8(eax);
    MEM32(ebp + -16) = 1;

loc_0024698D:
    eax = ebp + -592;
    MEM32(ebp + -12) = eax;
    goto loc_00246C72;

loc_0024699B:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(eax, eax)) goto loc_002469D6; /* je: equal / zero */

loc_002469A9:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_002469D6; /* je: equal / zero */

loc_002469B0:
    /* test MEM8(ebp + -3), 8 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(MEM8(ebp + -3), 8)) goto loc_002469CD; /* je: equal / zero */

loc_002469BC:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -36) = 1;
    goto loc_00246C6F;

loc_002469CD:
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    goto loc_00246C6F;

loc_002469D6:
    eax = 0x374144;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_002469E1:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002469E1; /* jne: not equal / not zero */

loc_002469E8:
    goto loc_00246AA3;

loc_002469ED:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002469FD; /* jne: not equal / not zero */

loc_002469EF:
    if (CMP_NE(LO8(ebx), 0x67)) goto loc_00246A34; /* jne: not equal / not zero */

loc_002469F4:
    MEM32(ebp + -8) = 1;
    goto loc_00246A34;

loc_002469FD:
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00246A0A; /* jle: less or equal (signed <=) */

loc_00246A07:
    MEM32(ebp + -8) = eax;

loc_00246A0A:
    esi = 0xA3;
    if (CMP_LE(MEM32(ebp + -8), esi)) goto loc_00246A34; /* jle: less or equal (signed <=) */

loc_00246A14:
    eax = MEM32(ebp + -8);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_00246A22:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(ebp + -40) = eax;
    if (TEST_Z(eax, eax)) goto loc_00246A31; /* je: equal / zero */

loc_00246A2A:
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_00246A34;

loc_00246A31:
    MEM32(ebp + -8) = esi;

loc_00246A34:
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -56));
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -68) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -72) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C6630), _icall_esp); /* indirect call */
    }

loc_00246A5D:
    esi = MEM32(ebp + -4);
    esp = esp + 0x14;
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00246A79; /* je: equal / zero */

loc_00246A6B:
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00246A79; /* jne: not equal / not zero */

loc_00246A71:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C663C), _icall_esp); /* indirect call */
    }

loc_00246A78:
    POP32(esp, ecx);

loc_00246A79:
    if (CMP_NE(LO8(ebx), 0x67)) goto loc_00246A8A; /* jne: not equal / not zero */

loc_00246A7E:
    if (TEST_NZ(esi, esi)) goto loc_00246A8A; /* jne: not equal / not zero */

loc_00246A82:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x3C6634), _icall_esp); /* indirect call */
    }

loc_00246A89:
    POP32(esp, ecx);

loc_00246A8A:
    if (CMP_NE(MEM8(edi), 0x2D)) goto loc_00246A97; /* jne: not equal / not zero */

loc_00246A8F:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    MEM32(ebp + -12) = edi;

loc_00246A97:
    eax = edi;
    edx = eax + 1;

loc_00246A9C:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00246A9C; /* jne: not equal / not zero */

loc_00246AA3:
    eax = eax - edx;
    goto loc_00246C6F;

loc_00246AAA:
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_0024694F; /* je: equal / zero */

loc_00246AB3:
    eax = eax - 5;
    if ((eax == 0)) goto loc_00246B70; /* je: equal / zero */

loc_00246ABC:
    eax--;
    if ((eax == 0)) goto loc_00246B56; /* je: equal / zero */

loc_00246AC3:
    eax--;
    if ((eax == 0)) goto loc_00246B23; /* je: equal / zero */

loc_00246AC6:
    eax = eax - 3;
    if ((eax == 0)) goto loc_00246893; /* je: equal / zero */

loc_00246ACF:
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00246953; /* je: equal / zero */

loc_00246AD7:
    eax = eax - 3;
    if ((eax != 0)) goto loc_00246C72; /* jne: not equal / not zero */

loc_00246AE0:
    MEM32(ebp + -44) = 0x27;
    goto loc_00246B2D;

loc_00246AE9:
    ecx--;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_00246AF6; /* je: equal / zero */

loc_00246AF0:
    eax++;
    eax++;

loc_00246AF2:
    if (TEST_NZ(ecx, ecx)) goto loc_00246AE9; /* jne: not equal / not zero */

loc_00246AF6:
    eax = eax - MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    goto loc_00246C6F;

loc_00246B00:
    if (TEST_NZ(eax, eax)) goto loc_00246B0B; /* jne: not equal / not zero */

loc_00246B04:
    MEM32(ebp + -12) = 0x374144;

loc_00246B0B:
    eax = MEM32(ebp + -12);
    goto loc_00246B17;

loc_00246B10:
    ecx--;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00246B1B; /* je: equal / zero */

loc_00246B16:
    eax++;

loc_00246B17:
    if (TEST_NZ(ecx, ecx)) goto loc_00246B10; /* jne: not equal / not zero */

loc_00246B1B:
    eax = eax - MEM32(ebp + -12);
    goto loc_00246C6F;

loc_00246B23:
    MEM32(ebp + -8) = 8;

loc_00246B2A:
    MEM32(ebp + -44) = ecx;

loc_00246B2D:
    /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_0024695A; /* je: equal / zero */

loc_00246B3E:
    SET_LO8(eax, MEM8(ebp + -44));
    SET_LO8(eax, LO8(eax) + 0x51);
    MEM8(ebp + -24) = 0x30;
    MEM8(ebp + -23) = LO8(eax);
    MEM32(ebp + -28) = 2;
    goto loc_0024695A;

loc_00246B56:
    /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_0024695A; /* je: equal / zero */

loc_00246B67:
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_0024695A;

loc_00246B70:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00246B89; /* je: equal / zero */

loc_00246B80:
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_00246B8E;

loc_00246B89:
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_00246B8E:
    MEM32(ebp + -48) = 1;
    goto loc_00246D61;

loc_00246B9A:
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    /* test LO8(ebx), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_00246BB8; /* je: equal / zero */

loc_00246BA6:
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00246BB2; /* je: equal / zero */

loc_00246BAB:
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_00246BAF:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00246BC2;

loc_00246BB2:
    eax = ZX16(MEM16(eax + -4));
    goto loc_00246BAF;

loc_00246BB8:
    /* test LO8(ebx), 0x40 - flags set for next jcc */
    eax = MEM32(eax + -4);
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00246BAF; /* jne: not equal / not zero */

loc_00246BC0:
    edx = 0; /* xor self */

loc_00246BC2:
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00246BDC; /* je: equal / zero */

loc_00246BC7:
    if (CMP_G(edx & edx, 0)) goto loc_00246BDC; /* jg: greater (signed >) */

loc_00246BCB:
    if (TEST_S(edx, edx)) goto loc_00246BD1; /* jl: less (signed <) */

loc_00246BCD:
    if (CMP_AE(eax & eax, 0)) goto loc_00246BDC; /* jae: above or equal (unsigned >=) */

loc_00246BD1:
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx + 0 + _cf; /* adc */
    edx = (uint32_t)(-(int32_t)edx);
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_00246BDC:
    /* test MEM32(ebp + -4), esi - flags set for next jcc */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(MEM32(ebp + -4), esi)) goto loc_00246BE7; /* jne: not equal / not zero */

loc_00246BE5:
    edi = 0; /* xor self */

loc_00246BE7:
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_00246BF6; /* jge: greater or equal (signed >=) */

loc_00246BED:
    MEM32(ebp + -8) = 1;
    goto loc_00246C07;

loc_00246BF6:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00246C07; /* jle: less or equal (signed <=) */

loc_00246C04:
    MEM32(ebp + -8) = eax;

loc_00246C07:
    eax = ebx;
    eax = eax | edi;
    if ((eax != 0)) goto loc_00246C11; /* jne: not equal / not zero */

loc_00246C0D:
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_00246C11:
    esi = ebp + -81;

loc_00246C14:
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if (CMP_G(eax & eax, 0)) goto loc_00246C24; /* jg: greater (signed >) */

loc_00246C1E:
    eax = ebx;
    eax = eax | edi;
    if ((eax == 0)) goto loc_00246C48; /* je: equal / zero */

loc_00246C24:
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024B1E0(); /* call 0x0024B1E0 */

loc_00246C31:
    ecx = ecx + 0x30;
    /* cmp ecx, 0x39 - flags set for next jcc */
    MEM32(ebp + -60) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(ecx, 0x39)) goto loc_00246C43; /* jle: less or equal (signed <=) */

loc_00246C40:
    ecx = ecx + MEM32(ebp + -44);

loc_00246C43:
    MEM8(esi) = LO8(ecx);
    esi--;
    goto loc_00246C14;

loc_00246C48:
    eax = ebp + -81;
    eax = eax - esi;
    esi++;
    /* test MEM8(ebp + -3), 2 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(MEM8(ebp + -3), 2)) goto loc_00246C72; /* je: equal / zero */

loc_00246C5A:
    ecx = esi;
    if (CMP_NE(MEM8(ecx), 0x30)) goto loc_00246C65; /* jne: not equal / not zero */

loc_00246C61:
    if (TEST_NZ(eax, eax)) goto loc_00246C72; /* jne: not equal / not zero */

loc_00246C65:
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;

loc_00246C6F:
    MEM32(ebp + -16) = eax;

loc_00246C72:
    if (CMP_NE(MEM32(ebp + -48), 0)) goto loc_00246D61; /* jne: not equal / not zero */

loc_00246C7C:
    ebx = MEM32(ebp + -4);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00246CAA; /* je: equal / zero */

loc_00246C84:
    if (TEST_Z(HI8(ebx), 1)) goto loc_00246C8F; /* je: equal / zero */

loc_00246C89:
    MEM8(ebp + -24) = 0x2D;
    goto loc_00246CA3;

loc_00246C8F:
    if (TEST_Z(LO8(ebx), 1)) goto loc_00246C9A; /* je: equal / zero */

loc_00246C94:
    MEM8(ebp + -24) = 0x2B;
    goto loc_00246CA3;

loc_00246C9A:
    if (TEST_Z(LO8(ebx), 2)) goto loc_00246CAA; /* je: equal / zero */

loc_00246C9F:
    MEM8(ebp + -24) = 0x20;

loc_00246CA3:
    MEM32(ebp + -28) = 1;

loc_00246CAA:
    esi = MEM32(ebp + -32);
    esi = esi - MEM32(ebp + -28);
    esi = esi - MEM32(ebp + -16);
    if (TEST_NZ(LO8(ebx), 0xC)) goto loc_00246CC9; /* jne: not equal / not zero */

loc_00246CB8:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002465C7(); /* call 0x002465C7 */

loc_00246CC6:
    esp = esp + 0xC;

loc_00246CC9:
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_002465EB(); /* call 0x002465EB */

loc_00246CDA:
    /* test LO8(ebx), 8 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(LO8(ebx), 8)) goto loc_00246CF4; /* je: equal / zero */

loc_00246CE0:
    if (TEST_NZ(LO8(ebx), 4)) goto loc_00246CF4; /* jne: not equal / not zero */

loc_00246CE5:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_002465C7(); /* call 0x002465C7 */

loc_00246CF1:
    esp = esp + 0xC;

loc_00246CF4:
    if (CMP_EQ(MEM32(ebp + -36), 0)) goto loc_00246D3B; /* je: equal / zero */

loc_00246CFA:
    if (CMP_LE(MEM32(ebp + -16), 0)) goto loc_00246D3B; /* jle: less or equal (signed <=) */

loc_00246D00:
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -60) = eax;

loc_00246D09:
    MEM32(ebp + -60) = MEM32(ebp + -60) - 1;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B1B3(); /* call 0x0024B1B3 */

loc_00246D1B:
    ebx++;
    POP32(esp, ecx);
    ebx++;
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_00246D4A; /* jle: less or equal (signed <=) */

loc_00246D23:
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -20;
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_002465EB(); /* call 0x002465EB */

loc_00246D32:
    /* cmp MEM32(ebp + -60), 0 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(MEM32(ebp + -60), 0)) goto loc_00246D09; /* jne: not equal / not zero */

loc_00246D39:
    goto loc_00246D4A;

loc_00246D3B:
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_002465EB(); /* call 0x002465EB */

loc_00246D49:
    POP32(esp, ecx);

loc_00246D4A:
    if (TEST_Z(MEM8(ebp + -4), 4)) goto loc_00246D61; /* je: equal / zero */

loc_00246D50:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002465C7(); /* call 0x002465C7 */

loc_00246D5E:
    esp = esp + 0xC;

loc_00246D61:
    if (CMP_EQ(MEM32(ebp + -40), 0)) goto loc_00246D74; /* je: equal / zero */

loc_00246D67:
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00246D6F:
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    POP32(esp, ecx);

loc_00246D74:
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, MEM8(edi));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0024664A; /* jne: not equal / not zero */

loc_00246D81:
    POP32(esp, edi);
    POP32(esp, esi);

loc_00246D83:
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
