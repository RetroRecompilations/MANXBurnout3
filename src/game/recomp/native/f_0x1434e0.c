#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001434E0
 * Original: 0x001434E0 - 0x00145EF4 (10772 bytes, 3427 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001434E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001434E0:
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ebp = esi + 0xF0;
    edi = esi + 0x13F8;
    MEM32(esp + 0x10) = 0x10;
    ebx = 0; /* xor self */
    /* nop */

loc_00143500:
    eax = ebp;
    PUSH32(esp, 0); sub_00146A70(); /* call 0x00146A70 */

loc_00143507:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x10);
    MEM32(edi + -4) = ebx;
    MEM32(edi + -8) = ebx;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    ebp = ebp + 0x130;
    edi = edi + 0x5C;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00143500; /* jne: not equal / not zero */

loc_00143554:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    edi = MEM32(0x4A1E94);
    MEM32(esi + 0xC) = 0x2B9D6F8;
    MEM32(esi + 8) = 0xFD462907u;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE75C;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001435B2:
    ebp = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = ebp;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001435E3; /* je: equal / zero */

loc_001435CC:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_001435D2:
    ebp++;
    /* cmp ebp, ecx - flags set for next jcc */
    if (CMP_GE(ebp, ecx)) ebp = ebx; /* cmovge */
    edx = ebp;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001435D2; /* jne: not equal / not zero */

loc_001435E3:
    PUSH32(esp, ebp);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001435F6:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ebp = ebp << 5;
    ebp = ebp + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + 0xC) = 0x3AE75C;
    MEM32(ebp + 0x14) = edx;
    MEM8(ebp + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    eax = esi + 0x10;
    MEM8(ebp + 0x1E) = 2;
    MEM32(ebp) = eax;
    MEM8(ebp + 0x1C) = LO8(ebx);
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143649:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143655:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143662; /* jne: not equal / not zero */

loc_00143659:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143660:
    goto loc_00143668;

loc_00143662:
    MEM8(ebp + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00143668:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE74C;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143690:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001436C1; /* je: equal / zero */

loc_001436AA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001436B0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001436B0; /* jne: not equal / not zero */

loc_001436C1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001436D4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE74C;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x14;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143727:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143734:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143742; /* jne: not equal / not zero */

loc_00143738:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143740:
    goto loc_00143748;

loc_00143742:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143748:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE740;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143770:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001437A1; /* je: equal / zero */

loc_0014378A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143790:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143790; /* jne: not equal / not zero */

loc_001437A1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001437B4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE740;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x18;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143807:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143814:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143822; /* jne: not equal / not zero */

loc_00143818:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143820:
    goto loc_00143828;

loc_00143822:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143828:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE734;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143850:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143881; /* je: equal / zero */

loc_0014386A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143870:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143870; /* jne: not equal / not zero */

loc_00143881:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143894:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE734;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x1C;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001438E7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001438F4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143902; /* jne: not equal / not zero */

loc_001438F8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143900:
    goto loc_00143908;

loc_00143902:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143908:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE728;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143930:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143961; /* je: equal / zero */

loc_0014394A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143950:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143950; /* jne: not equal / not zero */

loc_00143961:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143974:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE728;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x20;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001439C7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001439D4:
    if (CMP_NE(LO8(eax), 1)) goto loc_001439E2; /* jne: not equal / not zero */

loc_001439D8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001439E0:
    goto loc_001439E8;

loc_001439E2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001439E8:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE71C;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143A10:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143A41; /* je: equal / zero */

loc_00143A2A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143A30:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143A30; /* jne: not equal / not zero */

loc_00143A41:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143A54:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE71C;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x24;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143AA7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143AB4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143AC2; /* jne: not equal / not zero */

loc_00143AB8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143AC0:
    goto loc_00143AC8;

loc_00143AC2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143AC8:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE710;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143AF0:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143B21; /* je: equal / zero */

loc_00143B0A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143B10:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143B10; /* jne: not equal / not zero */

loc_00143B21:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143B34:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE710;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x28;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143B87:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143B94:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143BA2; /* jne: not equal / not zero */

loc_00143B98:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143BA0:
    goto loc_00143BA8;

loc_00143BA2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143BA8:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE704;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143BD0:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143C01; /* je: equal / zero */

loc_00143BEA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143BF0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143BF0; /* jne: not equal / not zero */

loc_00143C01:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143C14:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE704;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x2C;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143C67:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143C74:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143C82; /* jne: not equal / not zero */

loc_00143C78:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143C80:
    goto loc_00143C88;

loc_00143C82:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143C88:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE6F0;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143CB0:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143CE1; /* je: equal / zero */

loc_00143CCA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143CD0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143CD0; /* jne: not equal / not zero */

loc_00143CE1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143CF4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE6F0;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x30;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143D47:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143D54:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143D62; /* jne: not equal / not zero */

loc_00143D58:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143D60:
    goto loc_00143D68;

loc_00143D62:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143D68:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE6DC;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143D90:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143DC1; /* je: equal / zero */

loc_00143DAA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143DB0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143DB0; /* jne: not equal / not zero */

loc_00143DC1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143DD4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE6DC;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x34;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143E27:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143E34:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143E42; /* jne: not equal / not zero */

loc_00143E38:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143E40:
    goto loc_00143E48;

loc_00143E42:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143E48:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE6C8;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143E70:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143EA1; /* je: equal / zero */

loc_00143E8A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143E90:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143E90; /* jne: not equal / not zero */

loc_00143EA1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143EB4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE6C8;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x38;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143F07:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143F14:
    if (CMP_NE(LO8(eax), 1)) goto loc_00143F22; /* jne: not equal / not zero */

loc_00143F18:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00143F20:
    goto loc_00143F28;

loc_00143F22:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00143F28:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE6B4;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00143F50:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00143F81; /* je: equal / zero */

loc_00143F6A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00143F70:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00143F70; /* jne: not equal / not zero */

loc_00143F81:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00143F94:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE6B4;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x3C;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00143FE7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00143FF4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144002; /* jne: not equal / not zero */

loc_00143FF8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144000:
    goto loc_00144008;

loc_00144002:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144008:
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    xmm1.f[0] = MEMF(0x3B1730); /* movss */
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A292C); /* movss */
    MEMF(esi + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1AB4); /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1880); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C0); /* movss */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD500;
    MEM32(esi + 0x58) = 0x78;
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001440B9:
    ebp = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = ebp;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001440F1; /* je: equal / zero */

