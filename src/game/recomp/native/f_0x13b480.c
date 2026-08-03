#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013B480
 * Original: 0x0013B480 - 0x0013DBB5 (10037 bytes, 3330 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B480:
    ecx = 0; /* xor self */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    edx = 0; /* xor self */
    ecx = eax;
    MEM32(ecx) = edx;
    esp = esp - 0x18;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = edx;
    ebx = 0; /* xor self */
    MEM32(eax + 0x58) = ebx;
    MEM32(eax + 0x54) = 0x2B9D6F8;
    MEM32(eax + 0x50) = 0xFD462907u;
    if (CMP_NE(MEM8(0x4A1DC6), LO8(ebx))) goto loc_0013DBB0; /* jne: not equal / not zero */

loc_0013B4C3:
    eax = MEM32(0x3EC0E4);
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC0E0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE04C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B4EA:
    esi = MEM32(edi + 4);
    edx = esi;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edi + 0xC);
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + eax + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0013B518; /* je: equal / zero */

loc_0013B504:
    ecx = MEM32(edi + 0x10);

loc_0013B507:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B507; /* jne: not equal / not zero */

loc_0013B518:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B52B:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3AE04C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC21C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B57A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B582:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B58F; /* jne: not equal / not zero */

loc_0013B586:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B58D:
    goto loc_0013B595;

loc_0013B58F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B595:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE03C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B5B9:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013B5E9; /* je: equal / zero */

loc_0013B5D3:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013B5D8:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B5D8; /* jne: not equal / not zero */

loc_0013B5E9:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B5FC:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3AE03C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC220;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B64B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B653:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B660; /* jne: not equal / not zero */

loc_0013B657:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B65E:
    goto loc_0013B666;

loc_0013B660:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B666:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE028;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B68A:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013B6C1; /* je: equal / zero */

loc_0013B6A4:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0013B6B0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B6B0; /* jne: not equal / not zero */

loc_0013B6C1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B6D4:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3AE028;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC208;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B723:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B72B:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B738; /* jne: not equal / not zero */

loc_0013B72F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B736:
    goto loc_0013B73E;

loc_0013B738:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B73E:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3AE010;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B762:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013B792; /* je: equal / zero */

loc_0013B77C:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013B781:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B781; /* jne: not equal / not zero */

loc_0013B792:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B7A5:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3AE010;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC20C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B7F4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B7FC:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B809; /* jne: not equal / not zero */

loc_0013B800:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B807:
    goto loc_0013B80F;

loc_0013B809:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B80F:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADFFC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B833:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013B863; /* je: equal / zero */

loc_0013B84D:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013B852:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B852; /* jne: not equal / not zero */

loc_0013B863:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B876:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADFFC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1E0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B8C5:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B8CD:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B8DA; /* jne: not equal / not zero */

loc_0013B8D1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B8D8:
    goto loc_0013B8E0;

loc_0013B8DA:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B8E0:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADFE8;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B904:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013B934; /* je: equal / zero */

loc_0013B91E:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013B923:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B923; /* jne: not equal / not zero */

loc_0013B934:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013B947:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADFE8;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1E4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013B996:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013B99E:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013B9AB; /* jne: not equal / not zero */

loc_0013B9A2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013B9A9:
    goto loc_0013B9B1;

loc_0013B9AB:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013B9B1:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADFC8;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013B9D5:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BA05; /* je: equal / zero */

loc_0013B9EF:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013B9F4:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013B9F4; /* jne: not equal / not zero */

loc_0013BA05:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BA18:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADFC8;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1EC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BA67:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BA6F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BA7C; /* jne: not equal / not zero */

loc_0013BA73:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BA7A:
    goto loc_0013BA82;

loc_0013BA7C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BA82:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADFA4;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BAA6:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BAD6; /* je: equal / zero */

loc_0013BAC0:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BAC5:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BAC5; /* jne: not equal / not zero */

loc_0013BAD6:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BAE9:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADFA4;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1F0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BB38:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BB40:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BB4D; /* jne: not equal / not zero */

