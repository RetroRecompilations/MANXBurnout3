#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1B51
 * Original: 0x001D1B51 - 0x001D1CA7 (342 bytes, 130 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1B51(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1B51:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), 0xFFFFFFFFu)) goto loc_001D1B7C; /* jne: not equal / not zero */

loc_001D1B6C:
    edx = ecx + 1;

loc_001D1B6F:
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D1B6F; /* jne: not equal / not zero */

loc_001D1B76:
    ecx = ecx - edx;
    ecx++;
    MEM32(ebp + 0xC) = ecx;

loc_001D1B7C:
    if (CMP_LE(MEM32(ebp + 0xC), ebx)) goto loc_001D1C89; /* jle: less or equal (signed <=) */

loc_001D1B85:
    MEM32(ebp + 0x10) = ebx;

loc_001D1B88:
    ecx = ZX8(MEM8(edi));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ecx + 0x3C01B8));
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;
    eax = eax - MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = eax + edi;
    if (CMP_G(eax, MEM32(ebp + 0xC))) goto loc_001D1C89; /* jg: greater (signed >) */

loc_001D1BA9:
    ebx = MEM32(ebp + -8);
    eax = ebx;
    eax = eax - edx;
    if ((eax == 0)) goto loc_001D1BFA; /* je: equal / zero */

loc_001D1BB2:
    eax--;
    if ((eax == 0)) goto loc_001D1BEE; /* je: equal / zero */

loc_001D1BB5:
    eax--;
    if ((eax == 0)) goto loc_001D1BE2; /* je: equal / zero */

loc_001D1BB8:
    eax--;
    if ((eax == 0)) goto loc_001D1BD6; /* je: equal / zero */

loc_001D1BBB:
    eax--;
    if ((eax == 0)) goto loc_001D1BCA; /* je: equal / zero */

loc_001D1BBE:
    eax--;
    if ((eax != 0)) goto loc_001D1C03; /* jne: not equal / not zero */

loc_001D1BC1:
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = ecx;
    edx = edx << 6;

loc_001D1BCA:
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_001D1BD6:
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_001D1BE2:
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_001D1BEE:
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_001D1BFA:
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;

loc_001D1C03:
    edx = edx - MEM32(ebx * 4 + 0x3C01A0);
    if (CMP_A(edx, MEM32(0x3C02BC))) goto loc_001D1C22; /* ja: above (unsigned >) */

loc_001D1C12:
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    if (CMP_G(eax, MEM32(ebp + 0x14))) goto loc_001D1C7D; /* jg: greater (signed >) */

loc_001D1C1D:
    MEM16(esi) = LO16(edx);
    goto loc_001D1C7B;

loc_001D1C22:
    if (CMP_BE(edx, MEM32(0x3C02C0))) goto loc_001D1C3D; /* jbe: below or equal (unsigned <=) */

loc_001D1C2A:
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    if (CMP_G(eax, MEM32(ebp + 0x14))) goto loc_001D1C7D; /* jg: greater (signed >) */

loc_001D1C35:
    SET_LO16(eax, MEM16(0x3C02B8));
    goto loc_001D1C78;

loc_001D1C3D:
    edx = edx - MEM32(0x3C02C8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + 0x14);
    if (CMP_G(MEM32(ebp + -4), eax)) goto loc_001D1C63; /* jg: greater (signed >) */

loc_001D1C4E:
    ecx = MEM32(0x3C02C4);
    ebx = edx;
    ebx = ebx >> LO8(ecx);
    ebx = ebx + MEM32(0x3C02D0);
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;

loc_001D1C63:
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_G(MEM32(ebp + -4), eax)) goto loc_001D1C7D; /* jg: greater (signed >) */

loc_001D1C6B:
    eax = MEM32(0x3C02CC);
    eax = eax & edx;
    eax = eax + MEM32(0x3C02D4);

loc_001D1C78:
    MEM16(esi) = LO16(eax);

loc_001D1C7B:
    esi++;
    esi++;

loc_001D1C7D:
    eax = MEM32(ebp + 0x10);
    if (CMP_L(eax, MEM32(ebp + 0xC))) goto loc_001D1B88; /* jl: less (signed <) */

loc_001D1C89:
    /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_001D1CA3; /* je: equal / zero */

loc_001D1C95:
    if (CMP_GE(MEM32(ebp + 0x14), eax)) goto loc_001D1CA3; /* jge: greater or equal (signed >=) */

loc_001D1C9A:
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1CA1:
    eax = 0; /* xor self */

loc_001D1CA3:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
