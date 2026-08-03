#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012F8E0
 * Original: 0x0012F8E0 - 0x0012F9A9 (201 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F8E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012F8E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0012F901; /* je: equal / zero */

loc_0012F8EE:
    if (CMP_EQ(eax, 1)) goto loc_0012F901; /* je: equal / zero */

loc_0012F8F3:
    if (CMP_EQ(eax, 4)) goto loc_0012F901; /* je: equal / zero */

loc_0012F8F8:
    if (CMP_NE(eax, 5)) goto loc_0012F9A2; /* jne: not equal / not zero */

loc_0012F901:
    eax = MEM32(eax * 4 + 0x3EBFAC);
    edx = MEM32(ecx + 0x14);
    esi = MEM32(ecx + 0x18);
    eax = eax << 6;
    xmm0.f[0] = MEMF(edx + eax + 0x730); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + eax + 0xA0); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(0x3A7ED8); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(esp + 0xC))) goto loc_0012F9A2; /* ja: above (unsigned >) */

loc_0012F942:
    xmm1.f[0] = MEMF(ecx + 0x150); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    eax = eax & 0xBF800000u;
    eax = eax | 0x3F800000;
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    edx = edx & 0xBF800000u;
    edx = edx | 0x3F800000;
    MEM32(esp + 0xC) = edx;
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012F9A2; /* jnp: not parity */

loc_0012F991:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(ecx + 0x150), xmm0.b, 16); /* movaps */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F9A2:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