loc_0013BB44:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BB4B:
    goto loc_0013BB53;

loc_0013BB4D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BB53:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADF84;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BB77:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BBA7; /* je: equal / zero */

loc_0013BB91:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BB96:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BB96; /* jne: not equal / not zero */

loc_0013BBA7:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BBBA:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADF84;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1F4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BC09:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BC11:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BC1E; /* jne: not equal / not zero */

loc_0013BC15:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BC1C:
    goto loc_0013BC24;

loc_0013BC1E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BC24:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADF64;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BC48:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BC78; /* je: equal / zero */

loc_0013BC62:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BC67:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BC67; /* jne: not equal / not zero */

loc_0013BC78:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BC8B:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADF64;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1F8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BCDA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BCE2:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BCEF; /* jne: not equal / not zero */

loc_0013BCE6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BCED:
    goto loc_0013BCF5;

loc_0013BCEF:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BCF5:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADF48;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BD19:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BD49; /* je: equal / zero */

loc_0013BD33:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BD38:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BD38; /* jne: not equal / not zero */

loc_0013BD49:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BD5C:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADF48;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1FC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BDAB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BDB3:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BDC0; /* jne: not equal / not zero */

loc_0013BDB7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BDBE:
    goto loc_0013BDC6;

loc_0013BDC0:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BDC6:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADF28;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BDEA:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BE21; /* je: equal / zero */

loc_0013BE04:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0013BE10:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BE10; /* jne: not equal / not zero */

loc_0013BE21:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BE34:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADF28;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC200;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BE83:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BE8B:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BE98; /* jne: not equal / not zero */

loc_0013BE8F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BE96:
    goto loc_0013BE9E;

loc_0013BE98:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BE9E:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADF04;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BEC2:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BEF2; /* je: equal / zero */

loc_0013BEDC:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BEE1:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BEE1; /* jne: not equal / not zero */

loc_0013BEF2:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BF05:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADF04;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC204;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013BF54:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013BF5C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013BF69; /* jne: not equal / not zero */

loc_0013BF60:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013BF67:
    goto loc_0013BF6F;

loc_0013BF69:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013BF6F:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADEF0;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013BF93:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013BFC3; /* je: equal / zero */

loc_0013BFAD:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013BFB2:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013BFB2; /* jne: not equal / not zero */

loc_0013BFC3:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013BFD6:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADEF0;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC210;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C025:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C02D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C03A; /* jne: not equal / not zero */

loc_0013C031:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C038:
    goto loc_0013C040;

loc_0013C03A:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C040:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADEDC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C064:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C094; /* je: equal / zero */

loc_0013C07E:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C083:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C083; /* jne: not equal / not zero */

loc_0013C094:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C0A7:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADEDC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC214;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C0F6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C0FE:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C10B; /* jne: not equal / not zero */

loc_0013C102:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C109:
    goto loc_0013C111;

loc_0013C10B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C111:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADEC4;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C135:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C165; /* je: equal / zero */

loc_0013C14F:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C154:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C154; /* jne: not equal / not zero */

loc_0013C165:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C178:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADEC4;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC1E8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C1C7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C1CF:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C1DC; /* jne: not equal / not zero */

loc_0013C1D3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C1DA:
    goto loc_0013C1E2;

loc_0013C1DC:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C1E2:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADEAC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C206:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C236; /* je: equal / zero */

loc_0013C220:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C225:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C225; /* jne: not equal / not zero */

loc_0013C236:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C249:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADEAC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC218;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C298:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C2A0:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C2AD; /* jne: not equal / not zero */

loc_0013C2A4:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C2AB:
    goto loc_0013C2B3;

loc_0013C2AD:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C2B3:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADE84;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C2D7:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C307; /* je: equal / zero */

loc_0013C2F1:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C2F6:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C2F6; /* jne: not equal / not zero */

loc_0013C307:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C31A:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADE84;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC110;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C369:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C371:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C37E; /* jne: not equal / not zero */

loc_0013C375:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C37C:
    goto loc_0013C384;

