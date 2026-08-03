#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010AC20
 * Original: 0x0010AC20 - 0x0010B20A (1514 bytes, 426 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010AC20:
    PUSH32(esp, ebx);
    ebx = esp;
    PUSH32(esp, ecx);
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xFF8;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    eax = MEM32(esi);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax);
    edi = esi + 0x160;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -20) = ecx;
    PUSH32(esp, edi);
    edx = ebp + -304;
    ecx = esi + 0x30;
    PUSH32(esp, edx);
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -40) = ecx;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0010AC7E:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -304), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + -432), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -288), 16); /* movaps */
    eax = esi + 0x70;
    memcpy((void *)XBOX_PTR(ebp + -416), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -272), 16); /* movaps */
    PUSH32(esp, eax);
    MEM32(ebp + -48) = eax;
    eax = ebp + -304;
    memcpy((void *)XBOX_PTR(ebp + -400), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -256), 16); /* movaps */
    ecx = esi + 0x120;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(ebp + -384), xmm0.b, 16); /* movaps */
    MEM32(ebp + -36) = ecx;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0010ACD2:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -304), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + -368), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -288), 16); /* movaps */
    eax = esi + 0x60;
    memcpy((void *)XBOX_PTR(ebp + -352), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -272), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(ebp + -336), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -256), 16); /* movaps */
    MEM32(ebp + -116) = eax;
    PUSH32(esp, edi);
    eax = ebp + -192;
    memcpy((void *)XBOX_PTR(ebp + -320), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010AD1D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebp + -48);
    eax = esi + 0x150;
    PUSH32(esp, eax);
    MEM32(ebp + -44) = eax;
    PUSH32(esp, ecx);
    eax = ebp + -192;
    memcpy((void *)XBOX_PTR(ebp + -240), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010AD40:
    edx = MEM32(esi);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = ZX8(MEM8(edx + 0x18));
    ecx = ebp + -1136;
    edx = ebp + -432;
    esp = esp + 0x10;
    memcpy((void *)XBOX_PTR(ebp + -192), xmm2.b, 16); /* movaps */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -32) = edx;
    esi = MEM32(ebp + -32);
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    esi = MEM32(ebp + -12);
    edi = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);

loc_0010AD83:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0010AD83; /* jne: not equal / not zero */

loc_0010ADBB:
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0xF0);
    edx = ZX8(MEM8(ecx + 0x18));
    eax = ebp + -784;
    MEM32(ebp + -32) = edx;
    MEM32(ebp + -16) = eax;
    ecx = ebp + -368;
    MEM32(ebp + -8) = ecx;
    esi = MEM32(ebp + -8);
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -32);

loc_0010ADF8:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0010ADF8; /* jne: not equal / not zero */

loc_0010AE30:
    eax = ebp + -64;
    memcpy((void *)XBOX_PTR(ebp + -64), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0010AE3C:
    edi = MEM32(ebx + 8);
    eax = MEM32(edi);
    edx = ebp + -1136;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp + -4080;
    PUSH32(esp, ecx);
    eax = ebp + -64;
    esi = ebp + -8;
    PUSH32(esp, 0); sub_0010B210(); /* call 0x0010B210 */

loc_0010AE5B:
    edx = MEM32(edi + 0xF0);
    eax = ZX8(MEM8(edx + 0x19));
    ecx = MEM32(ebp + -28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebp + -2160;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -8);
    eax = ebp + -4080;
    PUSH32(esp, 0); sub_0010C0D0(); /* call 0x0010C0D0 */

loc_0010AE7F:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -240), 16); /* movaps */
    MEM32(ebp + -12) = eax;
    esp = esp + 0x18;
    eax = ebp + -64;
    memcpy((void *)XBOX_PTR(ebp + -64), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0010AE98:
    ecx = MEM32(edi + 0xF0);
    eax = ebp + -784;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebp + -4080;
    PUSH32(esp, edx);
    eax = ebp + -64;
    PUSH32(esp, 0); sub_0010B210(); /* call 0x0010B210 */

loc_0010AEB5:
    eax = MEM32(edi);
    ecx = ZX8(MEM8(eax + 0x19));
    esi = MEM32(ebp + -12);
    edx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    MEM32(ebp + -16) = esi;
    esi = esi << 4;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -8);
    eax = ebp + esi + -2160;
    PUSH32(esp, eax);
    eax = ebp + -4080;
    PUSH32(esp, 0); sub_0010C0D0(); /* call 0x0010C0D0 */

loc_0010AEDF:
    ecx = MEM32(ebp + -12);
    ecx = ecx + eax;
    esp = esp + 0x18;
    /* cmp ecx, 1 - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(ecx, 1)) goto loc_0010B055; /* jbe: below or equal (unsigned <=) */

loc_0010AEF3:
    ecx = MEM32(ebp + -16);
    if (CMP_BE(ecx & ecx, 0)) goto loc_0010AF14; /* jbe: below or equal (unsigned <=) */

loc_0010AEFA:
    eax = MEM32(ebp + -36);
    PUSH32(esp, ecx);
    ecx = ebp + -2160;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00038C00(); /* call 0x00038C00 */