loc_001440D3:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    /* nop */

loc_001440E0:
    ebp++;
    /* cmp ebp, ecx - flags set for next jcc */
    if (CMP_GE(ebp, ecx)) ebp = ebx; /* cmovge */
    edx = ebp;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001440E0; /* jne: not equal / not zero */

loc_001440F1:
    PUSH32(esp, ebp);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144104:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ebp = ebp << 5;
    ebp = ebp + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + 0xC) = 0x3AD500;
    MEM32(ebp + 0x14) = edx;
    MEM8(ebp + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    eax = esi + 0x40;
    MEM8(ebp + 0x1E) = 2;
    MEM32(ebp) = eax;
    MEM8(ebp + 0x1C) = LO8(ebx);
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144157:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144163:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144170; /* jne: not equal / not zero */

loc_00144167:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0014416E:
    goto loc_00144176;

loc_00144170:
    MEM8(ebp + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00144176:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD4F4;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0014419E:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001441D1; /* je: equal / zero */

loc_001441B8:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    edi = edi;

loc_001441C0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001441C0; /* jne: not equal / not zero */

loc_001441D1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001441E4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AD4F4;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x44;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144237:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144244:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144252; /* jne: not equal / not zero */

loc_00144248:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144250:
    goto loc_00144258;

loc_00144252:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144258:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD4D8;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144280:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001442B1; /* je: equal / zero */

loc_0014429A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001442A0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001442A0; /* jne: not equal / not zero */

loc_001442B1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001442C4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AD4D8;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x48;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144317:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144324:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144332; /* jne: not equal / not zero */

loc_00144328:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144330:
    goto loc_00144338;

loc_00144332:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144338:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD4CC;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144360:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144391; /* je: equal / zero */

loc_0014437A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144380:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144380; /* jne: not equal / not zero */

loc_00144391:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001443A4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AD4CC;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x4C;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001443F7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144404:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144412; /* jne: not equal / not zero */

loc_00144408:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144410:
    goto loc_00144418;

loc_00144412:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144418:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE6A4;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144440:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144471; /* je: equal / zero */

loc_0014445A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144460:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144460; /* jne: not equal / not zero */

loc_00144471:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144484:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE6A4;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x50;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001444D7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001444E4:
    if (CMP_NE(LO8(eax), 1)) goto loc_001444F2; /* jne: not equal / not zero */

loc_001444E8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001444F0:
    goto loc_001444F8;

loc_001444F2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001444F8:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE698;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144520:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144551; /* je: equal / zero */

loc_0014453A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144540:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144540; /* jne: not equal / not zero */

loc_00144551:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144564:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE698;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x54;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001445B7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001445C4:
    if (CMP_NE(LO8(eax), 1)) goto loc_001445D2; /* jne: not equal / not zero */

loc_001445C8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001445D0:
    goto loc_001445D8;

loc_001445D2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001445D8:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE68C;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144600:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144631; /* je: equal / zero */

loc_0014461A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144620:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144620; /* jne: not equal / not zero */

loc_00144631:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144644:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE68C;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x58;
    MEM8(edi + 0x1E) = 1;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144690:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014469D:
    if (CMP_NE(LO8(eax), 1)) goto loc_001446AB; /* jne: not equal / not zero */

loc_001446A1:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001446A9:
    goto loc_001446B1;

loc_001446AB:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001446B1:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE680;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001446D9:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144711; /* je: equal / zero */

loc_001446F3:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00144700:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144700; /* jne: not equal / not zero */

loc_00144711:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144724:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE680;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x5C;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144777:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144784:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144792; /* jne: not equal / not zero */

loc_00144788:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144790:
    goto loc_00144798;

loc_00144792:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144798:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE674;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001447C0:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001447F1; /* je: equal / zero */

loc_001447DA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001447E0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001447E0; /* jne: not equal / not zero */

loc_001447F1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144804:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE674;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x60;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144857:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144864:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144872; /* jne: not equal / not zero */

loc_00144868:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144870:
    goto loc_00144878;

loc_00144872:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144878:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE668;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001448A0:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001448D1; /* je: equal / zero */

loc_001448BA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001448C0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001448C0; /* jne: not equal / not zero */

loc_001448D1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001448E4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE668;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x64;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144937:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144944:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144952; /* jne: not equal / not zero */

loc_00144948:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144950:
    goto loc_00144958;

loc_00144952:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144958:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE658;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144980:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001449B1; /* je: equal / zero */

loc_0014499A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001449A0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001449A0; /* jne: not equal / not zero */

loc_001449B1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001449C4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE658;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x68;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144A17:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144A24:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144A32; /* jne: not equal / not zero */

loc_00144A28:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144A30:
    goto loc_00144A38;

loc_00144A32:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144A38:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE64C;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144A60:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144A91; /* je: equal / zero */

loc_00144A7A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144A80:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144A80; /* jne: not equal / not zero */

loc_00144A91:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144AA4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE64C;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0x6C;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144AF7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144B04:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144B12; /* jne: not equal / not zero */

loc_00144B08:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144B10:
    goto loc_00144B18;

loc_00144B12:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144B18:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE638;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144B40:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144B71; /* je: equal / zero */

loc_00144B5A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144B60:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144B60; /* jne: not equal / not zero */

loc_00144B71:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144B84:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE638;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x74;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144BD7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144BE4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144BF2; /* jne: not equal / not zero */

loc_00144BE8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144BF0:
    goto loc_00144BF8;

loc_00144BF2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144BF8:
    eax = MEM32(0x3EC284);
    ecx = MEM32(0x3EC288);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE628;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144C20:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144C51; /* je: equal / zero */

loc_00144C3A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00144C40:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144C40; /* jne: not equal / not zero */

loc_00144C51:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144C64:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0xC) = 0x3AE628;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0x70;
    MEM32(edi) = ecx;
    MEM8(edi + 0x1E) = 2;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144CB7:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144CC4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144CD2; /* jne: not equal / not zero */

loc_00144CC8:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144CD0:
    goto loc_00144CD8;

loc_00144CD2:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00144CD8:
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    xmm2.f[0] = MEMF(0x3A7950); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    xmm4.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm3.f[0]; /* movss */
    eax = esi + 0x78;
    MEM32(esp + 0x34) = eax;
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    eax = esi + 0x7C;
    MEM32(esp + 0x38) = eax;
    eax = esi + 0x80;
    MEM32(esp + 0x3C) = eax;
    ecx = MEM32(0x3EC278);
    eax = esi + 0x84;
    MEM32(esp + 0x40) = eax;
    MEMF(esi + 0x8C) = xmm4.f[0]; /* movss */
    edi = MEM32(0x4A1E94);
    eax = esi + 0x88;
    MEM32(esp + 0x44) = eax;
    eax = esi + 0x8C;
    MEM32(esp + 0x48) = eax;
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    eax = esi + 0x90;
    MEM32(esp + 0x1C) = eax;
    MEMF(esi + 0x94) = xmm2.f[0]; /* movss */
    eax = esi + 0x94;
    MEM32(esp + 0x20) = eax;
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16E8); /* movss */
    MEMF(esi + 0x98) = xmm3.f[0]; /* movss */
    eax = esi + 0x98;
    MEM32(esp + 0x24) = eax;
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    eax = esi + 0x9C;
    MEM32(esp + 0x28) = eax;
    eax = esi + 0xA0;
    MEM32(esp + 0x2C) = eax;
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1BDC); /* movss */
    eax = esi + 0xA4;
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x3EC274);
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE614;
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC0) = 4;
    MEM32(esi + 0xC4) = 4;
    MEM32(esi + 0xC8) = 5;
    MEM32(esi + 0xCC) = 5;
    MEM32(esp + 0x20) = ecx;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144E6F:
    ebp = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = ebp;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144EA1; /* je: equal / zero */

