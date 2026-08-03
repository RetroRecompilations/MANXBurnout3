#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D451D
 * Original: 0x001D451D - 0x001D47C2 (677 bytes, 230 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D451D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D451D:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi + 2));
    eax = eax << 4;
    esi = edi;
    esi = esi - eax;
    if (CMP_EQ(esi, edi)) goto loc_001D4675; /* je: equal / zero */

loc_001D453C:
    if (TEST_NZ(MEM8(esi + 5), 1)) goto loc_001D4675; /* jne: not equal / not zero */

loc_001D4546:
    ecx = ZX16(MEM16(esi));
    eax = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(eax);
    if (CMP_A(ecx, 0xFF00)) goto loc_001D4678; /* ja: above (unsigned >) */

loc_001D455A:
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_001D45CF; /* je: equal / zero */

loc_001D4560:
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_001D4594; /* jne: not equal / not zero */

loc_001D456F:
    SET_LO16(ecx, MEM16(edi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D4594; /* jae: above or equal (unsigned >=) */

loc_001D4579:
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_001D4594:
    SET_LO8(ecx, MEM8(edi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D45C5; /* je: equal / zero */

loc_001D459C:
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_001D45B2; /* je: equal / zero */

loc_001D45AA:
    if (CMP_BE(eax, 4)) goto loc_001D45B2; /* jbe: below or equal (unsigned <=) */

loc_001D45AF:
    eax = eax - 4;

loc_001D45B2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B90C), _icall_esp); /* indirect call */
    }

loc_001D45C2:
    eax = MEM32(ebp + 0x10);

loc_001D45C5:
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM8(ebp + 0x14) = 0;

loc_001D45CF:
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_001D4603; /* jne: not equal / not zero */

loc_001D45DE:
    SET_LO16(ecx, MEM16(esi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D4603; /* jae: above or equal (unsigned >=) */

loc_001D45E8:
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_001D4603:
    SET_LO8(ecx, MEM8(esi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D4634; /* je: equal / zero */

loc_001D460B:
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_001D4621; /* je: equal / zero */

loc_001D4619:
    if (CMP_BE(eax, 4)) goto loc_001D4621; /* jbe: below or equal (unsigned <=) */

loc_001D461E:
    eax = eax - 4;

loc_001D4621:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B90C), _icall_esp); /* indirect call */
    }

loc_001D4631:
    eax = MEM32(ebp + 0x10);

loc_001D4634:
    SET_LO8(ecx, MEM8(edi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(esi + 5) = LO8(ecx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_001D464D; /* je: equal / zero */

loc_001D4642:
    ecx = ZX8(MEM8(esi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = esi;

loc_001D464D:
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    /* test MEM8(esi + 5), 0x10 - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax));
    edi = esi;
    MEM16(esi) = LO16(ecx);
    if (TEST_NZ(MEM8(esi + 5), 0x10)) goto loc_001D4678; /* jne: not equal / not zero */

loc_001D4666:
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(edx);
    goto loc_001D4678;

loc_001D4675:
    eax = MEM32(ebp + 0x10);

loc_001D4678:
    if (TEST_NZ(MEM8(edi + 5), 0x10)) goto loc_001D47B9; /* jne: not equal / not zero */

loc_001D4682:
    ecx = MEM32(eax);
    esi = ecx;
    esi = esi << 4;
    esi = esi + edi;
    if (TEST_NZ(MEM8(esi + 5), 1)) goto loc_001D47B9; /* jne: not equal / not zero */

loc_001D4695:
    edx = ZX16(MEM16(esi));
    edx = edx + ecx;
    if (CMP_A(edx, 0xFF00)) goto loc_001D47B9; /* ja: above (unsigned >) */

loc_001D46A6:
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_001D4717; /* je: equal / zero */

loc_001D46AC:
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_001D46E0; /* jne: not equal / not zero */

loc_001D46BB:
    SET_LO16(ecx, MEM16(edi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D46E0; /* jae: above or equal (unsigned >=) */

loc_001D46C5:
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_001D46E0:
    SET_LO8(ecx, MEM8(edi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D4711; /* je: equal / zero */

loc_001D46E8:
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_001D46FE; /* je: equal / zero */

loc_001D46F6:
    if (CMP_BE(eax, 4)) goto loc_001D46FE; /* jbe: below or equal (unsigned <=) */

loc_001D46FB:
    eax = eax - 4;

loc_001D46FE:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B90C), _icall_esp); /* indirect call */
    }

loc_001D470E:
    eax = MEM32(ebp + 0x10);

loc_001D4711:
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;

loc_001D4717:
    SET_LO8(ecx, MEM8(esi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(edi + 5) = LO8(ecx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_001D4730; /* je: equal / zero */

loc_001D4725:
    ecx = ZX8(MEM8(edi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = edi;

loc_001D4730:
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_001D4764; /* jne: not equal / not zero */

loc_001D473F:
    SET_LO16(ecx, MEM16(esi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_001D4764; /* jae: above or equal (unsigned >=) */

loc_001D4749:
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_001D4764:
    SET_LO8(ecx, MEM8(esi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D4795; /* je: equal / zero */

loc_001D476C:
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_001D4782; /* je: equal / zero */

loc_001D477A:
    if (CMP_BE(eax, 4)) goto loc_001D4782; /* jbe: below or equal (unsigned <=) */

loc_001D477F:
    eax = eax - 4;

loc_001D4782:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B90C), _icall_esp); /* indirect call */
    }

loc_001D4792:
    eax = MEM32(ebp + 0x10);

loc_001D4795:
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    /* test MEM8(edi + 5), 0x10 - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi) = LO16(ecx);
    if (TEST_NZ(MEM8(edi + 5), 0x10)) goto loc_001D47B9; /* jne: not equal / not zero */

loc_001D47AC:
    ecx = MEM32(eax);
    SET_LO16(eax, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + edi + 2) = LO16(eax);

loc_001D47B9:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
