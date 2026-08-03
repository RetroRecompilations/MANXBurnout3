#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017C170
 * Original: 0x0017C170 - 0x0017CB8C (2588 bytes, 610 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0017C170:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    ecx = MEM32(0x73A19C);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0017CB83; /* jle: less or equal (signed <=) */

loc_0017C193:
    ebx = MEM32(ebp + 8);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    edi = MEM32(ecx + 0x64B38C);
    SET_LO8(ecx, MEM8(ebx + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0017CB23; /* jne: not equal / not zero */

loc_0017C1AD:
    eax = MEM32(edi + 0x204);
    edx = eax + 0x30;
    ecx = MEM32(edx);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ebx);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEM32(esp + 0x3C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_0017CB6C; /* jbe: below or equal (unsigned <=) */

loc_0017C226:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x1D0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x1E0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0017C274:
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0017C288:
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    esp = esp + 8;
    /* cmp LO8(ecx), 4 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO8(ecx), 4)) goto loc_0017C2BF; /* jne: not equal / not zero */

loc_0017C2B5:
    xmm0.f[0] = MEMF(0x3B1B94); /* movss */
    goto loc_0017C2E8;

loc_0017C2BF:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0017C2CF; /* je: equal / zero */

loc_0017C2C8:
    if (CMP_EQ(eax, 0x4D4798)) goto loc_0017C2E0; /* je: equal / zero */

loc_0017C2CF:
    SET_LO8(eax, MEM8(0x5A3759));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3A2D50); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017C2E8; /* je: equal / zero */

loc_0017C2E0:
    xmm0.f[0] = MEMF(0x3A3224); /* movss */

loc_0017C2E8:
    ecx = esp + 0x90;
    eax = esp + 0x20;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B1F90(); /* call 0x001B1F90 */

loc_0017C2FE:
    if (TEST_Z(eax, eax)) goto loc_0017CB6C; /* je: equal / zero */

loc_0017C306:
    ecx = MEM32(0x4D5370);
    esi = MEM32(ecx + 0x1B8);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA0), _icall_esp); /* indirect call */
    }

loc_0017C31C:
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x9C), _icall_esp); /* indirect call */
    }

loc_0017C32A:
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x14);
    MEM8(ebx + 8) = 1;
    MEM8(ebx + 9) = 1;
    MEM8(ebx + 0xA) = LO8(eax);
    ecx = MEM32(edi + 0x13F4);
    ecx = MEM32(ecx + 0x1348);
    if (TEST_Z(ecx, ecx)) goto loc_0017C372; /* je: equal / zero */

loc_0017C34D:
    PUSH32(esp, 0); sub_0017ADD0(); /* call 0x0017ADD0 */

loc_0017C352:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x1D;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);

loc_0017C372:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    edx = MEM32(ebx);
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    ecx = ZX8(MEM8(edx + 0x10));
    if (CMP_A(ecx, 8)) goto loc_0017CB6C; /* ja: above (unsigned >) */

