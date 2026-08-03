#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00137F50
 * Original: 0x00137F50 - 0x0013B261 (13073 bytes, 4200 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137F50:
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    MEM32(esp + 8) = ebx;
    ebp = edi + 0x370;
    PUSH32(esp, esi);

loc_00137F62:
    esi = ebp + -352;
    PUSH32(esp, 0); sub_00136DA0(); /* call 0x00136DA0 */

loc_00137F6D:
    /* cmp MEM32(0x3EC07C), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp) = ebx;
    MEM8(ebp + -154) = 1;
    if (CMP_NE(MEM32(0x3EC07C), 0xFFFFFFFFu)) goto loc_00137F8C; /* jne: not equal / not zero */

loc_00137F86:
    MEM32(0x3EC07C) = ebx;

loc_00137F8C:
    eax = MEM32(esp + 0xC);
    MEM32(ebp + -160) = eax;
    eax++;
    ebp = ebp + 0x1A0;
    /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, 2)) goto loc_00137F62; /* jb: below (unsigned <) */

loc_00137FA6:
    MEM32(esp + 0xC) = ebx;
    ebp = edi + 0x6A8;

loc_00137FB0:
    esi = ebp + -344;
    PUSH32(esp, 0); sub_00136DA0(); /* call 0x00136DA0 */

loc_00137FBB:
    if (CMP_NE(MEM32(0x3EC068), 0xFFFFFFFFu)) goto loc_00137FCA; /* jne: not equal / not zero */

loc_00137FC4:
    MEM32(0x3EC068) = ebx;

loc_00137FCA:
    eax = MEM32(esp + 0xC);
    MEM32(ebp + -12) = ebx;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + -152) = eax;
    eax++;
    ebp = ebp + 0x168;
    /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, 5)) goto loc_00137FB0; /* jb: below (unsigned <) */

loc_00137FED:
    xmm2.f[0] = MEMF(0x3A2928); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    eax = edi + 0x50;
    ecx = 0xA;
    /* nop */

loc_00138010:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + -80) = xmm0.f[0]; /* movss */
    MEMF(eax + -40) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x140) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x168) = xmm1.f[0]; /* movss */
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_00138010; /* jne: not equal / not zero */

loc_00138066:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD600;
    MEM32(esp + 0x18) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013808E:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001380C1; /* je: equal / zero */

loc_001380A8:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    edi = edi;

loc_001380B0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001380B0; /* jne: not equal / not zero */

loc_001380C1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001380D4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD600;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0D0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138128:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138135:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138143; /* jne: not equal / not zero */

loc_00138139:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138141:
    goto loc_00138149;

loc_00138143:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138149:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD5E0;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138171:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001381A2; /* je: equal / zero */

loc_0013818B:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138191:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138191; /* jne: not equal / not zero */

loc_001381A2:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001381B5:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD5E0;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0D4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138209:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138216:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138224; /* jne: not equal / not zero */

loc_0013821A:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138222:
    goto loc_0013822A;

loc_00138224:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013822A:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD5D4;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138252:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138283; /* je: equal / zero */

loc_0013826C:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138272:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138272; /* jne: not equal / not zero */

loc_00138283:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138296:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD5D4;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0D8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001382EA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001382F7:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138305; /* jne: not equal / not zero */

loc_001382FB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138303:
    goto loc_0013830B;

loc_00138305:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013830B:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD5BC;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138333:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138364; /* je: equal / zero */

loc_0013834D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138353:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138353; /* jne: not equal / not zero */

loc_00138364:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138377:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD5BC;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0CC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001383CB:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001383D8:
    if (CMP_NE(LO8(eax), 1)) goto loc_001383E6; /* jne: not equal / not zero */

loc_001383DC:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001383E4:
    goto loc_001383EC;

