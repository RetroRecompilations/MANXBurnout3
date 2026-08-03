#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D5707
 * Original: 0x001D5707 - 0x001D5E66 (1887 bytes, 563 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5707(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5707:
    PUSH32(esp, 0x180);
    PUSH32(esp, 0x36BFA8);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D5716:
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -136) = ebx;
    MEM8(ebp + -26) = 0;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx | MEM32(esi + 0x18);
    MEM32(ebp + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D5736; /* jne: not equal / not zero */

loc_001D5735:
    eax++;

loc_001D5736:
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + -32) = eax;
    edi = eax;
    edi = edi >> 4;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_001D5760; /* jne: not equal / not zero */

loc_001D5750:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_001D575C:
    MEM8(ebp + -26) = 1;

loc_001D5760:
    if (CMP_AE(edi, 0x80)) goto loc_001D58FD; /* jae: above or equal (unsigned >=) */

loc_001D576C:
    eax = esi + edi * 8 + 0x180;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_001D5802; /* je: equal / zero */

loc_001D577E:
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(edx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -288) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -316) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    if (CMP_NE(ecx, edi)) goto loc_001D57DE; /* jne: not equal / not zero */

loc_001D57A8:
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -144) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -240) = edi;
    ecx = MEM32(ebp + -144);
    ecx = ecx + esi + 0x160;
    MEM32(ebp + -76) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -76);
    MEM8(edi) = LO8(ecx);

loc_001D57DE:
    ecx = MEM32(ebp + -40);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    edx = edx & 0x10;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 5) = LO8(edx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    goto loc_001D5CF2;

loc_001D5802:
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = edx >> 5;
    MEM32(ebp + -160) = edx;
    edi = esi + edx * 4 + 0x160;
    MEM32(ebp + -48) = edi;
    ecx = ecx & 0x1F;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    eax--;
    eax = ~eax;
    eax = eax & MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;
    edx = edx - 0;
    if ((edx == 0)) goto loc_001D5843; /* je: equal / zero */

loc_001D5835:
    edx--;
    if ((edx == 0)) goto loc_001D585A; /* je: equal / zero */

loc_001D5838:
    edx--;
    if ((edx == 0)) goto loc_001D5871; /* je: equal / zero */

loc_001D583B:
    edx--;
    if ((edx == 0)) goto loc_001D5888; /* je: equal / zero */

loc_001D583E:
    goto loc_001D5906;

loc_001D5843:
    if (TEST_Z(eax, eax)) goto loc_001D584F; /* je: equal / zero */

loc_001D5847:
    edi = esi + 0x180;
    goto loc_001D5892;

loc_001D584F:
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001D585A:
    if (TEST_Z(eax, eax)) goto loc_001D5866; /* je: equal / zero */

loc_001D585E:
    edi = esi + 0x280;
    goto loc_001D5892;

loc_001D5866:
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001D5871:
    if (TEST_Z(eax, eax)) goto loc_001D587D; /* je: equal / zero */

loc_001D5875:
    edi = esi + 0x380;
    goto loc_001D5892;

loc_001D587D:
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001D5888:
    if (TEST_Z(eax, eax)) goto loc_001D5906; /* je: equal / zero */

loc_001D588C:
    edi = esi + 0x480;

loc_001D5892:
    MEM32(ebp + -44) = edi;
    ecx = eax;
    PUSH32(esp, 0); sub_001D68C0(); /* call 0x001D68C0 */

loc_001D589C:
    eax = SX8(LO8(eax));
    eax = edi + eax * 8;
    MEM32(ebp + -44) = eax;
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -304) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -168) = edx;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_001D5981; /* jne: not equal / not zero */

loc_001D58CD:
    ecx = ZX16(MEM16(eax));
    edx = ecx;
    edx = edx >> 3;
    MEM32(ebp + -248) = edx;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -176) = edi;
    esi = edx + esi + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    ecx = ecx ^ edi;
    MEM8(esi) = LO8(ecx);
    goto loc_001D5981;

loc_001D58FD:
    if (CMP_A(edi, MEM32(esi + 0x1C))) goto loc_001D5D41; /* ja: above (unsigned >) */

loc_001D5906:
    edx = esi + 0x180;
    MEM32(ebp + -44) = edx;
    eax = MEM32(edx + 4);
    MEM32(ebp + -68) = eax;
    if (CMP_EQ(edx, eax)) goto loc_001D5956; /* je: equal / zero */

loc_001D5919:
    eax = eax + 0xFFFFFFF8u;
    MEM32(ebp + -52) = eax;
    eax = ZX16(MEM16(eax));
    if (CMP_B(eax, MEM32(ebp + -40))) goto loc_001D5956; /* jb: below (unsigned <) */

loc_001D5927:
    ecx = MEM32(edx);

loc_001D5929:
    MEM32(ebp + -68) = ecx;
    if (CMP_EQ(edx, ecx)) goto loc_001D5956; /* je: equal / zero */

loc_001D5930:
    eax = ecx + -8;
    MEM32(ebp + -52) = eax;
    esi = ZX16(MEM16(eax));
    if (CMP_B(esi, MEM32(ebp + -40))) goto loc_001D5952; /* jb: below (unsigned <) */

