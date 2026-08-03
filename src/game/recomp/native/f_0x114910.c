#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114910
 * Original: 0x00114910 - 0x00114CFB (1003 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114910:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(edi + 0xC);
    ebp = ecx;
    MEM8(edi) = 4;
    eax = 0; /* xor self */
    ecx = ebp + 0x35DC0;
    goto loc_00114930;

    /* nop */

loc_00114930:
    SET_LO8(edx, MEM8(ecx + -9264));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0011496E; /* je: equal / zero */

loc_0011493A:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_00114963; /* je: equal / zero */

loc_0011493F:
    SET_LO8(edx, MEM8(ecx + 0x2430));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00114966; /* je: equal / zero */

loc_00114949:
    SET_LO8(edx, MEM8(ecx + 0x4860));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0011496B; /* je: equal / zero */

loc_00114953:
    eax = eax + 4;
    ecx = ecx + 0x90C0;
    if (CMP_L(eax, 0x40)) goto loc_00114930; /* jl: less (signed <) */

loc_00114961:
    goto loc_0011496E;

loc_00114963:
    eax++;
    goto loc_0011496E;

loc_00114966:
    eax = eax + 2;
    goto loc_0011496E;

loc_0011496B:
    eax = eax + 3;

loc_0011496E:
    ecx = MEM32(ebp + 0xE6C8C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2430);
    eax = eax + ebp + 0x33780;
    MEM32(ebp + ecx * 4 + 0xE6B80) = eax;
    edx = MEM32(ebp + 0xE6C8C);
    eax = MEM32(ebp + edx * 4 + 0xE6B80);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0xC) = eax;
    edx = MEM32(ebp + 0xE6C8C);
    eax = MEM32(ebp + edx * 4 + 0xE6B80);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00120BA0(); /* call 0x00120BA0 */

loc_001149B0:
    ecx = MEM32(ebp + 0xE6C8C);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + ecx * 4 + 0xE6B80);
    esi = 0x64ACE8;
    PUSH32(esp, 0); sub_0010E580(); /* call 0x0010E580 */

loc_001149CB:
    edx = MEM32(ebp + 0xE6C8C);
    eax = MEM32(ebp + edx * 4 + 0xE6B80);
    ecx = MEM32(eax + 0x204);
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebp + 0xE6C8C);
    eax = MEM32(ebp + edx * 4 + 0xE6B80);
    eax = eax + 0x1D0;
    MEM32(edi + 8) = eax;
    MEM32(ebp + 0xE6C8C) = MEM32(ebp + 0xE6C8C) + 1;
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_00114A62; /* je: equal / zero */

loc_00114A05:
    esi = MEM32(eax + 0x1B8);
    if (TEST_Z(esi, esi)) goto loc_00114A62; /* je: equal / zero */

loc_00114A0F:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_00114A19:
    if (CMP_EQ(eax, 6)) goto loc_00114A4B; /* je: equal / zero */

loc_00114A1E:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00114A28:
    if (CMP_EQ(eax, 3)) goto loc_00114A4B; /* je: equal / zero */

loc_00114A2D:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_00114A37:
    if (CMP_EQ(eax, 4)) goto loc_00114A4B; /* je: equal / zero */

loc_00114A3C:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00114A46:
    if (CMP_NE(eax, 5)) goto loc_00114A62; /* jne: not equal / not zero */

loc_00114A4B:
    ecx = MEM32(esp + 0x20);
    edi = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = 0x739C60;
    PUSH32(esp, 0); sub_0017DA40(); /* call 0x0017DA40 */

loc_00114A5E:
    edi = MEM32(esp + 0x14);

