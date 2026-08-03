#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00019A10
 * Original: 0x00019A10 - 0x00019FA6 (1430 bytes, 346 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019A10:
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 8));
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00019A2E; /* je: equal / zero */

loc_00019A26:
    xmm0.f[0] = MEMF(eax + 0xA4); /* movss */

loc_00019A2E:
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 4); /* movss */
    xmm7.f[0] = MEMF(0x384A80); /* movss */
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm7.f[0])) goto loc_00019A61; /* jbe: below or equal (unsigned <=) */

loc_00019A51:
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm1.f[0]; /* movss */

loc_00019A61:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019A74; /* je: equal / zero */

loc_00019A6C:
    xmm2.f[0] = MEMF(eax + 0xA8); /* movss */

loc_00019A74:
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm7.f[0])) goto loc_00019A9F; /* jbe: below or equal (unsigned <=) */

loc_00019A8F:
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm1.f[0]; /* movss */

loc_00019A9F:
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm5.f[0])) goto loc_00019AA9; /* jb: below (unsigned <) */

loc_00019AA4:
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    goto loc_00019AB0;

loc_00019AA9:
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00019AB0:
    /* comiss xmm2.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm5.f[0])) goto loc_00019ABA; /* jb: below (unsigned <) */

loc_00019AB5:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    goto loc_00019AC1;

loc_00019ABA:
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00019AC1:
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm1.f[0])) goto loc_00019ACB; /* jbe: below or equal (unsigned <=) */

loc_00019AC6:
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    goto loc_00019ACE;

loc_00019ACB:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */

loc_00019ACE:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019ADE; /* je: equal / zero */

loc_00019AD9:
    xmm1.f[0] = MEMF(eax + 0x50); /* movss */

loc_00019ADE:
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm3.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm7.f[0])) goto loc_00019B09; /* jbe: below or equal (unsigned <=) */

loc_00019AF9:
    xmm3.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm3.f[0]; /* movss */

loc_00019B09:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019B19; /* je: equal / zero */

loc_00019B14:
    xmm3.f[0] = MEMF(eax + 0x4C); /* movss */

loc_00019B19:
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm4.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm7.f[0])) goto loc_00019B44; /* jbe: below or equal (unsigned <=) */

loc_00019B34:
    xmm4.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm4.f[0]; /* movss */

loc_00019B44:
    xmm4.f[0] = MEMF(0x3B1690); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(0x3B17EC); /* movss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    xmm3.f[0] = MEMF(0x3A55F8); /* movss */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_00019B7A; /* jbe: below or equal (unsigned <=) */

loc_00019B65:
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    goto loc_00019B95;

loc_00019B7A:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_00019B95; /* jbe: below or equal (unsigned <=) */

loc_00019B7F:
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_00019B95:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    xmm6.f[0] = MEMF(0x3B168C); /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00019BAF; /* jbe: below or equal (unsigned <=) */

loc_00019BAA:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    goto loc_00019BB7;

loc_00019BAF:
    /* comiss xmm1.f[0], xmm6.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm6.f[0])) goto loc_00019BB7; /* jbe: below or equal (unsigned <=) */

loc_00019BB4:
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_00019BB7:
    MEMF(edx) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019BCB; /* je: equal / zero */

loc_00019BC6:
    xmm0.f[0] = MEMF(eax + 0x44); /* movss */

loc_00019BCB:
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm7.f[0])) goto loc_00019BF6; /* jbe: below or equal (unsigned <=) */

loc_00019BE6:
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm1.f[0]; /* movss */

loc_00019BF6:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019C06; /* je: equal / zero */

loc_00019C01:
    xmm1.f[0] = MEMF(eax + 0x48); /* movss */

loc_00019C06:
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm6.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm6.f[0] <= xmm7.f[0])) goto loc_00019C31; /* jbe: below or equal (unsigned <=) */

loc_00019C21:
    xmm6.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm6.f[0]; /* movss */

loc_00019C31:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(0x3B17EC); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_00019C57; /* jbe: below or equal (unsigned <=) */

loc_00019C42:
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00019C72;

loc_00019C57:
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00019C72; /* jbe: below or equal (unsigned <=) */

loc_00019C5C:
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_00019C72:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00019C8C; /* ja: above (unsigned >) */

loc_00019C7F:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00019C8F; /* jbe: below or equal (unsigned <=) */

