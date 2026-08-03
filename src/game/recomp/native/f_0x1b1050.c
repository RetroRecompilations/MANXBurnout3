#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B1050
 * Original: 0x001B1050 - 0x001B1367 (791 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001B1050:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x2C), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    PUSH32(esp, esi);
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    esi = esp + 0x64;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001B0FE0(); /* call 0x001B0FE0 */

loc_001B108B:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm2.f[0] = MEMF(edi + 0xC); /* movss */
    eax = MEM32(ebp + 0xC);
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x34), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    esp = esp + 4;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    if ((xmm1.f[0] > xmm2.f[0])) goto loc_001B120E; /* ja: above (unsigned >) */

loc_001B10E5:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm2.f[0] >= MEMF(esp + 0x18))) goto loc_001B1360; /* jae: above or equal (unsigned >=) */

loc_001B1114:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm2.f[0] >= MEMF(esp + 0x14))) goto loc_001B1360; /* jae: above or equal (unsigned >=) */

loc_001B1145:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 8;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 8) - sets EFLAGS */
    if ((xmm2.f[0] >= MEMF(esp + 8))) goto loc_001B1360; /* jae: above or equal (unsigned >=) */

loc_001B1176:
    eax = esp + 0x20;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001B1183:
    eax = esp + 0x40;
    ecx = esp + 0x20;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001B1196:
    eax = esp + 0x30;
    ecx = esp + 0x40;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001B11A9:
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    if ((xmm3.f[0] < xmm2.f[0])) goto loc_001B11F3; /* jb: below (unsigned <) */

loc_001B11C0:
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm1.f[0])) goto loc_001B11DC; /* jb: below (unsigned <) */

loc_001B11C5:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001B122D; /* jbe: below or equal (unsigned <=) */

loc_001B11CA:
    xmm4.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm4.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm1.f[0])) goto loc_001B122D; /* jbe: below or equal (unsigned <=) */

loc_001B11D5:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B11DC:
    xmm4.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm4.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm2.f[0])) goto loc_001B122D; /* jbe: below or equal (unsigned <=) */

loc_001B11E7:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001B122D; /* jbe: below or equal (unsigned <=) */

loc_001B11EC:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B11F3:
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm3.f[0])) goto loc_001B1215; /* jb: below (unsigned <) */

loc_001B11F8:
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_001B1227; /* jbe: below or equal (unsigned <=) */

loc_001B1203:
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_001B1227; /* jbe: below or equal (unsigned <=) */

loc_001B120E:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B1215:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001B1227; /* jbe: below or equal (unsigned <=) */

loc_001B121A:
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 8) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(esp + 8))) goto loc_001B120E; /* ja: above (unsigned >) */

loc_001B1227:
    xmm1.f[0] = MEMF(esp + 8); /* movss */

loc_001B122D:
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(esp + 0x1C); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x60) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x60))) goto loc_001B1328; /* jbe: below or equal (unsigned <=) */

loc_001B1319:
    xmm1.f[0] = MEMF(esp + 0x50); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001B120E; /* jae: above or equal (unsigned >=) */

loc_001B1328:
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x64) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x64))) goto loc_001B1344; /* jbe: below or equal (unsigned <=) */

loc_001B1335:
    xmm1.f[0] = MEMF(esp + 0x54); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001B120E; /* jae: above or equal (unsigned >=) */

loc_001B1344:
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x68) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x68))) goto loc_001B1360; /* jbe: below or equal (unsigned <=) */

loc_001B1351:
    xmm1.f[0] = MEMF(esp + 0x58); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001B120E; /* jae: above or equal (unsigned >=) */

loc_001B1360:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
