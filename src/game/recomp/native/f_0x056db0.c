#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00056DB0
 * Original: 0x00056DB0 - 0x0005703E (654 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1;

loc_00056DB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = ebx;
    ecx = 2;
    edi = edx;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00056DD0:
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_00056DFD; /* jne: not equal / not zero */

loc_00056DDC:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(esi + 8);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_00056DFD:
    eax = esi;
    PUSH32(esp, 0); sub_0004E360(); /* call 0x0004E360 */

loc_00056E04:
    MEM32(esi + 0xD0) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x27E0);
    eax = ebx + 0x73A1D0;
    MEM32(esi + 0xC8) = eax;
    eax = eax + 0x10D0;
    MEM32(esi + 0xCC) = eax;
    eax = edi;
    SET_LO8(eax, LO8(eax) & 0x10);
    /* cmp LO8(eax), 0x10 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 0x10)) ? 1 : 0); /* setne */
    edx = edi;
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(edx, LO8(edx) + 1);
    eax = edi;
    SET_LO8(eax, LO8(eax) & 2);
    /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM8(esi + 0x13F) = LO8(edx);
    MEM8(esi + 0x13E) = LO8(ecx);
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 2)) ? 1 : 0); /* sete */
    edx = edi;
    SET_LO8(edx, LO8(edx) & 4);
    /* cmp LO8(edx), 4 - flags set for next jcc */
    MEM8(esi + 0x140) = LO8(ecx);
    SET_LO8(eax, (CMP_EQ(LO8(edx), 4)) ? 1 : 0); /* sete */
    ecx = edi;
    SET_LO8(ecx, LO8(ecx) & 8);
    /* cmp LO8(ecx), 8 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(ecx), 8)) ? 1 : 0); /* sete */
    ebx = 0; /* xor self */
    MEM8(esi + 0x141) = LO8(eax);
    MEM8(esi + 0x142) = LO8(edx);
    MEM8(esi + 0x121) = LO8(ebx);
    ecx = MEM32(0x4D5370);
    if (CMP_EQ(ecx, ebx)) goto loc_00056EBD; /* je: equal / zero */

loc_00056E8C:
    if (CMP_NE(MEM32(ecx + 0x1BC), 0x4D5210)) goto loc_00056EBD; /* jne: not equal / not zero */

loc_00056E98:
    eax = MEM32(0x4D521C);
    if (CMP_EQ(eax, ebx)) goto loc_00056EBD; /* je: equal / zero */

loc_00056EA1:
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001585A0(); /* call 0x001585A0 */

loc_00056EAE:
    MEM8(esi + 0x121) = LO8(eax);
    ecx = MEM32(0x4D5370);
    esp = esp + 8;

loc_00056EBD:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_00056EC2:
    if (CMP_NE(MEM8(0x73A198), LO8(ebx))) goto loc_00056ECF; /* jne: not equal / not zero */

loc_00056ECA:
    if (CMP_G(eax, 1)) goto loc_00056ED5; /* jg: greater (signed >) */

loc_00056ECF:
    MEM8(esi + 0x140) = LO8(ebx);

loc_00056ED5:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEMF(esi + 0x114) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x11C) = LO8(ebx);
    MEM8(esi + 0x11D) = LO8(ebx);
    MEM8(esi + 0x11E) = LO8(ebx);
    MEM8(esi + 0x11F) = LO8(ebx);
    MEM8(esi + 0x120) = LO8(ebx);
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0x2C) = ebx;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 0x10);
    if (CMP_NE(eax, ebx)) goto loc_00056F65; /* jne: not equal / not zero */

loc_00056F61:
    eax = 0; /* xor self */
    goto loc_00056F86;

loc_00056F65:
    edi = MEM32(eax);
    MEM32(edx + 0x10) = edi;
    edx = MEM32(eax);
    if (CMP_EQ(edx, ebx)) goto loc_00056F73; /* je: equal / zero */

loc_00056F70:
    MEM32(edx + 4) = ebx;

loc_00056F73:
    edx = MEM32(ecx + 0x44);
    if (CMP_NE(edx, ebx)) goto loc_00056F7E; /* jne: not equal / not zero */

loc_00056F7A:
    MEM32(eax) = ebx;
    goto loc_00056F83;

loc_00056F7E:
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;

loc_00056F83:
    MEM32(ecx + 0x44) = eax;

loc_00056F86:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(eax + 0x50) = ecx;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = eax + 8;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x30) = eax;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16E4); /* movss */
    MEMF(esi + 0xB4) = xmm1.f[0]; /* movss */
    SET_LO16(ecx, MEM16(esi + 0x10));
    MEM32(esi + 0xC0) = ebx;
    MEM16(esi + 0xC4) = LO16(ecx);
    edx = 0; /* xor self */
    MEM32(esi + 0x138) = edx;
    MEM16(esi + 0x13C) = LO16(edx);
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    POP32(esp, edi);
    MEM32(esi + 0x134) = ebx;
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