loc_00019C8C:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_00019C8F:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    eax = edx + 8;
    ecx = 1;
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00019900(); /* call 0x00019900 */

loc_00019CAF:
    xmm1.f[0] = MEMF(edx); /* movss */
    PUSH32(esp, ebp);
    eax = edx + 0x14;
    PUSH32(esp, 0); sub_00019900(); /* call 0x00019900 */

loc_00019CBC:
    xmm1.f[0] = MEMF(edx + 4); /* movss */
    PUSH32(esp, ebp);
    eax = edx + 0x20;
    PUSH32(esp, 0); sub_00019900(); /* call 0x00019900 */

loc_00019CCA:
    PUSH32(esp, ebp);
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    eax = edx + 0x2C;
    PUSH32(esp, 0); sub_00019900(); /* call 0x00019900 */

loc_00019CDB:
    esi = 4;

loc_00019CE0:
    ecx = MEM32(edi + 4);
    /* cmp MEM8(ecx + 8), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi * 4 + 0x384168);
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(ecx + 8), LO8(ebx))) goto loc_00019D06; /* je: equal / zero */

loc_00019CF2:
    if (CMP_L(eax, ebx)) goto loc_00019CFB; /* jl: less (signed <) */

loc_00019CF6:
    if (CMP_L(eax, 0x1C)) goto loc_00019D00; /* jl: less (signed <) */

loc_00019CFB:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    goto loc_00019D06;

loc_00019D00:
    xmm0.f[0] = MEMF(ecx + eax * 4 + 0x44); /* movss */

loc_00019D06:
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm7.f[0])) goto loc_00019D31; /* jbe: below or equal (unsigned <=) */

loc_00019D21:
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm1.f[0]; /* movss */

loc_00019D31:
    /* cmp esi, 0x17 - flags set for next jcc */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    if (CMP_L(esi, 0x17)) goto loc_00019D42; /* jl: less (signed <) */

loc_00019D39:
    if (CMP_LE(esi, 0x1A)) goto loc_00019E24; /* jle: less or equal (signed <=) */

loc_00019D42:
    if (CMP_NE(esi, 6)) goto loc_00019DAB; /* jne: not equal / not zero */

loc_00019D47:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019D5A; /* je: equal / zero */

loc_00019D52:
    xmm1.f[0] = MEMF(eax + 0x88); /* movss */

loc_00019D5A:
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm2.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm7.f[0])) goto loc_00019D85; /* jbe: below or equal (unsigned <=) */

loc_00019D75:
    xmm2.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm2.f[0]; /* movss */

loc_00019D85:
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    goto loc_00019E0F;

loc_00019DAB:
    if (CMP_NE(esi, 4)) goto loc_00019E0F; /* jne: not equal / not zero */

loc_00019DB0:
    eax = MEM32(edi + 4);
    /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_00019DC0; /* je: equal / zero */

loc_00019DBB:
    xmm1.f[0] = MEMF(eax + 0x74); /* movss */

loc_00019DC0:
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm7.f[0])) goto loc_00019DEB; /* jbe: below or equal (unsigned <=) */

loc_00019DDB:
    xmm2.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm2.f[0]; /* movss */

loc_00019DEB:
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* maxss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */

loc_00019E0F:
    ecx = 0; /* xor self */
    /* cmp esi, 8 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(esi, 8)) ? 1 : 0); /* sete */
    eax = esi + esi * 2;
    PUSH32(esp, ebp);
    eax = edx + eax * 4 + 8;
    PUSH32(esp, 0); sub_00019900(); /* call 0x00019900 */

loc_00019E24:
    esi++;
    if (CMP_L(esi, 0x1F)) goto loc_00019CE0; /* jl: less (signed <) */

loc_00019E2E:
    /* cmp MEM16(edx + 0x136), LO16(ebx) - flags set for next jcc */
    xmm3.f[0] = MEMF(0x384150); /* movss */
    xmm2.f[0] = MEMF(0x3A7ED8); /* movss */
    xmm1.f[0] = MEMF(0x384148); /* movss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    POP32(esp, esi);
    MEM16(edx + 0x134) = LO16(ebx);
    POP32(esp, ebp);
    if (CMP_EQ(MEM16(edx + 0x136), LO16(ebx))) goto loc_00019E9A; /* je: equal / zero */

