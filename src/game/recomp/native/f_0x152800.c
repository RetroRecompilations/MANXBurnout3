#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152800
 * Original: 0x00152800 - 0x00152AF2 (754 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152800(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00152800:
    esp = esp - 0x38;
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = MEMF(0x3B1728); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x4C) = 0x100;
    MEM32(esi + 0x50) = 0xBB80;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm2.f[0] = MEMF(0x3B1854); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM32(esi + 0x44) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM32(esi + 0x3C) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM32(esi + 0x40) = eax;
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM32(esi + 0x48) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = esi + 4;
    edx = 0xD;
    goto loc_00152930;

    /* nop */

loc_00152930:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    MEM32(ecx) = eax;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00152930; /* jne: not equal / not zero */

loc_00152960:
    edx = MEM32(esi + 0x54);
    eax = MEM32(esp + 0x40);
    ecx = esp + 4;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x60);
    eax = eax + 0x60;
    PUSH32(esp, ecx);
    eax = eax << 5;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x24) = 0x14;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_0015299B:
    edx = MEM32(esi + 0x60);
    ecx = esp + 0x20;
    eax = edi + 0x60;
    PUSH32(esp, ecx);
    eax = eax << 5;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = 0x18;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_001529BB:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    esp = esp + 0x10;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x40) ? xmm0.f[0] : MEMF(esp + 0x40)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1854); /* mulss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x40); /* cvttss2si */
    ecx = MEM32(esi + 0x60);
    MEM32(esp + 4) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x3C;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152A18:
    esp = esp + 8;
    PUSH32(esp, 0); sub_00152CC0(); /* call 0x00152CC0 */

loc_00152A20:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = 0x1420007;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x48) = 0;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0); sub_0020B450(); /* call 0x0020B450 */

loc_00152A5B:
    PUSH32(esp, 0x42480000);
    PUSH32(esp, eax);
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, 0); sub_0020BC60(); /* call 0x0020BC60 */

loc_00152A69:
    eax = MEM32(esi + 0x64);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC40(); /* call 0x0020BC40 */

loc_00152A77:
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_00152A85:
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001F6370(); /* call 0x001F6370 */

loc_00152A8E:
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x68) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_00152A9B:
    edx = MEM32(esi + 0x68);
    esp = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x70) = eax;
    PUSH32(esp, 0); sub_001F5AA0(); /* call 0x001F5AA0 */

loc_00152AAA:
    MEM32(esi + 0x6C) = eax;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020C2D0(); /* call 0x0020C2D0 */

loc_00152AB7:
    ecx = MEM32(esi + 0x70);
    edx = MEM32(esi + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_00152AC9:
    eax = MEM32(0x3EC430);
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = 0;
    esp = esp + 0x18;
    MEM32(0x47A07C) = 0x2B9D6F8;
    MEM32(0x47A078) = 0xFD462907u;
    eax = MEM32(esi + 0x64);

}
