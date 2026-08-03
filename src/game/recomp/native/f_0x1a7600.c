#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A7600
 * Original: 0x001A7600 - 0x001A7907 (775 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001A7600:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(esi + 0x114);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm1.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0x49));
    edi = edi + edi * 4;
    edi = edi << 4;
    edi = edi + 0x642C10;
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x120); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x80), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1870); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x90), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    ebx = esi + 0x90;
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x60), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x150); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = esp + 0xC;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x14C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    ecx = esi;
    eax = esi;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019DBF0(); /* call 0x0019DBF0 */

loc_001A7798:
    ecx = esi;
    eax = esi + 0x30;
    PUSH32(esp, 0); sub_0019DBF0(); /* call 0x0019DBF0 */

loc_001A77A2:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(ebx); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A77DB; /* jp: parity */

loc_001A77BF:
    xmm1.f[0] = MEMF(ebx + 4); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A77DB; /* jp: parity */

loc_001A77CD:
    xmm1.f[0] = MEMF(ebx + 8); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001A77EF; /* jnp: not parity */

loc_001A77DB:
    eax = ebx;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A77E2:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A77F6; /* jp: parity */

loc_001A77EF:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */

loc_001A77F6:
    xmm0.f[0] = MEMF(esi + 0x150); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    edi = esi + 0x80;
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A783E:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A785B; /* jp: parity */

loc_001A784B:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */

loc_001A785B:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esi + 0x70;
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A788B:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A78A5; /* jp: parity */

loc_001A7898:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */

loc_001A78A5:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x70), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A78D5:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A78F2; /* jp: parity */

loc_001A78E2:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */

loc_001A78F2:
    eax = MEM32(esi + 0x110);
    if (TEST_Z(eax, eax)) goto loc_001A7901; /* je: equal / zero */

loc_001A78FC:
    PUSH32(esp, 0); sub_001A8220(); /* call 0x001A8220 */

loc_001A7901:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
