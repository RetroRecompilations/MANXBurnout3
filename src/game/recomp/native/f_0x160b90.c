#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00160B90
 * Original: 0x00160B90 - 0x0016198D (3581 bytes, 1075 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160B90:
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = esi + 0x240;
    eax = 0x3A15DC;
    edx = ebx;
    PUSH32(esp, edi);
    edx = edx - eax;

loc_00160BA7:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00160BA7; /* jne: not equal / not zero */

loc_00160BB1:
    edi = ebx;
    edi--;

loc_00160BB4:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00160BB4; /* jne: not equal / not zero */

loc_00160BBC:
    eax = MEM32(0x3AF460);
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEM32(edi) = eax;
    ecx = MEM32(0x3AF464);
    MEM32(edi + 4) = ecx;
    SET_LO16(edx, MEM16(0x3AF468));
    MEM16(edi + 8) = LO16(edx);
    SET_LO8(eax, MEM8(0x3AF46A));
    MEM8(edi + 0xA) = LO8(eax);
    edi = MEM32(0x4A1E94);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    PUSH32(esp, ebp);
    ebp = esi + 0x10;
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF450);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160C44:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = esi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160C56:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160C5E:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160C6F; /* jne: not equal / not zero */

loc_00160C62:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160C6D:
    goto loc_00160C7A;

loc_00160C6F:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160C7A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF450);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160C94:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160CA6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160CAE:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160CBF; /* jne: not equal / not zero */

loc_00160CB2:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160CBD:
    goto loc_00160CCA;

loc_00160CBF:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160CCA:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0x3AF450;
    edx = 0x3AF438;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00160CF0:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(0x4A1E94);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x3AF450;
    edx = 0x3AF428;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00160D15:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    ebp = esi + 0x30;
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x3AF408);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160DC0:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160DD2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160DDA:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160DEB; /* jne: not equal / not zero */

loc_00160DDE:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160DE9:
    goto loc_00160DF6;

loc_00160DEB:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160DF6:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF408);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160E10:
    ebp = eax;
    eax = esi + 0x40;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160E24:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160E2C:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160E39; /* jne: not equal / not zero */

loc_00160E30:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160E37:
    goto loc_00160E40;

loc_00160E39:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160E40:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF408);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160E5A:
    ebp = eax;
    eax = esi + 0x50;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00160E6E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00160E76:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160E83; /* jne: not equal / not zero */

loc_00160E7A:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00160E81:
    goto loc_00160E8A;

loc_00160E83:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160E8A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3E0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160EA4:
    ebp = eax;
    eax = esi + 0x60;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160EB8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160EC0:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160ECD; /* jne: not equal / not zero */

loc_00160EC4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160ECB:
    goto loc_00160ED4;

loc_00160ECD:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160ED4:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3E0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160EEE:
    ebp = eax;
    eax = esi + 0x70;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00160F02:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00160F0A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160F17; /* jne: not equal / not zero */

loc_00160F0E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00160F15:
    goto loc_00160F1E;

loc_00160F17:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160F1E:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3E0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160F38:
    ebp = eax;
    eax = esi + 0x80;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160F4F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160F57:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160F64; /* jne: not equal / not zero */

loc_00160F5B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160F62:
    goto loc_00160F6B;

loc_00160F64:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160F6B:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    xmm1.f[0] = MEMF(0x3A7F34); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3A7950); /* movss */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm3.f[0]; /* movss */
    ebp = esi + 0x90;
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x3AF3C0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEMF(esi + 0xE0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xE8) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161036:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161048:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00161050:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161061; /* jne: not equal / not zero */

loc_00161054:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016105F:
    goto loc_0016106C;

loc_00161061:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016106C:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3C0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161086:
    ebp = eax;
    eax = esi + 0xA0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016109D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001610A5:
    if (CMP_NE(LO8(eax), 1)) goto loc_001610B2; /* jne: not equal / not zero */

loc_001610A9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001610B0:
    goto loc_001610B9;

loc_001610B2:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001610B9:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3C0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001610D3:
    ebp = eax;
    eax = esi + 0xB0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001610EA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001610F2:
    if (CMP_NE(LO8(eax), 1)) goto loc_001610FF; /* jne: not equal / not zero */

loc_001610F6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001610FD:
    goto loc_00161106;

loc_001610FF:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161106:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3A0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161120:
    ebp = eax;
    eax = esi + 0xC0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161137:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016113F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016114C; /* jne: not equal / not zero */

loc_00161143:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016114A:
    goto loc_00161153;

loc_0016114C:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161153:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3A0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016116D:
    ebp = eax;
    eax = esi + 0xD0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00161184:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0016118C:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161199; /* jne: not equal / not zero */

loc_00161190:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00161197:
    goto loc_001611A0;

loc_00161199:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001611A0:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF3A0);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001611BA:
    ebp = eax;
    eax = esi + 0xE0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001611D1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001611D9:
    if (CMP_NE(LO8(eax), 1)) goto loc_001611E6; /* jne: not equal / not zero */

loc_001611DD:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001611E4:
    goto loc_001611ED;

loc_001611E6:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001611ED:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    xmm1.f[0] = MEMF(0x3A7F34); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3B1940); /* movss */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x100) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x110) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm3.f[0]; /* movss */
    ebp = esi + 0xF0;
    MEMF(esi + 0x120) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x130) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x134) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x3AF380);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEMF(esi + 0x140) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x144) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x148) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001612C0:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001612D2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001612DA:
    if (CMP_NE(LO8(eax), 1)) goto loc_001612EB; /* jne: not equal / not zero */

