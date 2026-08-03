#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014D0F0
 * Original: 0x0014D0F0 - 0x0014D2B3 (451 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0014D0F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    eax = MEM32(esi + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x13F4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x1920);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_0014D17B; /* jne: not equal / not zero */

loc_0014D131:
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    eax = eax << 6;
    ecx = MEM32(eax + ebx + 0x48);
    /* cmp ecx, 0x19 - flags set for next jcc */
    eax = eax + ebx + 0x10;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEM32(eax + 0x34) = 0;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    if (CMP_GE(ecx, 0x19)) goto loc_0014D177; /* jge: greater or equal (signed >=) */

loc_0014D171:
    ecx = ecx + 2;
    MEM32(eax + 0x38) = ecx;

loc_0014D177:
    MEM8(eax + 0x3C) = 1;

loc_0014D17B:
    SET_LO8(eax, MEM8(esi + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D268; /* je: equal / zero */

loc_0014D189:
    ecx = MEM32(esi + 0x13F4);
    eax = MEM32(ecx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_0014D210; /* jne: not equal / not zero */

loc_0014D199:
    SET_LO8(eax, MEM8(ebx + 0x8DB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D210; /* je: equal / zero */

loc_0014D1A3:
    SET_LO8(eax, MEM8(ebx + 0x8E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D210; /* jne: not equal / not zero */

loc_0014D1AD:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014D1B7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D207; /* je: equal / zero */

loc_0014D1BB:
    SET_LO8(eax, MEM8(esi + 0x1540));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D1EC; /* je: equal / zero */

loc_0014D1C5:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001512C0(); /* call 0x001512C0 */

loc_0014D1CB:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x8E8); /* subss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014D2AC; /* ja: above (unsigned >) */

loc_0014D1EC:
    SET_LO8(eax, MEM8(esi + 0x212));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D210; /* je: equal / zero */

loc_0014D1F6:
    xmm0.f[0] = MEMF(ebx + 0x8A8); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16B4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16B4))) goto loc_0014D210; /* jbe: below or equal (unsigned <=) */

loc_0014D207:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00150D40(); /* call 0x00150D40 */

loc_0014D210:
    edx = MEM32(esi + 0x13F4);
    eax = MEM32(edx + 0x1920);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x1F0); /* divss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0014D248; /* jne: not equal / not zero */

loc_0014D230:
    eax = esp + 0x18;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0014F130(); /* call 0x0014F130 */

loc_0014D241:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0014D248:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    ecx = esp + 0x18;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_0014F130(); /* call 0x0014F130 */

loc_0014D261:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0014D268:
    edx = MEM32(esi + 0x13F4);
    eax = MEM32(edx + 0x1920);
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x1F0); /* divss */
    /* test eax, eax - flags set for next jcc */
    ecx = ebx;
    eax = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0014D29F; /* jne: not equal / not zero */

loc_0014D28B:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    PUSH32(esp, 0); sub_0014EEA0(); /* call 0x0014EEA0 */

loc_0014D298:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0014D29F:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    PUSH32(esp, 0); sub_0014EEA0(); /* call 0x0014EEA0 */

loc_0014D2AC:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