loc_001D593E:
    ecx = MEM32(eax + 8);
    MEM32(ebp + -148) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -184) = edx;
    goto loc_001D597C;

loc_001D5952:
    ecx = MEM32(ecx);
    goto loc_001D5929;

loc_001D5956:
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D4EB2(); /* call 0x001D4EB2 */

loc_001D595F:
    MEM32(ebp + -52) = eax;
    if (TEST_Z(eax, eax)) goto loc_001D5D35; /* je: equal / zero */

loc_001D596A:
    ecx = MEM32(eax + 8);
    MEM32(ebp + -256) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -192) = edx;

loc_001D597C:
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;

loc_001D5981:
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(ecx);
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    MEM8(eax + 5) = 1;
    edx = ZX16(MEM16(eax));
    ecx = MEM32(ebp + -40);
    edx = edx - ecx;
    MEM32(ebp + -104) = edx;
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    if (TEST_Z(edx, edx)) goto loc_001D5CE0; /* je: equal / zero */

loc_001D59B7:
    if (CMP_NE(edx, 1)) goto loc_001D59D5; /* jne: not equal / not zero */

loc_001D59BC:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    ecx++;
    MEM16(eax) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 6));
    ecx = ecx + 0x10;
    MEM8(eax + 6) = LO8(ecx);
    goto loc_001D5CE0;

loc_001D59D5:
    esi = MEM32(ebp + -40);
    esi = esi << 4;
    esi = esi + eax;
    MEM32(ebp + -320) = esi;
    SET_LO8(ecx, MEM8(ebp + -25));
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(edi, MEM16(ebp + -40));
    MEM16(esi + 2) = LO16(edi);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 4) = LO8(eax);
    MEM16(esi) = LO16(edx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_001D5ABE; /* je: equal / zero */

loc_001D5A03:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_001D5A73; /* jae: above or equal (unsigned >=) */

loc_001D5A15:
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -200) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_001D5A5F; /* jne: not equal / not zero */

loc_001D5A29:
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -132) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -264) = eax;
    ecx = MEM32(ebp + -132);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -100) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -100);
    MEM8(eax) = LO8(ecx);

loc_001D5A5F:
    MEM32(ebp + -208) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -296) = ecx;
    goto loc_001D5C70;

loc_001D5A73:
    ecx = ebx + 0x180;
    MEM32(ebp + -216) = ecx;
    eax = MEM32(ecx);

loc_001D5A81:
    MEM32(ebp + -124) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001D5A9A; /* je: equal / zero */

loc_001D5A88:
    edi = eax + -8;
    MEM32(ebp + -272) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_001D5A9A; /* jbe: below or equal (unsigned <=) */

loc_001D5A96:
    eax = MEM32(eax);
    goto loc_001D5A81;

loc_001D5A9A:
    MEM32(ebp + -224) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -312) = edi;

loc_001D5AA9:
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(eax + 4) = ecx;

loc_001D5AB6:
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + edx;
    goto loc_001D5CC5;

loc_001D5ABE:
    eax = edx;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -232) = eax;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), 1)) goto loc_001D5B86; /* je: equal / zero */

loc_001D5AD7:
    MEM16(eax + 2) = LO16(edx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_001D5B4B; /* jae: above or equal (unsigned >=) */

loc_001D5AED:
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -280) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_001D5B37; /* jne: not equal / not zero */

loc_001D5B01:
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -108) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -152) = eax;
    ecx = MEM32(ebp + -108);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -140) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -140);
    MEM8(eax) = LO8(ecx);

loc_001D5B37:
    MEM32(ebp + -156) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -164) = ecx;
    goto loc_001D5C70;

loc_001D5B4B:
    ecx = ebx + 0x180;
    MEM32(ebp + -172) = ecx;
    eax = MEM32(ecx);

loc_001D5B59:
    MEM32(ebp + -116) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001D5B72; /* je: equal / zero */

loc_001D5B60:
    edi = eax + -8;
    MEM32(ebp + -180) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_001D5B72; /* jbe: below or equal (unsigned <=) */

loc_001D5B6E:
    eax = MEM32(eax);
    goto loc_001D5B59;

loc_001D5B72:
    MEM32(ebp + -188) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -196) = edi;
    goto loc_001D5AA9;

loc_001D5B86:
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -204) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -212) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    if (CMP_NE(ecx, edi)) goto loc_001D5BDE; /* jne: not equal / not zero */

loc_001D5BA4:
    SET_LO16(ecx, MEM16(eax));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D5BDE; /* jae: above or equal (unsigned >=) */

loc_001D5BAE:
    ecx = ZX16(LO16(ecx));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -80) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -220) = edi;
    ecx = MEM32(ebp + -80);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -96) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -96);
    MEM8(edi) = LO8(ecx);

loc_001D5BDE:
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    eax = ZX16(MEM16(eax));
    edx = edx + eax;
    MEM32(ebp + -104) = edx;
    if (CMP_A(edx, 0xFF00)) goto loc_001D5CBD; /* ja: above (unsigned >) */

