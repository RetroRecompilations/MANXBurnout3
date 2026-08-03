#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001674B0
 * Original: 0x001674B0 - 0x00167934 (1156 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001674B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001674B0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC28) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC38) = 0;
    MEM8(0x47A104) = 0;
    MEM8(0x47A105) = 0;
    eax = MEM32(esi + 0xC30);
    edx = MEM32(esi + 0xAB0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x73BB8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0xC34) = ecx;
    PUSH32(esp, ebp);
    ecx = esi + 0xAB0;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00167505:
    eax = MEM32(esi + 0xABC);
    ecx = esi + 0xABC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00167513:
    edx = MEM32(esi + 0x2F0);
    ecx = esi + 0x2F0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00167521:
    eax = MEM32(esi + 0x540);
    ecx = esi + 0x540;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016752F:
    edx = MEM32(esi + 0x730);
    ecx = esi + 0x730;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016753D:
    eax = MEM32(esi + 0xB90);
    ecx = esi + 0xB90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016754B:
    edx = MEM32(esi + 0x520);
    ecx = esi + 0x520;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00167559:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x924) = 0;
    MEM32(esi + 0xA80) = esi;
    MEMF(esi + 0xA70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA78) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x504) = 0;
    MEM32(esi + 0x508) = esi;
    eax = MEM32(esi + 0xC30);
    MEM32(esi + 0xB74) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1050);
    eax = eax + 0x737710;
    MEM32(esi + 0xC00) = eax;
    eax = MEM32(0x47A134);
    MEM8(esi + 0xBD4) = 0;
    MEM8(esi + 0xC19) = 0;
    eax = eax + 0x2F70;
    MEM32(esi + 0xBD8) = eax;
    eax = MEM32(esi + 0xC34);
    edi = esi + 0x370;
    MEM8(edi + 4) = 0;
    MEM32(edi + 0x20) = eax;
    ecx = MEM32(eax * 4 + 0x73A1A8);
    edx = MEM32(ecx + 0x1970);
    MEM32(edi + 0x10) = edx;
    eax = MEM32(ecx + 0x1974);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0); sub_00160690(); /* call 0x00160690 */

loc_001675FE:
    MEM8(edi + 0x25) = 0;
    MEM8(edi + 0x26) = 0;
    eax = eax + 0x60;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 0xC34);
    ebp = esi + 0x398;
    MEM32(ebp + 0x20) = eax;
    MEM8(ebp + 4) = 0;
    eax = MEM32(eax * 4 + 0x73A1A8);
    ecx = MEM32(eax + 0x1970);
    MEM32(ebp + 0x10) = ecx;
    edx = MEM32(eax + 0x1974);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00160690(); /* call 0x00160690 */

loc_00167641:
    MEM8(ebp + 0x25) = 0;
    MEM8(ebp + 0x26) = 1;
    eax = eax + 0x60;
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0xC34);
    ebx = esi + 0x3C0;
    MEM32(ebx + 0x28) = eax;
    edx = MEM32(eax * 4 + 0x73A1A8);
    eax = MEM32(edx + 0x1970);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(edx + 0x1974);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebx + 0x24) = ecx;
    MEM32(ebx + 0x2C) = 0;
    PUSH32(esp, 0); sub_00160690(); /* call 0x00160690 */

loc_00167687:
    eax = eax + 0x30;
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esi + 0xC34);
    MEM32(esi + 0x4E8) = eax;
    ecx = MEM32(eax * 4 + 0x73A1A8);
    edx = MEM32(ecx + 0x1970);
    MEM32(esi + 0x4E0) = edx;
    eax = MEM32(ecx + 0x1974);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0x4E4) = eax;
    MEM32(esi + 0x4EC) = 1;
    PUSH32(esp, 0); sub_00160690(); /* call 0x00160690 */

loc_001676CB:
    esp = esp + 0x20;
    MEM32(esi + 0x4CC) = eax;
    ecx = MEM32(esi + 0xC30);
    eax = esi + 0x70;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0015BFF0(); /* call 0x0015BFF0 */

loc_001676E4:
    ecx = MEM32(esi + 0xC30);
    eax = esi + 0xAD0;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0015BFF0(); /* call 0x0015BFF0 */