loc_001383E6:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001383EC:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    xmm0.f[0] = MEMF(0x3EC0C8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC0CC); /* mulss */
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD59C;
    MEMF(0x3EC0CC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013842C:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138461; /* je: equal / zero */

loc_00138446:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00138450:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138450; /* jne: not equal / not zero */

loc_00138461:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138474:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD59C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0C0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001384C8:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001384D5:
    if (CMP_NE(LO8(eax), 1)) goto loc_001384E3; /* jne: not equal / not zero */

loc_001384D9:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001384E1:
    goto loc_001384E9;

loc_001384E3:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001384E9:
    eax = MEM32(0x3EC08C);
    ecx = MEM32(0x3EC090);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD57C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138511:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138542; /* je: equal / zero */

loc_0013852B:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138531:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138531; /* jne: not equal / not zero */

loc_00138542:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138555:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD57C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3EC0C4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001385A9:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001385B6:
    if (CMP_NE(LO8(eax), 1)) goto loc_001385C4; /* jne: not equal / not zero */

loc_001385BA:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001385C2:
    goto loc_001385CA;

loc_001385C4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001385CA:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001385F2:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138623; /* je: equal / zero */

loc_0013860C:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138612:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138612; /* jne: not equal / not zero */

loc_00138623:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138636:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = edi;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138686:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138693:
    if (CMP_NE(LO8(eax), 1)) goto loc_001386A1; /* jne: not equal / not zero */

loc_00138697:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0013869F:
    goto loc_001386A7;

loc_001386A1:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001386A7:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001386CF:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138701; /* je: equal / zero */

loc_001386E9:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_001386F0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001386F0; /* jne: not equal / not zero */

loc_00138701:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138714:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x28;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138767:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138774:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138782; /* jne: not equal / not zero */

loc_00138778:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138780:
    goto loc_00138788;

loc_00138782:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138788:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001387B0:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001387E1; /* je: equal / zero */

loc_001387CA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001387D0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001387D0; /* jne: not equal / not zero */

loc_001387E1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001387F4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    eax = edi + 0x50;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138847:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138854:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138862; /* jne: not equal / not zero */

loc_00138858:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138860:
    goto loc_00138868;

loc_00138862:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138868:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD534;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138890:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001388C1; /* je: equal / zero */

loc_001388AA:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001388B0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001388B0; /* jne: not equal / not zero */

loc_001388C1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001388D4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD534;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x78;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138927:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138934:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138942; /* jne: not equal / not zero */

loc_00138938:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138940:
    goto loc_00138948;

loc_00138942:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138948:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD520;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138970:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001389A1; /* je: equal / zero */

loc_0013898A:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138990:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138990; /* jne: not equal / not zero */

loc_001389A1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001389B4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD520;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xA0;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138A0A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138A17:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138A25; /* jne: not equal / not zero */

loc_00138A1B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138A23:
    goto loc_00138A2B;

loc_00138A25:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138A2B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC098);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD50C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138A53:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138A84; /* je: equal / zero */

loc_00138A6D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138A73:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138A73; /* jne: not equal / not zero */

loc_00138A84:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138A97:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD50C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xC8;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138AED:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138AFA:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138B08; /* jne: not equal / not zero */

loc_00138AFE:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138B06:
    goto loc_00138B0E;

loc_00138B08:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138B0E:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138B36:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138B67; /* je: equal / zero */

loc_00138B50:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138B56:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138B56; /* jne: not equal / not zero */

loc_00138B67:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138B7A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 4;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138BCD:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138BDA:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138BE8; /* jne: not equal / not zero */

loc_00138BDE:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138BE6:
    goto loc_00138BEE;

loc_00138BE8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138BEE:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138C16:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138C47; /* je: equal / zero */

loc_00138C30:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138C36:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138C36; /* jne: not equal / not zero */

loc_00138C47:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138C5A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x2C;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138CAD:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138CBA:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138CC8; /* jne: not equal / not zero */

loc_00138CBE:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138CC6:
    goto loc_00138CCE;

loc_00138CC8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138CCE:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138CF6:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138D27; /* je: equal / zero */

loc_00138D10:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138D16:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138D16; /* jne: not equal / not zero */

loc_00138D27:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138D3A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x54;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138D8D:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138D9A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138DA8; /* jne: not equal / not zero */

loc_00138D9E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138DA6:
    goto loc_00138DAE;

loc_00138DA8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138DAE:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD534;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138DD6:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138E07; /* je: equal / zero */

loc_00138DF0:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138DF6:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138DF6; /* jne: not equal / not zero */

loc_00138E07:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138E1A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD534;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x7C;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138E6D:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138E7A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138E88; /* jne: not equal / not zero */

loc_00138E7E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138E86:
    goto loc_00138E8E;

loc_00138E88:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138E8E:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD520;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138EB6:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138EE7; /* je: equal / zero */

loc_00138ED0:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00138ED6:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138ED6; /* jne: not equal / not zero */

loc_00138EE7:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138EFA:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD520;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xA4;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00138F50:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00138F5D:
    if (CMP_NE(LO8(eax), 1)) goto loc_00138F6B; /* jne: not equal / not zero */

loc_00138F61:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00138F69:
    goto loc_00138F71;

loc_00138F6B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00138F71:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC09C);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD50C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00138F99:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00138FD1; /* je: equal / zero */