loc_00144E89:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    /* nop */

loc_00144E90:
    ebp++;
    /* cmp ebp, ecx - flags set for next jcc */
    if (CMP_GE(ebp, ecx)) ebp = ebx; /* cmovge */
    edx = ebp;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144E90; /* jne: not equal / not zero */

loc_00144EA1:
    PUSH32(esp, ebp);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144EB4:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    ebp = ebp << 5;
    ebp = ebp + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + 0xC) = 0x3AE614;
    MEM32(ebp + 0x14) = edx;
    MEM8(ebp + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    eax = esi + 0xC0;
    MEM8(ebp + 0x1E) = 1;
    MEM32(ebp) = eax;
    MEM8(ebp + 0x1C) = LO8(ebx);
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144F03:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144F0F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144F1C; /* jne: not equal / not zero */

loc_00144F13:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144F1A:
    goto loc_00144F22;

loc_00144F1C:
    MEM8(ebp + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00144F22:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE600;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00144F4A:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00144F81; /* je: equal / zero */

loc_00144F64:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00144F70:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00144F70; /* jne: not equal / not zero */

loc_00144F81:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00144F94:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE600;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xC4;
    MEM8(edi + 0x1E) = 1;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00144FE3:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00144FF0:
    if (CMP_NE(LO8(eax), 1)) goto loc_00144FFE; /* jne: not equal / not zero */

loc_00144FF4:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00144FFC:
    goto loc_00145004;

loc_00144FFE:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00145004:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE5EC;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0014502C:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145061; /* je: equal / zero */

loc_00145046:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00145050:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145050; /* jne: not equal / not zero */

loc_00145061:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145074:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE5EC;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xC8;
    MEM8(edi + 0x1E) = 1;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001450C3:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001450D0:
    if (CMP_NE(LO8(eax), 1)) goto loc_001450DE; /* jne: not equal / not zero */

loc_001450D4:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001450DC:
    goto loc_001450E4;

loc_001450DE:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001450E4:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE5D8;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0014510C:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145141; /* je: equal / zero */

loc_00145126:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00145130:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145130; /* jne: not equal / not zero */

loc_00145141:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145154:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE5D8;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xCC;
    MEM8(edi + 0x1E) = 1;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001451A3:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001451B0:
    if (CMP_NE(LO8(eax), 1)) goto loc_001451BE; /* jne: not equal / not zero */

loc_001451B4:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001451BC:
    goto loc_001451C4;

loc_001451BE:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001451C4:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE5C4;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001451EC:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145221; /* je: equal / zero */

loc_00145206:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00145210:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145210; /* jne: not equal / not zero */

loc_00145221:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145234:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE5C4;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xA8;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0014528A:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145297:
    if (CMP_NE(LO8(eax), 1)) goto loc_001452A5; /* jne: not equal / not zero */

loc_0014529B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001452A3:
    goto loc_001452AB;

loc_001452A5:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001452AB:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE5B0;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001452D3:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145304; /* je: equal / zero */

loc_001452ED:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001452F3:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001452F3; /* jne: not equal / not zero */

loc_00145304:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145317:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE5B0;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xAC;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0014536D:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014537A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145388; /* jne: not equal / not zero */

loc_0014537E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145386:
    goto loc_0014538E;

loc_00145388:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0014538E:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE59C;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001453B6:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001453E7; /* je: equal / zero */

loc_001453D0:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001453D6:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001453D6; /* jne: not equal / not zero */

loc_001453E7:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001453FA:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE59C;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xB0;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145450:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014545D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0014546B; /* jne: not equal / not zero */

loc_00145461:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145469:
    goto loc_00145471;

loc_0014546B:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00145471:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE588;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145499:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001454D1; /* je: equal / zero */

loc_001454B3:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_001454C0:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001454C0; /* jne: not equal / not zero */

loc_001454D1:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001454E4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE588;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xB8;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0014553A:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145547:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145555; /* jne: not equal / not zero */

loc_0014554B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145553:
    goto loc_0014555B;

loc_00145555:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0014555B:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE578;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145583:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001455B4; /* je: equal / zero */

loc_0014559D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001455A3:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001455A3; /* jne: not equal / not zero */

loc_001455B4:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001455C7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE578;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = esi + 0xB4;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = eax;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0014561D:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014562A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145638; /* jne: not equal / not zero */

loc_0014562E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145636:
    goto loc_0014563E;

loc_00145638:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0014563E:
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x3EC278);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AE564;
    MEM32(esp + 0x20) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145666:
    edi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = edi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145697; /* je: equal / zero */

loc_00145680:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00145686:
    edi++;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_GE(edi, ecx)) edi = ebx; /* cmovge */
    edx = edi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145686; /* jne: not equal / not zero */

