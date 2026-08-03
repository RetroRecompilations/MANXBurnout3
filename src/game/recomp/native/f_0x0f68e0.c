#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F68E0
 * Original: 0x000F68E0 - 0x000F6B35 (597 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F68E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000F68E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    edi = ecx;
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F67B0(); /* call 0x000F67B0 */

loc_000F691E:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(ebp + 0x18); /* movss */
    esp = esp + 4;
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm2.f[0])) goto loc_000F6981; /* jbe: below or equal (unsigned <=) */

loc_000F6931:
    xmm0.f[0] = MEMF(ebp + 0x24); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x1C); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    /* test MEM8(ebp + 0x20), 0x10 - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    if (TEST_Z(MEM8(ebp + 0x20), 0x10)) goto loc_000F697A; /* je: equal / zero */

loc_000F6973:
    ecx = 0xF7C20;
    goto loc_000F6989;

loc_000F697A:
    ecx = 0xF6DC0;
    goto loc_000F6989;

loc_000F6981:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    ecx = 0x20CD0;

loc_000F6989:
    if (TEST_Z(MEM8(ebp + 0x20), 8)) goto loc_000F6997; /* je: equal / zero */

loc_000F698F:
    edx = MEM32(ebp + 0x10);
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    goto loc_000F69BC;

loc_000F6997:
    eax = MEM32(ebp + 0x10);
    xmm3.f[0] = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */

loc_000F69BC:
    xmm5.f[0] = MEMF(edi); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(edi + 4); /* movss */
    edx = MEM32(esp + 0x30);
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    xmm5.f[0] = MEMF(eax); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(eax + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x24); /* subss */
    edx = MEM32(esp + 0x30);
    MEM32(ebx) = edx;
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    MEM32(ebx + 4) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 8) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0xC) = eax;
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm3.b, 16); /* movaps */
    MEM32(ebx + 0x3C) = ecx;
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    MEM32(ebx + 0x20) = esi;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    ecx = esp + 0x40;
    MEMF(ebx + 0x28) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x24) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(esp + 0x30);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B18AC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = esp + 0x30;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6AA2:
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM8(ebx + 0x30) = LO8(eax);
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6AAE:
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM8(ebx + 0x31) = LO8(eax);
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6ABA:
    MEM8(ebx + 0x32) = LO8(eax);
    eax = esp + 0x40;
    MEM32(esp + 0x30) = eax;
    esi = MEM32(ebp + 0x14);
    edi = MEM32(esp + 0x30);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B18AC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = esp + 0x30;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6B07:
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM8(ebx + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6B13:
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM8(ebx + 0x35) = LO8(eax);
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000F6B1F:
    SET_LO8(edx, MEM8(ebp + 0x20));
    POP32(esp, edi);
    MEM8(ebx + 0x36) = LO8(eax);
    MEM8(ebx + 0x33) = LO8(edx);
    MEM8(ebx + 0x37) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
