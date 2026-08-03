#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C3B0
 * Original: 0x0019C3B0 - 0x0019C496 (230 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019C3B0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    edx = MEM32(eax + ebx * 4 + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + ebx * 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x4C);
    edi = edi + 0x60EC2C;
    /* cmp ebx, 3 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(ebx, 3)) goto loc_0019C3F1; /* jne: not equal / not zero */

loc_0019C3D3:
    SET_LO8(eax, MEM8(ebp + 0x16));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019C418; /* jne: not equal / not zero */

loc_0019C3DA:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_0019C2D0(); /* call 0x0019C2D0 */

loc_0019C3E3:
    /* cmp LO8(eax), MEM8(ebp + 0x17) - flags set for next jcc */
    MEM8(ebp + 0x16) = LO8(eax);
    if (CMP_NE(LO8(eax), MEM8(ebp + 0x17))) goto loc_0019C414; /* jne: not equal / not zero */

loc_0019C3EB:
    MEM8(ebp + 0x16) = 0xFF;
    goto loc_0019C45E;

loc_0019C3F1:
    if (CMP_NE(ebx, 2)) goto loc_0019C452; /* jne: not equal / not zero */

loc_0019C3F6:
    SET_LO8(eax, MEM8(ebp + 0x15));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019C418; /* jne: not equal / not zero */

loc_0019C3FD:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_0019C2D0(); /* call 0x0019C2D0 */

loc_0019C406:
    /* cmp LO8(eax), MEM8(ebp + 0x17) - flags set for next jcc */
    MEM8(ebp + 0x15) = LO8(eax);
    if (CMP_NE(LO8(eax), MEM8(ebp + 0x17))) goto loc_0019C414; /* jne: not equal / not zero */

loc_0019C40E:
    MEM8(ebp + 0x15) = 0xFF;
    goto loc_0019C45E;

loc_0019C414:
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C45E; /* je: equal / zero */

loc_0019C418:
    esi = ZX8(LO8(eax));
    esi = esi + esi * 4;
    esi = esi << 4;
    esi = esi + 0x63DCB0;
    if (TEST_Z(esi, esi)) goto loc_0019C452; /* je: equal / zero */

loc_0019C42B:
    eax = MEM32(esi + 0x30);
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0019E210(); /* call 0x0019E210 */

loc_0019C43C:
    SET_LO8(ecx, MEM8(esi + 0x49));
    POP32(esp, edi);
    MEM8(esi + 0x46) = 2;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x10) = LO8(ecx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019C452:
    if (CMP_NE(ebx, 1)) goto loc_0019C45E; /* jne: not equal / not zero */

loc_0019C457:
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C490; /* je: equal / zero */

loc_0019C45E:
    SET_LO8(eax, MEM8(ebx + ebp + 0x10));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C490; /* je: equal / zero */

loc_0019C466:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019C48B; /* jne: not equal / not zero */

loc_0019C47A:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019C48B:
    MEM8(ebx + ebp + 0x10) = 0xFF;

loc_0019C490:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
