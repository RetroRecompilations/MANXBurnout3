#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B890
 * Original: 0x0019B890 - 0x0019BF25 (1685 bytes, 533 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B890:
    eax = ZX8(MEM8(edi + 0x14));
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_0019BCEC; /* je: equal / zero */

loc_0019B8A0:
    eax--;
    if ((eax == 0)) goto loc_0019BB0E; /* je: equal / zero */

loc_0019B8A7:
    eax--;
    if ((eax != 0)) goto loc_0019BF1F; /* jne: not equal / not zero */

loc_0019B8AE:
    if (CMP_NE(MEM8(edi + 0x18), 0xFF)) goto loc_0019B8DD; /* jne: not equal / not zero */

loc_0019B8B4:
    esi = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_0019C250(); /* call 0x0019C250 */

loc_0019B8BD:
    if (TEST_Z(eax, eax)) goto loc_0019B8D7; /* je: equal / zero */

loc_0019B8C1:
    if (TEST_Z(MEM8(eax + 0x4B), 4)) goto loc_0019B8D7; /* je: equal / zero */

loc_0019B8C7:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0019C2D0(); /* call 0x0019C2D0 */

loc_0019B8D4:
    MEM8(edi + 0x18) = LO8(eax);

loc_0019B8D7:
    if (CMP_EQ(MEM8(edi + 0x18), 0xFF)) goto loc_0019B920; /* je: equal / zero */

loc_0019B8DD:
    SET_LO8(eax, MEM8(edi + 0x16));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019B8E8; /* jne: not equal / not zero */

loc_0019B8E4:
    eax = 0; /* xor self */
    goto loc_0019B8F6;

loc_0019B8E8:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;

loc_0019B8F6:
    if (TEST_Z(MEM8(eax + 0x4B), 4)) goto loc_0019B920; /* je: equal / zero */

loc_0019B8FC:
    SET_LO8(ecx, MEM8(esp + 0x10));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x4C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019B91C; /* jne: not equal / not zero */

loc_0019B909:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0019B920;

loc_0019B91C:
    MEM8(edi + 0x18) = 0xFF;

loc_0019B920:
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019BF30(); /* call 0x0019BF30 */

loc_0019B928:
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019BF30(); /* call 0x0019BF30 */

loc_0019B930:
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019BF30(); /* call 0x0019BF30 */

loc_0019B938:
    SET_LO8(eax, MEM8(edi + 0x13));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019B968; /* je: equal / zero */

loc_0019B93F:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019B964; /* jne: not equal / not zero */

loc_0019B953:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019B964:
    MEM8(edi + 0x13) = 0xFF;

loc_0019B968:
    ebp = MEM32(edi);
    edx = MEM32(ebp);
    esi = MEM32(ebp + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    eax = ZX16(MEM16(edx + 0x60EC30));
    ebx = MEM32(0x649B7C);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xC); /* subss */
    ecx = MEM32(ebp + 0x28);
    eax = eax + esi;
    SET_LO8(eax, MEM8(eax + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019B9B3; /* je: equal / zero */

loc_0019B997:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B9F9; /* je: equal / zero */

loc_0019B9B3:
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B9F2; /* je: equal / zero */

loc_0019B9BA:
    eax = MEM32(ebp + 4);
    esi = MEM32(ebp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    edx = ZX16(MEM16(eax + 0x60EC30));
    ecx = MEM32(ebp + 0x2C);
    edx = edx + esi;
    SET_LO8(eax, MEM8(edx + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019B9F2; /* je: equal / zero */

loc_0019B9D6:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B9F9; /* je: equal / zero */

loc_0019B9F2:
    MEM8(esp + 0x10) = 0;
    goto loc_0019B9FE;

loc_0019B9F9:
    MEM8(esp + 0x10) = 1;

loc_0019B9FE:
    esi = 3;
    eax = edi;
    PUSH32(esp, 0); sub_0019C250(); /* call 0x0019C250 */

loc_0019BA0A:
    if (TEST_Z(eax, eax)) goto loc_0019BA18; /* je: equal / zero */

loc_0019BA0E:
    if (TEST_NZ(MEM8(eax + 0x4B), 4)) goto loc_0019BAC9; /* jne: not equal / not zero */

loc_0019BA18:
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    eax = ZX16(MEM16(edx + 0x60EC30));
    ecx = MEM32(ebp + 0x34);
    eax = eax + esi;
    SET_LO8(eax, MEM8(eax + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BA50; /* je: equal / zero */

loc_0019BA34:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BAC9; /* je: equal / zero */

loc_0019BA50:
    SET_LO8(ecx, MEM8(edi + 0x1C));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + 0x54);
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019BA63; /* jne: not equal / not zero */

loc_0019BA5E:
    eax++;
    MEM32(esp + 0x14) = eax;

loc_0019BA63:
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0019BAC5; /* jle: less or equal (signed <=) */

loc_0019BA69:
    /* nop */

loc_0019BA70:
    if (CMP_NE(ecx, 1)) goto loc_0019BA7C; /* jne: not equal / not zero */

loc_0019BA75:
    SET_LO8(edx, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019BAC0; /* je: equal / zero */

loc_0019BA7C:
    /* cmp ecx, 3 - flags set for next jcc */
    eax = MEM32(ebp + ecx * 4);
    if (CMP_LE(ecx, 3)) goto loc_0019BA89; /* jle: less or equal (signed <=) */

loc_0019BA85:
    edx = 0; /* xor self */
    goto loc_0019BA8E;

loc_0019BA89:
    edx = MEM32(ebp + ecx * 4 + 0x28);
    edx++;

loc_0019BA8E:
    esi = MEM32(ebp + ecx * 4 + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    eax = eax + edx;
    SET_LO8(eax, MEM8(eax + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BABC; /* je: equal / zero */

loc_0019BAA5:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_LE(edx, esi)) goto loc_0019BAC9; /* jle: less or equal (signed <=) */

loc_0019BABC:
    eax = MEM32(esp + 0x14);

loc_0019BAC0:
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0019BA70; /* jl: less (signed <) */

loc_0019BAC5:
    SET_LO8(eax, 1);
    goto loc_0019BACB;

loc_0019BAC9:
    SET_LO8(eax, 0); /* xor self */

loc_0019BACB:
    /* comiss xmm0.f[0], MEMF(0x3B1698) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1698))) goto loc_0019BADC; /* jbe: below or equal (unsigned <=) */

loc_0019BAD4:
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019BAE4; /* jne: not equal / not zero */

loc_0019BADC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF1F; /* je: equal / zero */

loc_0019BAE4:
    eax = 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_0019C4A0(); /* call 0x0019C4A0 */

loc_0019BAF0:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BCD8; /* je: equal / zero */

loc_0019BAF8:
    MEM8(edi + 0x18) = 0xFF;

loc_0019BAFC:
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0x17) = 0xFF;
    MEM8(edi + 0x1B) = 0;
    MEM8(edi + 0x14) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019BB0E:
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019BF30(); /* call 0x0019BF30 */

loc_0019BB16:
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019BF30(); /* call 0x0019BF30 */

loc_0019BB1E:
    SET_LO8(eax, MEM8(edi + 0x12));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BB4E; /* je: equal / zero */

loc_0019BB25:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019BB4A; /* jne: not equal / not zero */

loc_0019BB39:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019BB4A:
    MEM8(edi + 0x12) = 0xFF;

loc_0019BB4E:
    ebp = MEM32(edi);
    eax = MEM32(ebp);
    esi = MEM32(ebp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    edx = ZX16(MEM16(eax + 0x60EC30));
    ebx = MEM32(0x649B7C);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xC); /* subss */
    ecx = MEM32(ebp + 0x28);
    edx = edx + esi;
    SET_LO8(eax, MEM8(edx + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BB99; /* je: equal / zero */

loc_0019BB7D:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BBDF; /* je: equal / zero */

loc_0019BB99:
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BBD8; /* je: equal / zero */

loc_0019BBA0:
    edx = MEM32(ebp + 4);
    esi = MEM32(ebp + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    eax = ZX16(MEM16(edx + 0x60EC30));
    ecx = MEM32(ebp + 0x2C);
    eax = eax + esi;
    SET_LO8(eax, MEM8(eax + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BBD8; /* je: equal / zero */

loc_0019BBBC:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BBDF; /* je: equal / zero */

loc_0019BBD8:
    MEM8(esp + 0x10) = 0;
    goto loc_0019BBE4;

loc_0019BBDF:
    MEM8(esp + 0x10) = 1;

loc_0019BBE4:
    esi = 2;
    eax = edi;
    PUSH32(esp, 0); sub_0019C250(); /* call 0x0019C250 */

loc_0019BBF0:
    if (TEST_Z(eax, eax)) goto loc_0019BBFE; /* je: equal / zero */

loc_0019BBF4:
    if (TEST_NZ(MEM8(eax + 0x4B), 4)) goto loc_0019BCA9; /* jne: not equal / not zero */

loc_0019BBFE:
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    edx = ZX16(MEM16(eax + 0x60EC30));
    ecx = MEM32(ebp + 0x30);
    edx = edx + esi;
    SET_LO8(eax, MEM8(edx + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BC36; /* je: equal / zero */

loc_0019BC1A:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BCA9; /* je: equal / zero */

loc_0019BC36:
    SET_LO8(ecx, MEM8(edi + 0x1C));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + 0x54);
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019BC49; /* jne: not equal / not zero */

loc_0019BC44:
    eax++;
    MEM32(esp + 0x14) = eax;

loc_0019BC49:
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0019BCA5; /* jle: less or equal (signed <=) */

loc_0019BC4F:
    /* nop */

loc_0019BC50:
    if (CMP_NE(ecx, 1)) goto loc_0019BC5C; /* jne: not equal / not zero */

loc_0019BC55:
    SET_LO8(edx, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019BCA0; /* je: equal / zero */

loc_0019BC5C:
    /* cmp ecx, 3 - flags set for next jcc */
    eax = MEM32(ebp + ecx * 4);
    if (CMP_LE(ecx, 3)) goto loc_0019BC69; /* jle: less or equal (signed <=) */

loc_0019BC65:
    edx = 0; /* xor self */
    goto loc_0019BC6E;

loc_0019BC69:
    edx = MEM32(ebp + ecx * 4 + 0x28);
    edx++;

loc_0019BC6E:
    esi = MEM32(ebp + ecx * 4 + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    eax = eax + edx;
    SET_LO8(eax, MEM8(eax + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BC9C; /* je: equal / zero */

loc_0019BC85:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_LE(edx, esi)) goto loc_0019BCA9; /* jle: less or equal (signed <=) */

loc_0019BC9C:
    eax = MEM32(esp + 0x14);

loc_0019BCA0:
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0019BC50; /* jl: less (signed <) */

loc_0019BCA5:
    SET_LO8(eax, 1);
    goto loc_0019BCAB;

loc_0019BCA9:
    SET_LO8(eax, 0); /* xor self */

loc_0019BCAB:
    /* comiss xmm0.f[0], MEMF(0x3B1698) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1698))) goto loc_0019BCBC; /* jbe: below or equal (unsigned <=) */

loc_0019BCB4:
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019BCC4; /* jne: not equal / not zero */

loc_0019BCBC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF1F; /* je: equal / zero */

loc_0019BCC4:
    eax = 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_0019C4A0(); /* call 0x0019C4A0 */

loc_0019BCD0:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BAFC; /* jne: not equal / not zero */

loc_0019BCD8:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 8) = 2;
    MEM32(esp + 4) = edi;
    g_seh_ebp = ebp; sub_0019BF30(); return; /* tail jmp 0x0019BF30 */

loc_0019BCEC:
    SET_LO8(eax, MEM8(edi + 0x10));
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    SET_LO8(ecx, 0xFF);
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_0019BD1D; /* je: equal / zero */

loc_0019BCFD:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019BD1A; /* jne: not equal / not zero */

loc_0019BD11:
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019BD1A:
    MEM8(edi + 0x10) = LO8(ecx);

loc_0019BD1D:
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BD4B; /* je: equal / zero */

loc_0019BD24:
    SET_LO8(eax, MEM8(edi + 0x11));
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_0019BD4B; /* je: equal / zero */

loc_0019BD2B:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019BD48; /* jne: not equal / not zero */

loc_0019BD3F:
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019BD48:
    MEM8(edi + 0x11) = LO8(ecx);

loc_0019BD4B:
    SET_LO8(ecx, MEM8(esp + 0x10));
    PUSH32(esp, edi);
    ebx = 2;
    PUSH32(esp, 0); sub_0019C3B0(); /* call 0x0019C3B0 */

loc_0019BD5A:
    SET_LO8(ecx, MEM8(esp + 0x10));
    PUSH32(esp, edi);
    ebx = 3;
    PUSH32(esp, 0); sub_0019C3B0(); /* call 0x0019C3B0 */

loc_0019BD69:
    SET_LO8(ebx, MEM8(edi + 0x15));
    /* cmp LO8(ebx), 0xFF - flags set for next jcc */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    xmm2.f[0] = MEMF(0x3A69C4); /* movss */
    if (CMP_EQ(LO8(ebx), 0xFF)) goto loc_0019BDFD; /* je: equal / zero */

loc_0019BD7F:
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    /* comiss xmm2.f[0], MEMF(eax + 0x2C) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(eax + 0x2C))) goto loc_0019BDA3; /* jbe: below or equal (unsigned <=) */

loc_0019BD93:
    SET_LO8(eax, MEM8(edi + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BDCE; /* jne: not equal / not zero */

loc_0019BD9A:
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEM8(edi + 0x19) = 1;

loc_0019BDA3:
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_0019C4A0(); /* call 0x0019C4A0 */

loc_0019BDAC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BDFD; /* je: equal / zero */

loc_0019BDB0:
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0x17) = LO8(ebx);
    MEM8(edi + 0x15) = 0xFF;
    MEM8(edi + 0x19) = 0;
    MEM8(edi + 0x14) = 1;
    MEM8(edi + 0x1B) = 1;
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019BDCE:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3A5594) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A5594))) goto loc_0019BDA3; /* jbe: below or equal (unsigned <=) */

loc_0019BDDF:
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM8(edi + 0x17) = LO8(ebx);
    MEM8(edi + 0x15) = 0xFF;
    MEM8(edi + 0x19) = 0;
    MEM8(edi + 0x1B) = LO8(eax);
    MEM8(edi + 0x14) = LO8(eax);
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019BDFD:
    SET_LO8(eax, MEM8(edi + 0x16));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BF1F; /* je: equal / zero */

loc_0019BE08:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    /* comiss xmm2.f[0], MEMF(eax + 0x2C) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(eax + 0x2C))) goto loc_0019BF1F; /* jbe: below or equal (unsigned <=) */

loc_0019BE20:
    SET_LO8(eax, MEM8(edi + 0x1A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BE32; /* jne: not equal / not zero */

loc_0019BE27:
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    MEM8(edi + 0x1A) = 1;
    goto loc_0019BE47;

loc_0019BE32:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B178C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3B178C))) goto loc_0019BF04; /* ja: above (unsigned >) */

loc_0019BE47:
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_0019C4A0(); /* call 0x0019C4A0 */

loc_0019BE50:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF1F; /* je: equal / zero */

loc_0019BE58:
    edx = MEM32(edi);
    eax = MEM32(edx + 8);
    ebx = MEM32(edx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    esi = MEM32(0x649B7C);
    ecx = MEM32(edx + 0x30);
    eax = eax + ebx;
    SET_LO8(eax, MEM8(eax + esi));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BE9C; /* je: equal / zero */

loc_0019BE7C:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF1F; /* je: equal / zero */

loc_0019BE9C:
    SET_LO8(eax, MEM8(edi + 0x1C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(edx + 0x54);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BEA7; /* jne: not equal / not zero */

loc_0019BEA6:
    ebx++;

loc_0019BEA7:
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0019BF04; /* jle: less or equal (signed <=) */

loc_0019BEAD:
    /* nop */

loc_0019BEB0:
    if (CMP_NE(ecx, 1)) goto loc_0019BEBC; /* jne: not equal / not zero */

loc_0019BEB5:
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BEFF; /* je: equal / zero */

loc_0019BEBC:
    /* cmp ecx, 3 - flags set for next jcc */
    eax = MEM32(edx + ecx * 4);
    if (CMP_LE(ecx, 3)) goto loc_0019BEC8; /* jle: less or equal (signed <=) */

loc_0019BEC4:
    esi = 0; /* xor self */
    goto loc_0019BECD;

loc_0019BEC8:
    esi = MEM32(edx + ecx * 4 + 0x28);
    esi++;

loc_0019BECD:
    ebp = MEM32(edx + ecx * 4 + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    eax = eax + MEM32(0x649B7C);
    SET_LO8(eax, MEM8(eax + esi));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BEFF; /* je: equal / zero */

loc_0019BEE8:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_LE(eax, ebp)) goto loc_0019BF1F; /* jle: less or equal (signed <=) */

loc_0019BEFF:
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_0019BEB0; /* jl: less (signed <) */

loc_0019BF04:
    SET_LO8(eax, MEM8(edi + 0x16));
    MEM8(edi + 0x17) = LO8(eax);
    MEM8(edi + 0x16) = 0xFF;
    MEM8(edi + 0x1A) = 0;
    MEM8(edi + 0x14) = 2;
    MEM8(edi + 0x1B) = 1;
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */

loc_0019BF1F:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
