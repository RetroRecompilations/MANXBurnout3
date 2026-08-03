#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128860
 * Original: 0x00128860 - 0x001289A5 (325 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00128860:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00128902; /* je: equal / zero */

loc_0012887C:
    eax--;
    if ((eax == 0)) goto loc_001288A5; /* je: equal / zero */

loc_0012887F:
    esi = MEM32(ecx * 4 + 0x3EBFAC);
    eax = MEM32(edi + 0x14);
    esi = esi + 0x1C;
    esi = esi << 6;
    esi = esi + eax;
    edi = ebx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001288A5:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    esi = MEM32(edi + 0x14);
    eax = edi + 0x60;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0xC);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    eax = esi + 0x7C0;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_001288F5:
    eax = MEM32(edi + 0x18);
    xmm2.f[0] = MEMF(eax + 0x160); /* movss */
    goto loc_0012895D;

loc_00128902:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    esi = MEM32(edi + 0x14);
    ecx = edi + 0x50;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ecx + 0xC);
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    MEM32(esp + 0x4C) = eax;
    eax = esi + 0x7C0;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00128952:
    ecx = MEM32(edi + 0x18);
    xmm2.f[0] = MEMF(ecx + 0x160); /* movss */

loc_0012895D:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = MEMF(esi + 0x7F0); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    edi = ebx;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    esi = esp + 0x10;
    ecx = 0x10;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
