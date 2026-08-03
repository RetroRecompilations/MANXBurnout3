#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0011F890
 * Original: 0x0011F890 - 0x0011FBFB (875 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0011F890:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + 0x1390);
    edx = MEM32(edi + 0x204);
    ecx = eax;
    MEMF(edi + 0x141C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1420) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1424) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1428) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x142C) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x1430) = eax;
    MEMF(edi + 0x1434) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1438) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x143C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x1440) = ecx;
    MEM8(edi + 0x1444) = 0;
    MEM8(edi + 0x1445) = 0;
    MEM8(edi + 0x1446) = 0;
    MEM32(edi + 0x1524) = 0;
    memcpy((void *)XBOX_PTR(edi + 0xD0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xE0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x100), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x110), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x120), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xC0), xmm0.b, 16); /* movaps */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x217);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1CC);
    esi = MEM32(edi + 0x204);
    ebx = esi + 0x30;
    eax = eax + 0x7397C8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_001AD4A0(); /* call 0x001AD4A0 */

loc_0011F97E:
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(edi + 0x216) = LO8(eax);
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0011F9A0; /* jne: not equal / not zero */

loc_0011F988:
    SET_LO8(ecx, MEM8(edi + 0x215));
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0011FA7A; /* je: equal / zero */

loc_0011F997:
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0011FA7A; /* je: equal / zero */

loc_0011F9A0:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1690); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1694); /* subss */
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x44;
    esi = SX8(LO8(eax));
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019D360(); /* call 0x0019D360 */

loc_0011F9EC:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011FA84; /* jne: not equal / not zero */

loc_0011F9F4:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x30;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00120470(); /* call 0x00120470 */

loc_0011FA09:
    eax = 0; /* xor self */
    esi = edi;
    PUSH32(esp, 0); sub_0011BC60(); /* call 0x0011BC60 */

loc_0011FA12:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001239C0(); /* call 0x001239C0 */

loc_0011FA18:
    SET_LO8(eax, MEM8(edi + 0x1169));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0011FA46; /* jle: less or equal (signed <=) */

loc_0011FA24:
    eax = edi + 0x880;
    /* nop */

loc_0011FA30:
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1169);
    ecx++;
    eax = eax + 0xC0;
    if (CMP_L(ecx, edx)) goto loc_0011FA30; /* jl: less (signed <) */

loc_0011FA46:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x100), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x110), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x120), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x130), xmm0.b, 16); /* movaps */
    eax = MEM32(0x60EA1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00123FD0(); /* call 0x00123FD0 */

loc_0011FA7A:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0011FA84:
    esi = MEM32(edi + 0x204);
    xmm0.f[0] = MEMF(edi + 0x870); /* movss */
    edx = esp + 0xD0;
    ecx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0011A720(); /* call 0x0011A720 */

loc_0011FAAC:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x74), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(edi + 0x204);
    eax = esp + 0x18;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x64), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    esi = MEM32(edi + 0x204);
    esp = esp + 4;
    PUSH32(esp, 0); sub_000FF270(); /* call 0x000FF270 */

loc_0011FAFE:
    eax = MEM32(edi + 0x204);
    edx = edi;
    PUSH32(esp, 0); sub_0010A440(); /* call 0x0010A440 */

loc_0011FB0B:
    edx = MEM32(edi + 0x204);
    SET_LO8(eax, MEM8(ebp + 8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xC0), xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011FB6F; /* je: equal / zero */

loc_0011FB23:
    eax = MEM32(ebp + 0xC);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = MEMF(0x5A8070); /* movss */
    if (TEST_Z(eax, eax)) goto loc_0011FB66; /* je: equal / zero */

loc_0011FB32:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B03FC); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */

loc_0011FB66:
    eax = edi;
    PUSH32(esp, 0); sub_001204C0(); /* call 0x001204C0 */

loc_0011FB6D:
    goto loc_0011FB84;

loc_0011FB6F:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x30;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00120470(); /* call 0x00120470 */

loc_0011FB84:
    eax = 0; /* xor self */
    esi = edi;
    PUSH32(esp, 0); sub_0011BC60(); /* call 0x0011BC60 */

loc_0011FB8D:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001239C0(); /* call 0x001239C0 */

loc_0011FB93:
    SET_LO8(eax, MEM8(edi + 0x1169));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0011FBC6; /* jle: less or equal (signed <=) */

loc_0011FB9F:
    eax = edi + 0x880;
    goto loc_0011FBB0;

    /* nop */
    edi = edi;

loc_0011FBB0:
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1169);
    ecx++;
    eax = eax + 0xC0;
    if (CMP_L(ecx, edx)) goto loc_0011FBB0; /* jl: less (signed <) */

loc_0011FBC6:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x100), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x110), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x120), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x130), xmm0.b, 16); /* movaps */
    eax = MEM32(0x60EA1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00123FD0(); /* call 0x00123FD0 */

loc_0011FBFA:
    POP32(esp, esi);

}