loc_00145697:
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001456AA:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = edi << 5;
    edi = edi + ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0x3AE564;
    MEM32(edi + 0x14) = edx;
    MEM8(edi + 0x1D) = LO8(ebx);
    eax = MEM32(ebp + 8);
    esp = esp + 0xC;
    eax++;
    MEM32(ebp + 8) = eax;
    esi = esi + 0xBC;
    MEM8(edi + 0x1E) = 2;
    MEM32(edi) = esi;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145700:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014570D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0014571B; /* jne: not equal / not zero */

loc_00145711:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145719:
    goto loc_00145721;

loc_0014571B:
    MEM8(edi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00145721:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE540;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145745:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145776; /* je: equal / zero */

loc_0014575F:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_00145765:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145765; /* jne: not equal / not zero */

loc_00145776:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145789:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE540;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001457D8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001457E0:
    if (CMP_NE(LO8(eax), 1)) goto loc_001457ED; /* jne: not equal / not zero */

loc_001457E4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001457EB:
    goto loc_001457F3;

loc_001457ED:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001457F3:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE51C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145817:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145848; /* je: equal / zero */

loc_00145831:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_00145837:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145837; /* jne: not equal / not zero */

loc_00145848:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014585B:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE51C;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001458AA:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001458B2:
    if (CMP_NE(LO8(eax), 1)) goto loc_001458BF; /* jne: not equal / not zero */

loc_001458B6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001458BD:
    goto loc_001458C5;

loc_001458BF:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001458C5:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE4FC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001458E9:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145921; /* je: equal / zero */

loc_00145903:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    /* nop */

loc_00145910:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145910; /* jne: not equal / not zero */

loc_00145921:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145934:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE4FC;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145983:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0014598B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145998; /* jne: not equal / not zero */

loc_0014598F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145996:
    goto loc_0014599E;

loc_00145998:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0014599E:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE4DC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001459C2:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x28) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001459F3; /* je: equal / zero */

