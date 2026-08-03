#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00051650
 * Original: 0x00051650 - 0x00051904 (692 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00051650:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edi = edx;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00051674:
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_000516A5; /* jne: not equal / not zero */

loc_00051680:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(esi + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_000516A5:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x27E0);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    edi = edi + 0x73B2A0;
    MEM32(esi + 0x30) = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x52) = LO8(ecx);
    edi = esi + 0x2C;
    ebx = 4;

loc_000516E4:
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000516F5:
    MEM32(edi) = eax;
    edi = edi - 4;
    ebx--;
    if ((ebx != 0)) goto loc_000516E4; /* jne: not equal / not zero */

loc_000516FD:
    ecx = MEM32(0x4D5370);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_00051708:
    edx = MEM32(0x54F884);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F800000);
    eax = eax + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    MEM16(esi + 0x4A) = LO16(eax);
    MEM16(esi + 0x48) = 0x2F;
    ebx = 0; /* xor self */
    MEM16(esi + 0x4C) = LO16(ebx);
    MEM16(esi + 0x50) = LO16(ebx);
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x54FA30);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x54FA30);
    eax = esp + 0x40;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54F854); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1F4C);
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00051797:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00051970(); /* call 0x00051970 */

loc_0005179D:
    if (CMP_EQ(MEM8(esi + 0x52), LO8(ebx))) goto loc_00051828; /* je: equal / zero */

loc_000517A6:
    eax = MEM32(esi + 0x2C);
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(esi + 0x24);
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1688); /* subss */
    xmm1.f[0] = MEMF(0x54F854); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x388F08); /* subss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0xC); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1684); /* mulss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    xmm0.f[0] = MEMF(0x389094); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    if (CMP_NE(MEM8(esi + 0x52), LO8(ebx))) goto loc_00051830; /* jne: not equal / not zero */

loc_00051828:
    xmm0.f[0] = MEMF(0x3B03F4); /* movss */

loc_00051830:
    esi = MEM32(esi + 0x20);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x399654); /* movss */
    xmm1.f[0] = MEMF(0x3897A8); /* movss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x54F374); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x54F394); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B17C8); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(0x3B1FE0); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm0.f[0] = MEMF(0x3A7964); /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1790); /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    ecx = MEM32(esp + 0x28);
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    MEM32(esi) = edx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x3C) = 0x48430;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