loc_0017C38B:
    { uint32_t _jt = MEM32(ecx * 4 + 0x17CB8C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0017C392u) goto loc_0017C392;
    if (_jt == 0x0017C45Au) goto loc_0017C45A;
    if (_jt == 0x0017C4F4u) goto loc_0017C4F4;
    if (_jt == 0x0017C5BBu) goto loc_0017C5BB;
    if (_jt == 0x0017C682u) goto loc_0017C682;
    if (_jt == 0x0017C749u) goto loc_0017C749;
    if (_jt == 0x0017C8C9u) goto loc_0017C8C9;
    if (_jt == 0x0017C98Du) goto loc_0017C98D;
    if (_jt == 0x0017CA50u) goto loc_0017CA50;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0017C392:
    esi = MEM32(edi + 0x13F4);
    eax = MEM32(esi + 0x11D0);
    esi = esi + 0x119C;
    PUSH32(esp, eax);
    MEM8(esi + 0x50) = 1;
    PUSH32(esp, 0); sub_0017A530(); /* call 0x0017A530 */

loc_0017C3AE:
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C3C4:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C409; /* jne: not equal / not zero */

loc_0017C3C8:
    if (CMP_LE(MEM32(edi + 0x130), 0xC8)) goto loc_0017C409; /* jle: less or equal (signed <=) */

loc_0017C3D4:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C3E5:
    if (TEST_Z(eax, eax)) goto loc_0017CB6C; /* je: equal / zero */

loc_0017C3ED:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C3FB:
    esp = esp + 8;
    MEM32(edi + 0x134) = eax;
    goto loc_0017CB6C;

loc_0017C409:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C41E:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xC8;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C436:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    esp = esp + 8;
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    goto loc_0017CB6C;

loc_0017C45A:
    ecx = MEM32(eax * 4 + 0x73A1A8);
    edx = MEM32(ecx + 0x1920);
    if (TEST_NZ(edx, edx)) goto loc_0017C4E5; /* jne: not equal / not zero */

loc_0017C46B:
    SET_LO8(ecx, MEM8(esp + 0x12));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017C48C; /* je: equal / zero */

loc_0017C473:
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    esi = 0x572980;
    edi = edx;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_0017C0F0(); /* call 0x0017C0F0 */

loc_0017C48A:
    goto loc_0017C492;

loc_0017C48C:
    MEM32(esp + 0x18) = eax;
    edi = eax;

loc_0017C492:
    eax = MEM32(edi * 4 + 0x73A1A8);
    ecx = MEM32(eax + 0x1920);
    if (TEST_NZ(ecx, ecx)) goto loc_0017C4E5; /* jne: not equal / not zero */

loc_0017C4A3:
    ecx = edi + edi * 2;
    ecx = ecx << 4;
    ebx = MEM32(ecx + 0x64B38C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64ACE8);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_0017C4BF:
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0017C4CC:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_0017C4D5:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(ebx + 0x3A74) = xmm0.f[0]; /* movss */

loc_0017C4E5:
    eax = 0x411560;
    PUSH32(esp, 0); sub_00141840(); /* call 0x00141840 */

loc_0017C4EF:
    goto loc_0017CB6C;

loc_0017C4F4:
    PUSH32(esp, 1);
    ecx = 0x739C60;
    PUSH32(esp, 0); sub_0017DCF0(); /* call 0x0017DCF0 */

loc_0017C500:
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C516:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C560; /* jne: not equal / not zero */

loc_0017C51A:
    if (CMP_LE(MEM32(edi + 0x130), 0xC9)) goto loc_0017C560; /* jle: less or equal (signed <=) */

loc_0017C526:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C536:
    if (TEST_Z(eax, eax)) goto loc_0017C5AC; /* je: equal / zero */

loc_0017C53A:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C548:
    esp = esp + 8;
    esi = 0x411560;
    MEM32(edi + 0x134) = eax;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C55B:
    goto loc_0017CB6C;

loc_0017C560:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C575:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xC9;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C58D:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    esp = esp + 8;

loc_0017C5AC:
    esi = 0x411560;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C5B6:
    goto loc_0017CB6C;

loc_0017C5BB:
    PUSH32(esp, 2);
    ecx = 0x739C60;
    PUSH32(esp, 0); sub_0017DCF0(); /* call 0x0017DCF0 */

loc_0017C5C7:
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C5DD:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C627; /* jne: not equal / not zero */

loc_0017C5E1:
    if (CMP_LE(MEM32(edi + 0x130), 0xCA)) goto loc_0017C627; /* jle: less or equal (signed <=) */

loc_0017C5ED:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C5FD:
    if (TEST_Z(eax, eax)) goto loc_0017C673; /* je: equal / zero */

loc_0017C601:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C60F:
    esp = esp + 8;
    esi = 0x411560;
    MEM32(edi + 0x134) = eax;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C622:
    goto loc_0017CB6C;

loc_0017C627:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C63C:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xCA;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C654:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    esp = esp + 8;

loc_0017C673:
    esi = 0x411560;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C67D:
    goto loc_0017CB6C;

loc_0017C682:
    PUSH32(esp, 3);
    ecx = 0x739C60;
    PUSH32(esp, 0); sub_0017DCF0(); /* call 0x0017DCF0 */

loc_0017C68E:
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C6A4:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C6EE; /* jne: not equal / not zero */

loc_0017C6A8:
    if (CMP_LE(MEM32(edi + 0x130), 0xCB)) goto loc_0017C6EE; /* jle: less or equal (signed <=) */

loc_0017C6B4:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C6C4:
    if (TEST_Z(eax, eax)) goto loc_0017C73A; /* je: equal / zero */

loc_0017C6C8:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C6D6:
    esp = esp + 8;
    esi = 0x411560;
    MEM32(edi + 0x134) = eax;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C6E9:
    goto loc_0017CB6C;

loc_0017C6EE:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C703:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xCB;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C71B:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    esp = esp + 8;

loc_0017C73A:
    esi = 0x411560;
    PUSH32(esp, 0); sub_001417E0(); /* call 0x001417E0 */

loc_0017C744:
    goto loc_0017CB6C;

loc_0017C749:
    MEM8(eax + eax * 2 + 0x73A109) = 1;
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C767:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 0xCC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C7A2; /* jne: not equal / not zero */

loc_0017C770:
    if (CMP_LE(MEM32(edi + 0x130), ebx)) goto loc_0017C7A2; /* jle: less or equal (signed <=) */

loc_0017C778:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C788:
    if (TEST_Z(eax, eax)) goto loc_0017C7EA; /* je: equal / zero */

loc_0017C78C:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C79A:
    MEM32(edi + 0x134) = eax;
    goto loc_0017C7E7;

loc_0017C7A2:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C7B7:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = ebx;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C7CB:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;

loc_0017C7E7:
    esp = esp + 8;

loc_0017C7EA:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017C8BA; /* je: equal / zero */

loc_0017C7F6:
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    ecx = MEM32(ecx + 0x64B38C);
    MEM8(eax + eax * 2 + 0x73A109) = 1;
    esi = MEM32(ecx + 0x13F4);
    eax = 0x4A71A0;
    esi = esi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C82B:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C872; /* jne: not equal / not zero */

loc_0017C82F:
    if (CMP_LE(MEM32(esi + 0x130), ebx)) goto loc_0017C872; /* jle: less or equal (signed <=) */

loc_0017C837:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C848:
    if (TEST_Z(eax, eax)) goto loc_0017C8BA; /* je: equal / zero */

loc_0017C84C:
    ecx = MEM32(esi + 0x134);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C85A:
    MEM32(esi + 0x134) = eax;
    esp = esp + 8;
    esi = 0x411560;
    PUSH32(esp, 0); sub_00141810(); /* call 0x00141810 */

loc_0017C86D:
    goto loc_0017CB6C;

loc_0017C872:
    MEM8(esi + 0x11) = 1;
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C887:
    ecx = MEM32(esi + 0x134);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esi + 0x130) = ebx;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C89B:
    edx = MEM32(esi + 0x148);
    MEM32(esi + 0x134) = eax;
    eax = MEM32(edx + 0x10DC);
    MEM32(esi + 0x138) = eax;
    MEM8(esi + 0x10) = 1;
    esp = esp + 8;

