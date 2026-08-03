#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017A0F0
 * Original: 0x0017A0F0 - 0x0017A311 (545 bytes, 179 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A0F0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0017A0F0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B03B4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0394);
    ebx = 0x3A2E48;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0017A112:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F72DC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0017A138:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A2E48);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0017A144:
    if (CMP_NE(LO8(eax), 1)) goto loc_0017A151; /* jne: not equal / not zero */

loc_0017A148:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0017A14F:
    goto loc_0017A157;

loc_0017A151:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0017A157:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B03B4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B036C);
    ebx = 0x3A2E48;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0017A175:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F72E0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0017A19B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A2E48);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0017A1A7:
    if (CMP_NE(LO8(eax), 1)) goto loc_0017A1B4; /* jne: not equal / not zero */

loc_0017A1AB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0017A1B2:
    goto loc_0017A1BA;

loc_0017A1B4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0017A1BA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B03B4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B034C);
    ebx = 0x3A2E48;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0017A1D8:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1B5C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F72E4;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0017A20E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0017A216:
    if (CMP_NE(LO8(eax), 1)) goto loc_0017A223; /* jne: not equal / not zero */

loc_0017A21A:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0017A221:
    goto loc_0017A22A;

loc_0017A223:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0017A22A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B03B4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0330);
    ebx = 0x3A2E48;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0017A249:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F72F4;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(eax);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0017A27E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0017A286:
    if (CMP_NE(LO8(eax), 1)) goto loc_0017A293; /* jne: not equal / not zero */

loc_0017A28A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0017A291:
    goto loc_0017A29A;

loc_0017A293:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0017A29A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B03B4);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B030C);
    ebx = 0x3A2E48;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0017A2B9:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1B5C); /* movss */
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7304;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1D) = LO8(edx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0017A2EF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0017A2F7:
    if (CMP_NE(LO8(eax), 1)) goto loc_0017A306; /* jne: not equal / not zero */

loc_0017A2FB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0017A302:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0017A306:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
