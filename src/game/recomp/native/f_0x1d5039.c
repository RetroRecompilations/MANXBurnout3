#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D5039
 * Original: 0x001D5039 - 0x001D52E3 (682 bytes, 225 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5039(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D5039:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(ebx + 0x584), 0)) goto loc_001D505D; /* je: equal / zero */

loc_001D504C:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D5058:
    goto loc_001D52DE;

loc_001D505D:
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + 8) = eax;
    eax = esi + 0xFFF;
    edx = 0xFFFFF000u;
    eax = eax & edx;
    ecx = eax;
    ecx = ecx - esi;
    ecx = (uint32_t)((int32_t)ecx >> 4);
    /* cmp LO16(ecx), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(LO16(ecx), 1)) goto loc_001D50A2; /* jne: not equal / not zero */

loc_001D5091:
    eax = eax + 0x1000;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0x101;
    goto loc_001D50BE;

loc_001D50A2:
    SET_LO16(ecx, MEM16(esi + 2));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_001D50BE; /* je: equal / zero */

loc_001D50AB:
    if (CMP_NE(eax, esi)) goto loc_001D50BE; /* jne: not equal / not zero */

loc_001D50AF:
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 4;
    edi = ecx;
    ecx = esi;
    ecx = ecx - edi;
    MEM32(ebp + -16) = ecx;

loc_001D50BE:
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    edi = edi << 4;
    edi = edi + esi;
    ecx = edi;
    ecx = ecx & edx;
    MEM32(ebp + 0xC) = ecx;
    ecx = edi;
    ecx = ecx - MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    /* cmp LO16(ecx), 1 - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(LO16(ecx), 1)) goto loc_001D50F5; /* jne: not equal / not zero */

loc_001D50E2:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 0x1000;
    MEM32(ebp + -12) = 0x101;
    ecx = MEM32(ebp + -12);
    goto loc_001D5103;

loc_001D50F5:
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_001D5103; /* jne: not equal / not zero */

loc_001D50FA:
    if (TEST_NZ(MEM8(esi + 5), 0x10)) goto loc_001D5103; /* jne: not equal / not zero */

loc_001D5100:
    MEM32(ebp + -24) = edi;

loc_001D5103:
    ecx = ZX16(LO16(ecx));
    MEM32(ebp + -20) = ecx;
    ecx = ecx << 4;
    edi = edi - ecx;
    /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    MEM32(ebp + -36) = ecx;
    if (CMP_BE(MEM32(ebp + 0xC), eax)) goto loc_001D511B; /* jbe: below or equal (unsigned <=) */

loc_001D5116:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    goto loc_001D511F;

loc_001D511B:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;

loc_001D511F:
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_001D52D2; /* je: equal / zero */

loc_001D5129:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D418C(); /* call 0x001D418C */

loc_001D5131:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_001D52D2; /* je: equal / zero */

loc_001D513C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B904), _icall_esp); /* indirect call */
    }

loc_001D514F:
    PUSH32(esp, MEM32(ebp + -28));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D42AC(); /* call 0x001D42AC */

loc_001D515D:
    if (CMP_L(MEM32(ebp + -32), 0)) goto loc_001D52D2; /* jl: less (signed <) */

loc_001D5167:
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D42CD(); /* call 0x001D42CD */

loc_001D5175:
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = eax >> 0xC;
    MEM32(edx + 0x30) = MEM32(edx + 0x30) + eax;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_001D521C; /* je: equal / zero */

loc_001D518D:
    eax = ZX16(LO16(ecx));
    MEM8(esi + 5) = 0x10;
    MEM16(esi) = LO16(ecx);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    MEM32(edx + 0x40) = esi;
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D51D8; /* jae: above or equal (unsigned >=) */

loc_001D51A8:
    eax = ebx + eax * 8 + 0x180;
    /* cmp MEM32(eax), eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(MEM32(eax), eax)) goto loc_001D51FE; /* jne: not equal / not zero */