loc_0013C37E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C384:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADE5C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C3A8:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C3D8; /* je: equal / zero */

loc_0013C3C2:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C3C7:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C3C7; /* jne: not equal / not zero */

loc_0013C3D8:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C3EB:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADE5C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC114;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C43A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C442:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C44F; /* jne: not equal / not zero */

loc_0013C446:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C44D:
    goto loc_0013C455;

loc_0013C44F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C455:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADE34;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C479:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C4A9; /* je: equal / zero */

loc_0013C493:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C498:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C498; /* jne: not equal / not zero */

loc_0013C4A9:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C4BC:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADE34;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC118;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C50B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C513:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C520; /* jne: not equal / not zero */

loc_0013C517:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C51E:
    goto loc_0013C526;

loc_0013C520:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C526:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADE0C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C54A:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C581; /* je: equal / zero */

loc_0013C564:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0013C570:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C570; /* jne: not equal / not zero */

loc_0013C581:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C594:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADE0C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC11C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C5E3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C5EB:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C5F8; /* jne: not equal / not zero */

loc_0013C5EF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C5F6:
    goto loc_0013C5FE;

loc_0013C5F8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C5FE:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADDE0;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C622:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C652; /* je: equal / zero */

loc_0013C63C:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C641:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C641; /* jne: not equal / not zero */

loc_0013C652:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C665:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADDE0;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC120;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C6B4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C6BC:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C6C9; /* jne: not equal / not zero */

loc_0013C6C0:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C6C7:
    goto loc_0013C6CF;

loc_0013C6C9:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C6CF:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADDB4;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C6F3:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C723; /* je: equal / zero */

loc_0013C70D:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C712:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C712; /* jne: not equal / not zero */

loc_0013C723:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C736:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADDB4;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC124;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C785:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C78D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C79A; /* jne: not equal / not zero */

loc_0013C791:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C798:
    goto loc_0013C7A0;

loc_0013C79A:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C7A0:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADD88;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C7C4:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C7F4; /* je: equal / zero */

loc_0013C7DE:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C7E3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C7E3; /* jne: not equal / not zero */

loc_0013C7F4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C807:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADD88;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC128;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C856:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C85E:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C86B; /* jne: not equal / not zero */

loc_0013C862:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C869:
    goto loc_0013C871;

loc_0013C86B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C871:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADD5C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C895:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C8C5; /* je: equal / zero */

loc_0013C8AF:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C8B4:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C8B4; /* jne: not equal / not zero */

loc_0013C8C5:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C8D8:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADD5C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC12C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C927:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013C92F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013C93C; /* jne: not equal / not zero */

loc_0013C933:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013C93A:
    goto loc_0013C942;

loc_0013C93C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013C942:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADD34;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013C966:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013C996; /* je: equal / zero */

loc_0013C980:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013C985:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013C985; /* jne: not equal / not zero */

loc_0013C996:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013C9A9:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADD34;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC130;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013C9F8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CA00:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CA0D; /* jne: not equal / not zero */

loc_0013CA04:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CA0B:
    goto loc_0013CA13;

loc_0013CA0D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CA13:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADD0C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CA37:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CA67; /* je: equal / zero */

loc_0013CA51:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CA56:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CA56; /* jne: not equal / not zero */

loc_0013CA67:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CA7A:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADD0C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC134;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CAC9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CAD1:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CADE; /* jne: not equal / not zero */

loc_0013CAD5:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CADC:
    goto loc_0013CAE4;

loc_0013CADE:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CAE4:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADCE4;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CB08:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CB38; /* je: equal / zero */

loc_0013CB22:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CB27:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CB27; /* jne: not equal / not zero */

loc_0013CB38:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CB4B:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADCE4;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC138;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CB9A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CBA2:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CBAF; /* jne: not equal / not zero */

loc_0013CBA6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CBAD:
    goto loc_0013CBB5;

loc_0013CBAF:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CBB5:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0E8);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADCBC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CBD9:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CC09; /* je: equal / zero */

loc_0013CBF3:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CBF8:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CBF8; /* jne: not equal / not zero */