loc_00019E5F:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm2.f[0])) goto loc_00019E6B; /* ja: above (unsigned >) */

loc_00019E64:
    MEM16(edx + 0x136) = LO16(ebx);

loc_00019E6B:
    eax = 1;

loc_00019E70:
    MEMF(edx + 0x138) = xmm0.f[0]; /* movss */
    /* cmp MEM16(edx + 0x142), LO16(ebx) - flags set for next jcc */
    xmm0.f[0] = MEMF(edx); /* movss */
    MEM16(edx + 0x140) = LO16(ebx);
    if (CMP_EQ(MEM16(edx + 0x142), LO16(ebx))) goto loc_00019EC5; /* je: equal / zero */

loc_00019E8C:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm2.f[0])) goto loc_00019EE9; /* ja: above (unsigned >) */

loc_00019E91:
    MEM16(edx + 0x142) = LO16(ebx);
    goto loc_00019EE9;

loc_00019E9A:
    /* comiss xmm1.f[0], MEMF(edx + 0x138) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(edx + 0x138))) goto loc_00019E6B; /* jbe: below or equal (unsigned <=) */

loc_00019EA3:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00019E6B; /* jb: below (unsigned <) */

loc_00019EA8:
    eax = 1;
    MEM16(edx + 0x134) = LO16(eax);
    MEM16(edx + 0x136) = LO16(eax);
    MEMF(edx + 0x13C) = xmm3.f[0]; /* movss */
    goto loc_00019E70;

loc_00019EC5:
    /* comiss xmm1.f[0], MEMF(edx + 0x144) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(edx + 0x144))) goto loc_00019EE9; /* jbe: below or equal (unsigned <=) */

loc_00019ECE:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00019EE9; /* jb: below (unsigned <) */

loc_00019ED3:
    MEM16(edx + 0x140) = LO16(eax);
    MEM16(edx + 0x142) = LO16(eax);
    MEMF(edx + 0x148) = xmm3.f[0]; /* movss */

loc_00019EE9:
    MEMF(edx + 0x144) = xmm0.f[0]; /* movss */
    /* cmp MEM16(edx + 0x11E), LO16(ebx) - flags set for next jcc */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    MEM16(edx + 0x11C) = LO16(ebx);
    if (CMP_EQ(MEM16(edx + 0x11E), LO16(ebx))) goto loc_00019F14; /* je: equal / zero */

loc_00019F06:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm2.f[0])) goto loc_00019F38; /* ja: above (unsigned >) */

loc_00019F0B:
    MEM16(edx + 0x11E) = LO16(ebx);
    goto loc_00019F38;

loc_00019F14:
    /* comiss xmm1.f[0], MEMF(edx + 0x120) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(edx + 0x120))) goto loc_00019F38; /* jbe: below or equal (unsigned <=) */

loc_00019F1D:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00019F38; /* jb: below (unsigned <) */

loc_00019F22:
    MEM16(edx + 0x11C) = LO16(eax);
    MEM16(edx + 0x11E) = LO16(eax);
    MEMF(edx + 0x124) = xmm3.f[0]; /* movss */

loc_00019F38:
    MEMF(edx + 0x120) = xmm0.f[0]; /* movss */
    /* cmp MEM16(edx + 0x12A), LO16(ebx) - flags set for next jcc */
    xmm5.f[0] = xmm5.f[0] - MEMF(edx + 4); /* subss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    MEM16(edx + 0x128) = LO16(ebx);
    if (CMP_EQ(MEM16(edx + 0x12A), LO16(ebx))) goto loc_00019F73; /* je: equal / zero */

loc_00019F58:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm2.f[0])) goto loc_00019F97; /* ja: above (unsigned >) */

loc_00019F5D:
    MEM16(edx + 0x12A) = LO16(ebx);
    MEMF(edx + 0x12C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_00019F73:
    /* comiss xmm1.f[0], MEMF(edx + 0x12C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(edx + 0x12C))) goto loc_00019F97; /* jbe: below or equal (unsigned <=) */

loc_00019F7C:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00019F97; /* jb: below (unsigned <) */

loc_00019F81:
    MEM16(edx + 0x128) = LO16(eax);
    MEM16(edx + 0x12A) = LO16(eax);
    MEMF(edx + 0x130) = xmm3.f[0]; /* movss */

loc_00019F97:
    MEMF(edx + 0x12C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
