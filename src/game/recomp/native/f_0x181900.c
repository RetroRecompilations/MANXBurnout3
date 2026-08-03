#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00181900
 * Original: 0x00181900 - 0x00181A73 (371 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00181900:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xCC4);
    SET_LO8(ebx, MEM8(eax + 0x1016));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001819A1; /* je: equal / zero */

loc_00181921:
    if (TEST_Z(LO8(ebx), 0xF)) goto loc_00181976; /* je: equal / zero */

loc_00181926:
    ecx = MEM32(esi + 0xCC0);
    xmm1.f[0] = MEMF(0x3B1790); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x54); /* subss */
    /* comiss xmm1.f[0], MEMF(0x3A7ED8) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3A7ED8))) goto loc_00181976; /* jbe: below or equal (unsigned <=) */

loc_00181942:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1DB0); /* mulss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    edx = MEM32(ebp + 8);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_00181610(); /* call 0x00181610 */

loc_00181976:
    if (TEST_Z(LO8(ebx), 0xF0)) goto loc_001819A1; /* je: equal / zero */

loc_0018197B:
    eax = MEM32(esi + 0xCC0);
    xmm0.f[0] = MEMF(0x3B16B0); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x54) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x54))) goto loc_001819A1; /* jbe: below or equal (unsigned <=) */

loc_0018198F:
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00181780(); /* call 0x00181780 */

loc_0018199F:
    goto loc_001819A4;

loc_001819A1:
    ebx = MEM32(ebp + 8);

loc_001819A4:
    ecx = MEM32(esi + 0xCC4);
    SET_LO8(eax, MEM8(ecx + 0x1015));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00181A6B; /* je: equal / zero */

loc_001819BC:
    if (TEST_Z(LO8(eax), 6)) goto loc_001819D3; /* je: equal / zero */

loc_001819C0:
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00184BE0(); /* call 0x00184BE0 */

loc_001819CF:
    SET_LO8(eax, MEM8(esp + 0xF));

loc_001819D3:
    if (TEST_Z(LO8(eax), 8)) goto loc_00181A2F; /* je: equal / zero */

loc_001819D7:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    edx = MEM32(esi + 0x204);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x14), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    PUSH32(esp, 0x60E200);
    ecx = esp + 0x2C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0018A170(); /* call 0x0018A170 */

loc_00181A1E:
    eax = MEM32(esi + 0xCC4);
    MEM8(eax + 0x1015) = MEM8(eax + 0x1015) & 0xF7;
    SET_LO8(eax, MEM8(esp + 0xF));

loc_00181A2F:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00181A40; /* je: equal / zero */

loc_00181A33:
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00186D50(); /* call 0x00186D50 */

loc_00181A3C:
    SET_LO8(eax, MEM8(esp + 0xF));

loc_00181A40:
    if (TEST_Z(LO8(eax), 1)) goto loc_00181A6B; /* je: equal / zero */

loc_00181A44:
    eax = MEM32(esi + 0xCC4);
    SET_LO8(ecx, MEM8(eax + 0x1015));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    PUSH32(esp, ebx);
    MEM8(eax + 0x1015) = LO8(ecx);
    PUSH32(esp, 0); sub_00181130(); /* call 0x00181130 */

loc_00181A61:
    ecx = 0x40F270;
    PUSH32(esp, 0); sub_0014D580(); /* call 0x0014D580 */

loc_00181A6B:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