loc_0017C8BA:
    esi = 0x411560;
    PUSH32(esp, 0); sub_00141810(); /* call 0x00141810 */

loc_0017C8C4:
    goto loc_0017CB6C;

loc_0017C8C9:
    MEM8(eax + eax * 2 + 0x73A10A) = 1;
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C8E7:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C932; /* jne: not equal / not zero */

loc_0017C8EB:
    if (CMP_LE(MEM32(edi + 0x130), 0xCD)) goto loc_0017C932; /* jle: less or equal (signed <=) */

loc_0017C8F7:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C908:
    if (TEST_Z(eax, eax)) goto loc_0017C97E; /* je: equal / zero */

loc_0017C90C:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C91A:
    MEM32(edi + 0x134) = eax;
    esp = esp + 8;
    eax = 0x411560;
    PUSH32(esp, 0); sub_00141750(); /* call 0x00141750 */

loc_0017C92D:
    goto loc_0017CB6C;

loc_0017C932:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C947:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xCD;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C95F:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    esp = esp + 8;

loc_0017C97E:
    eax = 0x411560;
    PUSH32(esp, 0); sub_00141750(); /* call 0x00141750 */

loc_0017C988:
    goto loc_0017CB6C;

loc_0017C98D:
    MEM8(eax + eax * 2 + 0x73A10B) = 1;
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017C9AB:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C9F5; /* jne: not equal / not zero */