loc_0013CC09:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CC1C:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADCBC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC13C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CC6B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CC73:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CC80; /* jne: not equal / not zero */

loc_0013CC77:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CC7E:
    goto loc_0013CC86;

loc_0013CC80:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CC86:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADC90;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CCAA:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CCE1; /* je: equal / zero */

loc_0013CCC4:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0013CCD0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CCD0; /* jne: not equal / not zero */

loc_0013CCE1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CCF4:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADC90;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC140;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CD43:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CD4B:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CD58; /* jne: not equal / not zero */

loc_0013CD4F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CD56:
    goto loc_0013CD5E;

loc_0013CD58:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CD5E:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADC64;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CD82:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CDB2; /* je: equal / zero */

loc_0013CD9C:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CDA1:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CDA1; /* jne: not equal / not zero */

loc_0013CDB2:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CDC5:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADC64;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC144;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CE14:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CE1C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CE29; /* jne: not equal / not zero */

loc_0013CE20:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CE27:
    goto loc_0013CE2F;

loc_0013CE29:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CE2F:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADC38;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CE53:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CE83; /* je: equal / zero */

loc_0013CE6D:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CE72:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CE72; /* jne: not equal / not zero */

loc_0013CE83:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CE96:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADC38;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC148;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CEE5:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CEED:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CEFA; /* jne: not equal / not zero */

loc_0013CEF1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CEF8:
    goto loc_0013CF00;

loc_0013CEFA:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CF00:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0EC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADC0C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CF24:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013CF54; /* je: equal / zero */

loc_0013CF3E:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013CF43:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013CF43; /* jne: not equal / not zero */

loc_0013CF54:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013CF67:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADC0C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC14C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013CFB6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013CFBE:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013CFCB; /* jne: not equal / not zero */

loc_0013CFC2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013CFC9:
    goto loc_0013CFD1;

loc_0013CFCB:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013CFD1:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADBE4;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013CFF5:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D025; /* je: equal / zero */

loc_0013D00F:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D014:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D014; /* jne: not equal / not zero */

loc_0013D025:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D038:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADBE4;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC158;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D087:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D08F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D09C; /* jne: not equal / not zero */

loc_0013D093:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D09A:
    goto loc_0013D0A2;

loc_0013D09C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D0A2:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADBBC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D0C6:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D0F6; /* je: equal / zero */

loc_0013D0E0:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D0E5:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D0E5; /* jne: not equal / not zero */

loc_0013D0F6:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D109:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADBBC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC15C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D158:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D160:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D16D; /* jne: not equal / not zero */

loc_0013D164:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D16B:
    goto loc_0013D173;

loc_0013D16D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D173:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADB94;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D197:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D1C7; /* je: equal / zero */

loc_0013D1B1:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D1B6:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D1B6; /* jne: not equal / not zero */

loc_0013D1C7:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D1DA:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADB94;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC160;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D229:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D231:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D23E; /* jne: not equal / not zero */

loc_0013D235:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D23C:
    goto loc_0013D244;

loc_0013D23E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D244:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADB6C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D268:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D298; /* je: equal / zero */

loc_0013D282:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D287:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D287; /* jne: not equal / not zero */

loc_0013D298:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D2AB:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADB6C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC164;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D2FA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D302:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D30F; /* jne: not equal / not zero */

loc_0013D306:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D30D:
    goto loc_0013D315;

loc_0013D30F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D315:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADB40;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D339:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D369; /* je: equal / zero */

loc_0013D353:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D358:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D358; /* jne: not equal / not zero */

loc_0013D369:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D37C:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADB40;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC168;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D3CB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D3D3:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D3E0; /* jne: not equal / not zero */

loc_0013D3D7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D3DE:
    goto loc_0013D3E6;

loc_0013D3E0:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D3E6:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADB14;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D40A:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D441; /* je: equal / zero */

loc_0013D424:
    ecx = MEM32(edi + 0x10);
    eax = edx;
    /* nop */

loc_0013D430:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D430; /* jne: not equal / not zero */