loc_001D51B6:
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    eax = eax + ebx + 0x160;
    MEM32(ebp + -32) = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -32);
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    goto loc_001D51FB;

loc_001D51D8:
    ecx = ebx + 0x180;
    eax = MEM32(ecx);
    goto loc_001D51F4;

loc_001D51E2:
    SET_LO16(ecx, MEM16(ebp + -8));
    if (CMP_BE(LO16(ecx), MEM16(eax + -8))) goto loc_001D51F8; /* jbe: below or equal (unsigned <=) */

loc_001D51EC:
    eax = MEM32(eax);
    ecx = ebx + 0x180;

loc_001D51F4:
    if (CMP_NE(ecx, eax)) goto loc_001D51E2; /* jne: not equal / not zero */

loc_001D51F8:
    MEM32(ebp + 8) = eax;

loc_001D51FB:
    eax = MEM32(ebp + 8);

loc_001D51FE:
    ecx = MEM32(eax + 4);
    MEM32(ebp + 0x10) = ecx;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    goto loc_001D5242;

loc_001D521C:
    eax = MEM32(ebp + -16);
    if (TEST_Z(eax, eax)) goto loc_001D5229; /* je: equal / zero */

loc_001D5223:
    MEM8(eax + 5) = MEM8(eax + 5) | 0x10;
    goto loc_001D523F;

loc_001D5229:
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebp + -4);
    if (CMP_B(eax, ecx)) goto loc_001D5242; /* jb: below (unsigned <) */

loc_001D5233:
    esi = MEM32(ebp + 0xC);
    esi = esi + ecx;
    if (CMP_AE(eax, esi)) goto loc_001D5242; /* jae: above or equal (unsigned >=) */

loc_001D523C:
    eax = MEM32(edx + 0x28);

loc_001D523F:
    MEM32(edx + 0x40) = eax;

loc_001D5242:
    eax = MEM32(ebp + -12);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001D52C4; /* je: equal / zero */

loc_001D524A:
    MEM16(edi + 2) = MEM16(edi + 2) & 0;
    SET_LO8(ecx, MEM8(edx + 4));
    MEM8(edi + 4) = LO8(ecx);
    ecx = MEM32(ebp + -36);
    MEM8(edi + 5) = 0;
    MEM16(edi) = LO16(eax);
    MEM16(ecx + edi + 2) = LO16(eax);
    MEM8(edi + 5) = MEM8(edi + 5) & 0xF8;
    if (CMP_AE(LO16(eax), 0x80)) goto loc_001D5296; /* jae: above or equal (unsigned >=) */

loc_001D526E:
    eax = MEM32(ebp + -20);
    esi = ebx + eax * 8 + 0x180;
    if (CMP_NE(MEM32(esi), esi)) goto loc_001D52AC; /* jne: not equal / not zero */

loc_001D527C:
    ecx = ZX16(MEM16(edi));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) | LO8(edx);
    goto loc_001D52AC;

loc_001D5296:
    ecx = ebx + 0x180;
    esi = MEM32(ecx);
    goto loc_001D52A8;

loc_001D52A0:
    if (CMP_BE(LO16(eax), MEM16(esi + -8))) goto loc_001D52AC; /* jbe: below or equal (unsigned <=) */

loc_001D52A6:
    esi = MEM32(esi);

loc_001D52A8:
    if (CMP_NE(ecx, esi)) goto loc_001D52A0; /* jne: not equal / not zero */

loc_001D52AC:
    ecx = MEM32(esi + 4);
    eax = edi + 8;
    MEM32(eax) = esi;
    MEM32(edi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001D52DC;

loc_001D52C4:
    eax = MEM32(ebp + -24);
    if (TEST_Z(eax, eax)) goto loc_001D52DC; /* je: equal / zero */

loc_001D52CB:
    MEM16(eax + 2) = MEM16(eax + 2) & 0;
    goto loc_001D52DC;

loc_001D52D2:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D52DC:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001D52DE:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