loc_0017C9AF:
    if (CMP_LE(MEM32(edi + 0x130), 0xCE)) goto loc_0017C9F5; /* jle: less or equal (signed <=) */

loc_0017C9BB:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017C9CB:
    if (TEST_Z(eax, eax)) goto loc_0017CA41; /* je: equal / zero */

loc_0017C9CF:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017C9DD:
    MEM32(edi + 0x134) = eax;
    esp = esp + 8;
    eax = 0x411560;
    PUSH32(esp, 0); sub_00141750(); /* call 0x00141750 */

loc_0017C9F0:
    goto loc_0017CB6C;

loc_0017C9F5:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017CA0A:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xCE;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017CA22:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;
    esp = esp + 8;

loc_0017CA41:
    eax = 0x411560;
    PUSH32(esp, 0); sub_00141750(); /* call 0x00141750 */

loc_0017CA4B:
    goto loc_0017CB6C;

loc_0017CA50:
    if (CMP_EQ(MEM8(edi + 0x215), 3)) goto loc_0017CB83; /* je: equal / zero */

loc_0017CA5D:
    SET_LO8(eax, MEM8(0x5A3759));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x73A15B) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017CB6C; /* je: equal / zero */

loc_0017CA71:
    edi = MEM32(edi + 0x13F4);
    eax = 0x4A71A0;
    edi = edi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017CA87:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017CAC1; /* jne: not equal / not zero */

loc_0017CA8B:
    if (CMP_LE(MEM32(edi + 0x130), 0xD0)) goto loc_0017CAC1; /* jle: less or equal (signed <=) */

loc_0017CA97:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017CAA7:
    if (TEST_Z(eax, eax)) goto loc_0017CB0D; /* je: equal / zero */

loc_0017CAAB:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017CAB9:
    MEM32(edi + 0x134) = eax;
    goto loc_0017CB0A;

loc_0017CAC1:
    MEM8(edi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0017CAD6:
    eax = MEM32(edi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(edi + 0x130) = 0xD0;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_0017CAEE:
    ecx = MEM32(edi + 0x148);
    MEM32(edi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(edi + 0x138) = edx;
    MEM8(edi + 0x10) = 1;

loc_0017CB0A:
    esp = esp + 8;

loc_0017CB0D:
    eax = 0x411560;
    PUSH32(esp, 0); sub_001417B0(); /* call 0x001417B0 */

loc_0017CB17:
    esi = 0x572980;
    PUSH32(esp, 0); sub_0017C130(); /* call 0x0017C130 */

loc_0017CB21:
    goto loc_0017CB6C;

loc_0017CB23:
    ecx = MEM32(eax * 4 + 0x73A1A8);
    edx = MEM32(ecx + 0x1920);
    if (TEST_NZ(edx, edx)) goto loc_0017CB6C; /* jne: not equal / not zero */

loc_0017CB34:
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0xA);
    if (CMP_NE(eax, edx)) goto loc_0017CB6C; /* jne: not equal / not zero */

loc_0017CB3C:
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0017CB6C; /* jne: not equal / not zero */

loc_0017CB45:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    xmm1.f[0] = MEMF(0x3A7964); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017CB65; /* jbe: below or equal (unsigned <=) */

loc_0017CB5C:
    MEM8(edi + 0x4AC4) = 1;
    goto loc_0017CB6C;

loc_0017CB65:
    MEM8(edi + 0x4AC4) = 0;

loc_0017CB6C:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x73A19C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0017C193; /* jl: less (signed <) */

loc_0017CB83:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