loc_00114A62:
    SET_LO8(eax, MEM8(esp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114AE2; /* je: equal / zero */

loc_00114A6A:
    edx = MEM32(ebx + 0x110);
    if (TEST_Z(edx, edx)) goto loc_00114AE2; /* je: equal / zero */

loc_00114A74:
    ecx = MEM32(ebp + 0x1CB70);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00114A9B; /* jle: less or equal (signed <=) */

loc_00114A80:
    ecx = ebp + 0x7C;

loc_00114A83:
    if (CMP_NE(MEM8(ecx + -12), 3)) goto loc_00114A8D; /* jne: not equal / not zero */

loc_00114A89:
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00114A9B; /* je: equal / zero */

loc_00114A8D:
    esi = MEM32(ebp + 0x1CB70);
    eax++;
    ecx = ecx + 0x30;
    if (CMP_L(eax, esi)) goto loc_00114A83; /* jl: less (signed <) */

loc_00114A9B:
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx << 4;
    esi = edx + ebp;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_00114AC2:
    eax = MEM32(esi + 0x7C);
    ecx = MEM32(edi + 0xC);
    MEM8(eax + 0x2428) = 1;
    MEM32(eax + 0x2424) = ecx;
    MEM8(ecx + 0x2428) = 0;
    MEM32(ecx + 0x2424) = eax;

loc_00114AE2:
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114B62; /* je: equal / zero */

loc_00114AEA:
    edx = MEM32(ebx + 0x10C);
    if (TEST_Z(edx, edx)) goto loc_00114B62; /* je: equal / zero */

loc_00114AF4:
    ecx = MEM32(ebp + 0x1CB70);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00114B1B; /* jle: less or equal (signed <=) */

loc_00114B00:
    ecx = ebp + 0x7C;

loc_00114B03:
    if (CMP_NE(MEM8(ecx + -12), 3)) goto loc_00114B0D; /* jne: not equal / not zero */

loc_00114B09:
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00114B1B; /* je: equal / zero */

loc_00114B0D:
    esi = MEM32(ebp + 0x1CB70);
    eax++;
    ecx = ecx + 0x30;
    if (CMP_L(eax, esi)) goto loc_00114B03; /* jl: less (signed <) */

loc_00114B1B:
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x24);
    ecx = ecx << 4;
    PUSH32(esp, edx);
    esi = ecx + ebp;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x70;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_00114B42:
    eax = MEM32(esi + 0x7C);
    ecx = MEM32(edi + 0xC);
    MEM8(ecx + 0x2428) = 1;
    MEM32(ecx + 0x2424) = eax;
    MEM8(eax + 0x2428) = 0;
    MEM32(eax + 0x2424) = ecx;

loc_00114B62:
    MEM8(ebx + 0x174) = MEM8(ebx + 0x174) | 2;
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00114CFA; /* jne: not equal / not zero */

loc_00114B76:
    SET_LO8(edx, MEM8(ebx + 0x17A));
    eax = MEM32(ebx + 0x114);
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    /* test eax, eax - flags set for next jcc */
    MEM8(ebx + 0x17A) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_00114CA2; /* je: equal / zero */

loc_00114B9B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A06F0(); /* call 0x001A06F0 */

loc_00114BA1:
    eax = MEM32(ebx + 0x114);
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_00114BAC:
    eax = MEM32(ebx + 0x114);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    SET_LO8(edx, MEM8(eax + 0x4B));
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    xmm3.f[0] = MEMF(0x3B16E4); /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x47) = LO8(ecx);
    MEM8(eax + 0x41) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x42) = LO8(ecx);
    MEM8(eax + 0x43) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 0xE2);
    MEM8(eax + 0x4B) = LO8(edx);
    ecx = 0xFFFF;
    MEM16(eax + 0x3C) = LO16(ecx);
    MEM16(eax + 0x3E) = LO16(ecx);
    esi = 0; /* xor self */
    MEM8(eax + 0x46) = 0;
    MEM32(eax + 0x38) = esi;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x4D) = 0;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x4C) = 0;
    MEM8(eax + 0x48) = 0;
    ecx = MEM32(0x649B4C);
    SET_LO8(edx, MEM8(ecx + 0x49));
    MEM8(eax + 0x44) = LO8(edx);
    MEM32(0x649B4C) = eax;
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 5);
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    SET_LO16(edx, ZX8(LO8(edx)));
    edx = ZX16(LO16(edx));
    if (((int32_t)ecx >= 0)) goto loc_00114C7F; /* jns: not sign (positive) */

loc_00114C7A:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00114C7F:
    ebp = MEM32(edx * 4 + 0x649AE0);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = ~edi;
    ebp = ebp & edi;
    MEM32(edx * 4 + 0x649AE0) = ebp;
    MEM8(eax + 0x4B) = MEM8(eax + 0x4B) & 0xF7;
    MEM32(ebx + 0x114) = esi;

loc_00114CA2:
    eax = MEM32(ebx + 0x118);
    if (TEST_Z(eax, eax)) goto loc_00114CBE; /* je: equal / zero */

loc_00114CAC:
    MEM32(ebx + 0x118) = 0;
    MEMF(ebx + 0x11C) = xmm2.f[0]; /* movss */

loc_00114CBE:
    SET_LO8(eax, MEM8(0x649B97));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebx + 0x110);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114CD3; /* je: equal / zero */

loc_00114CCD:
    if (TEST_Z(ecx, ecx)) goto loc_00114CE5; /* je: equal / zero */

loc_00114CD1:
    goto loc_00114CE0;

loc_00114CD3:
    if (TEST_Z(ecx, ecx)) goto loc_00114CE5; /* je: equal / zero */

loc_00114CD7:
    if (TEST_NZ(MEM8(ebx + 0x174), 2)) goto loc_00114CE5; /* jne: not equal / not zero */

loc_00114CE0:
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_00114CE5:
    PUSH32(esp, 1);
    eax = ebx;
    esi = 0x6137E0;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_00114CF3:
    MEM8(ebx + 0x174) = 0;

loc_00114CFA:
    POP32(esp, edi);

}
