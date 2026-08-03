#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128D40
 * Original: 0x00128D40 - 0x00128FBC (636 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00128D40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_001289B0(); /* call 0x001289B0 */

loc_00128D5F:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi + 0x38);
    eax = eax - 0;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if ((eax == 0)) goto loc_00128D95; /* je: equal / zero */

loc_00128D6F:
    eax--;
    if ((eax == 0)) goto loc_00128D7E; /* je: equal / zero */

loc_00128D72:
    eax--;
    if ((eax == 0)) goto loc_00128D95; /* je: equal / zero */

loc_00128D75:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_00128DD0;

loc_00128D7E:
    if (CMP_NE(esi, 6)) goto loc_00128D8C; /* jne: not equal / not zero */

loc_00128D83:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF30), 16); /* movaps */
    goto loc_00128DD0;

loc_00128D8C:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_00128DD0;

loc_00128D95:
    if (CMP_EQ(esi, 4)) goto loc_00128DC9; /* je: equal / zero */

loc_00128D9A:
    if (CMP_EQ(esi, 5)) goto loc_00128DC9; /* je: equal / zero */

loc_00128D9F:
    if (CMP_EQ(esi, 2)) goto loc_00128DC0; /* je: equal / zero */

loc_00128DA4:
    if (CMP_EQ(esi, 3)) goto loc_00128DC0; /* je: equal / zero */

loc_00128DA9:
    if (CMP_NE(esi, 6)) goto loc_00128DB7; /* jne: not equal / not zero */

loc_00128DAE:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AEF0), 16); /* movaps */
    goto loc_00128DD0;

loc_00128DB7:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AEE0), 16); /* movaps */
    goto loc_00128DD0;

loc_00128DC0:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF10), 16); /* movaps */
    goto loc_00128DD0;

loc_00128DC9:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40AF00), 16); /* movaps */

loc_00128DD0:
    /* cmp esi, 5 - flags set for next jcc */
    xmm3.f[0] = MEMF(esp + 0x34); /* movss */
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    if (CMP_A(esi, 5)) goto loc_00128E80; /* ja: above (unsigned >) */

loc_00128DEF:
    { uint32_t _jt = MEM32(esi * 4 + 0x128FBC); /* switch: 6 entries, 3 targets */
    if (_jt == 0x00128DF6u) goto loc_00128DF6;
    if (_jt == 0x00128E80u) goto loc_00128E80;
    if (_jt == 0x00128F19u) goto loc_00128F19;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00128DF6:
    eax = MEM32(edi + 0x18);
    xmm0.f[0] = MEMF(eax + 0xA7C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x160), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x28);
    edi = eax;
    xmm0.f[0] = MEMF(edi + 0x264); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x164); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E8); /* mulss */
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = edx;
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00128E80:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */

loc_00128E86:
    /* cmp esi, 6 - flags set for next jcc */
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x10); /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3925A4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    if (CMP_EQ(esi, 6)) goto loc_00128EC1; /* je: equal / zero */

loc_00128EAC:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */

loc_00128EC1:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    eax = ebx + 0x10;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    MEM32(esp + 0xC) = eax;
    esi = MEM32(esp + 0xC);
    edi = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEM32(esp + 0xC) = eax;
    esi = MEM32(esp + 0xC);
    edi = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x2C), 16); /* movaps */
    POP32(esp, esi);
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00128F19:
    eax = MEM32(edi + 0x18);
    xmm0.f[0] = MEMF(eax + 0xA70); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x90), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x28);
    edi = eax;
    xmm0.f[0] = MEMF(edi + 0x224); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xA4); /* subss */
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x48) = edx;
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x2C);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00128E86;

}
