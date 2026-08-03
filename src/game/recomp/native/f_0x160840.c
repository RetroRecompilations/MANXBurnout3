#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00160840
 * Original: 0x00160840 - 0x00160AC9 (649 bytes, 202 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160840:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00160790(); /* call 0x00160790 */

loc_0016084E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    ebp = esi + 0x30;
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3AF4CC);
    ebx = esi + 0xA8;
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF4BC);
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160892:
    MEM8(eax + 0x1E) = 5;
    MEM32(eax) = ebp;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001608A4:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001608AC:
    if (CMP_NE(LO8(eax), 1)) goto loc_001608BD; /* jne: not equal / not zero */

loc_001608B0:
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001608BB:
    goto loc_001608C8;

loc_001608BD:
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001608C8:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3AF4A8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF4BC);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160902:
    ebp = eax;
    MEM8(ebp + 0x1E) = 5;
    MEM32(ebp) = esi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160913:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016091B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160928; /* jne: not equal / not zero */

loc_0016091F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160926:
    goto loc_0016092F;

loc_00160928:
    MEM8(ebp + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016092F:
    xmm1.f[0] = MEMF(0x3A69B8); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(0x4A1E94);
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1B80); /* movss */
    ebp = esi + 0x60;
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39B2B0); /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    eax = esi + 0x70;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x387C04); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = esi + 0x80;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    PUSH32(esp, 0);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B03EC); /* movss */
    PUSH32(esp, 0x3AF498);
    esi = esi + 0x90;
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF4BC);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = esi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001609DA:
    esi = eax;
    MEM8(esi + 0x1E) = 5;
    MEM32(esi) = ebp;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001609EA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001609F2:
    if (CMP_NE(LO8(eax), 1)) goto loc_001609FF; /* jne: not equal / not zero */

loc_001609F6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001609FD:
    goto loc_00160A06;

loc_001609FF:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160A06:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF498);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF488);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160A20:
    ecx = MEM32(esp + 0x10);
    esi = eax;
    MEM32(esi) = ecx;
    MEM8(esi + 0x1E) = 5;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00160A34:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160A3C:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160A49; /* jne: not equal / not zero */

loc_00160A40:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160A47:
    goto loc_00160A50;

loc_00160A49:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160A50:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3AF498);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AF478);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00160A6A:
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

loc_00160A7E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00160A86:
    if (CMP_NE(LO8(eax), 1)) goto loc_00160A93; /* jne: not equal / not zero */

loc_00160A8A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00160A91:
    goto loc_00160A9A;

loc_00160A93:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00160A9A:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x3AF498;
    edx = 0x3AF46C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00160AC1:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
