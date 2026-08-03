#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128180
 * Original: 0x00128180 - 0x00128679 (1273 bytes, 386 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00128180:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ecx = 0x20;
    ebx = ecx;
    ebx = ebx - edx;
    MEM32(esp + 0x18) = ebx;
    ebx = 0x30;
    ebx = ebx - edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebx;
    esi = 0x10;
    ebx = 0xFFFFFFE0u;
    esi = esi - edx;
    PUSH32(esp, edi);
    ebx = ebx - edx;
    edi = eax;
    eax = edx + 0x20;
    MEM32(esp + 0x24) = ebx;
    goto loc_001281C1;

loc_001281BD:
    ebx = MEM32(esp + 0x24);

loc_001281C1:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + -32), 16); /* movaps */
    edx = ebx + eax;
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 8);
    memcpy((void *)XBOX_PTR(ebx + edx), xmm0.b, 16); /* movaps */
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + edx + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(edi + 4);
    edx = MEM32(edx + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ebx = MEM32(esp + 0x20);
    memcpy((void *)XBOX_PTR(edx + ecx), xmm0.b, 16); /* movaps */
    edx = MEM32(edi + 4);
    edx = MEM32(edx + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    edx = edx + esi;
    memcpy((void *)XBOX_PTR(edx + eax), xmm0.b, 16); /* movaps */
    edx = MEM32(edi + 4);
    edx = MEM32(edx + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    edx = edx + ebx;
    ebx = MEM32(esp + 0x1C);
    memcpy((void *)XBOX_PTR(edx + eax), xmm0.b, 16); /* movaps */
    edx = MEM32(edi + 4);
    edx = MEM32(edx + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = edx + ebx;
    memcpy((void *)XBOX_PTR(edx + eax), xmm0.b, 16); /* movaps */
    ecx = ecx + 0x60;
    eax = eax + 0x60;
    if (CMP_L(ecx, 0xE0)) goto loc_001281BD; /* jl: less (signed <) */

loc_00128234:
    eax = MEM32(edi + 4);
    MEM8(eax + 0x18) = 0xC;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x18));
    SET_LO8(ecx, LO8(ecx) - 2);
    SET_LO8(ecx, LO8(ecx) << 1);
    MEM8(eax + 0x19) = LO8(ecx);
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x18));
    SET_LO8(eax, LO8(eax) - 2);
    SET_LO8(edx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x1A) = LO8(eax);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    MEM32(eax + 0x14) = esi;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    MEM8(eax) = 0;
    MEM8(eax + 1) = 1;
    MEM8(eax + 2) = 2;
    edx = MEM32(edi + 4);
    eax = MEM32(edx);
    MEM8(eax + 3) = 8;
    MEM8(eax + 5) = 9;
    eax = eax + 3;
    ebx = 0xA;
    MEM8(eax + 1) = LO8(ebx);
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    MEM8(eax + 6) = 0;
    MEM8(eax + 7) = 2;
    MEM8(eax + 8) = 4;
    ecx = MEM32(edi + 4);
    eax = eax + 6;
    eax = MEM32(ecx);
    MEM8(eax + 9) = 1;
    MEM8(eax + 0xA) = 5;
    MEM8(eax + 0xB) = 3;
    edx = MEM32(edi + 4);
    eax = eax + 9;
    eax = MEM32(edx);
    MEM8(eax + 0xC) = 0;
    MEM8(eax + 0xD) = 4;
    MEM8(eax + 0xE) = 8;
    eax = eax + 0xC;
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    MEM8(eax + 0xF) = 2;
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 0x11) = 6;
    ecx = MEM32(edi + 4);
    eax = eax + 0xF;
    eax = MEM32(ecx);
    MEM8(eax + 0x12) = 1;
    MEM8(eax + 0x13) = 3;
    MEM8(eax + 0x14) = 2;
    edx = MEM32(edi + 4);
    eax = eax + 0x12;
    eax = MEM32(edx);
    MEM8(eax + 0x15) = 4;
    MEM8(eax + 0x16) = 2;
    MEM8(eax + 0x17) = 6;
    eax = eax + 0x15;
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    eax = eax + 0x18;
    MEM8(eax) = 3;
    MEM8(eax + 1) = 5;
    MEM8(eax + 2) = 7;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    eax = eax + 0x1B;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    ecx = 4;
    edx = 8;
    MEM8(eax) = 9;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = 0xB;
    PUSH32(esp, 0); sub_001280C0(); /* call 0x001280C0 */

loc_00128336:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012835B; /* je: equal / zero */

loc_0012833A:
    edx = MEM32(edi + 4);
    eax = MEM32(edx);
    eax = eax + 0x1E;
    MEM8(eax) = 4;
    MEM8(eax + 1) = 6;
    MEM8(eax + 2) = 8;
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    eax = eax + 0x21;
    MEM8(eax + 1) = 6;
    goto loc_00128379;

loc_0012835B:
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    eax = eax + 0x1E;
    MEM8(eax) = 4;
    MEM8(eax + 1) = 6;
    MEM8(eax + 2) = LO8(ebx);
    edx = MEM32(edi + 4);
    eax = MEM32(edx);
    eax = eax + 0x21;
    MEM8(eax + 1) = 4;

