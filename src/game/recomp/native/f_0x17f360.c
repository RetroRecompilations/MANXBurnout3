#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017F360
 * Original: 0x0017F360 - 0x0017F66C (780 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0017F360:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(esi + 0x6457C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x60E200);
    PUSH32(esp, 0); sub_0018AF90(); /* call 0x0018AF90 */

loc_0017F37A:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(esi + 0x64578) = xmm0.f[0]; /* movss */
    eax = esi + 0x138;
    edx = 3;

loc_0017F395:
    ecx = MEM32(esi + 0x64578);
    MEM32(eax + 0x14) = ecx;
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + -8), 16); /* movaps */
    ecx = MEM32(eax + -108);
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    MEM32(eax + 0x114) = ecx;
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xF8), 16); /* movaps */
    ecx = MEM32(eax + 0x94);
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x100) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x1F8), 16); /* movaps */
    MEM32(eax + 0x214) = ecx;
    ecx = MEM32(eax + 0x194);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x1F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x1FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x200) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x2F8), 16); /* movaps */
    MEM32(eax + 0x314) = ecx;
    ecx = MEM32(eax + 0x294);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x2F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x2FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x300) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x3F8), 16); /* movaps */
    MEM32(eax + 0x414) = ecx;
    ecx = MEM32(eax + 0x394);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x3F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x3FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x400) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x4F8), 16); /* movaps */
    MEM32(eax + 0x514) = ecx;
    ecx = MEM32(eax + 0x494);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x4F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x4FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x500) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x5F8), 16); /* movaps */
    MEM32(eax + 0x614) = ecx;
    ecx = MEM32(eax + 0x594);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x5F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x5FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x600) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x6F8), 16); /* movaps */
    MEM32(eax + 0x714) = ecx;
    ecx = MEM32(eax + 0x694);
    xmm1.f[0] = MEMF(esi + 0x64574); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    memcpy((void *)XBOX_PTR(esp), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64570); /* mulss */
    MEMF(eax + 0x6F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x6FC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x700) = xmm1.f[0]; /* movss */
    eax = eax + 0x800;
    edx--;
    if ((edx != 0)) goto loc_0017F395; /* jne: not equal / not zero */

loc_0017F636:
    eax = MEM32(esi + 0x64558);
    ecx = MEM32(esi + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi + 0x64558) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x6455C) = eax;
    eax = MEM32(esi + 0x64558);
    MEM32(esi + 0x64550) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
