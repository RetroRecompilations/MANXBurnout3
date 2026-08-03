#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00151B70
 * Original: 0x00151B70 - 0x00151D24 (436 bytes, 112 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00151B70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(0x73A1C0);
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 8) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00151CD3; /* jle: less or equal (signed <=) */

loc_00151B8E:
    ebx = 0x73A218;

loc_00151B93:
    xmm0.f[0] = MEMF(ebx + -8); /* movss */
    eax = MEM32(ebx + 0x23F8);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00151CB7; /* je: equal / zero */

loc_00151BC9:
    edx = MEM32(eax + 0xCC4);
    if (TEST_Z(MEM8(edx + 0x1016), 0xF)) goto loc_00151BE2; /* je: equal / zero */

loc_00151BD8:
    SET_LO8(edx, MEM8(ebx + 0x18B2));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00151BF0; /* jne: not equal / not zero */

loc_00151BE2:
    edx = MEM32(0x4A1DD0);
    if (TEST_Z(edx, edx)) goto loc_00151CB7; /* je: equal / zero */

loc_00151BF0:
    edx = MEM32(esi + 0x860);
    /* test edx, edx - flags set for next jcc */
    edi = esi + 0x860;
    MEM32(esp + 0xC) = 1;
    if (TEST_NZ(edx, edx)) goto loc_00151C54; /* jne: not equal / not zero */

loc_00151C08:
    eax = MEM32(esi + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CB38;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00151C1B:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC40C);
    PUSH32(esp, edi);
    edx = esi + 0x3E0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esi + 0x840) = eax;
    ecx = eax;
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001509F0(); /* call 0x001509F0 */

loc_00151C41:
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(esi + 0x8D2) = LO8(edx);
    MEM8(esi + 0x8D6) = 1;
    goto loc_00151CB7;

loc_00151C54:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8D2);
    if (CMP_NE(edx, ecx)) goto loc_00151CB7; /* jne: not equal / not zero */

loc_00151C5F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */
    eax = MEM32(0x3EC40C);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x3EC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x3F0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(esi + 0x3F4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x60EA20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0x3E0;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00150AF0(); /* call 0x00150AF0 */

loc_00151CB7:
    ecx = MEM32(esp + 8);
    eax = MEM32(0x73A1C0);
    ecx++;
    ebx = ebx + 0x27E0;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00151B93; /* jl: less (signed <) */

loc_00151CD3:
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00151D1E; /* jne: not equal / not zero */

loc_00151CDB:
    eax = MEM32(esi + 0x860);
    if (TEST_Z(eax, eax)) goto loc_00151D1E; /* je: equal / zero */

loc_00151CE5:
    edi = eax;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00151CF2:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00151CFD:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = 0;
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0x860) = 0;

loc_00151D1E:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
