#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C5F0
 * Original: 0x0010C5F0 - 0x0010CCFE (1806 bytes, 571 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C5F0:
    ecx = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(ecx + 0xD) = LO8(ebx);
    eax = ecx + 0x114;
    edx = 6;

loc_0010C608:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 0x14) = LO8(ebx);
    MEM8(eax + 0x15) = LO8(ebx);
    MEM8(eax + 0x16) = LO8(ebx);
    MEM32(eax + 0x18) = ebx;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    eax = eax + 0x3C;
    edx--;
    if ((edx != 0)) goto loc_0010C608; /* jne: not equal / not zero */

loc_0010C64D:
    eax = ecx + 0x27C;
    edx = 0x40;
    goto loc_0010C660;

    /* nop */

loc_0010C660:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEM32(eax) = ebx;
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    eax = eax + 0xC;
    edx--;
    if ((edx != 0)) goto loc_0010C660; /* jne: not equal / not zero */

loc_0010C679:
    if (CMP_NE(MEM8(ecx + 0x578), LO8(ebx))) goto loc_0010CCDC; /* jne: not equal / not zero */

loc_0010C685:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EBDC8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC88C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010C6A7:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0010C6D8; /* je: equal / zero */

loc_0010C6C1:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_0010C6C7:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010C6C7; /* jne: not equal / not zero */

loc_0010C6D8:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010C6EB:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC88C;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x57C;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010C752:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010C75A:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010C767; /* jne: not equal / not zero */

loc_0010C75E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010C765:
    goto loc_0010C76D;

loc_0010C767:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010C76D:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC878;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010C78C:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010C7C1; /* je: equal / zero */

loc_0010C7A6:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    goto loc_0010C7B0;

    /* nop */

loc_0010C7B0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010C7B0; /* jne: not equal / not zero */

loc_0010C7C1:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010C7D4:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC878;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x580;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010C83B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010C843:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010C850; /* jne: not equal / not zero */

loc_0010C847:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010C84E:
    goto loc_0010C856;

loc_0010C850:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010C856:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC868;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010C875:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010C8A5; /* je: equal / zero */

loc_0010C88F:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0010C894:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010C894; /* jne: not equal / not zero */

loc_0010C8A5:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010C8B8:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC868;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x584;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010C91F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010C927:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010C934; /* jne: not equal / not zero */

loc_0010C92B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010C932:
    goto loc_0010C93A;

loc_0010C934:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010C93A:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC858;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010C959:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010C989; /* je: equal / zero */

loc_0010C973:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0010C978:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010C978; /* jne: not equal / not zero */

loc_0010C989:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010C99C:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC858;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x588;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010CA03:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010CA0B:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010CA18; /* jne: not equal / not zero */

loc_0010CA0F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010CA16:
    goto loc_0010CA1E;

loc_0010CA18:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010CA1E:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC848;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010CA3D:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010CA71; /* je: equal / zero */

loc_0010CA57:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0010CA60:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010CA60; /* jne: not equal / not zero */

loc_0010CA71:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010CA84:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC848;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x58C;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010CAEB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010CAF3:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010CB00; /* jne: not equal / not zero */

loc_0010CAF7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010CAFE:
    goto loc_0010CB06;

loc_0010CB00:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010CB06:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC838;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010CB25:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010CB55; /* je: equal / zero */

loc_0010CB3F:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0010CB44:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010CB44; /* jne: not equal / not zero */

loc_0010CB55:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010CB68:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC838;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x590;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010CBCF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010CBD7:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010CBE4; /* jne: not equal / not zero */

loc_0010CBDB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010CBE2:
    goto loc_0010CBEA;

loc_0010CBE4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010CBEA:
    ebp = MEM32(0x3EBDC8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3AC8A4);
    eax = 0x3AC818;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0010CC09:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0010CC39; /* je: equal / zero */

loc_0010CC23:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0010CC28:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0010CC28; /* jne: not equal / not zero */

loc_0010CC39:
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0010CC4C:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 0x1D) = 2;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = 0x3AC818;
    MEM32(esi + 0x10) = 0x3AC8A4;
    MEM32(esi + 0x14) = ebp;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(edi + 8) = eax;
    edx = edx + 0x594;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010CCB3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010CCBB:
    if (CMP_NE(LO8(eax), 1)) goto loc_0010CCC8; /* jne: not equal / not zero */

loc_0010CCBF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0010CCC6:
    goto loc_0010CCCE;

loc_0010CCC8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0010CCCE:
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x578) = 1;
    POP32(esp, ebp);

loc_0010CCDC:
    if (CMP_NE(MEM32(ecx + 0x598), ebx)) goto loc_0010CCEE; /* jne: not equal / not zero */

loc_0010CCE4:
    MEM32(ecx + 0x598) = 1;

loc_0010CCEE:
    MEM8(ecx + 0xE) = LO8(ebx);
    MEM32(ecx + 4) = 0x2B9D6F8;
    MEM32(ecx) = 0xFD462907u;

}