loc_001612DE:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001612E9:
    goto loc_001612F6;

loc_001612EB:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001612F6:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF380);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161310:
    ebp = eax;
    eax = esi + 0x100;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161327:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016132F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016133C; /* jne: not equal / not zero */

loc_00161333:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016133A:
    goto loc_00161343;

loc_0016133C:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161343:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF380);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016135D:
    ebp = eax;
    eax = esi + 0x110;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00161374:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0016137C:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161389; /* jne: not equal / not zero */

loc_00161380:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00161387:
    goto loc_00161390;

loc_00161389:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161390:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF360);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001613AA:
    ebp = eax;
    eax = esi + 0x120;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001613C1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001613C9:
    if (CMP_NE(LO8(eax), 1)) goto loc_001613D6; /* jne: not equal / not zero */

loc_001613CD:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001613D4:
    goto loc_001613DD;

loc_001613D6:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001613DD:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF360);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001613F7:
    ebp = eax;
    eax = esi + 0x130;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0016140E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00161416:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161423; /* jne: not equal / not zero */

loc_0016141A:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00161421:
    goto loc_0016142A;

loc_00161423:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016142A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF360);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161444:
    ebp = eax;
    eax = esi + 0x140;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016145B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00161463:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161470; /* jne: not equal / not zero */

loc_00161467:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016146E:
    goto loc_00161477;

loc_00161470:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161477:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    xmm1.f[0] = MEMF(0x3A7F34); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x150) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x160) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x164) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x168) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x170) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x178) = xmm2.f[0]; /* movss */
    ebp = esi + 0x150;
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x190) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x194) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x198) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x3AF340);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEMF(esi + 0x1A0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x1A4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x1A8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161542:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161554:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016155C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016156D; /* jne: not equal / not zero */

loc_00161560:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016156B:
    goto loc_00161578;

loc_0016156D:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161578:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF340);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161592:
    ebp = eax;
    eax = esi + 0x160;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001615A9:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001615B1:
    if (CMP_NE(LO8(eax), 1)) goto loc_001615BE; /* jne: not equal / not zero */

loc_001615B5:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001615BC:
    goto loc_001615C5;

loc_001615BE:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001615C5:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF340);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001615DF:
    ebp = eax;
    eax = esi + 0x170;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001615F6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001615FE:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016160B; /* jne: not equal / not zero */

loc_00161602:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00161609:
    goto loc_00161612;

loc_0016160B:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161612:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF324);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016162C:
    ebp = eax;
    eax = esi + 0x180;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161643:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016164B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161658; /* jne: not equal / not zero */

loc_0016164F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00161656:
    goto loc_0016165F;

loc_00161658:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016165F:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF324);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161679:
    ebp = eax;
    eax = esi + 0x190;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00161690:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00161698:
    if (CMP_NE(LO8(eax), 1)) goto loc_001616A5; /* jne: not equal / not zero */

loc_0016169C:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001616A3:
    goto loc_001616AC;

loc_001616A5:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001616AC:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF324);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001616C6:
    ebp = eax;
    eax = esi + 0x1A0;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001616DD:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001616E5:
    if (CMP_NE(LO8(eax), 1)) goto loc_001616F2; /* jne: not equal / not zero */

loc_001616E9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001616F0:
    goto loc_001616F9;

loc_001616F2:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001616F9:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    xmm1.f[0] = MEMF(0x3A7F34); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x1B0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1B4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1B8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x1D8) = xmm2.f[0]; /* movss */
    eax = esi + 0x1C0;
    ebp = esi + 0x1B0;
    MEM32(esp + 0x10) = eax;
    eax = esi + 0x1D0;
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = esi + 0x1E0;
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    eax = esi + 0x1F0;
    esi = esi + 0x200;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x3AF304);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = esi;
    MEMF(esi) = xmm2.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001617E2:
    esi = eax;
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = ebp;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001617F2:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001617FA:
    /* cmp LO8(eax), 1 - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(LO8(eax), 1)) goto loc_00161808; /* jne: not equal / not zero */

loc_001617FF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00161806:
    goto loc_0016180F;

loc_00161808:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016180F:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF304);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161829:
    ecx = MEM32(esp + 0xC);
    esi = eax;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 5;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016183D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00161845:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161852; /* jne: not equal / not zero */

loc_00161849:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00161850:
    goto loc_00161859;

loc_00161852:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161859:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF304);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161873:
    esi = eax;
    eax = MEM32(esp + 0x10);
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161887:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016188F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016189C; /* jne: not equal / not zero */

loc_00161893:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016189A:
    goto loc_001618A3;

loc_0016189C:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001618A3:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF2E4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001618BD:
    esi = eax;
    eax = MEM32(esp + 0x14);
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001618D1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001618D9:
    if (CMP_NE(LO8(eax), 1)) goto loc_001618E6; /* jne: not equal / not zero */

loc_001618DD:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001618E4:
    goto loc_001618ED;

loc_001618E6:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001618ED:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF2E4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF448);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161907:
    esi = eax;
    eax = MEM32(esp + 0x18);
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016191B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00161923:
    if (CMP_NE(LO8(eax), 1)) goto loc_00161930; /* jne: not equal / not zero */

loc_00161927:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016192E:
    goto loc_00161937;

loc_00161930:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00161937:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF2E4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF400);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00161951:
    esi = eax;
    eax = MEM32(esp + 0x1C);
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161965:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016196D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016197F; /* jne: not equal / not zero */

loc_00161971:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00161978:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0016197F:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
