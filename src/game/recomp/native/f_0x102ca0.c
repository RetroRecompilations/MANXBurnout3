#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00102CA0
 * Original: 0x00102CA0 - 0x00102FCC (812 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102CA0(void)
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

loc_00102CA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm2.f[0] = MEMF(esp + 0x28); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00102CD8; /* jbe: below or equal (unsigned <=) */

loc_00102CD3:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    goto loc_00102CE0;

loc_00102CD8:
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm2.f[0])) goto loc_00102CE6; /* jbe: below or equal (unsigned <=) */

loc_00102CDD:
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */

loc_00102CE0:
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */

loc_00102CE6:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x39A25C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00102E17; /* jnp: not parity */

loc_00102D5D:
    xmm5.f[0] = MEMF(esp + 0x38); /* movss */
    /* comiss xmm5.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm5.f[0] <= xmm1.f[0])) goto loc_00102D6D; /* jbe: below or equal (unsigned <=) */

loc_00102D68:
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    goto loc_00102D75;

loc_00102D6D:
    /* comiss xmm3.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm5.f[0])) goto loc_00102D7B; /* jbe: below or equal (unsigned <=) */

loc_00102D72:
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */

loc_00102D75:
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */

loc_00102D7B:
    xmm2.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00102D8B; /* jbe: below or equal (unsigned <=) */

loc_00102D86:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    goto loc_00102D93;

loc_00102D8B:
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm2.f[0])) goto loc_00102D99; /* jbe: below or equal (unsigned <=) */

loc_00102D90:
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */

loc_00102D93:
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */

loc_00102D99:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00102DA9; /* jbe: below or equal (unsigned <=) */

loc_00102DA4:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    goto loc_00102DB1;

loc_00102DA9:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_00102DB7; /* jbe: below or equal (unsigned <=) */

loc_00102DAE:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00102DB1:
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00102DB7:
    xmm4.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm4.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm1.f[0])) goto loc_00102DCA; /* jbe: below or equal (unsigned <=) */

loc_00102DC2:
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_00102DD5;

loc_00102DCA:
    /* comiss xmm3.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm4.f[0])) goto loc_00102DD5; /* jbe: below or equal (unsigned <=) */

loc_00102DCF:
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */

loc_00102DD5:
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    goto loc_00102E76;

loc_00102E17:
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00102E2A; /* jbe: below or equal (unsigned <=) */

loc_00102E22:
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    goto loc_00102E35;

loc_00102E2A:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_00102E35; /* jbe: below or equal (unsigned <=) */

loc_00102E2F:
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */

loc_00102E35:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00102E45; /* jbe: below or equal (unsigned <=) */

loc_00102E40:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    goto loc_00102E4D;

loc_00102E45:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_00102E53; /* jbe: below or equal (unsigned <=) */

loc_00102E4A:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00102E4D:
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_00102E53:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */

loc_00102E76:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1874); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39BF24); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00102EDD:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(ebp + 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1874); /* movss */
    MEM8(ecx) = LO8(eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39BF24); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00102F4F:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    edx = MEM32(ebp + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1874); /* movss */
    MEM8(edx) = LO8(eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39BF24); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00102FC1:
    ecx = MEM32(ebp + 0x10);
    POP32(esp, edi);
    MEM8(ecx) = LO8(eax);
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