loc_001D5BF8:
    MEM16(esi) = LO16(edx);
    if (TEST_NZ(MEM8(esi + 5), 0x10)) goto loc_001D5C0B; /* jne: not equal / not zero */

loc_001D5C01:
    eax = edx;
    eax = eax << 4;
    MEM16(eax + esi + 2) = LO16(edx);

loc_001D5C0B:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_001D5C82; /* jae: above or equal (unsigned >=) */

loc_001D5C1D:
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -228) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_001D5C61; /* jne: not equal / not zero */

loc_001D5C31:
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -112) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -236) = eax;
    ecx = MEM32(ebp + -112);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -120) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -120);
    MEM8(eax) = LO8(ecx);

loc_001D5C61:
    MEM32(ebp + -244) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -252) = ecx;

loc_001D5C70:
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    goto loc_001D5AB6;

loc_001D5C82:
    ecx = ebx + 0x180;
    MEM32(ebp + -260) = ecx;
    eax = MEM32(ecx);

loc_001D5C90:
    MEM32(ebp + -128) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001D5CA9; /* je: equal / zero */

loc_001D5C97:
    edi = eax + -8;
    MEM32(ebp + -268) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_001D5CA9; /* jbe: below or equal (unsigned <=) */

loc_001D5CA5:
    eax = MEM32(eax);
    goto loc_001D5C90;

loc_001D5CA9:
    MEM32(ebp + -276) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -284) = edi;
    goto loc_001D5AA9;

loc_001D5CBD:
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D5CC5:
    MEM8(ebp + -25) = 0;
    if (TEST_Z(MEM8(esi + 5), 0x10)) goto loc_001D5CE0; /* je: equal / zero */

loc_001D5CCF:
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + -292) = eax;
    MEM32(eax + 0x40) = esi;

loc_001D5CE0:
    if (TEST_Z(MEM8(ebp + -25), 0x10)) goto loc_001D5CF2; /* je: equal / zero */

loc_001D5CE6:
    eax = MEM32(ebp + -56);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) | 0x10);
    MEM8(eax + 5) = LO8(ecx);

loc_001D5CF2:
    esi = MEM32(ebp + -56);
    esi = esi + 0x10;
    MEM32(ebp + -60) = esi;
    if (CMP_EQ(MEM8(ebp + -26), 0)) goto loc_001D5D11; /* je: equal / zero */

loc_001D5D01:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_001D5D0D:
    MEM8(ebp + -26) = 0;

loc_001D5D11:
    if (TEST_Z(MEM8(ebp + 0xC), 8)) goto loc_001D5E29; /* je: equal / zero */

loc_001D5D1B:
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    edi = esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_001D5E29;

loc_001D5D35:
    MEM32(ebp + -72) = 0xC0000017u;
    goto loc_001D5DE6;

loc_001D5D41:
    if (TEST_Z(MEM8(esi + 0x14), 2)) goto loc_001D5DDF; /* je: equal / zero */

loc_001D5D4B:
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = MEM32(ebp + 0xC);
    eax = eax << 0x14;
    eax = ~eax;
    eax = eax & 0x800000;
    eax = eax | 0x1000;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B908), _icall_esp); /* indirect call */
    }

loc_001D5D78:
    MEM32(ebp + -72) = eax;
    if (TEST_S(eax, eax)) goto loc_001D5DE6; /* jl: less (signed <) */

loc_001D5D7F:
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = MEM32(ebp + -36);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -32);
    eax = eax - MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -36);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = MEM32(ebp + -36);
    MEM8(eax + 0x25) = 0xB;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    esi = esi + 0x58;
    MEM32(ebp + -300) = esi;
    eax = MEM32(esi + 4);
    MEM32(ebp + -308) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -36);
    MEM32(esi + 4) = eax;
    esi = MEM32(ebp + -36);
    esi = esi + 0x30;
    goto loc_001D5E26;

loc_001D5DDF:
    MEM32(ebp + -72) = 0xC0000023u;

loc_001D5DE6:
    if (TEST_Z(MEM8(ebp + 0xC), 4)) goto loc_001D5E24; /* je: equal / zero */

loc_001D5DEC:
    MEM32(ebp + -400) = 0xC0000017u;
    MEM32(ebp + -392) = MEM32(ebp + -392) & 0;
    MEM32(ebp + -384) = 1;
    MEM32(ebp + -396) = MEM32(ebp + -396) & 0;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -380) = eax;
    eax = ebp + -400;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B890), _icall_esp); /* indirect call */
    }

loc_001D5E24:
    esi = 0; /* xor self */

loc_001D5E26:
    MEM32(ebp + -60) = esi;

loc_001D5E29:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001D5E6F(); /* call 0x001D5E6F */

loc_001D5E32:
    if (TEST_Z(esi, esi)) goto loc_001D5E5C; /* je: equal / zero */

loc_001D5E36:
    MEM32(ebp + -92) = esi;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) goto loc_001D5E5C; /* je: equal / zero */

loc_001D5E53:
    ecx = ebp + -92;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001D5E5C:
    eax = esi;
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D5E63:
    esp += 16; return; /* ret 12 */

}
