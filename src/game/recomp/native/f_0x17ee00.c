#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017EE00
 * Original: 0x0017EE00 - 0x0017F27F (1151 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0017EE00:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    ecx = MEM32(0x3F731C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ecx, eax)) goto loc_0017EE21; /* jne: not equal / not zero */

loc_0017EE1B:
    MEM32(0x3F731C) = esi;

loc_0017EE21:
    if (CMP_NE(MEM32(0x3F732C), eax)) goto loc_0017EE2F; /* jne: not equal / not zero */

loc_0017EE29:
    MEM32(0x3F732C) = esi;

loc_0017EE2F:
    if (CMP_NE(MEM32(0x3F7330), eax)) goto loc_0017EE3D; /* jne: not equal / not zero */

loc_0017EE37:
    MEM32(0x3F7330) = esi;

loc_0017EE3D:
    if (CMP_NE(MEM32(0x3F7334), eax)) goto loc_0017EE4B; /* jne: not equal / not zero */

loc_0017EE45:
    MEM32(0x3F7334) = esi;

loc_0017EE4B:
    if (CMP_NE(MEM32(0x3F7338), eax)) goto loc_0017EE59; /* jne: not equal / not zero */

loc_0017EE53:
    MEM32(0x3F7338) = esi;

loc_0017EE59:
    if (CMP_NE(MEM32(0x3F7340), eax)) goto loc_0017EE67; /* jne: not equal / not zero */

loc_0017EE61:
    MEM32(0x3F7340) = esi;

loc_0017EE67:
    if (CMP_NE(MEM32(0x3F733C), eax)) goto loc_0017EE75; /* jne: not equal / not zero */

loc_0017EE6F:
    MEM32(0x3F733C) = esi;

loc_0017EE75:
    if (CMP_NE(MEM32(0x3F7320), eax)) goto loc_0017EE83; /* jne: not equal / not zero */

loc_0017EE7D:
    MEM32(0x3F7320) = esi;

loc_0017EE83:
    if (CMP_NE(MEM32(0x3F7324), eax)) goto loc_0017EE91; /* jne: not equal / not zero */

loc_0017EE8B:
    MEM32(0x3F7324) = esi;

loc_0017EE91:
    if (CMP_NE(MEM32(0x3F7328), eax)) goto loc_0017EE9F; /* jne: not equal / not zero */

loc_0017EE99:
    MEM32(0x3F7328) = esi;

loc_0017EE9F:
    edi = MEM32(ebp + 8);
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B16D0); /* movss */
    MEMF(edi + 0x64578) = xmm5.f[0]; /* movss */
    MEM32(edi + 0x64584) = esi;
    edx = MEM32(0x60E0A8);
    ecx = MEM32(0x60E0A4);
    eax = MEM32(0x60E0A0);
    ebx = MEM32(0x60E0AC);
    MEM32(esp + 0x28) = edx;
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm2.f[0] = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x40) = eax;
    xmm3.f[0] = MEMF(esp + 0x40); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    /* comiss xmm4.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = ebx;
    if ((xmm4.f[0] < xmm0.f[0])) goto loc_0017EF51; /* jb: below (unsigned <) */

loc_0017EF24:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x64530) = xmm5.f[0]; /* movss */
    MEMF(edi + 0x64534) = xmm5.f[0]; /* movss */
    MEMF(edi + 0x64538) = xmm5.f[0]; /* movss */
    MEMF(edi + 0x6453C) = xmm0.f[0]; /* movss */
    goto loc_0017EFF7;

loc_0017EF51:
    xmm4.f[0] = MEMF(0x3B1730); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x64538) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    MEMF(edi + 0x64534) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x64530) = xmm3.f[0]; /* movss */
    MEMF(edi + 0x6453C) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi + 0x64530), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x64530), xmm2.b, 16); /* movaps */
    MEMF(edi + 0x6453C) = xmm1.f[0]; /* movss */

loc_0017EFF7:
    ecx = edi + 0x64560;
    ebx = 0x3A3E7C;
    MEM32(esp + 0x10) = ecx;
    edi = edi + 0x10;
    goto loc_0017F010;

loc_0017F00B:
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */

loc_0017F010:
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(edi), LO16(esi))) goto loc_0017F034; /* jbe: below or equal (unsigned <=) */

loc_0017F017:
    ecx = 0; /* xor self */
    /* nop */

loc_0017F020:
    edx = MEM32(edi + -4);
    MEMF(ecx + edx + 0xC) = xmm5.f[0]; /* movss */
    edx = ZX16(MEM16(edi));
    eax++;
    ecx = ecx + 0x30;
    if (CMP_L(eax, edx)) goto loc_0017F020; /* jl: less (signed <) */

loc_0017F034:
    MEM16(edi + 2) = LO16(esi);
    eax = MEM32(ebx);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0017F046:
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    ecx = ecx + 4;
    ebx = ebx + 8;
    edi = edi + 0xC;
    /* cmp ebx, 0x3A3E94 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ebx, 0x3A3E94)) goto loc_0017F00B; /* jl: less (signed <) */