loc_00138FB3:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00138FC0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00138FC0; /* jne: not equal / not zero */

loc_00138FD1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00138FE4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD50C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xCC;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013903A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139047:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139055; /* jne: not equal / not zero */

loc_0013904B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139053:
    goto loc_0013905B;

loc_00139055:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013905B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139083:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001390B4; /* je: equal / zero */

loc_0013909D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001390A3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001390A3; /* jne: not equal / not zero */

loc_001390B4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001390C7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 8;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013911A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139127:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139135; /* jne: not equal / not zero */

loc_0013912B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139133:
    goto loc_0013913B;

loc_00139135:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013913B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139163:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139194; /* je: equal / zero */

loc_0013917D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139183:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139183; /* jne: not equal / not zero */

loc_00139194:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001391A7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x30;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001391FA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139207:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139215; /* jne: not equal / not zero */

loc_0013920B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139213:
    goto loc_0013921B;

loc_00139215:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013921B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139243:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139274; /* je: equal / zero */

loc_0013925D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139263:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139263; /* jne: not equal / not zero */

loc_00139274:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139287:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x58;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001392DA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001392E7:
    if (CMP_NE(LO8(eax), 1)) goto loc_001392F5; /* jne: not equal / not zero */

loc_001392EB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001392F3:
    goto loc_001392FB;

loc_001392F5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001392FB:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD534;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139323:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139354; /* je: equal / zero */

loc_0013933D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139343:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139343; /* jne: not equal / not zero */

loc_00139354:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139367:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD534;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x80;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001393BD:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001393CA:
    if (CMP_NE(LO8(eax), 1)) goto loc_001393D8; /* jne: not equal / not zero */

loc_001393CE:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001393D6:
    goto loc_001393DE;

loc_001393D8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001393DE:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD520;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139406:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139437; /* je: equal / zero */

loc_00139420:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139426:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139426; /* jne: not equal / not zero */

loc_00139437:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013944A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD520;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xA8;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001394A0:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001394AD:
    if (CMP_NE(LO8(eax), 1)) goto loc_001394BB; /* jne: not equal / not zero */

loc_001394B1:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001394B9:
    goto loc_001394C1;

loc_001394BB:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001394C1:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0BC);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD50C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001394E9:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139521; /* je: equal / zero */

loc_00139503:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00139510:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139510; /* jne: not equal / not zero */

loc_00139521:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139534:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD50C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xD0;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013958A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139597:
    if (CMP_NE(LO8(eax), 1)) goto loc_001395A5; /* jne: not equal / not zero */

loc_0013959B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001395A3:
    goto loc_001395AB;

loc_001395A5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_001395AB:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001395D3:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139604; /* je: equal / zero */

loc_001395ED:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001395F3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001395F3; /* jne: not equal / not zero */

loc_00139604:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139617:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xC;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013966A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139677:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139685; /* jne: not equal / not zero */

loc_0013967B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139683:
    goto loc_0013968B;

loc_00139685:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013968B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001396B3:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001396E4; /* je: equal / zero */

loc_001396CD:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001396D3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001396D3; /* jne: not equal / not zero */

loc_001396E4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001396F7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x34;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013974A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139757:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139765; /* jne: not equal / not zero */

loc_0013975B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139763:
    goto loc_0013976B;

loc_00139765:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013976B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139793:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001397C4; /* je: equal / zero */

loc_001397AD:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_001397B3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_001397B3; /* jne: not equal / not zero */

loc_001397C4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001397D7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x5C;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013982A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139837:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139845; /* jne: not equal / not zero */

loc_0013983B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139843:
    goto loc_0013984B;

loc_00139845:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013984B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD534;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139873:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001398A4; /* je: equal / zero */

loc_0013988D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139893:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139893; /* jne: not equal / not zero */

loc_001398A4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001398B7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD534;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x84;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013990D:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013991A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139928; /* jne: not equal / not zero */

loc_0013991E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139926:
    goto loc_0013992E;

loc_00139928:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013992E:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD520;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139956:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139987; /* je: equal / zero */

loc_00139970:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139976:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139976; /* jne: not equal / not zero */

loc_00139987:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013999A:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD520;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xAC;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001399F0:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001399FD:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139A0B; /* jne: not equal / not zero */

loc_00139A01:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139A09:
    goto loc_00139A11;

loc_00139A0B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139A11:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD50C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139A39:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139A71; /* je: equal / zero */

loc_00139A53:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00139A60:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139A60; /* jne: not equal / not zero */

loc_00139A71:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139A84:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD50C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xD4;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139ADA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139AE7:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139AF5; /* jne: not equal / not zero */

