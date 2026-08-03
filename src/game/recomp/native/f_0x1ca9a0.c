#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA9A0
 * Original: 0x001CA9A0 - 0x001CAD03 (867 bytes, 263 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA9A0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA9A0:
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    xmm1.f[0] = MEMF(ebx + 0x24); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = ZX8(MEM8(ebp + 0x30));
    eax = eax << 3;
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    PUSH32(esp, esi);
    MEM8(esp + 0x3C) = 0;
    if ((xmm1.f[0] < MEMF(0x3B16E0))) goto loc_001CA9E4; /* jb: below (unsigned <) */

loc_001CA9DE:
    eax = MEM32(ebx + 0x24);
    MEM32(ebp + 0x10) = eax;

loc_001CA9E4:
    /* test MEM8(ebp + 0x31), 0x10 - flags set for next jcc */
    xmm1.f[0] = MEMF(ebp + 0x10); /* movss */
    if (TEST_NZ(MEM8(ebp + 0x31), 0x10)) goto loc_001CA9F7; /* jne: not equal / not zero */

loc_001CA9EF:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x4A1EEC); /* mulss */

loc_001CA9F7:
    edx = MEM32(ebp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAA0F:
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    ecx = ebx + 0xC;
    esp = esp + 8;
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CAA47; /* jp: parity */

loc_001CAA2B:
    xmm1.f[0] = MEMF(ebx + 0x10); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CAA47; /* jp: parity */

loc_001CAA39:
    xmm1.f[0] = MEMF(ebx + 0x14); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CAA54; /* jnp: not parity */

loc_001CAA47:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC20(); /* call 0x0020BC20 */

loc_001CAA51:
    esp = esp + 8;

loc_001CAA54:
    eax = MEM32(ebx + 0x40);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001CAAB2; /* je: equal / zero */

loc_001CAA5C:
    ecx = MEM32(ebx + 0x18);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    esi = esi + 0x10;
    ecx = 7;
    edi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = ZX8(MEM8(esp + 0x28));
    MEM32(esp + 0x14) = edx;
    eax = MEM32(esp + 0x24);
    /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    /* FPU: fdivr dword ptr [0x3b16b0] */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001CAA96; /* jge: greater or equal (signed >=) */

loc_001CAA90:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CAA96:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CAA9D:
    ecx = MEM32(ebx + 0x40);
    /* cmp ecx, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_AE(ecx, eax)) goto loc_001CAAB2; /* jae: above or equal (unsigned >=) */

loc_001CAAA5:
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CAAAF:
    esp = esp + 8;

loc_001CAAB2:
    xmm0.f[0] = MEMF(ebx + 0x28); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CAAD4; /* jnp: not parity */

loc_001CAAC4:
    edx = MEM32(ebx + 0x28);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020C290(); /* call 0x0020C290 */

loc_001CAAD1:
    esp = esp + 8;

loc_001CAAD4:
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_001CAB72; /* je: equal / zero */

loc_001CAADF:
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAAEA:
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    ecx = ebx + 0xC;
    esp = esp + 8;
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CAB22; /* jp: parity */

loc_001CAB06:
    xmm1.f[0] = MEMF(ebx + 0x10); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CAB22; /* jp: parity */

loc_001CAB14:
    xmm1.f[0] = MEMF(ebx + 0x14); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CAB2F; /* jnp: not parity */

loc_001CAB22:
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BC20(); /* call 0x0020BC20 */

loc_001CAB2C:
    esp = esp + 8;

loc_001CAB2F:
    esi = MEM32(ebx + 0x40);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_001CAB50; /* je: equal / zero */

loc_001CAB37:
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, 0); sub_001CE000(); /* call 0x001CE000 */

loc_001CAB3F:
    if (CMP_AE(esi, eax)) goto loc_001CAB50; /* jae: above or equal (unsigned >=) */

loc_001CAB43:
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CAB4D:
    esp = esp + 8;

loc_001CAB50:
    xmm0.f[0] = MEMF(ebx + 0x28); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CAB72; /* jnp: not parity */

loc_001CAB62:
    ecx = MEM32(ebx + 0x28);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020C290(); /* call 0x0020C290 */

loc_001CAB6F:
    esp = esp + 8;

loc_001CAB72:
    xmm0.f[0] = MEMF(ebx + 0x2C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CABFF; /* jnp: not parity */

loc_001CAB84:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B1698); /* addss */
    xmm0.f[0] = MEMF(0x3B1818); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(ebx + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B168C); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(ebp + 0x2C));
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CABDF:
    eax = MEM32(ebp + 0x20);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001CABFF; /* je: equal / zero */

loc_001CABE9:
    eax = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(ebp + 0x2D));
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CABFC:
    esp = esp + 0xC;

loc_001CABFF:
    xmm0.f[0] = MEMF(ebx + 0x30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001CAC17; /* jb: below (unsigned <) */

loc_001CAC0C:
    eax = MEM32(ebx + 0x30);
    MEM32(ebp + 0xC) = eax;
    MEM8(esp + 0x3C) = 1;

loc_001CAC17:
    SET_LO8(eax, MEM8(ebp + 0x33));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CAC2B; /* jne: not equal / not zero */

loc_001CAC23:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1EF0); /* mulss */

loc_001CAC2B:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001CAC49; /* ja: above (unsigned >) */

loc_001CAC3C:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CAC4F; /* jbe: below or equal (unsigned <=) */

loc_001CAC49:
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_001CAC4F:
    fp_push(MEMF(esp + 0x38)); /* fld float */
    ecx = MEM32(ebp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAC6B:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAC7F; /* je: equal / zero */

loc_001CAC75:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAC7C:
    esp = esp + 8;

loc_001CAC7F:
    xmm0.f[0] = MEMF(ebx + 0x1C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    SET_LO8(eax, MEM8(esp + 0x3C));
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001CAC9C; /* jb: below (unsigned <) */

loc_001CAC90:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CACFA; /* jne: not equal / not zero */

loc_001CAC94:
    edx = MEM32(ebx + 0x1C);
    MEM32(ebp + 0xC) = edx;
    goto loc_001CACA0;

loc_001CAC9C:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CACFA; /* jne: not equal / not zero */

loc_001CACA0:
    SET_LO8(eax, MEM8(ebp + 0x33));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CACB4; /* jne: not equal / not zero */

loc_001CACAC:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1EF0); /* mulss */

loc_001CACB4:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001CACD2; /* ja: above (unsigned >) */

loc_001CACC5:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CACD8; /* jbe: below or equal (unsigned <=) */

loc_001CACD2:
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_001CACD8:
    esi = MEM32(esp + 0x38);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CACE6:
    ebp = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_001CACFA; /* je: equal / zero */

loc_001CACF0:
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CACF7:
    esp = esp + 8;

loc_001CACFA:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
