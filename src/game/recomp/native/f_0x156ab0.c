#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00156AB0
 * Original: 0x00156AB0 - 0x00156D3F (655 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00156AB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    /* test MEM8(ebx + 0x14), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(ebx + 0x14), 2)) goto loc_00156ACE; /* jne: not equal / not zero */

loc_00156AC4:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00156ACE:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    SET_LO8(eax, MEM8(ebx + 0x18));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm0.b, 16); /* movaps */
    MEM8(esp + 0x17) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00156D3C; /* jbe: below or equal (unsigned <=) */

loc_00156B1A:
    eax = esp + 0x40;
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    MEM32(esp + 0x2C) = eax;
    goto loc_00156B40;

loc_00156B2F:
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    goto loc_00156B40;

    /* nop */

loc_00156B40:
    ecx = ZX8(MEM8(esp + 0x17));
    eax = MEM32(ebx + 0x10);
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    edx = ecx + ecx * 2;
    edx = eax + edx * 4;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm6.b, 16); /* movaps */
    esi = edx + 8;
    edi = 2;
    /* nop */

loc_00156B70:
    eax = ZX8(MEM8(esi));
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = eax << 6;
    eax = eax + MEM32(ebp + 0xC);
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    eax = esp + 0x38;
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */
    xmm5.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm6.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = esp + 0x3C;
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = esp + 0x28;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    edx = edx + 4;
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    esi++;
    edi--;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm4.b, 16); /* movaps */
    if ((edi != 0)) goto loc_00156B70; /* jne: not equal / not zero */

loc_00156C2D:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = esp + 0x34;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = esp + 0x30;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* addps: xmm6.f[0] += xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm5.f[0] (packed 4xfloat) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = esp + 0x18;
    xmm1.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebx + 8);
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = ecx << 4;
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = edx + ecx;
    /* addps: xmm3.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm4.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm4.b, 16); /* movaps */
    MEM32(esp + 0x24) = edx;
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x24);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax), xmm0.b, 16); /* movaps */
    SET_LO8(eax, MEM8(esp + 0x17));
    SET_LO8(ecx, MEM8(ebx + 0x18));
    SET_LO8(eax, LO8(eax) + 1);
    /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ecx))) goto loc_00156B2F; /* jb: below (unsigned <) */

loc_00156D3C:
    POP32(esp, edi);
    SET_LO8(eax, 1);

}