loc_0013D441:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D454:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADB14;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC16C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D4A3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D4AB:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D4B8; /* jne: not equal / not zero */

loc_0013D4AF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D4B6:
    goto loc_0013D4BE;

loc_0013D4B8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D4BE:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADAE8;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D4E2:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D512; /* je: equal / zero */

loc_0013D4FC:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D501:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D501; /* jne: not equal / not zero */

loc_0013D512:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D525:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADAE8;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC170;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D574:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D57C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D589; /* jne: not equal / not zero */

loc_0013D580:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D587:
    goto loc_0013D58F;

loc_0013D589:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D58F:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F4);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADABC;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D5B3:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D5E3; /* je: equal / zero */

loc_0013D5CD:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D5D2:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D5D2; /* jne: not equal / not zero */

loc_0013D5E3:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D5F6:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADABC;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC174;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D645:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D64D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D65A; /* jne: not equal / not zero */

loc_0013D651:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D658:
    goto loc_0013D660;

loc_0013D65A:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D660:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADA94;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D684:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D6B4; /* je: equal / zero */

loc_0013D69E:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D6A3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D6A3; /* jne: not equal / not zero */

loc_0013D6B4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D6C7:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADA94;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC178;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D716:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D71E:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D72B; /* jne: not equal / not zero */

loc_0013D722:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D729:
    goto loc_0013D731;

loc_0013D72B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D731:
    ebp = MEM32(0x3EC0E0);
    eax = MEM32(0x3EC0F0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    eax = 0x3ADA6C;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013D755:
    esi = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = esi;
    ecx = ecx << 5;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + edx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D785; /* je: equal / zero */

loc_0013D76F:
    ecx = MEM32(edi + 0x10);
    eax = edx;

loc_0013D774:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013D774; /* jne: not equal / not zero */

loc_0013D785:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013D798:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0xC) = 0x3ADA6C;
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x1D) = LO8(ebx);
    edx = MEM32(edi + 8);
    esp = esp + 0xC;
    edx++;
    MEM32(edi + 8) = edx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC17C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0013D7E7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0013D7EF:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013D7FC; /* jne: not equal / not zero */

loc_0013D7F3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0013D7FA:
    goto loc_0013D802;

loc_0013D7FC:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0013D802:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F0);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC180);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3ADA44;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D82D:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC184);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F0);
    eax = 0; /* xor self */
    edx = 0x3ADA1C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D857:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0F4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC188);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD9F0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D881:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F4);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC18C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD9C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D8AC:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC190);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F4);
    eax = 0; /* xor self */
    edx = 0x3AD998;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D8D6:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0F4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC194);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD96C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D900:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F8);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC1A0);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD944;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D92B:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC1A4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F8);
    eax = 0; /* xor self */
    edx = 0x3AD91C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D955:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC1A8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD8F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D97F:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F8);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC1AC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD8CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D9AA:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC1B0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0FC);
    eax = 0; /* xor self */
    edx = 0x3AD8A0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D9D4:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC1B4);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD874;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013D9FE:
    ecx = MEM32(0x3EC0E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EC1B8);
    edx = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0FC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD848;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DA29:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC1BC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0FC);
    eax = 0; /* xor self */
    edx = 0x3AD81C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DA53:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC1C0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD7F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DA7D:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F8);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC1C4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD7CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DAA8:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC1C8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0F8);
    eax = 0; /* xor self */
    edx = 0x3AD7A4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DAD2:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC1CC);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD77C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DAFC:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EC1D0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    ecx = MEM32(0x3EC0FC);
    eax = 0; /* xor self */
    edx = 0x3AD750;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DB27:
    eax = MEM32(0x3EC0E0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC1D4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0FC);
    eax = 0; /* xor self */
    edx = 0x3AD724;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DB51:
    edx = MEM32(0x3EC0E0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC1D8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD6F8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DB7B:
    ecx = MEM32(0x3EC0E0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0FC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC1DC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD6CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013DBA6:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x4A1DC6) = 1;
    POP32(esp, ebp);

loc_0013DBB0:
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