loc_001459DC:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_001459E2:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001459E2; /* jne: not equal / not zero */

loc_001459F3:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145A06:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE4DC;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145A55:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145A5D:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145A6A; /* jne: not equal / not zero */

loc_00145A61:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145A68:
    goto loc_00145A70;

loc_00145A6A:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00145A70:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE4B8;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145A94:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145AC5; /* je: equal / zero */

loc_00145AAE:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_00145AB4:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145AB4; /* jne: not equal / not zero */

loc_00145AC5:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145AD8:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE4B8;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145B27:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145B2F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145B3C; /* jne: not equal / not zero */

loc_00145B33:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145B3A:
    goto loc_00145B42;

loc_00145B3C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00145B42:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC27C);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE494;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145B66:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x30) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145B97; /* je: equal / zero */

loc_00145B80:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_00145B86:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145B86; /* jne: not equal / not zero */

loc_00145B97:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145BAA:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE494;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145BF9:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145C01:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145C0E; /* jne: not equal / not zero */

loc_00145C05:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145C0C:
    goto loc_00145C14;

loc_00145C0E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00145C14:
    ebp = MEM32(0x3EC274);
    eax = MEM32(0x3EC280);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE470;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00145C38:
    esi = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x34) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00145C69; /* je: equal / zero */