loc_00139AEB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139AF3:
    goto loc_00139AFB;

loc_00139AF5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139AFB:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139B23:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139B54; /* je: equal / zero */

loc_00139B3D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139B43:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139B43; /* jne: not equal / not zero */

loc_00139B54:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139B67:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x10;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139BBA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139BC7:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139BD5; /* jne: not equal / not zero */

loc_00139BCB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139BD3:
    goto loc_00139BDB;

loc_00139BD5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139BDB:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139C03:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139C34; /* je: equal / zero */

loc_00139C1D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139C23:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139C23; /* jne: not equal / not zero */

loc_00139C34:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139C47:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x38;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139C9A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139CA7:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139CB5; /* jne: not equal / not zero */

loc_00139CAB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139CB3:
    goto loc_00139CBB;

loc_00139CB5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139CBB:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139CE3:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139D14; /* je: equal / zero */

loc_00139CFD:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139D03:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139D03; /* jne: not equal / not zero */

loc_00139D14:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139D27:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x60;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139D7A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139D87:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139D95; /* jne: not equal / not zero */

loc_00139D8B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139D93:
    goto loc_00139D9B;

loc_00139D95:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139D9B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD534;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139DC3:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139DF4; /* je: equal / zero */

loc_00139DDD:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139DE3:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139DE3; /* jne: not equal / not zero */

loc_00139DF4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139E07:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD534;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x88;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139E5D:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139E6A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139E78; /* jne: not equal / not zero */

loc_00139E6E:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139E76:
    goto loc_00139E7E;

loc_00139E78:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139E7E:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD520;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139EA6:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139ED7; /* je: equal / zero */

loc_00139EC0:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_00139EC6:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139EC6; /* jne: not equal / not zero */

loc_00139ED7:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139EEA:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD520;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xB0;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00139F40:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00139F4D:
    if (CMP_NE(LO8(eax), 1)) goto loc_00139F5B; /* jne: not equal / not zero */

loc_00139F51:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00139F59:
    goto loc_00139F61;

loc_00139F5B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_00139F61:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0A4);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD50C;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_00139F89:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00139FC1; /* je: equal / zero */

loc_00139FA3:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_00139FB0:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_00139FB0; /* jne: not equal / not zero */

loc_00139FC1:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00139FD4:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD50C;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0xD8;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013A02A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013A037:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013A045; /* jne: not equal / not zero */

loc_0013A03B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0013A043:
    goto loc_0013A04B;

loc_0013A045:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013A04B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0B0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD568;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013A073:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0013A0A4; /* je: equal / zero */

loc_0013A08D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_0013A093:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013A093; /* jne: not equal / not zero */

loc_0013A0A4:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013A0B7:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD568;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x1C;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013A10A:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013A117:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013A125; /* jne: not equal / not zero */

loc_0013A11B:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0013A123:
    goto loc_0013A12B;

loc_0013A125:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013A12B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0B0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD554;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013A153:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0013A184; /* je: equal / zero */

loc_0013A16D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_0013A173:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013A173; /* jne: not equal / not zero */

loc_0013A184:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013A197:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD554;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x44;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013A1EA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013A1F7:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013A205; /* jne: not equal / not zero */

loc_0013A1FB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0013A203:
    goto loc_0013A20B;

loc_0013A205:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013A20B:
    eax = MEM32(0x3EC094);
    ecx = MEM32(0x3EC0B0);
    ebp = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = 0x3AD544;
    MEM32(esp + 0x1C) = ecx;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_0013A233:
    esi = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = esi;
    eax = eax << 5;
    SET_LO8(edx, MEM8(eax + ecx + 0x1E));
    esp = esp + 8;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0013A264; /* je: equal / zero */

loc_0013A24D:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);

loc_0013A253:
    esi++;
    /* cmp esi, ecx - flags set for next jcc */
    if (CMP_GE(esi, ecx)) esi = ebx; /* cmovge */
    edx = esi;
    edx = edx << 5;
    if (CMP_NE(MEM8(edx + eax + 0x1E), LO8(ebx))) goto loc_0013A253; /* jne: not equal / not zero */

loc_0013A264:
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013A277:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = 0x3AD544;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx++;
    MEM32(ebp + 8) = ecx;
    ecx = edi + 0x6C;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0013A2CA:
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013A2D7:
    if (CMP_NE(LO8(eax), 1)) goto loc_0013A2E5; /* jne: not equal / not zero */

loc_0013A2DB:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0013A2E3:
    goto loc_0013A2EB;

loc_0013A2E5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;

