#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D4360
 * Original: 0x001D4360 - 0x001D44EB (395 bytes, 149 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D4360:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 0x38;
    esi = MEM32(eax);
    /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(esi, esi)) goto loc_001D439D; /* je: equal / zero */

loc_001D437B:
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);

loc_001D4383:
    if (CMP_B(MEM32(esi + 8), eax)) goto loc_001D4391; /* jb: below (unsigned <) */

loc_001D4388:
    if (TEST_Z(ecx, ecx)) goto loc_001D43A6; /* je: equal / zero */

loc_001D438C:
    if (CMP_EQ(MEM32(esi + 4), ecx)) goto loc_001D43A6; /* je: equal / zero */

loc_001D4391:
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001D4383; /* jne: not equal / not zero */

loc_001D439D:
    eax = 0; /* xor self */

loc_001D439F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_001D43A6:
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ecx + 0x584);
    if (TEST_Z(eax, eax)) goto loc_001D43C3; /* je: equal / zero */

loc_001D43B9:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D43C1:
    goto loc_001D43D7;

loc_001D43C3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B908), _icall_esp); /* indirect call */
    }

loc_001D43D7:
    if (TEST_S(eax, eax)) goto loc_001D439D; /* jl: less (signed <) */

loc_001D43DB:
    eax = MEM32(ebx);
    eax = eax >> 0xC;
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - eax;
    eax = MEM32(edi + 0x1C);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_001D43EF; /* jne: not equal / not zero */

loc_001D43EB:
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0;

loc_001D43EF:
    ebx = MEM32(edi + 0x40);
    /* test MEM8(ebx + 5), 0x10 - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    if (TEST_Z(MEM8(ebx + 5), 0x10)) goto loc_001D440B; /* je: equal / zero */

loc_001D43FE:
    ecx = ZX16(MEM16(ebx));
    ecx = ecx << 4;
    ecx = ecx + ebx;
    if (CMP_EQ(ecx, MEM32(esi + 4))) goto loc_001D4452; /* je: equal / zero */

loc_001D440B:
    ecx = MEM32(ebp + -4);
    if (TEST_NZ(ecx, ecx)) goto loc_001D4417; /* jne: not equal / not zero */

loc_001D4412:
    ebx = MEM32(edi + 0x28);
    goto loc_001D4420;

loc_001D4417:
    ebx = MEM32(ecx + 8);
    ecx = MEM32(ebp + -4);
    ebx = ebx + MEM32(ecx + 4);

loc_001D4420:
    if (TEST_NZ(MEM8(ebx + 5), 0x10)) goto loc_001D4452; /* jne: not equal / not zero */

loc_001D4426:
    ecx = MEM32(edi + 0x2C);

loc_001D4429:
    edx = ZX16(MEM16(ebx));
    edx = edx << 4;
    MEM32(ebp + 0x14) = ebx;
    ebx = ebx + edx;
    if (CMP_AE(ebx, ecx)) goto loc_001D4446; /* jae: above or equal (unsigned >=) */

loc_001D4438:
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_001D4446; /* je: equal / zero */

loc_001D443E:
    if (TEST_Z(MEM8(ebx + 5), 0x10)) goto loc_001D4429; /* je: equal / zero */

loc_001D4444:
    goto loc_001D4452;

loc_001D4446:
    if (CMP_NE(ebx, MEM32(ebp + 0xC))) goto loc_001D439D; /* jne: not equal / not zero */

loc_001D444F:
    ebx = MEM32(ebp + 0x14);

loc_001D4452:
    MEM8(ebx + 5) = MEM8(ebx + 5) & 0xEF;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    edx = MEM32(ecx);
    MEM32(esi + 8) = MEM32(esi + 8) - edx;
    if ((MEM32(esi + 8) != 0)) goto loc_001D4496; /* jne: not equal / not zero */

loc_001D4465:
    ecx = MEM32(esi + 4);
    if (CMP_NE(ecx, MEM32(edi + 0x2C))) goto loc_001D4473; /* jne: not equal / not zero */

loc_001D446D:
    MEM8(eax + 5) = 0x10;
    goto loc_001D447A;

loc_001D4473:
    MEM8(eax + 5) = 0;
    eax = MEM32(edi + 0x28);

loc_001D447A:
    ecx = MEM32(ebp + -8);
    MEM32(edi + 0x40) = eax;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_001D42AC(); /* call 0x001D42AC */

loc_001D448B:
    MEM32(edi + 0x34) = MEM32(edi + 0x34) - 1;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    goto loc_001D449D;

loc_001D4496:
    MEM8(eax + 5) = 0x10;
    MEM32(edi + 0x40) = eax;

loc_001D449D:
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(eax + 4) = LO8(edx);
    ecx = MEM32(ecx);
    ecx = ecx >> 4;
    /* test MEM8(eax + 5), 0x10 - flags set for next jcc */
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx));
    MEM16(eax + 2) = LO16(ecx);
    if (TEST_NZ(MEM8(eax + 5), 0x10)) goto loc_001D44C6; /* jne: not equal / not zero */

loc_001D44B8:
    SET_LO16(ecx, MEM16(eax));
    edx = ZX16(LO16(ecx));
    edx = edx << 4;
    MEM16(edx + eax + 2) = LO16(ecx);

loc_001D44C6:
    if (CMP_NE(MEM32(edi + 0x1C), 0)) goto loc_001D439F; /* jne: not equal / not zero */

loc_001D44D0:
    ecx = MEM32(edi + 0x38);
    goto loc_001D44E2;

loc_001D44D5:
    edx = MEM32(ecx + 8);
    if (CMP_B(edx, MEM32(edi + 0x1C))) goto loc_001D44E0; /* jb: below (unsigned <) */

loc_001D44DD:
    MEM32(edi + 0x1C) = edx;

loc_001D44E0:
    ecx = MEM32(ecx);

loc_001D44E2:
    if (TEST_NZ(ecx, ecx)) goto loc_001D44D5; /* jne: not equal / not zero */

loc_001D44E6:
    goto loc_001D439F;

}