loc_001676F7:
    eax = MEM32(esi + 0xC34);
    MEM32(esi + 0x428) = eax;
    eax = MEM32(eax * 4 + 0x73A1A8);
    ecx = MEM32(eax + 0x1970);
    MEM32(esi + 0x420) = ecx;
    edx = MEM32(eax + 0x1974);
    MEM32(esi + 0x424) = edx;
    MEM32(esi + 0x42C) = 5;
    MEM32(esi + 0x40C) = 0;
    eax = MEM32(esi + 0xC34);
    MEM32(esi + 0x468) = eax;
    eax = MEM32(eax * 4 + 0x73A1A8);
    ecx = MEM32(eax + 0x1970);
    MEM32(esi + 0x460) = ecx;
    edx = MEM32(eax + 0x1974);
    MEM32(esi + 0x464) = edx;
    MEM32(esi + 0x46C) = 6;
    MEM32(esi + 0x44C) = 0;
    ecx = MEM32(esi + 0xC34);
    MEM32(esi + 0x4A8) = ecx;
    ecx = MEM32(ecx * 4 + 0x73A1A8);
    edx = MEM32(ecx + 0x1970);
    eax = esi + 0x480;
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x1974);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x2C) = 7;
    MEM32(eax + 0xC) = 0;
    ecx = esi + 0x2F0;
    MEM32(esi + 0x2A4) = ecx;
    ecx = esi + 0x500;
    MEM32(esi + 0x2DC) = ecx;
    ecx = esi + 0x520;
    MEM32(esi + 0x2E0) = ecx;
    ecx = esi + 0x4C0;
    MEM32(esi + 0x2B4) = ebx;
    MEM32(esi + 0x2B0) = ecx;
    MEM32(esi + 0x2AC) = ebp;
    MEM32(esi + 0x2A8) = edi;
    ecx = esi + 0x70;
    MEM32(esi + 0x2A0) = ecx;
    ecx = esi + 0xAD0;
    MEM32(esi + 0x2D8) = ecx;
    ecx = esi + 0x540;
    MEM32(esi + 0x2B8) = ecx;
    ecx = esi + 0x730;
    MEM32(esi + 0x2BC) = ecx;
    ecx = esi + 0x920;
    MEM32(esi + 0x2C8) = ecx;
    ecx = esi + 0xAB0;
    MEM32(esi + 0x2CC) = ecx;
    ecx = esi + 0xABC;
    MEM32(esi + 0x2D0) = ecx;
    ecx = esi + 0xB90;
    MEM32(esi + 0x2C4) = ecx;
    ecx = esi + 0xBD0;
    MEM32(esi + 0x2D4) = ecx;
    ecx = esi + 0x400;
    MEM32(esi + 0x2E4) = ecx;
    ecx = esi + 0x440;
    edi = esi + 0x250;
    edx = esi + 0xB60;
    MEM32(esi + 0x2E8) = ecx;
    MEM32(esi + 0x2EC) = eax;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0x2C0) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016788F:
    eax = MEM32(esi + 0xC30);
    if (TEST_NZ(eax, eax)) goto loc_001678A8; /* jne: not equal / not zero */

loc_00167899:
    MEM32(0x4D6268) = edi;
    MEM32(edi + 0x40) = 0x4D6200;
    goto loc_001678B5;

loc_001678A8:
    MEM32(0x4D6308) = edi;
    MEM32(edi + 0x40) = 0x4D62A0;

loc_001678B5:
    xmm0.f[0] = MEMF(0x3B1850); /* movss */
    edx = MEM32(edi);
    ecx = edi;
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001678CC:
    eax = MEM32(esi + 4);
    /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0xC46) = 1;
    MEM8(esi + 0xC44) = 1;
    if (TEST_Z(eax, eax)) goto loc_00167901; /* je: equal / zero */

loc_001678E1:
    ecx = MEM32(eax + 8);
    /* cmp ecx, 0x828A38A1u - flags set for next jcc */
    eax = MEM32(eax + 0xC);
    if (CMP_NE(ecx, 0x828A38A1u)) goto loc_00167901; /* jne: not equal / not zero */

loc_001678EF:
    if (CMP_NE(eax, 0xBA38E6DCu)) goto loc_00167901; /* jne: not equal / not zero */

loc_001678F6:
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00167901:
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0016792E; /* je: equal / zero */

loc_00167908:
    ecx = MEM32(eax + 8);
    /* cmp ecx, 0x96099FBFu - flags set for next jcc */
    eax = MEM32(eax + 0xC);
    if (CMP_NE(ecx, 0x96099FBFu)) goto loc_0016792E; /* jne: not equal / not zero */

loc_00167916:
    if (CMP_NE(eax, 0xBA38E63Au)) goto loc_0016792E; /* jne: not equal / not zero */

loc_0016791D:
    if (CMP_NE(MEM32(0x47A100), 2)) goto loc_0016792E; /* jne: not equal / not zero */

loc_00167926:
    ebx = esi + 0x50;
    PUSH32(esp, 0); sub_00166F80(); /* call 0x00166F80 */

loc_0016792E:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
