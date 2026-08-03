#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001F450
 * Original: 0x0001F450 - 0x0001F653 (515 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F450:
    esp = esp - 0xC;
    xmm1.f[0] = MEMF(0x3B172C); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    goto loc_0001F470;

    /* nop */

loc_0001F470:
    ecx = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;

loc_0001F476:
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x20);
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    eax = eax + esi;
    if (CMP_A(ecx, 3)) goto loc_0001F63E; /* ja: above (unsigned >) */

loc_0001F491:
    { uint32_t _jt = MEM32(ecx * 4 + 0x1F670); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0001F498u) goto loc_0001F498;
    if (_jt == 0x0001F508u) goto loc_0001F508;
    if (_jt == 0x0001F576u) goto loc_0001F576;
    if (_jt == 0x0001F5E5u) goto loc_0001F5E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001F498:
    ecx = eax;
    eax = eax - 0x3C83D4;
    MEM32(esp + 0x14) = 5;
    goto loc_0001F4B0;

    /* nop */

loc_0001F4B0:
    SET_LO16(esi, MEM16(0x3C83D4));
    edi = ecx + 0x10;
    /* cmp ecx, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(ecx) = LO16(esi);
    if (CMP_AE(ecx, edi)) goto loc_0001F4DC; /* jae: above or equal (unsigned >=) */

loc_0001F4C6:
    if (CMP_EQ(MEM16(edx), LO16(ebx))) goto loc_0001F4DF; /* je: equal / zero */

loc_0001F4CB:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = eax + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F4C6; /* jb: below (unsigned <) */

loc_0001F4DC:
    MEM16(edi) = LO16(ebx);

loc_0001F4DF:
    edx = MEM32(esp + 0x14);
    MEM8(ecx + 0x12) = LO8(ebx);
    MEM8(ecx + 0x13) = LO8(ebx);
    MEM8(ecx + 0x14) = 0xFF;
    MEM8(ecx + 0x15) = 0xFF;
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    ecx = ecx + 0x1C;
    eax = eax + 0x1C;
    edx--;
    MEM32(esp + 0x14) = edx;
    if ((edx != 0)) goto loc_0001F4B0; /* jne: not equal / not zero */

loc_0001F503:
    goto loc_0001F63E;

loc_0001F508:
    ecx = eax;
    eax = eax - 0x3C83D4;
    MEM32(esp + 0x14) = 5;
    goto loc_0001F520;

    /* nop */

loc_0001F520:
    SET_LO16(esi, MEM16(0x3C83D4));
    edi = ecx + 0x10;
    /* cmp ecx, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(ecx) = LO16(esi);
    if (CMP_AE(ecx, edi)) goto loc_0001F54C; /* jae: above or equal (unsigned >=) */

loc_0001F536:
    if (CMP_EQ(MEM16(edx), LO16(ebx))) goto loc_0001F54F; /* je: equal / zero */

loc_0001F53B:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = eax + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F536; /* jb: below (unsigned <) */

loc_0001F54C:
    MEM16(edi) = LO16(ebx);

loc_0001F54F:
    edx = MEM32(esp + 0x14);
    MEM8(ecx + 0x12) = LO8(ebx);
    MEM8(ecx + 0x13) = LO8(ebx);
    MEM8(ecx + 0x14) = 0xFF;
    MEM8(ecx + 0x15) = 0xFF;
    MEM32(ecx + 0x18) = ebx;
    ecx = ecx + 0x1C;
    eax = eax + 0x1C;
    edx--;
    MEM32(esp + 0x14) = edx;
    if ((edx != 0)) goto loc_0001F520; /* jne: not equal / not zero */

loc_0001F571:
    goto loc_0001F63E;

loc_0001F576:
    ecx = eax;
    eax = eax - 0x3C83D4;
    MEM32(esp + 0x14) = 5;
    goto loc_0001F590;

    /* nop */
    edi = edi;

loc_0001F590:
    SET_LO16(esi, MEM16(0x3C83D4));
    edi = ecx + 0x10;
    /* cmp ecx, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(ecx) = LO16(esi);
    if (CMP_AE(ecx, edi)) goto loc_0001F5BC; /* jae: above or equal (unsigned >=) */

loc_0001F5A6:
    if (CMP_EQ(MEM16(edx), LO16(ebx))) goto loc_0001F5BF; /* je: equal / zero */

loc_0001F5AB:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = eax + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F5A6; /* jb: below (unsigned <) */

loc_0001F5BC:
    MEM16(edi) = LO16(ebx);

loc_0001F5BF:
    edx = MEM32(esp + 0x14);
    MEM8(ecx + 0x12) = LO8(ebx);
    MEM8(ecx + 0x13) = LO8(ebx);
    MEM8(ecx + 0x14) = 0xFF;
    MEM8(ecx + 0x15) = 0xFF;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    ecx = ecx + 0x1C;
    eax = eax + 0x1C;
    edx--;
    MEM32(esp + 0x14) = edx;
    if ((edx != 0)) goto loc_0001F590; /* jne: not equal / not zero */

loc_0001F5E3:
    goto loc_0001F63E;

loc_0001F5E5:
    ecx = eax;
    eax = eax - 0x3C83D4;
    ebp = 5;

loc_0001F5F1:
    SET_LO16(esi, MEM16(0x3C83D4));
    edi = ecx + 0x10;
    /* cmp ecx, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(ecx) = LO16(esi);
    if (CMP_AE(ecx, edi)) goto loc_0001F61F; /* jae: above or equal (unsigned >=) */

loc_0001F607:
    if (CMP_EQ(MEM16(edx), LO16(ebx))) goto loc_0001F622; /* je: equal / zero */

loc_0001F60C:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = eax + edx;
    MEM16(esi) = LO16(ebx);
    ebx = 0; /* xor self */
    if (CMP_B(esi, edi)) goto loc_0001F607; /* jb: below (unsigned <) */

loc_0001F61F:
    MEM16(edi) = LO16(ebx);

loc_0001F622:
    MEM8(ecx + 0x12) = LO8(ebx);
    MEM8(ecx + 0x13) = LO8(ebx);
    MEM8(ecx + 0x14) = 0xFF;
    MEM8(ecx + 0x15) = 0xFF;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    ecx = ecx + 0x1C;
    eax = eax + 0x1C;
    ebp--;
    if ((ebp != 0)) goto loc_0001F5F1; /* jne: not equal / not zero */

loc_0001F63E:
    ecx = MEM32(esp + 0x18);
    ecx++;
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, 4)) goto loc_0001F476; /* jl: less (signed <) */

}
