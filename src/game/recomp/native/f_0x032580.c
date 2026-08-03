#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00032580
 * Original: 0x00032580 - 0x00032804 (644 bytes, 157 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00032580:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    /* cmp ebx, 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ebx, 2)) goto loc_000327FE; /* je: equal / zero */

loc_00032597:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(0x45BC10);
    ecx = MEM32(0x4A1D04);
    edx = MEM32(0x4D67D4);
    xmm1.f[0] = MEMF(0x4D67E0); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B16CC); /* subss */
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    ecx = MEM32(0x4D67D0);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(0x4D67DC);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEM32(0x75DB70) = eax;
    eax = MEM32(0x4D67D8);
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    edx = MEM32(0x4A1CF8);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x20);
    MEM32(esp + 0x1C) = eax;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    ecx = 0x10;
    esi = esp + 0x38;
    edi = esp + 0x78;
    PUSH32(esp, 0);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0034EDB0(); /* call 0x0034EDB0 */

loc_00032680:
    esi = 1;
    if (CMP_NE(ebx, esi)) goto loc_000326E0; /* jne: not equal / not zero */

loc_00032689:
    eax = MEM32(0x4D65B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_00032694:
    ecx = MEM32(0x4D65BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_000326A0:
    eax = MEM32(0x75D974);
    edx = MEM32(0x45D11C);
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75DB74) = edx;
    if (TEST_NZ(eax, eax)) goto loc_000326D4; /* jne: not equal / not zero */

loc_000326B8:
    eax = MEM32(0x75D944);
    ecx = eax;
    ecx = ecx << 4;
    eax++;
    MEM32(0x75D974) = esi;
    MEM32(ecx + 0x75D2A4) = esi;
    MEM32(0x75D944) = eax;

loc_000326D4:
    MEM32(0x75D754) = 3;
    goto loc_00032733;

loc_000326E0:
    if (CMP_NE(ebx, 4)) goto loc_00032704; /* jne: not equal / not zero */

loc_000326E5:
    edx = MEM32(0x4D65B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_000326F1:
    eax = MEM32(0x4D65BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_000326FC:
    ecx = MEM32(0x45D118);
    goto loc_0003272A;

loc_00032704:
    if (CMP_NE(ebx, 6)) goto loc_000327FE; /* jne: not equal / not zero */

loc_0003270D:
    edx = MEM32(0x4D65B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_00032719:
    eax = MEM32(0x4D65BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_00032724:
    ecx = MEM32(0x45D11C);

loc_0003272A:
    esp = esp + 8;
    MEM32(0x75DB74) = ecx;

loc_00032733:
    PUSH32(esp, 0x4D66F0);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF153(); /* call 0x001CF153 */

loc_00032747:
    ecx = esp + 0x30;
    edx = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 8), xmm3.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x18), xmm3.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm1.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x28), xmm4.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm1.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x38), xmm4.b + 8, 8); /* movhps */
    ecx = 0x70;
    PUSH32(esp, 0); sub_0034F8F0(); /* call 0x0034F8F0 */

loc_000327A7:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0; /* xor self */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034E9A0(); /* call 0x0034E9A0 */

loc_000327DD:
    ecx = MEM32(0x4A1CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x540);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_001D7D10(); /* call 0x001D7D10 */

loc_000327F0:
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034EDB0(); /* call 0x0034EDB0 */

loc_000327FE:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
