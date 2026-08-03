#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0600
 * Original: 0x001A0600 - 0x001A06EE (238 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0600:
    SET_LO8(ecx, MEM8(eax + 0x41));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(0x649B7C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001A0615; /* jne: not equal / not zero */

loc_001A0611:
    esi = 0; /* xor self */
    goto loc_001A0621;

loc_001A0615:
    esi = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    esi = esi + 0x60EC2C;

loc_001A0621:
    SET_LO8(ecx, MEM8(eax + 0x45));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A063E; /* je: equal / zero */

loc_001A0629:
    SET_LO8(edx, MEM8(eax + 0x44));
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    MEM8(ecx + 0x44) = LO8(edx);

loc_001A063E:
    SET_LO8(ecx, MEM8(eax + 0x44));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A065D; /* je: equal / zero */

loc_001A0646:
    SET_LO8(edx, MEM8(eax + 0x45));
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    MEM8(ecx + 0x45) = LO8(edx);
    goto loc_001A0663;

loc_001A065D:
    SET_LO8(ecx, MEM8(eax + 0x45));
    MEM8(esi + 0x46) = LO8(ecx);

loc_001A0663:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x10);
    ecx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_L(ecx, edx)) goto loc_001A0674; /* jl: less (signed <) */

loc_001A0671:
    ecx = edx + -1;

loc_001A0674:
    /* test ecx, ecx - flags set for next jcc */
    edi = ecx;
    if (TEST_S(ecx, ecx)) goto loc_001A06A2; /* jl: less (signed <) */

loc_001A067A:
    /* nop */

loc_001A0680:
    ecx = ZX16(MEM16(esi + 4));
    ecx = ecx + edi;
    SET_LO8(edx, MEM8(ecx + ebp));
    ecx = ecx + ebp;
    if (CMP_NE(LO8(edx), MEM8(eax + 0x49))) goto loc_001A06A2; /* jne: not equal / not zero */

loc_001A0690:
    SET_LO8(edx, MEM8(eax + 0x44));
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_001A069C; /* je: equal / zero */

loc_001A0698:
    MEM8(ecx) = LO8(edx);
    goto loc_001A069F;

loc_001A069C:
    MEM8(ecx) = 0xFF;

loc_001A069F:
    edi--;
    if (((int32_t)edi >= 0)) goto loc_001A0680; /* jns: not sign (positive) */

loc_001A06A2:
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x10);
    edx = ZX16(MEM16(esi + 4));
    ecx--;
    edx = edx + ecx;
    edi = edx + ebp;
    SET_LO8(edx, MEM8(edi));
    if (CMP_NE(LO8(edx), MEM8(eax + 0x49))) goto loc_001A06BB; /* jne: not equal / not zero */

loc_001A06B8:
    MEM8(edi) = 0xFF;

loc_001A06BB:
    ecx--;
    if (((int32_t)ecx < 0)) goto loc_001A06D8; /* js: sign (negative) */

loc_001A06BE:
    edi = edi;

loc_001A06C0:
    edx = ZX16(MEM16(esi + 4));
    edx = edx + ecx;
    edi = edx + ebp;
    SET_LO8(edx, MEM8(edi));
    if (CMP_NE(LO8(edx), MEM8(eax + 0x49))) goto loc_001A06D5; /* jne: not equal / not zero */

loc_001A06D0:
    SET_LO8(edx, MEM8(edi + 1));
    MEM8(edi) = LO8(edx);

loc_001A06D5:
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_001A06C0; /* jns: not sign (positive) */

loc_001A06D8:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x44) = 0xFF;
    MEM8(eax + 0x45) = 0xFF;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
