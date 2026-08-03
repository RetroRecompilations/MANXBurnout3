#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B1D40
 * Original: 0x001B1D40 - 0x001B1F7E (574 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001B1D40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ZX8(MEM8(eax + 0xC));
    eax = ZX8(MEM8(eax + 0xD));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + esi;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_AE(esi, eax)) goto loc_001B1F6D; /* jae: above or equal (unsigned >=) */

loc_001B1D7B:
    goto loc_001B1D80;

    /* nop */

loc_001B1D80:
    eax = ZX8(MEM8(esi + 2));
    eax = eax + eax * 2;
    xmm0.f[0] = MEMF(ebx + eax * 4); /* movss */
    eax = ebx + eax * 4;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(esi + 1));
    ecx = eax + eax * 2;
    eax = ebx + ecx * 4;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(esi));
    edx = eax + eax * 2;
    eax = ebx + edx * 4;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    ecx = esp + 0x28;
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B1050(); /* call 0x001B1050 */

loc_001B1E21:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1E70; /* je: equal / zero */

loc_001B1E28:
    edx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    MEM32(esp + 0xF8) = esi;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0xFC) = 0;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 8), _icall_esp); /* indirect call */
    }

loc_001B1E5D:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1F78; /* je: equal / zero */

loc_001B1E68:
    MEM32(esp + 0x14) = 1;

loc_001B1E70:
    SET_LO8(eax, MEM8(esi + 3));
    if (CMP_AE(LO8(eax), 0xFF)) goto loc_001B1F5B; /* jae: above or equal (unsigned >=) */

loc_001B1E7B:
    eax = ZX8(LO8(eax));
    ecx = eax + eax * 2;
    xmm0.f[0] = MEMF(ebx + ecx * 4); /* movss */
    eax = ebx + ecx * 4;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(esi + 1));
    edx = eax + eax * 2;
    eax = ebx + edx * 4;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(esi + 2));
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = esp + 0x70;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    PUSH32(esp, edx);
    edx = esp + 0x38;
    ecx = esp + 0x58;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B1050(); /* call 0x001B1050 */

loc_001B1F10:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1F5B; /* je: equal / zero */

loc_001B1F17:
    eax = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    MEM32(esp + 0xF8) = esi;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0xFC) = 1;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 8), _icall_esp); /* indirect call */
    }

loc_001B1F4C:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1F78; /* je: equal / zero */

loc_001B1F53:
    MEM32(esp + 0x14) = 1;

loc_001B1F5B:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    esi = esi + ecx;
    if (CMP_B(esi, eax)) goto loc_001B1D80; /* jb: below (unsigned <) */

loc_001B1F6D:
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B1F78:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);

}
