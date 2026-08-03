#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DFD0
 * Original: 0x0019DFD0 - 0x0019E152 (386 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0019DFD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x20));
    if (CMP_EQ(LO16(edi), 0xFFFF)) goto loc_0019E14A; /* je: equal / zero */

loc_0019DFEA:
    SET_LO16(ebx, MEM16(esi + 0x22));
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_0019E14A; /* je: equal / zero */

loc_0019DFF9:
    SET_LO16(edx, MEM16(esi + 0x24));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0019E14A; /* je: equal / zero */

loc_0019E008:
    SET_LO16(ecx, MEM16(esi + 0x26));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0019E14A; /* je: equal / zero */

loc_0019E017:
    eax = MEM32(esi + 0x28);
    xmm2.f[0] = MEMF(0x3B1688); /* movss */
    ecx = ZX16(LO16(ecx));
    edx = ZX16(LO16(edx));
    ecx = ecx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    edx = edx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + eax), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    ecx = ZX16(LO16(ebx));
    edx = ZX16(LO16(edi));
    ecx = ecx << 4;
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    edx = edx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + eax), 16); /* movaps */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    eax = esp + 8;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* divps: xmm1.f[0] /= xmm2.f[0] (packed 4xfloat) */
    ecx = esp + 0xC;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* divps: xmm0.f[0] /= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019E090:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x20) (packed 4xfloat) */
    eax = esp + 0x30;
    ecx = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0019E0AF:
    edx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019E0FA:
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0019E103:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0019E14A:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