loc_00145C52:
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);

loc_00145C58:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00145C58; /* jne: not equal / not zero */

loc_00145C69:
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00145C7C:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x38);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AE470;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(edi + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(edi + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00145CCB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00145CD3:
    if (CMP_NE(LO8(eax), 1)) goto loc_00145CE0; /* jne: not equal / not zero */

loc_00145CD7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00145CDE:
    goto loc_00145CE6;

loc_00145CE0:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00145CE6:
    eax = MEM32(0x3EC274);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC280);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE44C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145D10:
    eax = MEM32(0x3EC274);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC280);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE42C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145D3A:
    eax = MEM32(0x3EC274);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC280);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE40C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145D64:
    eax = MEM32(0x3EC274);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC280);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE3E8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145D8E:
    eax = MEM32(0x3EC274);
    ecx = MEM32(esp + 0x48);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC280);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE3C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145DB8:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(0x47A054) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2D50); /* movss */
    MEMF(0x47A058) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1BD8); /* movss */
    MEMF(0x47A05C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1BD4); /* movss */
    MEMF(0x47A060) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(0x47A034) = xmm0.f[0]; /* movss */
    MEMF(0x47A038) = xmm0.f[0]; /* movss */
    eax = MEM32(0x3EC274);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEMF(0x47A03C) = xmm0.f[0]; /* movss */
    MEMF(0x47A040) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69B8); /* movss */
    PUSH32(esp, ebx);
    MEMF(0x47A044) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, eax);
    MEMF(0x47A048) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B19D0); /* movss */
    ecx = ecx + 0x10;
    PUSH32(esp, 0x47A054);
    MEMF(0x47A04C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A3C); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC28C);
    eax = 0; /* xor self */
    edx = 0x3AE3B4;
    MEMF(0x47A050) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145E86:
    edx = MEM32(0x3EC274);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC28C);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x47A034);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE3A4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145EB1:
    ecx = MEM32(0x3EC274);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC28C);
    edx = edx + 0x10;
    PUSH32(esp, 0x47A044);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE398;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00145EDD:
    if (CMP_NE(MEM32(0x3EC290), 0xFFFFFFFFu)) goto loc_00145EEC; /* jne: not equal / not zero */

loc_00145EE6:
    MEM32(0x3EC290) = ebx;

loc_00145EEC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}