loc_0017F061:
    edi = MEM32(ebp + 8);
    eax = edi + 0x38;
    esi = 4;
    /* nop */

loc_0017F070:
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0017F0A4; /* jbe: below or equal (unsigned <=) */

loc_0017F078:
    ecx = 0; /* xor self */
    /* nop */

loc_0017F080:
    ebx = MEM32(eax + -4);
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    MEMF(ecx + ebx + 0x30) = xmm0.f[0]; /* movss */
    ebx = MEM32(eax + -4);
    MEMF(ecx + ebx + 0x34) = xmm0.f[0]; /* movss */
    ebx = MEM32(eax);
    edx++;
    ecx = ecx + 0x60;
    if (CMP_B(edx, ebx)) goto loc_0017F080; /* jb: below (unsigned <) */

loc_0017F0A4:
    MEM32(eax + 4) = 0;
    eax = eax + 0x18;
    esi--;
    if ((esi != 0)) goto loc_0017F070; /* jne: not equal / not zero */

loc_0017F0B1:
    edi = edi + 0x94;
    ebx = 0x18;
    /* nop */

loc_0017F0C0:
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0017F0D1:
    ecx = MEM32(edi);
    MEM32(edi + 0x34) = eax;
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0017F0FB; /* jbe: below or equal (unsigned <=) */

loc_0017F0DC:
    ecx = 0; /* xor self */
    edi = edi;

loc_0017F0E0:
    edx = MEM32(edi + -4);
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    MEMF(edx + ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    eax++;
    ecx = ecx + 0x30;
    if (CMP_B(eax, edx)) goto loc_0017F0E0; /* jb: below (unsigned <) */

loc_0017F0FB:
    eax = MEM32(edi);
    ecx = MEM32(edi + 0xF0);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    eax--;
    MEM32(edi + 4) = eax;
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    MEM32(edi + 0x10) = ecx;
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0017F144; /* jbe: below or equal (unsigned <=) */

loc_0017F12D:
    ecx = 0; /* xor self */
    /* nop */

loc_0017F130:
    edx = MEM32(edi + 0x18);
    MEMF(edx + ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    eax++;
    ecx = ecx + 0x30;
    if (CMP_B(eax, edx)) goto loc_0017F130; /* jb: below (unsigned <) */

loc_0017F144:
    eax = MEM32(edi + 0x1C);
    eax--;
    MEM32(edi + 0x20) = eax;
    MEMF(edi + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 0xF0);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x2C) = ecx;
    MEMF(edi + 0xB8) = xmm0.f[0]; /* movss */
    edi = edi + 0x100;
    ebx--;
    if ((ebx != 0)) goto loc_0017F0C0; /* jne: not equal / not zero */

loc_0017F176:
    edi = MEM32(ebp + 8);
    edi = edi + 0xF9A4;
    ebx = 4;

loc_0017F184:
    edx = MEM32(edi + -4);
    eax = MEM32(edx);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0017F195:
    MEM32(edi) = eax;
    eax = edi + -57600;
    ecx = 0x64;

loc_0017F1A2:
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = eax + 0x90;
    ecx--;
    if ((ecx != 0)) goto loc_0017F1A2; /* jne: not equal / not zero */

loc_0017F1C5:
    MEM32(edi + 0x10) = 0;
    edi = edi + 0xE150;
    ebx--;
    if ((ebx != 0)) goto loc_0017F184; /* jne: not equal / not zero */

loc_0017F1D5:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    eax = 0x5492F0;

loc_0017F1E2:
    ecx = 0x12;

loc_0017F1E7:
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = eax + 0x50;
    ecx--;
    if ((ecx != 0)) goto loc_0017F1E7; /* jne: not equal / not zero */

loc_0017F1F1:
    if (CMP_L(eax, 0x549E30)) goto loc_0017F1E2; /* jl: less (signed <) */

loc_0017F1F8:
    edi = MEM32(ebp + 8);
    edi = edi + 0x39EBC;
    ebx = 6;
    goto loc_0017F210;

    /* nop */
    /* nop */

loc_0017F210:
    ecx = MEM32(edi + -4);
    edx = MEM32(ecx + 0x68);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0017F222:
    MEM32(edi) = eax;
    eax = edi + -172;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000363C0(); /* call 0x000363C0 */

loc_0017F230:
    ecx = edi + -88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000363C0(); /* call 0x000363C0 */

loc_0017F239:
    edi = edi + 0xF0;
    ebx--;
    if ((ebx != 0)) goto loc_0017F210; /* jne: not equal / not zero */

loc_0017F242:
    esi = MEM32(ebp + 8);
    edx = esi + 0x3A370;
    PUSH32(esp, 0); sub_0003B0E0(); /* call 0x0003B0E0 */

loc_0017F250:
    edx = esi + 0x5B9B0;
    PUSH32(esp, 0); sub_00044CF0(); /* call 0x00044CF0 */

loc_0017F25B:
    eax = 0xFD462907u;
    ecx = 0x2B9D6F8;
    MEM32(esi + 0x64558) = eax;
    MEM32(esi + 0x6455C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x60E2F0) = eax;
    MEM32(0x60E2F4) = ecx;

}