loc_00128379:
    PUSH32(esp, 5);
    MEM8(eax) = 8;
    PUSH32(esp, 7);
    ecx = 0xB;
    edx = 9;
    MEM8(eax + 2) = LO8(ebx);
    PUSH32(esp, 0); sub_001280C0(); /* call 0x001280C0 */

loc_00128392:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001283B7; /* je: equal / zero */

loc_00128396:
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    eax = eax + 0x24;
    MEM8(eax) = 5;
    MEM8(eax + 1) = 9;
    MEM8(eax + 2) = 7;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    eax = eax + 0x27;
    MEM8(eax + 1) = 9;
    goto loc_001283D6;

loc_001283B7:
    edx = MEM32(edi + 4);
    eax = MEM32(edx);
    eax = eax + 0x24;
    MEM8(eax) = 5;
    MEM8(eax + 1) = 9;
    MEM8(eax + 2) = 0xB;
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    eax = eax + 0x27;
    MEM8(eax + 1) = 5;

loc_001283D6:
    MEM8(eax) = 7;
    MEM8(eax + 2) = 0xB;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    MEM8(eax + 0x2A) = 0;
    MEM8(eax + 0x2B) = 8;
    MEM8(eax + 0x2C) = 1;
    edx = MEM32(edi + 4);
    eax = eax + 0x2A;
    eax = MEM32(edx);
    MEM8(eax + 0x2D) = 1;
    MEM8(eax + 0x2E) = 8;
    MEM8(eax + 0x2F) = 9;
    eax = eax + 0x2D;
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    MEM8(eax + 0x31) = 9;
    MEM8(eax + 0x32) = 5;
    ecx = MEM32(edi + 4);
    eax = eax + 0x30;
    eax = MEM32(ecx);
    MEM8(eax + 0x33) = 2;
    MEM8(eax + 0x34) = 3;
    MEM8(eax + 0x35) = LO8(ebx);
    edx = MEM32(edi + 4);
    eax = eax + 0x33;
    eax = MEM32(edx);
    eax = eax + 0x36;
    MEM8(eax) = 3;
    MEM8(eax + 1) = 0xB;
    MEM8(eax + 2) = LO8(ebx);
    eax = MEM32(edi + 4);
    eax = MEM32(eax);
    eax = eax + 0x39;
    MEM8(eax) = 3;
    MEM8(eax + 1) = 7;
    MEM8(eax + 2) = 0xB;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x19));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00128672; /* jbe: below or equal (unsigned <=) */

loc_00128463:
    xmm3.f[0] = MEMF(0x3B191C); /* movss */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = esi;

loc_00128477:
    ebx = MEM32(edi + 4);
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x1C);
    esi = ZX8(MEM8(edx + ecx + 1));
    ebx = MEM32(ebx + 8);
    edx = edx + ecx;
    ecx = ZX8(MEM8(edx));
    edx = ZX8(MEM8(edx + 2));
    esi = esi << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + ebx), 16); /* movaps */
    esi = MEM32(edi + 4);
    esi = MEM32(esi + 8);
    ecx = ecx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi + ecx), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    edx = edx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + esi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x28;
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx) = xmm5.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0x28) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if ((xmm3.f[0] > MEMF(esp + 0x28))) goto loc_00128558; /* ja: above (unsigned >) */

loc_0012850B:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */

loc_00128558:
    eax = MEM32(eax + 4);
    esi = MEM32(esp + 0x20);
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEMF(eax + esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(eax + esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    eax = eax + esi;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ecx), 16); /* movaps */
    edx = MEM32(eax + 4);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0x39 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x1C);
    eax = ecx + edx;
    edx = ZX8(MEM8(eax));
    ecx = ZX8(MEM8(eax + 1));
    /* cmp edx, ecx - flags set for next jcc */
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(edx, ecx)) goto loc_001285FC; /* jge: greater or equal (signed >=) */

loc_001285DC:
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x18);
    MEM8(eax + ebx) = LO8(edx);
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 0xC);
    MEM8(ebx + eax + 1) = LO8(ecx);
    eax = eax + 2;
    MEM32(esp + 0x18) = eax;
    goto loc_00128600;

loc_001285FC:
    eax = MEM32(esp + 0x18);

loc_00128600:
    if (CMP_GE(ecx, MEM32(esp + 0x20))) goto loc_00128626; /* jge: greater or equal (signed >=) */

loc_00128606:
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 0xC);
    MEM8(eax + ebx) = LO8(ecx);
    ecx = MEM32(edi + 4);
    ebx = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x20);
    MEM8(ebx + eax + 1) = LO8(ecx);
    eax = eax + 2;
    MEM32(esp + 0x18) = eax;
    goto loc_0012862A;

loc_00128626:
    ecx = MEM32(esp + 0x20);

loc_0012862A:
    if (CMP_GE(ecx, edx)) goto loc_00128648; /* jge: greater or equal (signed >=) */

loc_0012862E:
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 0xC);
    MEM8(eax + ebx) = LO8(ecx);
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0xC);
    MEM8(ecx + eax + 1) = LO8(edx);
    eax = eax + 2;
    MEM32(esp + 0x18) = eax;

loc_00128648:
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x1C);
    edx = ZX8(MEM8(eax + 0x19));
    ecx++;
    esi = esi + 0x10;
    ebx = ebx + 3;
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(ecx, edx)) goto loc_00128477; /* jl: less (signed <) */

loc_00128672:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