loc_0010AF0E:
    ecx = MEM32(ebp + -16);
    esp = esp + 0x10;

loc_0010AF14:
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0010AF31; /* je: equal / zero */

loc_0010AF1B:
    ecx = MEM32(ebp + -40);
    PUSH32(esp, eax);
    esi = ebp + esi + -2160;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00038C00(); /* call 0x00038C00 */

loc_0010AF2E:
    esp = esp + 0x10;

loc_0010AF31:
    ecx = MEM32(ebp + -12);
    edx = ebp + -80;
    PUSH32(esp, edx);
    eax = ebp + -2160;
    PUSH32(esp, 0); sub_0010B310(); /* call 0x0010B310 */

loc_0010AF43:
    ecx = MEM32(ebp + -48);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -144;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010AF56:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebp + -4);
    edx = ebp + -80;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -144;
    memcpy((void *)XBOX_PTR(ebp + -64), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010AF70:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(edi);
    memcpy((void *)XBOX_PTR(ebp + -208), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -64), 16); /* movaps */
    edx = 0; /* xor self */
    memcpy((void *)XBOX_PTR(ebp + -112), xmm0.b, 16); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0x19));
    esi = ebp + -112;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -24);
    PUSH32(esp, 0); sub_0010C000(); /* call 0x0010C000 */

loc_0010AF95:
    ecx = MEM32(ebp + -24);
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    eax = MEM32(ebp + -40);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -144;
    memcpy((void *)XBOX_PTR(ebp + -112), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0010AFB8:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(edi + 0xF0);
    memcpy((void *)XBOX_PTR(ebp + -144), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -208), 16); /* movaps */
    edx = 0; /* xor self */
    memcpy((void *)XBOX_PTR(ebp + -160), xmm0.b, 16); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0x19));
    esi = ebp + -160;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_0010C000(); /* call 0x0010C000 */

loc_0010AFEA:
    ecx = MEM32(ebp + -28);
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    eax = MEM32(ebp + -36);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -224;
    memcpy((void *)XBOX_PTR(ebp + -160), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0010B010:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -144), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebp + -144), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = ebp + -4;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    esp = esp + 0x2C;
    /* comiss xmm0.f[0], MEMF(ebp + -4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + -4))) goto loc_0010B060; /* jbe: below or equal (unsigned <=) */

loc_0010B055:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010B060:
    eax = ebp + -144;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0010B06B:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -80), 16); /* movaps */
    edx = MEM32(ebp + -24);
    memcpy((void *)XBOX_PTR(edi + 0x200), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -144), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x1F0), xmm0.b, 16); /* movaps */
    eax = MEM32(edi);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(eax + 0x19));
    ecx = ebp + -192;
    esi = ebp + -64;
    edi = ebp + -4;
    PUSH32(esp, 0); sub_0010BE70(); /* call 0x0010BE70 */

loc_0010B09E:
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebp + -28);
    eax = MEM32(edx + 0xF0);
    SET_LO8(edx, MEM8(eax + 0x19));
    PUSH32(esp, ecx);
    ecx = ebp + -240;
    esi = ebp + -208;
    edi = ebp + -20;
    PUSH32(esp, 0); sub_0010BE70(); /* call 0x0010BE70 */

loc_0010B0C2:
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -24);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -64), 16); /* movaps */
    ecx = ecx << 4;
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + edx), 16); /* movaps */
    edx = MEM32(ebp + -28);
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = ebp + -4;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -208), 16); /* movaps */
    eax = eax << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    esi = ebp + -20;
    MEMF(esi) = xmm0.f[0]; /* movss */
    esi = MEM32(ebx + 8);
    edi = MEM32(esi);
    edi = MEM32(edi + 4);
    xmm0.f[0] = MEMF(edi + ecx + 0xC); /* movss */
    ecx = MEM32(esi + 0xF0);
    ecx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -4); /* subss */
    xmm2.f[0] = MEMF(ecx + eax + 0xC); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + -20); /* subss */
    esp = esp + 8;
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010B15C; /* jbe: below or equal (unsigned <=) */

loc_0010B159:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0010B15C:
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0010B164; /* jbe: below or equal (unsigned <=) */

loc_0010B161:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */

loc_0010B164:
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + -4) = xmm4.f[0]; /* movss */
    ecx = ebp + -4;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(ebp + -96), xmm3.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edx), 16); /* movaps */
    eax = MEM32(ebp + -40);
    edx = ebp + -96;
    ecx = ebp + -4;
    xmm0.f[0] = MEMF(ecx); /* movss */
    PUSH32(esp, edx);
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, eax);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = ebp + -224;
    memcpy((void *)XBOX_PTR(ebp + -176), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0010B1B7:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + -36);
    ecx = ebp + -176;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebp + -224;
    memcpy((void *)XBOX_PTR(ebp + -96), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0010B1D4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebp + -116);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebp + -96), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm2.b, 16); /* movaps */
    eax = MEM32(ebp + -44);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 0x10;
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x1E4) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