loc_0013A2EB:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x94;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD534;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A317:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xBC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD520;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A343:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xE4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD50C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A36F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD568;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A398:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD554;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A3C1:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x64;
    edx = edx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = MEM32(0x3EC0A8);
    edx = 0x3AD544;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A3EA:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x8C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD534;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A416:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xB4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD520;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A442:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xDC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD50C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A46E:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD568;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A497:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD554;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A4C0:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x68;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD544;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A4E9:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x90;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD534;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A515:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xB8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD520;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A541:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xE0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD50C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A56D:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD568;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A596:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x48;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD554;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A5BF:
    eax = MEM32(0x3EC094);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = MEM32(0x4A1E94);
    ecx = edi + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD544;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A5E8:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x98;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD534;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A614:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD520;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A640:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xE8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD50C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A66C:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD568;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A695:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD554;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A6BE:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x74;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD544;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A6E7:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x9C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD534;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A713:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xC4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD520;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A73F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xEC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD50C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A76B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xF0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A797:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x118;
    edx = edx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A7C3:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x140;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A7EF:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x168;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A81B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x190;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A847:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1B8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC098);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A873:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xF4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC09C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A89F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x11C;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    ecx = MEM32(0x3EC09C);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A8CB:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x144;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC09C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A8F7:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x16C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC09C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A923:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x194;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC09C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A94F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1BC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC09C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A97B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xF8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A9A7:
    eax = MEM32(0x3EC094);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x120;
    PUSH32(esp, ecx);
    edx = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A9D3:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x148;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013A9FF:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x170;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AA2B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x198;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AA57:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1C0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AA83:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0xFC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AAAF:
    eax = MEM32(0x3EC094);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = edi + 0x124;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AADB:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x14C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AB07:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x174;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AB33:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x19C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AB5F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1C4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AB8B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x100;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ABB7:
    PUSH32(esp, ebx);
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x128;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ABE3:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x150;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AC0F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x178;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AC3B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1A0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AC67:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1C8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AC93:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x10C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ACBF:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x134;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ACEB:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x15C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AD17:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x184;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AD43:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1AC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AD6F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1D4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AD9B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x104;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    ecx = MEM32(0x3EC0A8);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ADC7:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x12C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013ADF3:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x154;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AE1F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x17C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AE4B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1A4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AE77:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1CC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AEA3:
    eax = MEM32(0x3EC094);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x108;
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AECF:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x130;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AEFB:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x158;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AF27:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x180;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AF53:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1A8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AF7F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1D0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AFAB:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = edi + 0x110;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013AFD7:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x138;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B003:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x160;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B02F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x188;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B05B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1B0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B087:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1D8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B0B3:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD500;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B0DF:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x13C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B10B:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x164;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4EC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B137:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x18C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B163:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1B4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC0B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD4D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B18F:
    eax = MEM32(0x3EC094);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x1DC;
    edx = edx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = MEM32(0x3EC0B8);
    edx = 0x3AD4CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013B1BB:
    SET_LO8(eax, 6);
    MEM8(edi + 0x1F3) = LO8(eax);
    MEM8(edi + 0x1FB) = LO8(eax);
    SET_LO8(eax, 9);
    MEM8(edi + 0x1EE) = LO8(eax);
    MEM8(edi + 0x1EF) = LO8(eax);
    MEM8(edi + 0x1F1) = LO8(eax);
    MEM8(edi + 0x1FC) = LO8(eax);
    /* cmp MEM32(0x3EC0DC), 0xFFFFFFFFu - flags set for next jcc */
    MEM8(edi + 0x1E8) = LO8(ebx);
    MEM8(edi + 0x1E9) = 1;
    MEM8(edi + 0x1EB) = 1;
    MEM8(edi + 0x1F4) = 1;
    MEM8(edi + 0x1EC) = 4;
    MEM8(edi + 0x1ED) = 4;
    MEM8(edi + 0x1EA) = 2;
    MEM8(edi + 0x1F5) = 2;
    MEM8(edi + 0x1F6) = 4;
    MEM8(edi + 0x1F7) = 4;
    MEM8(edi + 0x1F8) = 4;
    MEM8(edi + 0x20D) = 4;
    MEM8(edi + 0x1F0) = 5;
    MEM8(edi + 0x1F9) = 5;
    MEM8(edi + 0x1F2) = 8;
    POP32(esp, esi);
    if (CMP_NE(MEM32(0x3EC0DC), 0xFFFFFFFFu)) goto loc_0013B25B; /* jne: not equal / not zero */

loc_0013B255:
    MEM32(0x3EC0DC) = ebx;

loc_0013B25B:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}
